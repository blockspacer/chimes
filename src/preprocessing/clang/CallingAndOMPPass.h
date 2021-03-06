#ifndef OMP_PASS_H
#define OMP_PASS_H

#include <string>
#include <vector>

#include "clang/Rewrite/Core/Rewriter.h"
#include "clang/AST/StmtVisitor.h"
#include "clang/Basic/SourceManager.h"

#include "ParentTransform.h"

class Merge {
    public:
        Merge(std::string set_callee_name,
                size_t set_parent_return_alias,
                std::vector<size_t> set_parent_param_aliases) :
            callee_name(set_callee_name),
            parent_return_alias(set_parent_return_alias),
            parent_param_aliases(set_parent_param_aliases) { }

        std::string get_callee_name() { return callee_name; }
        size_t get_parent_return_alias() { return parent_return_alias; }
        int n_param_aliases() { return parent_param_aliases.size(); }
        std::vector<size_t> get_parent_param_aliases() {
            return parent_param_aliases;
        }

    private:
        std::string callee_name;
        size_t parent_return_alias;
        std::vector<size_t> parent_param_aliases;
};

class DeclarationInfo {
    public:
        DeclarationInfo(const clang::DeclStmt *set_decl,
                std::map<clang::VarDecl *, StackAlloc *> set_allocs) :
            decl(set_decl), allocs(set_allocs), hoisted(false) {}

        const clang::DeclStmt *get_decl() { return decl; }
        std::map<clang::VarDecl *, StackAlloc *> get_allocs() { return allocs; }

        void hoist(std::string set_as_string) {
            hoisted = true;
            as_string = set_as_string;
        }
        bool is_hoisted() { return hoisted; }
        std::string get_as_string() { return as_string; }

    private:
        const clang::DeclStmt *decl;
        std::map<clang::VarDecl *, StackAlloc *> allocs;
        bool hoisted;
        std::string as_string;
};

class CallLabel {
    public:
        CallLabel(int set_col, int set_lbl) : col(set_col), lbl(set_lbl) { }
        int get_col() { return col; }
        int get_lbl() { return lbl; }

        bool operator < (const CallLabel& other) const {
            return col < other.col;
        }

    private:
        int col;
        int lbl;
};

class CallLocation {
    public:
        CallLocation(std::string set_funcname, int set_col,
                const clang::CallExpr *set_call) : funcname(set_funcname),
                col(set_col), call(set_call) {}
        int get_col() { return col; }
        const clang::CallExpr *get_call() { return call; }
        std::string get_funcname() { return funcname; }

        bool operator < (const CallLocation& other) const {
            return col < other.col;
        }

    private:
        std::string funcname;
        int col;
        const clang::CallExpr *call;
};

class CallingAndOMPPass : public ParentTransform {
public:
    CallingAndOMPPass(bool set_gen_quick);

    void VisitStmt(const clang::Stmt *s) override;
    void VisitTopLevel(clang::FunctionDecl *toplevel) override;

    bool usesStackInfo() override { return false; }
    bool setsLastGoto() override { return false; }
    bool createsRegisterLabels() override { return true; }
    bool createsFunctionLabels() override { return true; }
    bool createsOMPTree() override { return true; }
    bool requiresMangledVarsReset() { return true; }
    bool transformsOriginal() { return gen_quick; }

private:
    std::map<clang::VarDecl *, StackAlloc *> hasValidDeclarations(
            const clang::DeclStmt *d);
    std::map<OMPRegion *, std::vector<DeclarationInfo> *> vars_in_regions;
    std::vector<DeclarationInfo> vars_to_classify;
    std::vector<const CallExpr *> calls_to_register_callbacks;
    std::string insert_at_front;

    std::string get_chimes_parent_thread_varname();
    std::string get_chimes_parent_ctx_varname();
    bool is_inside_if_cond(const clang::Stmt *stmt);
    bool is_inside_while_cond(const clang::Stmt *stmt);
    std::string get_unique_blocker_varname();
    std::string get_unique_parent_stack_depth_varname();
    std::string get_unique_call_stack_depth_varname();
    std::string get_unique_region_varname();
    std::string get_unique_disable_varname();
    std::string get_loc_arg(const CallExpr *call);

    /*
     * Map from line containing a OMP pragma to its immediate predessor. It is
     * safe to use a line here because no more than one pragma can appear on
     * each line.
     */
    std::map<int, const clang::Stmt *> predecessors;
    std::map<int, const clang::Stmt *> successors;
    std::map<clang::FunctionDecl *, const clang::CallExpr *> new_stack_calls;
    std::map<int, std::vector<CallLocation>> calls_found;

    std::string handleDecl(const clang::DeclStmt *d,
            std::map<clang::VarDecl *, StackAlloc *> allocs,
            std::string *force);
    std::string constructStartingRegistrations(
            std::vector<DeclarationInfo> *vars, unsigned n_hoisted,
            std::string *transition_str_ptr, bool has_callbacks,
            int insert_at_line);
    void VisitRegion(OMPRegion *region, int new_stack_line);
    void verify_supported_clauses(std::string pragma_name,
            std::map<std::string, std::vector<std::string> > *clauses, int line);
    std::string generateNPMCall(CallLocation loc,
            AliasesPassedToCallSite callsite, const CallExpr *call,
            bool use_function_pointer);

    std::set<std::string> get_private_vars(std::map<std::string,
            std::vector<std::string> > *clauses);
    std::string get_region_setup_code(std::set<std::string> private_vars,
            bool is_parallel_for, std::string disable_varname,
            std::string blocker_varname, std::string parent_thread_varname,
            std::string parent_ctx_varname,
            std::string stack_depth_varname, std::string region_id_varname,
            std::string call_depth_varname, OMPRegion *region,
            OpenMPPragma pragma);
    std::string get_region_interior_code(bool is_parallel_for,
            std::string blocker_varname, std::string parent_thread_varname,
            std::string parent_ctx_varname,
            std::string stack_depth_varname, std::string region_id_varname,
            std::set<std::string> private_vars);
    std::string get_region_cleanup_code(bool is_parallel_for,
            std::string disable_varname, std::string call_depth_varname,
            std::string region_id_varname);
    bool has_side_effects(const Expr *arg);
    void collectCallAliasPairings(
            std::string callee, AliasesPassedToCallSite callsite,
            std::vector<std::pair<size_t, size_t> > *new_aliases,
            std::set<std::string> *changed_alias_locs,
            std::set<std::string> *visited);

    clang::SourceLocation adjustInnerOMPLoc(
            clang::SourceLocation loc, int target_line);
    void addInsertsForRegion(OMPRegion *region);

    std::map<std::string, std::map<int, std::vector<StateChangeInsertion *>::iterator> > change_loc_iters;
    std::map<std::string, std::set<std::string> > supported_omp_clauses;
    std::set<std::string> supported_omp_pragmas;
    int chimes_parent_thread_counter = 0;
    int chimes_parent_ctx_counter = 0;
    int blocker_varname_counter = 0;
    int parent_stack_depth_varname_counter = 0;
    int call_stack_depth_varname_counter = 0;
    int region_varname_counter = 0;
    int disable_varname_counter = 0;

    bool gen_quick;

    void addStaticMerge(AliasesPassedToCallSite callsite,
            std::string callee_name);
    void addDynamicMerge(AliasesPassedToCallSite callsite,
            std::string callee_name);
};

#endif
