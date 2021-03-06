#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <assert.h>
#include <dlfcn.h>

#include <set>
#include <string>
#include <map>
#include <vector>

#include "chimes_common.h"

using namespace std;

#ifdef __CHIMES_PROFILE
static unsigned long long count_calling = 0;
static unsigned long long count_calling_npm = 0;
static unsigned long long count_new_stack = 0;
static unsigned long long count_rm_stack = 0;
static unsigned long long count_register_stack_var = 0;
static unsigned long long count_register_stack_vars = 0;
static unsigned long long count_alias_group_changed = 0;
static unsigned long long count_malloc_wrapper = 0;
static unsigned long long count_calloc_wrapper = 0;
static unsigned long long count_realloc_wrapper = 0;
static unsigned long long count_free_wrapper = 0;
static unsigned long long count_disable_current_thread = 0;
static unsigned long long count_reenable_current_thread = 0;
static unsigned long long count_entering_omp_parallel = 0;
static unsigned long long count_register_thread_local_stack_vars = 0;
static unsigned long long count_leaving_omp_parallel = 0;
static unsigned long long count_thread_leaving = 0;
static unsigned long long count_get_parent_vars_stack_depth = 0;
static unsigned long long count_get_thread_stack_depth = 0;
static unsigned long long count_checkpoint = 0;
static unsigned long long count_translate_fptr = 0;
#ifdef __CHIMES_DETAIL_PROFILE
static map<int, size_t> calling_lbls;
static pthread_mutex_t count_mutex = PTHREAD_MUTEX_INITIALIZER;
#endif
#endif

/*
 * This file contains dummy (empty) definitions for all libchimes APIs. This
 * allows us to calculate the overheads incurred by simply the code
 * transformations, and the effect they have on the optimizations the host
 * compiler is able to make.
 */

int ____chimes_replaying = 0;
static map<string, vector<void **> > requested_npm_functions;
static map<string, void *> provided_npm_functions;
static set<int *> all_npm_conditionals;
static map<void *, void *> original_function_to_npm;

#ifdef __CHIMES_PROFILE
void onexit() {
    fprintf(stderr, "calling %llu\n", count_calling);
    fprintf(stderr, "calling_npm %llu\n", count_calling_npm);
    fprintf(stderr, "new_stack %llu\n", count_new_stack);
    fprintf(stderr, "rm_stack %llu\n", count_rm_stack);
    fprintf(stderr, "register_stack_var %llu\n", count_register_stack_var);
    fprintf(stderr, "register_stack_vars %llu\n", count_register_stack_vars);
    fprintf(stderr, "alias_group_changed %llu\n", count_alias_group_changed);
    fprintf(stderr, "malloc_wrapper %llu\n", count_malloc_wrapper);
    fprintf(stderr, "calloc_wrapper %llu\n", count_calloc_wrapper);
    fprintf(stderr, "realloc_wrapper %llu\n", count_realloc_wrapper);
    fprintf(stderr, "free_wrapper %llu\n", count_free_wrapper);
    fprintf(stderr, "disable_current_thread %llu\n", count_disable_current_thread);
    fprintf(stderr, "reenable_current_thread %llu\n", count_reenable_current_thread);
    fprintf(stderr, "entering_omp_parallel %llu\n", count_entering_omp_parallel);
    fprintf(stderr, "register_thread_local_stack_vars %llu\n", count_register_thread_local_stack_vars);
    fprintf(stderr, "leaving_omp_parallel %llu\n", count_leaving_omp_parallel);
    fprintf(stderr, "count_thread_leaving %llu\n", count_thread_leaving);
    fprintf(stderr, "get_parent_vars_stack_depth %llu\n", count_get_parent_vars_stack_depth);
    fprintf(stderr, "get_thread_stack_depth %llu\n", count_get_thread_stack_depth);
    fprintf(stderr, "checkpoint %llu\n", count_checkpoint);
    fprintf(stderr, "translate_fptr %llu\n", count_translate_fptr);
    fprintf(stderr, "\n");
#ifdef __CHIMES_DETAIL_PROFILE
    fprintf(stderr, "Calling stats:\n");
    for (map<int, size_t>::iterator i = calling_lbls.begin(),
            e = calling_lbls.end(); i != e; i++) {
        fprintf(stderr, "  lbl %d - %lu\n", i->first, i->second);
    }
#endif
}
#endif

void init_chimes(int argc, char **argv) {
#ifdef __CHIMES_PROFILE
    atexit(onexit);
#endif
    fprintf(stderr, "\n");
    /*
     * Resolve any NPM function pointers that different compilation units depend
     * on, and updated the compilation-unit-local function pointers for those
     * externally defined NPM function pointers.
     */
    bool all_satisfied = true;
    for (map<string, vector<void **> >::iterator i =
            requested_npm_functions.begin(), e = requested_npm_functions.end();
            i != e && all_satisfied; i++) {
        string fname = i->first;
        for (vector<void **>::iterator ii = i->second.begin(),
                ee = i->second.end(); ii != ee; ii++) {
            void **ptr_to_ptr = *ii;

#ifdef VERBOSE
            fprintf(stderr, "%s satisfied? %d\n", fname.c_str(),
                    provided_npm_functions.find(fname) !=
                    provided_npm_functions.end());
#endif

            if (provided_npm_functions.find(fname) == provided_npm_functions.end()) {
                all_satisfied = false;
                break;
            } else {
                *ptr_to_ptr = provided_npm_functions.at(fname);
            }
        }
    }

    if (all_satisfied) {
        for (set<int *>::iterator i = all_npm_conditionals.begin(),
                e = all_npm_conditionals.end(); i != e; i++) {
            *(*i) = 0;
        }
    }
}

void calling_npm(const char *name, unsigned loc_id) {
#ifdef VERBOSE
    fprintf(stderr, "calling_npm: %s\n", name);
#endif

#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_calling_npm, 1);
#endif
}

void calling(void *func_ptr, int lbl, unsigned loc_id, size_t set_return_alias,
        unsigned naliases, ...) {
#ifdef VERBOSE
    fprintf(stderr, "calling: %u\n", lbl);
#endif

#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_calling, 1);

#ifdef __CHIMES_DETAIL_PROFILE
    assert(pthread_mutex_lock(&count_mutex) == 0);
    map<int, size_t>::iterator found = calling_lbls.find(lbl);
    if (found == calling_lbls.end()) {
        calling_lbls.insert(pair<int, size_t>(lbl, 1));
    } else {
        found->second = found->second + 1;
    }
    assert(pthread_mutex_unlock(&count_mutex) == 0);
#endif
#endif
}

int get_next_call() { return (0); }

int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...) {
#ifdef VERBOSE
    fprintf(stderr, "new_stack: %s\n", funcname);
#endif
    if (conditional) { *conditional = 0; }
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_new_stack, 1);
#endif
    return 1;
}

void *translate_fptr(void *fptr, int lbl, unsigned loc_id, size_t return_alias,
        int n_params, ...) {
#ifdef VERBOSE
    fprintf(stderr, "translate_fptr: %u\n", loc_id);
#endif
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_translate_fptr, 1);
#endif
    map<void *, void *>::iterator exists = original_function_to_npm.find(fptr);
    if (exists != original_function_to_npm.end()) {
        return exists->second;
    } else {
        return fptr;
    }
}

void init_module(size_t module_id, int n_contains_mappings, int nfunctions,
        int nvars, int n_change_locs, int n_provided_npm_functions,
        int n_external_npm_functions, int n_npm_conditionals,
        int n_static_merges, int n_dynamic_merges, int nstructs, ...) {
    va_list vl;
    va_start(vl, nstructs);

    // Generate unique IDs for each change location
    for (int i = 0; i < n_change_locs; i++) {

        va_arg(vl, unsigned *);
        const unsigned n_aliases_at_loc = va_arg(vl, unsigned);
        const unsigned n_aliases_and_children_at_loc = va_arg(vl, unsigned);
        const unsigned n_possible_aliases_at_loc = va_arg(vl, unsigned);

        for (unsigned j = 0; j < n_aliases_at_loc; j++) {
            va_arg(vl, size_t);
        }

        for (unsigned j = 0; j < n_aliases_and_children_at_loc; j++) {
            va_arg(vl, size_t);
        }

        for (unsigned j = 0; j < n_possible_aliases_at_loc; j++) {
            va_arg(vl, const char *);
            unsigned naliases = va_arg(vl, unsigned);
            for (unsigned k = 0; k < naliases; k++) {
                va_arg(vl, size_t);
            }
        }
    }

    void *app_handle = dlopen(NULL, RTLD_LAZY);
    assert(app_handle != NULL);

    // Iterate over the NPM functions defined inside this compilation unit.
    for (int i = 0; i < n_provided_npm_functions; i++) {
        std::string fname(va_arg(vl, char *));
        int is_static = va_arg(vl, int);

        void *fptr, *original_fptr;
        if (is_static) {
#ifdef VERBOSE
            fprintf(stderr, "WARNING: Had to take function addresses for "
                    "function %s\n", fname.c_str());
#endif
            fptr = va_arg(vl, void *);
            original_fptr = va_arg(vl, void *);
        } else {
            std::string mangled_fname(va_arg(vl, char *));
            std::string mangled_npm_fname(va_arg(vl, char *));

            dlerror(); // Clear existing errors
            original_fptr = dlsym(app_handle, mangled_fname.c_str());
            char *ld_err;
            if ((ld_err = dlerror()) != NULL) {
                fprintf(stderr, "Unable to load function address for %s, %s\n",
                        fname.c_str(), mangled_fname.c_str());
                exit(1);
            }

            dlerror(); // Clear existing errors
            fptr = dlsym(app_handle, mangled_npm_fname.c_str());
            if ((ld_err = dlerror()) != NULL) {
                fprintf(stderr, "Unable to load NPM function address for %s, %s\n",
                        fname.c_str(), mangled_npm_fname.c_str());
                exit(1);
            }
        }

        if (original_fptr) {
            assert(original_function_to_npm.find(original_fptr) ==
                    original_function_to_npm.end());
            original_function_to_npm[original_fptr] = fptr;
        }

#ifdef VERBOSE
        fprintf(stderr, "%s provided\n", fname.c_str());
#endif
        VERIFY(provided_npm_functions.insert(pair<string, void *>(fname,
                        fptr)).second);

        // Alias locations that are stored in this function
        const int n_alias_locs = va_arg(vl, int);
        for (int j = 0; j < n_alias_locs; j++) {
            va_arg(vl, unsigned *);
        }

        /*
         * The aliases that this function assigns to its input parameters and
         * its returned value.
         */
        const int n_param_aliases = va_arg(vl, int);
        for (int j = 0; j < n_param_aliases; j++) {
            va_arg(vl, size_t);
        }
        va_arg(vl, size_t);

        /*
         * The set of calls made from the current function, including the name
         * of the function called, the number of arguments passed, the aliases
         * assigned to each of those arguments, and the return alias assigned to
         * any value that is returned.
         */
        const int n_calls_made = va_arg(vl, int);
        for (int j = 0; j < n_calls_made; j++) {
            va_arg(vl, const char *);
            const int n_args = va_arg(vl, int);
            for (int k = 0; k < n_args; k++) {
                va_arg(vl, size_t);
            }
            va_arg(vl, size_t);
        }
    }

    VERIFY(dlclose(app_handle) == 0);

    // Iterate over the NPM functions that this compilation unit depends on
    for (int i = 0; i < n_external_npm_functions; i++) {
        std::string npm_fname(va_arg(vl, const char *));
        void **fptr = va_arg(vl, void **);

        if (requested_npm_functions.find(npm_fname) ==
                requested_npm_functions.end()) {
            requested_npm_functions.insert(pair<string, vector<void **> >(
                        npm_fname, vector<void **>()));
        }

        requested_npm_functions.at(npm_fname).push_back(fptr);
    }

    /*
     * Get the addresses of the global variables which prevent conditional NPM
     * execution.
     */
    for (int i = 0; i < n_npm_conditionals; i++) {
        std::string func_name(va_arg(vl, const char *));
        int *conditional = va_arg(vl, int *);

        all_npm_conditionals.insert(conditional);
    }

    va_end(vl);
}

void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id, int disabled,
        bool is_allocator) {
#ifdef VERBOSE
    fprintf(stderr, "rm_stack: %s\n", funcname);
#endif
    if (conditional) { *conditional = 0; }
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_rm_stack, 1);
#endif
}

void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...) {
    if (cond_registration) { *cond_registration = 0; }
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_register_stack_var, 1);
#endif
}

void register_stack_vars(int nvars, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_register_stack_vars, 1);
#endif
    va_list vl;
    va_start(vl, nvars);
    for (int i = 0; i < nvars; i++) {
        va_arg(vl, const char *);
        int *cond_registration = va_arg(vl, int *);
        va_arg(vl, const char *);
        va_arg(vl, void *);
        va_arg(vl, size_t);
        va_arg(vl, int);
        va_arg(vl, int);
        int n_ptr_fields = va_arg(vl, int);

        if (cond_registration) {
            *cond_registration = 0;
        }

        for (int j = 0; j < n_ptr_fields; j++) {
            va_arg(vl, int);
        }
    }
    va_end(vl);
}

void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, size_t group, int n_ptr_fields,
        ...) { }

void register_constant(size_t const_id, void *address,
        size_t length) { }

int alias_group_changed(unsigned loc_id) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_alias_group_changed, 1);
#endif
    return 0;
}

void malloc_helper(const void *ptr, size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_malloc_wrapper, 1);
#endif
}

void calloc_helper(const void *ptr, size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_calloc_wrapper, 1);
#endif
}

void realloc_helper(const void *new_ptr, const void *ptr, void *header,
        size_t nbytes, size_t group, int is_ptr, int is_struct, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_realloc_wrapper, 1);
#endif
}

void free_helper(const void *ptr, size_t group) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_free_wrapper, 1);
#endif
}

bool disable_current_thread() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_disable_current_thread, 1);
#endif
    return true;
}

void reenable_current_thread(bool was_disabled) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_reenable_current_thread, 1);
#endif
}

unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_entering_omp_parallel, 1);
#endif
    return 0;
}

void register_thread_local_stack_vars(unsigned relation,
        unsigned parent, void *parent_ctx_ptr, unsigned threads_in_region,
        unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_register_thread_local_stack_vars, 1);
#endif
}

void thread_leaving() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_thread_leaving, 1);
#endif
}

void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id, int is_parallel_for) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_leaving_omp_parallel, 1);
#endif
}

unsigned get_parent_vars_stack_depth() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_get_parent_vars_stack_depth, 1);
#endif
    return 0;
}

unsigned get_thread_stack_depth() {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_get_thread_stack_depth, 1);
#endif
    return 0;
}

void chimes_error() { }

#ifdef __NVCC__
cudaError_t cudaMalloc_wrapper(void **ptr, size_t size, size_t group,
        int is_ptr, int is_struct, ...) { }

cudaError_t cudaFree_wrapper(void *ptr, size_t group) { }
#endif

void checkpoint_transformed(int lbl, unsigned loc_id) {
#ifdef __CHIMES_PROFILE
    __sync_fetch_and_add(&count_checkpoint, 1);
#endif
}

void checkpoint() {
    assert(false);
}

void wait_for_checkpoint() { }

void *get_thread_ctx() { return NULL; }
