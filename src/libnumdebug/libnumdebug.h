#ifndef LIBNUMDEBUG_H
#define LIBNUMDEBUG_H

#include <stddef.h>

extern void init_numdebug();
extern void calling(int lbl, size_t set_return_alias, unsigned naliases, ...);
extern int get_next_call();
extern int peek_next_call();
extern void new_stack(unsigned n_local_arg_aliases, ...);
extern void init_module(size_t module_id, int n_contains_mappings, int nstructs,
        ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias);
extern void register_stack_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern int alias_group_changed(int ngroups, ...);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group);
extern void free_wrapper(void *ptr, size_t group);

#ifdef __NVCC__
#include <driver_types.h>
cudaError_t cudaMalloc_wrapper(void **ptr, size_t size, size_t group,
        int is_ptr, int is_struct, ...);
cudaError_t cudaFree_wrapper(void *ptr, size_t group);
#endif

extern int ____numdebug_replaying;

#endif
