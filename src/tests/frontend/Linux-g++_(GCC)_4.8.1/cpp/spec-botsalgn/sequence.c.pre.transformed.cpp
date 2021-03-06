# 1 "sequence.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "sequence.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_fill_chartab_npm = 1;
static int ____chimes_does_checkpoint_strlcpy_npm = 1;
static int ____chimes_does_checkpoint_get_seq_npm = 1;
static int ____chimes_does_checkpoint_readseqs_npm = 1;
static int ____chimes_does_checkpoint_alloc_aln_npm = 1;
static int ____chimes_does_checkpoint_encode_npm = 1;
static int ____chimes_does_checkpoint_tolower_npm = 1;

static int ____must_checkpoint_fill_chartab_chartab_0 = 2;
static int ____must_checkpoint_fill_chartab_i_0 = 2;
static int ____must_checkpoint_fill_chartab_c_0 = 2;
static int ____must_checkpoint_readseqs_l1_0 = 2;
static int ____must_checkpoint_readseqs_no_seqs_0 = 2;
static int ____must_checkpoint_readseqs_fin_0 = 2;
static int ____must_checkpoint_readseqs_chartab_0 = 2;

static int ____must_manage_fill_chartab = 2;
static int ____must_manage_strlcpy = 2;
static int ____must_manage_get_seq = 2;
static int ____must_manage_readseqs = 2;
static int ____must_manage_alloc_aln = 2;
static int ____must_manage_encode = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/jmg3/chimes/src/libchimes/libchimes.h" 2


extern void init_chimes(int argc, char **argv);
extern void checkpoint_transformed(int lbl, unsigned loc_id);

extern void *translate_fptr(void *fptr, int lbl, unsigned loc_id,
        size_t return_alias, int n_params, ...);
extern void calling_npm(const char *name, unsigned loc_id);
extern void calling(void *func_ptr, int lbl, unsigned loc_id,
        size_t set_return_alias, unsigned naliases, ...);
extern int get_next_call();
extern int new_stack(void *func_ptr, const char *funcname, int *conditional,
        unsigned n_local_arg_aliases, unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings, int nfunctions,
        int nvars, int n_change_locs, int n_provided_npm_functions,
        int n_external_npm_functions, int n_npm_conditionals,
        int n_static_merges, int n_dynamic_merges, int nstructs, ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias,
        const char *funcname, int *conditional, unsigned loc_id, int disabled,
        bool is_allocator);
extern void register_stack_var(const char *mangled_name, int *cond_registration,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_stack_vars(int nvars, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, size_t group, int n_ptr_fields,
        ...);
extern void register_constant(size_t const_id, void *address,
        size_t length);
extern int alias_group_changed(unsigned loc_id);
extern void malloc_helper(const void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void calloc_helper(const void *ptr, size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void realloc_helper(const void *new_ptr, const void *old_ptr,
        void *header, size_t nbytes, size_t group, int is_ptr, int is_struct,
        ...);
extern void free_helper(const void *ptr, size_t group);
extern bool disable_current_thread();
extern void reenable_current_thread(bool was_disabled);
extern void thread_leaving();
extern void *get_thread_ctx();

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned relation,
        unsigned parent, void *parent_ctx_ptr, unsigned threads_in_region,
        unsigned parent_stack_depth,
        size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(unsigned expected_parent_stack_depth,
        size_t region_id, int is_parallel_for);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 76 "/home/jmg3/chimes/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 23 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 361 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 365 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 366 "/usr/include/sys/cdefs.h" 2 3 4
# 362 "/usr/include/features.h" 2 3 4
# 385 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4



# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 5 "/usr/include/gnu/stubs.h" 2 3 4




# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 2 3 4
# 386 "/usr/include/features.h" 2 3 4
# 26 "/usr/include/stdlib.h" 2 3 4







# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 34 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 65 "/usr/include/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 38 "/usr/include/endian.h" 2 3 4
# 61 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {







 unsigned int:16;
 unsigned int __w_retcode:8;
 unsigned int __w_coredump:1;
 unsigned int __w_termsig:7;

      } __wait_terminated;
    struct
      {






 unsigned int:16;
 unsigned int __w_stopsig:8;
 unsigned int __w_stopval:8;

      } __wait_stopped;
  };
# 44 "/usr/include/stdlib.h" 2 3 4
# 96 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 140 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (__const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (__const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern float strtof (__const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1))) ;

extern long double strtold (__const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern long int strtol (__const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

extern unsigned long int strtoul (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;




__extension__
extern long long int strtoq (__const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtouq (__const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;





__extension__
extern long long int strtoll (__const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;

__extension__
extern unsigned long long int strtoull (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 236 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 28 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 237 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (__const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern unsigned long int strtoul_l (__const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern long long int strtoll_l (__const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

__extension__
extern unsigned long long int strtoull_l (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4))) ;

extern double strtod_l (__const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern float strtof_l (__const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;

extern long double strtold_l (__const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3))) ;





extern __inline __attribute__ ((__gnu_inline__)) double
atof (__const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
extern __inline __attribute__ ((__gnu_inline__)) int
atoi (__const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
atol (__const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
atoll (__const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 311 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 28 "/usr/include/sys/types.h" 3 4
extern "C" {

# 1 "/usr/include/bits/types.h" 1 3 4
# 28 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 131 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 132 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef long int __swblk_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;

typedef long int __ssize_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 31 "/usr/include/sys/types.h" 2 3 4



typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 148 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 195 "/usr/include/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 220 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 32 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/sigset.h" 1 3 4
# 24 "/usr/include/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 35 "/usr/include/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    long int tv_nsec;
  };
# 45 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 47 "/usr/include/sys/select.h" 2 3 4
# 55 "/usr/include/sys/select.h" 3 4
typedef long int __fd_mask;
# 67 "/usr/include/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 99 "/usr/include/sys/select.h" 3 4
extern "C" {
# 109 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 121 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);


}
# 221 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/sysmacros.h" 1 3 4
# 30 "/usr/include/sys/sysmacros.h" 3 4
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw ();
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw ();


__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned int
gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) unsigned long long int
gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}
# 224 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 263 "/usr/include/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 25 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 51 "/usr/include/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


typedef union
{
  char __size[56];
  long int __align;
} pthread_attr_t;



typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 77 "/usr/include/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 102 "/usr/include/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;
  } __data;
# 188 "/usr/include/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 272 "/usr/include/sys/types.h" 2 3 4


}
# 321 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));
# 471 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 485 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 25 "/usr/include/alloca.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 26 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 498 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));






extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 536 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));







extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;




extern char *__secure_getenv (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (__const char *__name, __const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 620 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 630 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 642 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 652 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 663 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 674 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 684 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 706 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 717 "/usr/include/stdlib.h" 3 4
extern int system (__const char *__command) ;






extern char *canonicalize_file_name (__const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 734 "/usr/include/stdlib.h" 3 4
extern char *realpath (__const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (__const void *, __const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (__const void *, __const void *, void *);





extern void *bsearch (__const void *__key, __const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;
# 808 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (__const char *__s, size_t __n) throw () ;


extern int mbtowc (wchar_t *__restrict __pwc,
     __const char *__restrict __s, size_t __n) throw () ;


extern int wctomb (char *__s, wchar_t __wchar) throw () ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   __const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   __const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 885 "/usr/include/stdlib.h" 3 4
extern int rpmatch (__const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 896 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *__const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (__const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 964 "/usr/include/stdlib.h" 3 4
}
# 24 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4
# 45 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 65 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 75 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 32 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 83 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4

typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 53 "/usr/include/_G_config.h" 3 4
typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));
# 33 "/usr/include/libio.h" 2 3 4
# 53 "/usr/include/libio.h" 3 4
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stdarg.h" 1 3 4
# 40 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 54 "/usr/include/libio.h" 2 3 4
# 170 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 180 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 203 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 271 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 319 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 328 "/usr/include/libio.h" 3 4
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 364 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, __const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 460 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 490 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 552 "/usr/include/libio.h" 3 4
}
# 76 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 109 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 161 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 162 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;
# 177 "/usr/include/stdio.h" 3 4
extern int remove (__const char *__filename) throw ();

extern int rename (__const char *__old, __const char *__new) throw ();




extern int renameat (int __oldfd, __const char *__old, int __newfd,
       __const char *__new) throw ();
# 194 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 204 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 226 "/usr/include/stdio.h" 3 4
extern char *tempnam (__const char *__dir, __const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 236 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 251 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 261 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 271 "/usr/include/stdio.h" 3 4
extern FILE *fopen (__const char *__restrict __filename,
      __const char *__restrict __modes) ;




extern FILE *freopen (__const char *__restrict __filename,
        __const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 294 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (__const char *__restrict __filename,
        __const char *__restrict __modes) ;
extern FILE *freopen64 (__const char *__restrict __filename,
   __const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, __const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     __const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, __const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 355 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      __const char *__restrict __format, ...);




extern int printf (__const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      __const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (__const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, __const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, __const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       __const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
# 416 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, __const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, __const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 429 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     __const char *__restrict __format, ...) ;




extern int scanf (__const char *__restrict __format, ...) ;

extern int sscanf (__const char *__restrict __s,
     __const char *__restrict __format, ...) throw ();
# 467 "/usr/include/stdio.h" 3 4
# 475 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, __const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (__const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (__const char *__restrict __s,
      __const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 526 "/usr/include/stdio.h" 3 4
# 535 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 554 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 565 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 577 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 598 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 626 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;






extern char *gets (char *__s) ;
# 644 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 660 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 684 "/usr/include/stdio.h" 3 4
extern int fputs (__const char *__restrict __s, FILE *__restrict __stream);





extern int puts (__const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (__const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s) ;
# 721 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (__const char *__restrict __s,
      FILE *__restrict __stream);
# 732 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (__const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream) ;
# 744 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 768 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 787 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, __const fpos_t *__pos);
# 810 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, __const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 841 "/usr/include/stdio.h" 3 4
extern void perror (__const char *__s);






# 1 "/usr/include/bits/sys_errlist.h" 1 3 4
# 27 "/usr/include/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern __const char *__const sys_errlist[];


extern int _sys_nerr;
extern __const char *__const _sys_errlist[];
# 849 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 868 "/usr/include/stdio.h" 3 4
extern FILE *popen (__const char *__command, __const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      __const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       __const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 929 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio.h" 1 3 4
# 36 "/usr/include/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (__const char *__restrict __fmt, __gnuc_va_list __arg)
{
  return vfprintf (stdout, __fmt, __arg);
}



extern __inline __attribute__ ((__gnu_inline__)) int
getchar (void)
{
  return _IO_getc (stdin);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fgetc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}





extern __inline __attribute__ ((__gnu_inline__)) int
getc_unlocked (FILE *__fp)
{
  return (__builtin_expect (((__fp)->_IO_read_ptr >= (__fp)->_IO_read_end), 0) ? __uflow (__fp) : *(unsigned char *) (__fp)->_IO_read_ptr++);
}


extern __inline __attribute__ ((__gnu_inline__)) int
getchar_unlocked (void)
{
  return (__builtin_expect (((stdin)->_IO_read_ptr >= (stdin)->_IO_read_end), 0) ? __uflow (stdin) : *(unsigned char *) (stdin)->_IO_read_ptr++);
}




extern __inline __attribute__ ((__gnu_inline__)) int
putchar (int __c)
{
  return _IO_putc (__c, stdout);
}




extern __inline __attribute__ ((__gnu_inline__)) int
fputc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) int
putc_unlocked (int __c, FILE *__stream)
{
  return (__builtin_expect (((__stream)->_IO_write_ptr >= (__stream)->_IO_write_end), 0) ? __overflow (__stream, (unsigned char) (__c)) : (unsigned char) (*(__stream)->_IO_write_ptr++ = (__c)));
}


extern __inline __attribute__ ((__gnu_inline__)) int
putchar_unlocked (int __c)
{
  return (__builtin_expect (((stdout)->_IO_write_ptr >= (stdout)->_IO_write_end), 0) ? __overflow (stdout, (unsigned char) (__c)) : (unsigned char) (*(stdout)->_IO_write_ptr++ = (__c)));
}





extern __inline __attribute__ ((__gnu_inline__)) __ssize_t
getline (char **__lineptr, size_t *__n, FILE *__stream)
{
  return __getdelim (__lineptr, __n, '\n', __stream);
}





extern __inline __attribute__ ((__gnu_inline__)) int
feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 930 "/usr/include/stdio.h" 2 3 4
# 938 "/usr/include/stdio.h" 3 4
}
# 25 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 35 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4
extern void *memcpy (void *__restrict __dest,
       __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, __const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, __const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const void *memchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const void *
memchr (__const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 104 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *rawmemchr (__const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const void *memrchr (__const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 128 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, __const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));
# 165 "/usr/include/string.h" 3 4
extern int strcoll_l (__const char *__s1, __const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, __const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (__const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (__const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strchr (__const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strchr (__const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *strrchr (__const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strrchr (__const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 271 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *strchrnul (__const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 284 "/usr/include/string.h" 3 4
extern size_t strcspn (__const char *__s, __const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (__const char *__s, __const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strpbrk (__const char *__s, __const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strpbrk (char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strpbrk (__const char *__s, __const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern __const char *strstr (__const char *__haystack,
        __const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
strstr (char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
strstr (__const char *__haystack, __const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    __const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, __const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" __const char *strcasestr (__const char *__haystack,
           __const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 382 "/usr/include/string.h" 3 4
extern void *memmem (__const void *__haystack, size_t __haystacklen,
       __const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        __const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (__const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (__const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 438 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (__const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (__const void *__s1, __const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *index (__const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
index (__const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern __const char *rindex (__const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__, __artificial__)) __const char *
rindex (__const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));

__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));




extern int strcasecmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (__const char *__s1, __const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (__const char *__s1, __const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (__const char *__s1, __const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       __const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, __const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        __const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (__const char *__s1, __const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" __const char *basename (__const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 646 "/usr/include/string.h" 3 4
}
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c" 2
# 1 "/usr/include/ctype.h" 1 3 4
# 30 "/usr/include/ctype.h" 3 4
extern "C" {
# 48 "/usr/include/ctype.h" 3 4
enum
{
  _ISupper = (1 << (0)),
  _ISlower = (1 << (1)),
  _ISalpha = (1 << (2)),
  _ISdigit = (1 << (3)),
  _ISxdigit = (1 << (4)),
  _ISspace = (1 << (5)),
  _ISprint = (1 << (6)),
  _ISgraph = (1 << (7)),
  _ISblank = (1 << (8)),
  _IScntrl = (1 << (9)),
  _ISpunct = (1 << (10)),
  _ISalnum = (1 << (11))
};
# 81 "/usr/include/ctype.h" 3 4
extern __const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const));
extern __const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const));
# 96 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();
# 128 "/usr/include/ctype.h" 3 4
extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 247 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 323 "/usr/include/ctype.h" 3 4
}
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c" 2
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/alignment.h" 1
# 28 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c" 2
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/common/bots.h" 1
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/common/bots.h"
extern int bots_sequential_flag;
extern int bots_benchmark_flag;
extern int bots_check_flag;
extern int bots_result;
extern int bots_output_format;
extern int bots_print_header;

extern char bots_name[];
extern char bots_parameters[];
extern char bots_model[];
extern char bots_resources[];

extern char bots_exec_date[];
extern char bots_exec_message[];
extern char bots_comp_date[];
extern char bots_comp_message[];
extern char bots_cc[];
extern char bots_cflags[];
extern char bots_ld[];
extern char bots_ldflags[];

extern double bots_time_program;
extern double bots_time_sequential;
extern int bots_number_of_tasks;

extern char bots_cutoff[];
extern int bots_cutoff_value;

extern int bots_app_cutoff_value;
extern int bots_app_cutoff_value_1;
extern int bots_app_cutoff_value_2;

extern int bots_arg_size;
extern int bots_arg_size_1;
extern int bots_arg_size_2;


long bots_usecs();
void bots_error(int error, char *message);
void bots_warning(int warning, char *message);







typedef enum { BOTS_VERBOSE_NONE=0,
               BOTS_VERBOSE_DEFAULT,
               BOTS_VERBOSE_DEBUG } bots_verbose_mode_t;

extern bots_verbose_mode_t bots_verbose_mode;
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c" 2
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 30 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
extern int *seqlen_array;
# 31 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
extern int nseqs, gap_pos2;
# 32 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 33 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
extern char **args, **names, **seq_array, *amino_acid_codes;
# 34 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 35 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 36 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 37 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 38 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
size_t strlcpy_npm(char *dst, const char *src, size_t siz);
size_t strlcpy_quick(char *dst, const char *src, size_t siz); size_t strlcpy(char *dst, const char *src, size_t siz);
size_t strlcpy_resumable(char *dst, const char *src, size_t siz)
# 39 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&strlcpy), "strlcpy", &____must_manage_strlcpy, 3, 0, (size_t)(17796869374098773260UL), (size_t)(17796869374098773261UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 40 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    char *d; d = (dst) ;
# 41 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    const char *s; s = (src) ;
# 42 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    size_t n; n = (siz) ;
# 43 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 44 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 45 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if (n != 0) {
# 46 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      while (--n != 0) {
# 47 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if ((*d++ = *s++) == '\0') {break; };
# 49 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }
# 50 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 51 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 53 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if (n == 0) {
# 54 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (siz != 0) {*d = '\0'; };
# 56 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      while (*s++)
# 57 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         ;
# 58 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 59 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 60 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    size_t ____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((s - src - 1)); rm_stack(false, 0UL, "strlcpy", &____must_manage_strlcpy, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 61 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "strlcpy", &____must_manage_strlcpy, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 62 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 63 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 64 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 65 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 66 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void fill_chartab_npm(char *chartab);static int (*____chimes_extern_func_tolower)(int) = tolower;
void fill_chartab_quick(char *chartab); void fill_chartab(char *chartab);
void fill_chartab_resumable(char *chartab)
# 67 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&fill_chartab), "fill_chartab", &____must_manage_fill_chartab, 1, 1, (size_t)(17796869374098773318UL), "fill_chartab|chartab|0", &____must_checkpoint_fill_chartab_chartab_0, "i8*", (void *)(&chartab), (size_t)8, 1, 0, 0) ; char c;
# 67 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int i;
# 67 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
 if (____must_checkpoint_fill_chartab_c_0 || ____must_checkpoint_fill_chartab_i_0) { register_stack_vars(2, "fill_chartab|c|0", &____must_checkpoint_fill_chartab_c_0, "i8", (void *)(&c), (size_t)1, 0, 0, 0, "fill_chartab|i|0", &____must_checkpoint_fill_chartab_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 68 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    ;
# 69 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 70 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < 128; i++) { chartab[i] = 0; };
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 72 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < 25; i++) {
# 73 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = (amino_acid_codes[i]) ;
# 74 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       call_lbl_0: chartab[(int)c] = chartab[ ({ calling((void*)tolower, 0, ____alias_loc_id_0, 0UL, 1, (size_t)(0UL)); (tolower)(c); }) ] = c;
# 75 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 76 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "fill_chartab", &____must_manage_fill_chartab, ____alias_loc_id_3, ____chimes_did_disable1, false); }
# 77 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 78 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 79 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 80 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 81 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void encode_npm(char *seq, char *naseq, int l);
void encode_quick(char *seq, char *naseq, int l); void encode(char *seq, char *naseq, int l);
void encode_resumable(char *seq, char *naseq, int l)
# 82 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&encode), "encode", &____must_manage_encode, 3, 0, (size_t)(17796869374098773416UL), (size_t)(17796869374098773417UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 83 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; int j; ;
# 84 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char c; char *t; ;
# 85 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 86 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= l; i++) { if (seq[i] == '-') {
# 88 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         naseq[i] = gap_pos2;
# 89 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      } else {
# 90 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         j = 0;
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = seq[i];
# 92 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         t = amino_acid_codes;
# 93 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         naseq[i] = -1;
# 94 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         while (t[j]) {if (t[j] == c) {naseq[i] = j; break;} j++;}
# 95 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }; }
# 96 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   naseq[l + 1] = -3;
# 98 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "encode", &____must_manage_encode, ____alias_loc_id_4, ____chimes_did_disable2, false); }
# 99 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void alloc_aln_npm(int nseqs);
void alloc_aln_quick(int nseqs); void alloc_aln(int nseqs);
void alloc_aln_resumable(int nseqs)
# 105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&alloc_aln), "alloc_aln", &____must_manage_alloc_aln, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; ;
# 107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 108 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   names = (char **) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(char *), 17796869374098773729UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 109 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq_array = (char **) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(char *), 17796869374098773729UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 110 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seqlen_array = (int *) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(int), 17796869374098773739UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 111 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 112 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < nseqs + 1; i++) {
# 113 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      names[i] = (char * ) ({ void *____chimes_tmp_ptr = malloc(((30 + 1) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (30 + 1) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seq_array[i] = __null;
# 115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "alloc_aln", &____must_manage_alloc_aln, ____alias_loc_id_5, ____chimes_did_disable3, false); }
# 117 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
char * get_seq_npm(char *sname, int *len, char *chartab, FILE *fin);
char * get_seq_quick(char *sname, int *len, char *chartab, FILE *fin); char * get_seq(char *sname, int *len, char *chartab, FILE *fin);
char * get_seq_resumable(char *sname, int *len, char *chartab, FILE *fin)
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&get_seq), "get_seq", &____must_manage_get_seq, 4, 0, (size_t)(17796869374098773655UL), (size_t)(17796869374098773656UL), (size_t)(17796869374098773657UL), (size_t)(17796869374098773658UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; int j; ;
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char c; char *seq; ;
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   static char line[513]; ;
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   *len = 0;
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq = __null;
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   while (*line != '>' && fgets(line, 512 +1, fin) != __null );
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= strlen(line); i++) { if (line[i] != ' ') {break; }; };
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (j = i; j <= strlen(line); j++) { if (line[j] == ' ') {break; }; };
# 133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    call_lbl_0: ({ calling_npm("strlcpy", 0); strlcpy_npm(sname, line + i, j - i + 1); });;
# 135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   sname[j - i] = '\0';
# 136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   while (fgets(line, 512 +1, fin) != __null) {
# 138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (seq == __null) {seq = (char *) ({ void *____chimes_tmp_ptr = malloc(((512 + 2) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (512 + 2) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ; } else {seq = (char *) ({ void *____chimes_tmp_header; ____chimes_tmp_header = (seq) ; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((seq ? (((unsigned char *)seq) - sizeof(void *)) : (unsigned char *)(seq)), (((*len) + 512 + 2) * sizeof(char)) + sizeof(void *)); ; realloc_helper(____chimes_tmp_ptr, (seq ? (((unsigned char *)seq) - sizeof(void *)) : (unsigned char *)(seq)), ____chimes_tmp_header, ((*len) + 512 + 2) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ; } ;
# 142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      for (i = 0; i <= 512; i++) {
# 143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = line[i];
# 144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if (c == '\n' || c == '\0' || c == '>') {break; };
# 145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if (c == chartab[(int)c]) {*len += 1; seq[*len] = c;}
# 146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }
# 147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (c == '>') {break; };
# 148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq[*len + 1] = '\0';
# 151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    char *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (seq); rm_stack(true, 17796869374098773731UL, "get_seq", &____must_manage_get_seq, ____alias_loc_id_6, ____chimes_did_disable4, false); return ____chimes_ret_var_1; ;
# 152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(true, 17796869374098773731UL, "get_seq", &____must_manage_get_seq, ____alias_loc_id_6, ____chimes_did_disable4, false); }
# 153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int readseqs_npm(int first_seq, char *filename);
int readseqs_quick(int first_seq, char *filename); int readseqs(int first_seq, char *filename);
int readseqs_resumable(int first_seq, char *filename)
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&readseqs), "readseqs", &____must_manage_readseqs, 2, 0, (size_t)(0UL), (size_t)(17796869374098773773UL)) ; char chartab[128];
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
FILE *fin;
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int no_seqs;
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int l1;
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
 if (____must_checkpoint_readseqs_chartab_0 || ____must_checkpoint_readseqs_fin_0 || ____must_checkpoint_readseqs_no_seqs_0 || ____must_checkpoint_readseqs_l1_0) { register_stack_vars(4, "readseqs|chartab|0", &____must_checkpoint_readseqs_chartab_0, "[128 x i8]", (void *)(chartab), (size_t)128, 0, 0, 0, "readseqs|fin|0", &____must_checkpoint_readseqs_fin_0, "%struct._IO_FILE*", (void *)(&fin), (size_t)8, 1, 0, 0, "readseqs|no_seqs|0", &____must_checkpoint_readseqs_no_seqs_0, "i32", (void *)(&no_seqs), (size_t)4, 0, 0, 0, "readseqs|l1|0", &____must_checkpoint_readseqs_l1_0, "i32", (void *)(&l1), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; ;
# 157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    ;
# 158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char *seq1; ;
# 159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if ((fin = fopen(filename, "r")) == __null) {
# 161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Could not open sequence file (%s)\n" , filename); } };
# 162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      exit (-1);
# 163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if ( fscanf(fin,"Number of sequences is %d", &no_seqs) == (-1) ) {
# 166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Sequence file is bogus (%s)\n" , filename); } };
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      exit(-1);
# 168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   };
# 169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    call_lbl_0: ({ calling((void*)fill_chartab, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(17796869374098773672UL)); (fill_chartab)(chartab); }) ;
# 171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Sequence format is Pearson\n"); } };
# 172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    call_lbl_1: ({ calling_npm("alloc_aln", 0); alloc_aln_npm(no_seqs); });
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= no_seqs; i++) {
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       call_lbl_2: seq1 = ({ calling_npm("get_seq", 0); get_seq_npm(names[i], &l1, chartab, fin); });
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seqlen_array[i] = l1;
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seq_array[i] = (char *) ({ void *____chimes_tmp_ptr = malloc(((l1 + 2) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (l1 + 2) * sizeof (char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       call_lbl_3: ({ calling_npm("encode", 0); encode_npm(seq1, seq_array[i], l1); });
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       ({ free_helper((((unsigned char *)seq1) - sizeof(void *)), 17796869374098773734UL);free((((unsigned char *)seq1) - sizeof(void *))); }) ;
# 184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (no_seqs); rm_stack(false, 0UL, "readseqs", &____must_manage_readseqs, ____alias_loc_id_7, ____chimes_did_disable5, false); return ____chimes_ret_var_2; ;
# 187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "readseqs", &____must_manage_readseqs, ____alias_loc_id_7, ____chimes_did_disable5, false); }
# 38 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
size_t strlcpy_quick(char *dst, const char *src, size_t siz)
# 39 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&strlcpy), "strlcpy", &____must_manage_strlcpy, 3, 0, (size_t)(17796869374098773260UL), (size_t)(17796869374098773261UL), (size_t)(0UL)) ; ; ;
# 40 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    char *d; d = (dst) ;
# 41 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    const char *s; s = (src) ;
# 42 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    size_t n; n = (siz) ;
# 43 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 44 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 45 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if (n != 0) {
# 46 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      while (--n != 0) {
# 47 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if ((*d++ = *s++) == '\0') {break; };
# 49 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }
# 50 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 51 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 53 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if (n == 0) {
# 54 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (siz != 0) {*d = '\0'; };
# 56 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      while (*s++)
# 57 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         ;
# 58 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 59 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 60 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    size_t ____chimes_ret_var_0; ; ____chimes_ret_var_0 = ((s - src - 1)); rm_stack(false, 0UL, "strlcpy", &____must_manage_strlcpy, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 61 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "strlcpy", &____must_manage_strlcpy, ____alias_loc_id_2, ____chimes_did_disable0, false); }

size_t strlcpy(char *dst, const char *src, size_t siz) { return (____chimes_replaying ? strlcpy_resumable(dst, src, siz) : strlcpy_quick(dst, src, siz)); }
# 66 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void fill_chartab_quick(char *chartab)
# 67 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&fill_chartab), "fill_chartab", &____must_manage_fill_chartab, 1, 1, (size_t)(17796869374098773318UL), "fill_chartab|chartab|0", &____must_checkpoint_fill_chartab_chartab_0, "i8*", (void *)(&chartab), (size_t)8, 1, 0, 0) ; char c;
# 67 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int i;
# 67 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
 if (____must_checkpoint_fill_chartab_c_0 || ____must_checkpoint_fill_chartab_i_0) { register_stack_vars(2, "fill_chartab|c|0", &____must_checkpoint_fill_chartab_c_0, "i8", (void *)(&c), (size_t)1, 0, 0, 0, "fill_chartab|i|0", &____must_checkpoint_fill_chartab_i_0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); } ; ;
# 68 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    ;
# 69 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 70 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < 128; i++) { chartab[i] = 0; };
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 72 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < 25; i++) {
# 73 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = (amino_acid_codes[i]) ;
# 74 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       call_lbl_0: chartab[(int)c] = chartab[ ({ calling((void*)tolower, 0, ____alias_loc_id_0, 0UL, 1, (size_t)(0UL)); (tolower)(c); }) ] = c;
# 75 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 76 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "fill_chartab", &____must_manage_fill_chartab, ____alias_loc_id_3, ____chimes_did_disable1, false); }

void fill_chartab(char *chartab) { (____chimes_replaying ? fill_chartab_resumable(chartab) : fill_chartab_quick(chartab)); }
# 81 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void encode_quick(char *seq, char *naseq, int l)
# 82 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&encode), "encode", &____must_manage_encode, 3, 0, (size_t)(17796869374098773416UL), (size_t)(17796869374098773417UL), (size_t)(0UL)) ; ; ;
# 83 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; int j; ;
# 84 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char c; char *t; ;
# 85 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 86 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= l; i++) { if (seq[i] == '-') {
# 88 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         naseq[i] = gap_pos2;
# 89 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      } else {
# 90 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         j = 0;
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = seq[i];
# 92 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         t = amino_acid_codes;
# 93 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         naseq[i] = -1;
# 94 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         while (t[j]) {if (t[j] == c) {naseq[i] = j; break;} j++;}
# 95 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }; }
# 96 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   naseq[l + 1] = -3;
# 98 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "encode", &____must_manage_encode, ____alias_loc_id_4, ____chimes_did_disable2, false); }

void encode(char *seq, char *naseq, int l) { (____chimes_replaying ? encode_resumable(seq, naseq, l) : encode_quick(seq, naseq, l)); }
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void alloc_aln_quick(int nseqs)
# 105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&alloc_aln), "alloc_aln", &____must_manage_alloc_aln, 1, 0, (size_t)(0UL)) ; ; ;
# 106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; ;
# 107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 108 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   names = (char **) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(char *), 17796869374098773729UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 109 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq_array = (char **) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(char *), 17796869374098773729UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 110 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seqlen_array = (int *) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(int), 17796869374098773739UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 111 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 112 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < nseqs + 1; i++) {
# 113 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      names[i] = (char * ) ({ void *____chimes_tmp_ptr = malloc(((30 + 1) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (30 + 1) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seq_array[i] = __null;
# 115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "alloc_aln", &____must_manage_alloc_aln, ____alias_loc_id_5, ____chimes_did_disable3, false); }

void alloc_aln(int nseqs) { (____chimes_replaying ? alloc_aln_resumable(nseqs) : alloc_aln_quick(nseqs)); }
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
char * get_seq_quick(char *sname, int *len, char *chartab, FILE *fin)
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&get_seq), "get_seq", &____must_manage_get_seq, 4, 0, (size_t)(17796869374098773655UL), (size_t)(17796869374098773656UL), (size_t)(17796869374098773657UL), (size_t)(17796869374098773658UL)) ; ; ;
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; int j; ;
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char c; char *seq; ;
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   static char line[513]; ;
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   *len = 0;
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq = __null;
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   while (*line != '>' && fgets(line, 512 +1, fin) != __null );
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= strlen(line); i++) { if (line[i] != ' ') {break; }; };
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (j = i; j <= strlen(line); j++) { if (line[j] == ' ') {break; }; };
# 133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    call_lbl_0: ({ calling_npm("strlcpy", 0); strlcpy_npm(sname, line + i, j - i + 1); });;
# 135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   sname[j - i] = '\0';
# 136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   while (fgets(line, 512 +1, fin) != __null) {
# 138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (seq == __null) {seq = (char *) ({ void *____chimes_tmp_ptr = malloc(((512 + 2) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (512 + 2) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ; } else {seq = (char *) ({ void *____chimes_tmp_header; ____chimes_tmp_header = (seq) ; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((seq ? (((unsigned char *)seq) - sizeof(void *)) : (unsigned char *)(seq)), (((*len) + 512 + 2) * sizeof(char)) + sizeof(void *)); ; realloc_helper(____chimes_tmp_ptr, (seq ? (((unsigned char *)seq) - sizeof(void *)) : (unsigned char *)(seq)), ____chimes_tmp_header, ((*len) + 512 + 2) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ; } ;
# 142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      for (i = 0; i <= 512; i++) {
# 143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = line[i];
# 144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if (c == '\n' || c == '\0' || c == '>') {break; };
# 145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if (c == chartab[(int)c]) {*len += 1; seq[*len] = c;}
# 146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }
# 147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (c == '>') {break; };
# 148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq[*len + 1] = '\0';
# 151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    char *____chimes_ret_var_1; ; ____chimes_ret_var_1 = (seq); rm_stack(true, 17796869374098773731UL, "get_seq", &____must_manage_get_seq, ____alias_loc_id_6, ____chimes_did_disable4, false); return ____chimes_ret_var_1; ;
# 152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(true, 17796869374098773731UL, "get_seq", &____must_manage_get_seq, ____alias_loc_id_6, ____chimes_did_disable4, false); }

char * get_seq(char *sname, int *len, char *chartab, FILE *fin) { return (____chimes_replaying ? get_seq_resumable(sname, len, chartab, fin) : get_seq_quick(sname, len, chartab, fin)); }
# 154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int readseqs_quick(int first_seq, char *filename)
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&readseqs), "readseqs", &____must_manage_readseqs, 2, 0, (size_t)(0UL), (size_t)(17796869374098773773UL)) ; char chartab[128];
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
FILE *fin;
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int no_seqs;
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int l1;
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
 if (____must_checkpoint_readseqs_chartab_0 || ____must_checkpoint_readseqs_fin_0 || ____must_checkpoint_readseqs_no_seqs_0 || ____must_checkpoint_readseqs_l1_0) { register_stack_vars(4, "readseqs|chartab|0", &____must_checkpoint_readseqs_chartab_0, "[128 x i8]", (void *)(chartab), (size_t)128, 0, 0, 0, "readseqs|fin|0", &____must_checkpoint_readseqs_fin_0, "%struct._IO_FILE*", (void *)(&fin), (size_t)8, 1, 0, 0, "readseqs|no_seqs|0", &____must_checkpoint_readseqs_no_seqs_0, "i32", (void *)(&no_seqs), (size_t)4, 0, 0, 0, "readseqs|l1|0", &____must_checkpoint_readseqs_l1_0, "i32", (void *)(&l1), (size_t)4, 0, 0, 0); } ; ;
# 156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i; ;
# 157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    ;
# 158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char *seq1; ;
# 159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if ((fin = fopen(filename, "r")) == __null) {
# 161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Could not open sequence file (%s)\n" , filename); } };
# 162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      exit (-1);
# 163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if ( fscanf(fin,"Number of sequences is %d", &no_seqs) == (-1) ) {
# 166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Sequence file is bogus (%s)\n" , filename); } };
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      exit(-1);
# 168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   };
# 169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    call_lbl_0: ({ calling((void*)fill_chartab, 0, ____alias_loc_id_1, 0UL, 1, (size_t)(17796869374098773672UL)); fill_chartab_quick(chartab); }) ;
# 171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Sequence format is Pearson\n"); } };
# 172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    call_lbl_1: ({ calling_npm("alloc_aln", 0); alloc_aln_npm(no_seqs); });
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= no_seqs; i++) {
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       call_lbl_2: seq1 = ({ calling_npm("get_seq", 0); get_seq_npm(names[i], &l1, chartab, fin); });
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seqlen_array[i] = l1;
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seq_array[i] = (char *) ({ void *____chimes_tmp_ptr = malloc(((l1 + 2) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (l1 + 2) * sizeof (char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       call_lbl_3: ({ calling_npm("encode", 0); encode_npm(seq1, seq_array[i], l1); });
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       ({ free_helper((((unsigned char *)seq1) - sizeof(void *)), 17796869374098773734UL);free((((unsigned char *)seq1) - sizeof(void *))); }) ;
# 184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    int ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (no_seqs); rm_stack(false, 0UL, "readseqs", &____must_manage_readseqs, ____alias_loc_id_7, ____chimes_did_disable5, false); return ____chimes_ret_var_2; ;
# 187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
rm_stack(false, 0UL, "readseqs", &____must_manage_readseqs, ____alias_loc_id_7, ____chimes_did_disable5, false); }

int readseqs(int first_seq, char *filename) { return (____chimes_replaying ? readseqs_resumable(first_seq, filename) : readseqs_quick(first_seq, filename)); }
# 38 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
size_t strlcpy_npm(char *dst, const char *src, size_t siz)
# 39 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{
# 40 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char *d = dst;
# 41 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   const char *s = src;
# 42 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   size_t n = siz;
# 43 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 44 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 45 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if (n != 0) {
# 46 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      while (--n != 0) {
# 47 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if ((*d++ = *s++) == '\0') {break; };
# 49 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }
# 50 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 51 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 53 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if (n == 0) {
# 54 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (siz != 0) {*d = '\0'; };
# 56 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      while (*s++)
# 57 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         ;
# 58 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 59 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 60 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    size_t ____chimes_ret_var_0; ____chimes_ret_var_0 = ((s - src - 1)); return ____chimes_ret_var_0; ;
# 61 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
}
# 66 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void fill_chartab_npm(char *chartab)
# 67 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{
# 68 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i;
# 69 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 70 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < 128; i++) { chartab[i] = 0; };
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 72 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < 25; i++) {
# 73 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      char c = amino_acid_codes[i];
# 74 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      chartab[(int)c] = chartab[(*____chimes_extern_func_tolower)(c)] = c;
# 75 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 76 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
}
# 81 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void encode_npm(char *seq, char *naseq, int l)
# 82 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{
# 83 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i, j;
# 84 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char c, *t;
# 85 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 86 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= l; i++) { if (seq[i] == '-') {
# 88 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         naseq[i] = gap_pos2;
# 89 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      } else {
# 90 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         j = 0;
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = seq[i];
# 92 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         t = amino_acid_codes;
# 93 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         naseq[i] = -1;
# 94 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         while (t[j]) {if (t[j] == c) {naseq[i] = j; break;} j++;}
# 95 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }; }
# 96 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   naseq[l + 1] = -3;
# 98 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
}
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
void alloc_aln_npm(int nseqs)
# 105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{
# 106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i;
# 107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 108 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   names = (char **) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(char *), 17796869374098773729UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 109 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq_array = (char **) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(char *), 17796869374098773729UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 110 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seqlen_array = (int *) ({ void *____chimes_tmp_ptr = malloc(((nseqs + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (nseqs + 1) * sizeof(int), 17796869374098773739UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 111 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 112 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 0; i < nseqs + 1; i++) {
# 113 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      names[i] = (char * ) ({ void *____chimes_tmp_ptr = malloc(((30 + 1) * sizeof(char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (30 + 1) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seq_array[i] = __null;
# 115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
}
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
char * get_seq_npm(char *sname, int *len, char *chartab, FILE *fin)
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i, j;
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char c, *seq;
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   static char line[512 +1];
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   *len = 0;
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq = __null;
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   while (*line != '>' && fgets(line, 512 +1, fin) != __null );
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= strlen(line); i++) { if (line[i] != ' ') {break; }; };
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (j = i; j <= strlen(line); j++) { if (line[j] == ' ') {break; }; };
# 133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   strlcpy_npm(sname, line + i, j - i + 1);;
# 135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   sname[j - i] = '\0';
# 136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   while (fgets(line, 512 +1, fin) != __null) {
# 138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (seq == __null) {seq = (char *) ({ void *____chimes_tmp_ptr = malloc(((512 + 2) * sizeof(char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (512 + 2) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ; } else {seq = (char *) ({ void *____chimes_tmp_header = seq; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((seq ? (((unsigned char *)seq) - sizeof(void *)) : (unsigned char *)(seq)), (((*len) + 512 + 2) * sizeof(char)) + sizeof(void *)); realloc_helper(____chimes_tmp_ptr, (seq ? (((unsigned char *)seq) - sizeof(void *)) : (unsigned char *)(seq)), ____chimes_tmp_header, ((*len) + 512 + 2) * sizeof(char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ; } ;
# 142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      for (i = 0; i <= 512; i++) {
# 143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         c = line[i];
# 144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if (c == '\n' || c == '\0' || c == '>') {break; };
# 145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
         if (c == chartab[(int)c]) {*len += 1; seq[*len] = c;}
# 146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      }
# 147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      if (c == '>') {break; };
# 148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   seq[*len + 1] = '\0';
# 151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    char * ____chimes_ret_var_1; ____chimes_ret_var_1 = (seq); return ____chimes_ret_var_1; ;
# 152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
}
# 154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
int readseqs_npm(int first_seq, char *filename)
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
{
# 156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   int i, l1, no_seqs;
# 157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   FILE *fin;
# 158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   char *seq1, chartab[128];
# 159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if ((fin = fopen(filename, "r")) == __null) {
# 161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Could not open sequence file (%s)\n" , filename); } };
# 162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      exit (-1);
# 163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   if ( fscanf(fin,"Number of sequences is %d", &no_seqs) == (-1) ) {
# 166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Sequence file is bogus (%s)\n" , filename); } };
# 167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      exit(-1);
# 168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   };
# 169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   fill_chartab_npm(chartab);
# 171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   { if ( bots_verbose_mode >= BOTS_VERBOSE_DEFAULT ) { fprintf(stdout, "Sequence format is Pearson\n"); } };
# 172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 173 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   alloc_aln_npm(no_seqs);
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   for (i = 1; i <= no_seqs; i++) {
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seq1 = get_seq_npm(names[i], &l1, chartab, fin);
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seqlen_array[i] = l1;
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      seq_array[i] = (char *) ({ void *____chimes_tmp_ptr = malloc(((l1 + 2) * sizeof(char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (l1 + 2) * sizeof (char), 17796869374098773731UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
      encode_npm(seq1, seq_array[i], l1);
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
       ({ free_helper((((unsigned char *)seq1) - sizeof(void *)), 17796869374098773734UL);free((((unsigned char *)seq1) - sizeof(void *))); }) ;
# 184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
   }
# 185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
# 186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
    int ____chimes_ret_var_2; ____chimes_ret_var_2 = (no_seqs); return ____chimes_ret_var_2; ;
# 187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/358.botsalgn/src/omp-tasks/alignment/alignment_for/sequence.c"
}





static int module_init() {
    init_module(17796869374098773186UL, 22, 6, 7, 8, 6, 1, 7, 4, 0, 3,
                           &____alias_loc_id_0, (unsigned)4, (unsigned)0, (unsigned)0, (17796869374098773186UL + 79UL), (17796869374098773186UL + 80UL), (17796869374098773186UL + 81UL), (17796869374098773186UL + 132UL),
                           &____alias_loc_id_1, (unsigned)4, (unsigned)0, (unsigned)0, (17796869374098773186UL + 479UL), (17796869374098773186UL + 480UL), (17796869374098773186UL + 484UL), (17796869374098773186UL + 499UL),
                           &____alias_loc_id_2, (unsigned)8, (unsigned)0, (unsigned)0, (17796869374098773186UL + 1UL), (17796869374098773186UL + 2UL), (17796869374098773186UL + 3UL), (17796869374098773186UL + 4UL), (17796869374098773186UL + 5UL), (17796869374098773186UL + 6UL), (17796869374098773186UL + 7UL), (17796869374098773186UL + 74UL),
                           &____alias_loc_id_3, (unsigned)3, (unsigned)0, (unsigned)0, (17796869374098773186UL + 79UL), (17796869374098773186UL + 80UL), (17796869374098773186UL + 132UL),
                           &____alias_loc_id_4, (unsigned)8, (unsigned)0, (unsigned)0, (17796869374098773186UL + 134UL), (17796869374098773186UL + 135UL), (17796869374098773186UL + 136UL), (17796869374098773186UL + 137UL), (17796869374098773186UL + 138UL), (17796869374098773186UL + 139UL), (17796869374098773186UL + 140UL), (17796869374098773186UL + 231UL),
                           &____alias_loc_id_5, (unsigned)5, (unsigned)0, (unsigned)0, (17796869374098773186UL + 233UL), (17796869374098773186UL + 234UL), (17796869374098773186UL + 543UL), (17796869374098773186UL + 598UL), (17796869374098773186UL + 600UL),
                           &____alias_loc_id_6, (unsigned)13, (unsigned)0, (unsigned)0, (17796869374098773186UL + 285UL), (17796869374098773186UL + 286UL), (17796869374098773186UL + 287UL), (17796869374098773186UL + 288UL), (17796869374098773186UL + 289UL), (17796869374098773186UL + 290UL), (17796869374098773186UL + 291UL), (17796869374098773186UL + 292UL), (17796869374098773186UL + 293UL), (17796869374098773186UL + 469UL), (17796869374098773186UL + 470UL), (17796869374098773186UL + 545UL), (17796869374098773186UL + 601UL),
                           &____alias_loc_id_7, (unsigned)5, (unsigned)0, (unsigned)0, (17796869374098773186UL + 481UL), (17796869374098773186UL + 485UL), (17796869374098773186UL + 487UL), (17796869374098773186UL + 543UL), (17796869374098773186UL + 553UL),
                            "fill_chartab", 0, "_Z12fill_chartabPc", "_Z16fill_chartab_npmPc", 1, &____alias_loc_id_0, 1, (17796869374098773186UL + 132UL), 0UL, 1, "tolower", 1, 0UL, 0UL,
                            "strlcpy", 0, "_Z7strlcpyPcPKcm", "_Z11strlcpy_npmPcPKcm", 0, 3, (17796869374098773186UL + 74UL), (17796869374098773186UL + 75UL), 0UL, 0UL, 0,
                            "get_seq", 0, "_Z7get_seqPcPiS_P8_IO_FILE", "_Z11get_seq_npmPcPiS_P8_IO_FILE", 0, 4, (17796869374098773186UL + 469UL), (17796869374098773186UL + 470UL), (17796869374098773186UL + 471UL), (17796869374098773186UL + 472UL), (17796869374098773186UL + 545UL), 7, "fgets", 3, (17796869374098773186UL + 601UL), 0UL, (17796869374098773186UL + 472UL), (17796869374098773186UL + 315UL), "strlen", 1, (17796869374098773186UL + 601UL), 0UL, "strlen", 1, (17796869374098773186UL + 601UL), 0UL, "strlcpy", 3, (17796869374098773186UL + 469UL), (17796869374098773186UL + 601UL), 0UL, 0UL, "fgets", 3, (17796869374098773186UL + 601UL), 0UL, (17796869374098773186UL + 472UL), (17796869374098773186UL + 381UL), "malloc", 1, 0UL, (17796869374098773186UL + 545UL), "realloc", 2, (17796869374098773186UL + 545UL), 0UL, (17796869374098773186UL + 545UL),
                            "readseqs", 0, "_Z8readseqsiPc", "_Z12readseqs_npmiPc", 1, &____alias_loc_id_1, 2, 0UL, (17796869374098773186UL + 587UL), 0UL, 13, "fopen", 2, (17796869374098773186UL + 587UL), (17796869374098773186UL + 602UL), (17796869374098773186UL + 499UL), "fprintf", 3, (17796869374098773186UL + 530UL), (17796869374098773186UL + 605UL), (17796869374098773186UL + 587UL), 0UL, "exit", 1, 0UL, 0UL, "fscanf", 3, (17796869374098773186UL + 499UL), (17796869374098773186UL + 606UL), (17796869374098773186UL + 483UL), 0UL, "fprintf", 3, (17796869374098773186UL + 530UL), (17796869374098773186UL + 607UL), (17796869374098773186UL + 587UL), 0UL, "exit", 1, 0UL, 0UL, "fill_chartab", 1, (17796869374098773186UL + 486UL), 0UL, "fprintf", 2, (17796869374098773186UL + 530UL), (17796869374098773186UL + 608UL), 0UL, "alloc_aln", 1, 0UL, 0UL, "get_seq", 4, (17796869374098773186UL + 545UL), (17796869374098773186UL + 482UL), (17796869374098773186UL + 486UL), (17796869374098773186UL + 499UL), (17796869374098773186UL + 548UL), "malloc", 1, 0UL, (17796869374098773186UL + 545UL), "encode", 3, (17796869374098773186UL + 548UL), (17796869374098773186UL + 545UL), 0UL, 0UL, "free", 1, (17796869374098773186UL + 548UL), 0UL,
                            "alloc_aln", 0, "_Z9alloc_alni", "_Z13alloc_aln_npmi", 0, 1, 0UL, 0UL, 4, "malloc", 1, 0UL, (17796869374098773186UL + 543UL), "malloc", 1, 0UL, (17796869374098773186UL + 543UL), "malloc", 1, 0UL, (17796869374098773186UL + 553UL), "malloc", 1, 0UL, (17796869374098773186UL + 545UL),
                            "encode", 0, "_Z6encodePcS_i", "_Z10encode_npmPcS_i", 0, 3, (17796869374098773186UL + 230UL), (17796869374098773186UL + 231UL), 0UL, 0UL, 0,
                               "tolower", (void **)&(____chimes_extern_func_tolower),
                           "fill_chartab", &(____chimes_does_checkpoint_fill_chartab_npm),
                           "strlcpy", &(____chimes_does_checkpoint_strlcpy_npm),
                           "get_seq", &(____chimes_does_checkpoint_get_seq_npm),
                           "readseqs", &(____chimes_does_checkpoint_readseqs_npm),
                           "alloc_aln", &(____chimes_does_checkpoint_alloc_aln_npm),
                           "encode", &(____chimes_does_checkpoint_encode_npm),
                           "tolower", &(____chimes_does_checkpoint_tolower_npm),
                             (17796869374098773186UL + 604UL), (17796869374098773186UL + 530UL),
                             (17796869374098773186UL + 600UL), (17796869374098773186UL + 553UL),
                             (17796869374098773186UL + 596UL), (17796869374098773186UL + 108UL),
                             (17796869374098773186UL + 598UL), (17796869374098773186UL + 543UL),
                             (17796869374098773186UL + 135UL), (17796869374098773186UL + 231UL),
                             (17796869374098773186UL + 134UL), (17796869374098773186UL + 230UL),
                             (17796869374098773186UL + 288UL), (17796869374098773186UL + 472UL),
                             (17796869374098773186UL + 1UL), (17796869374098773186UL + 74UL),
                             (17796869374098773186UL + 543UL), (17796869374098773186UL + 545UL),
                             (17796869374098773186UL + 2UL), (17796869374098773186UL + 75UL),
                             (17796869374098773186UL + 5UL), (17796869374098773186UL + 75UL),
                             (17796869374098773186UL + 4UL), (17796869374098773186UL + 74UL),
                             (17796869374098773186UL + 285UL), (17796869374098773186UL + 469UL),
                             (17796869374098773186UL + 287UL), (17796869374098773186UL + 471UL),
                             (17796869374098773186UL + 286UL), (17796869374098773186UL + 470UL),
                             (17796869374098773186UL + 140UL), (17796869374098773186UL + 108UL),
                             (17796869374098773186UL + 485UL), (17796869374098773186UL + 548UL),
                             (17796869374098773186UL + 484UL), (17796869374098773186UL + 499UL),
                             (17796869374098773186UL + 79UL), (17796869374098773186UL + 132UL),
                             (17796869374098773186UL + 480UL), (17796869374098773186UL + 587UL),
                             (17796869374098773186UL + 292UL), (17796869374098773186UL + 545UL),
                             (17796869374098773186UL + 293UL), (17796869374098773186UL + 545UL),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "bots_verbose_mode_t", 32UL, 0,
                             "fill_chartab", "_Z12fill_chartabPc", 0, 1, "tolower",
                             "strlcpy", "_Z7strlcpyPcPKcm", 0, 0,
                             "get_seq", "_Z7get_seqPcPiS_P8_IO_FILE", 0, 1, "strlcpy",
                             "readseqs", "_Z8readseqsiPc", 0, 4, "fill_chartab", "alloc_aln", "get_seq", "encode",
                             "alloc_aln", "_Z9alloc_alni", 0, 0,
                             "encode", "_Z6encodePcS_i", 0, 0,
                        "fill_chartab|chartab|0", 1, "tolower",
                        "fill_chartab|i|0", 1, "tolower",
                        "fill_chartab|c|0", 1, "tolower",
                        "readseqs|l1|0", 1, "readseqs",
                        "readseqs|no_seqs|0", 1, "fill_chartab",
                        "readseqs|fin|0", 1, "fill_chartab",
                        "readseqs|chartab|0", 1, "readseqs",
        "strlcpy", 0UL, (int)3, 17796869374098773655UL, 17796869374098773787UL, 0UL,
        "alloc_aln", 0UL, (int)1, 0UL,
        "get_seq", 17796869374098773734UL, (int)4, 17796869374098773731UL, 17796869374098773668UL, 17796869374098773672UL, 17796869374098773685UL,
        "encode", 0UL, (int)3, 17796869374098773734UL, 17796869374098773731UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
