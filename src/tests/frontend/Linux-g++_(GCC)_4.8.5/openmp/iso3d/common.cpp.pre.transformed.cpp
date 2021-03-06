# 1 "common.cpp.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "common.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_config_sources_npm = 1;
static int ____chimes_does_checkpoint_init_progress_npm = 1;
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_finish_progress_npm = 1;
static int ____chimes_does_checkpoint_update_progress_npm = 1;
static int ____chimes_does_checkpoint_ricker_wavelet_npm = 1;
static int ____chimes_does_checkpoint_parse_source_npm = 1;
static int ____chimes_does_checkpoint_sample_sources_npm = 1;


static int ____must_manage_config_sources = 2;
static int ____must_manage_init_progress = 2;
static int ____must_manage_seconds = 2;
static int ____must_manage_finish_progress = 2;
static int ____must_manage_update_progress = 2;
static int ____must_manage_ricker_wavelet = 2;
static int ____must_manage_parse_source = 2;
static int ____must_manage_sample_sources = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
# 1 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/scratch/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/scratch/jmg3/chimes/src/libchimes/libchimes.h" 2


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
# 69 "/scratch/jmg3/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 33 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 1 "/usr/include/sys/time.h" 1 3 4
# 23 "/usr/include/sys/time.h" 3 4
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
# 24 "/usr/include/sys/time.h" 2 3 4

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
# 26 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/time.h" 1 3 4
# 74 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 28 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/bits/time.h" 1 3 4
# 75 "/usr/include/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 30 "/usr/include/sys/time.h" 2 3 4

# 1 "/usr/include/sys/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 23 "/usr/include/bits/select.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/select.h" 2 3 4
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
# 47 "/usr/include/sys/select.h" 2 3 4


typedef __suseconds_t suseconds_t;





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
# 32 "/usr/include/sys/time.h" 2 3 4







extern "C" {
# 57 "/usr/include/sys/time.h" 3 4
struct timezone
  {
    int tz_minuteswest;
    int tz_dsttime;
  };

typedef struct timezone *__restrict __timezone_ptr_t;
# 73 "/usr/include/sys/time.h" 3 4
extern int gettimeofday (struct timeval *__restrict __tv,
    __timezone_ptr_t __tz) throw () __attribute__ ((__nonnull__ (1)));




extern int settimeofday (__const struct timeval *__tv,
    __const struct timezone *__tz)
     throw () __attribute__ ((__nonnull__ (1)));





extern int adjtime (__const struct timeval *__delta,
      struct timeval *__olddelta) throw ();




enum __itimer_which
  {

    ITIMER_REAL = 0,


    ITIMER_VIRTUAL = 1,



    ITIMER_PROF = 2

  };



struct itimerval
  {

    struct timeval it_interval;

    struct timeval it_value;
  };






typedef int __itimer_which_t;




extern int getitimer (__itimer_which_t __which,
        struct itimerval *__value) throw ();




extern int setitimer (__itimer_which_t __which,
        __const struct itimerval *__restrict __new,
        struct itimerval *__restrict __old) throw ();




extern int utimes (__const char *__file, __const struct timeval __tvp[2])
     throw () __attribute__ ((__nonnull__ (1)));



extern int lutimes (__const char *__file, __const struct timeval __tvp[2])
     throw () __attribute__ ((__nonnull__ (1)));


extern int futimes (int __fd, __const struct timeval __tvp[2]) throw ();






extern int futimesat (int __fd, __const char *__file,
        __const struct timeval __tvp[2]) throw ();
# 191 "/usr/include/sys/time.h" 3 4
}
# 34 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp" 2
# 1 "/scratch/jmg3/chimes/src/examples/cpp/include/common.h" 1
# 26 "/scratch/jmg3/chimes/src/examples/cpp/include/common.h"
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 163 "/usr/include/string.h" 2 3 4


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
# 27 "/scratch/jmg3/chimes/src/examples/cpp/include/common.h" 2
# 1 "/usr/include/stdio.h" 1 3 4
# 30 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdarg.h" 1 3 4
# 40 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdarg.h" 3 4
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
# 91 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







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
# 28 "/scratch/jmg3/chimes/src/examples/cpp/include/common.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 28 "/usr/include/bits/byteswap.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/bits/byteswap.h" 2 3 4
# 62 "/usr/include/endian.h" 2 3 4
# 66 "/usr/include/bits/waitstatus.h" 2 3 4

union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






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
# 240 "/usr/include/stdlib.h" 3 4
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
# 99 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 116 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 133 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 58 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 92 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 104 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 134 "/usr/include/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;
# 147 "/usr/include/sys/types.h" 3 4
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 223 "/usr/include/sys/types.h" 3 4
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
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4
# 50 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 76 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 101 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 187 "/usr/include/bits/pthreadtypes.h" 3 4
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
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
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
# 29 "/scratch/jmg3/chimes/src/examples/cpp/include/common.h" 2
# 1 "/scratch/jmg3/chimes/src/examples/cpp/include/common_cuda.h" 1




extern "C" {


extern int getNumCUDADevices();


}
# 30 "/scratch/jmg3/chimes/src/examples/cpp/include/common.h" 2

typedef struct _source {
    int x, y;
    float freq;
    int t;
} source;

extern double seconds();
extern void ricker_wavelet(float *source, int nsteps, float dt, float freq);
extern void parse_source(char *optarg, source *out);
extern void config_sources(source **srcs, int *nsrcs, int dimx, int dimy,
        int nsteps);
extern float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt);

extern void init_progress(int length, int goal, int disabled);
extern void update_progress(int progress);
extern void finish_progress();
# 35 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp" 2
# 1 "/usr/include/math.h" 1 3 4
# 30 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/bits/huge_val.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/bits/huge_valf.h" 1 3 4
# 37 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/bits/huge_vall.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/inf.h" 1 3 4
# 41 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/bits/nan.h" 1 3 4
# 44 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/bits/mathdef.h" 1 3 4
# 26 "/usr/include/bits/mathdef.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 27 "/usr/include/bits/mathdef.h" 2 3 4




typedef float float_t;
typedef double double_t;
# 48 "/usr/include/math.h" 2 3 4
# 71 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                           ;





extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw ();




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));





extern int isinf (double __value) throw () __attribute__ ((__const__));


extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (__const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));



extern int isnan (double __value) throw () __attribute__ ((__const__));


extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw (); extern double __fmax (double __x, double __y) throw ();


extern double fmin (double __x, double __y) throw (); extern double __fmin (double __x, double __y) throw ();



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 72 "/usr/include/math.h" 2 3 4
# 94 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ()
                                                           ;





extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw ();




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));





extern int isinff (float __value) throw () __attribute__ ((__const__));


extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (__const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));



extern int isnanf (float __value) throw () __attribute__ ((__const__));


extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw (); extern float __fmaxf (float __x, float __y) throw ();


extern float fminf (float __x, float __y) throw (); extern float __fminf (float __x, float __y) throw ();



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 95 "/usr/include/math.h" 2 3 4
# 141 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathcalls.h" 1 3 4
# 53 "/usr/include/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                           ;





extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw ();




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
# 154 "/usr/include/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
# 179 "/usr/include/bits/mathcalls.h" 3 4
extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));





extern int isinfl (long double __value) throw () __attribute__ ((__const__));


extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (__const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (__const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));



extern int isnanl (long double __value) throw () __attribute__ ((__const__));


extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw (); extern long double __fmaxl (long double __x, long double __y) throw ();


extern long double fminl (long double __x, long double __y) throw (); extern long double __fminl (long double __x, long double __y) throw ();



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
# 364 "/usr/include/bits/mathcalls.h" 3 4
extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 142 "/usr/include/math.h" 2 3 4
# 157 "/usr/include/math.h" 3 4
extern int signgam;
# 198 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN,

    FP_INFINITE,

    FP_ZERO,

    FP_SUBNORMAL,

    FP_NORMAL

  };
# 291 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 314 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 416 "/usr/include/math.h" 3 4
# 1 "/usr/include/bits/mathinline.h" 1 3 4
# 25 "/usr/include/bits/mathinline.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 26 "/usr/include/bits/mathinline.h" 2 3 4
# 37 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitf (float __x) throw ()
{




  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return __m & 0x8;

}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbit (double __x) throw ()
{




  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return __m & 0x80;

}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitl (long double __x) throw ()
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4
}
# 36 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (__const char *__assertion, __const char *__file,
      unsigned int __line, __const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, __const char *__file,
      unsigned int __line,
      __const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 37 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp" 2
# 37 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 38 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
static char *progress_buffer = __null;
# 39 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
static int progress_length = -1;
# 40 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
static int progress_goal = -1;
# 41 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
static int progress_num_ticks = -1;
# 42 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
static int progress_disabled = 0;
# 43 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 44 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
double seconds_npm();
double seconds_quick(); double seconds();
double seconds_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 45 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     struct timeval tp; ;
# 46 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     struct timezone tzp; ;
# 47 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 48 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 49 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_0, ____chimes_did_disable0, false); }
# 50 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 51 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void ricker_wavelet_npm(float *source, int nsteps, float dt, float freq);
void ricker_wavelet_quick(float *source, int nsteps, float dt, float freq); void ricker_wavelet(float *source, int nsteps, float dt, float freq);
void ricker_wavelet_resumable(float *source, int nsteps, float dt, float freq) {const int ____chimes_did_disable1 = new_stack((void *)(&ricker_wavelet), "ricker_wavelet", &____must_manage_ricker_wavelet, 4, 0, (size_t)(3785853840841797085UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 52 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     float shift; shift = (-1.5594f / freq) ;
# 53 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 54 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsteps; i++) {
# 55 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         float time; time = (i*dt + shift) ;
# 56 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         float pi_freq_t; pi_freq_t = (3.141517f * freq * time) ;
# 57 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         float sqr_pi_freq_t; sqr_pi_freq_t = (pi_freq_t * pi_freq_t) ;
# 58 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        source[i] = 1e5f * (1.f - 2 * sqr_pi_freq_t) * exp(-sqr_pi_freq_t);
# 59 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    } }
# 60 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "ricker_wavelet", &____must_manage_ricker_wavelet, ____alias_loc_id_1, ____chimes_did_disable1, false); }
# 61 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 62 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void parse_source_npm(char *optarg, source *out);
void parse_source_quick(char *optarg, source *out); void parse_source(char *optarg, source *out);
void parse_source_resumable(char *optarg, source *out) {const int ____chimes_did_disable2 = new_stack((void *)(&parse_source), "parse_source", &____must_manage_parse_source, 2, 0, (size_t)(3785853840841797179UL), (size_t)(3785853840841797180UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 63 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *x_str; x_str = (optarg) ;
# 64 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *first_comma; first_comma = (strchr(x_str, ',')) ;
# 65 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (first_comma == __null) {
# 66 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 67 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 68 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 69 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 70 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *y_str; y_str = (first_comma + 1) ;
# 71 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *second_comma; second_comma = (strchr(y_str, ',')) ;
# 72 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (second_comma == __null) {
# 73 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 74 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 75 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 76 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 77 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *freq_str; freq_str = (second_comma + 1) ;
# 78 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *third_comma; third_comma = (strchr(freq_str, ',')) ;
# 79 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (third_comma == __null) {
# 80 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 81 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 82 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 83 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 84 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *time_str; time_str = (third_comma + 1) ;
# 85 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *first_comma = '\0';
# 86 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *second_comma = '\0';
# 87 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *third_comma = '\0';
# 88 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 89 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->x = atoi(x_str);
# 90 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->y = atoi(y_str);
# 91 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->freq = atof(freq_str);
# 92 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->t = atoi(time_str);
# 93 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "parse_source", &____must_manage_parse_source, ____alias_loc_id_2, ____chimes_did_disable2, false); }
# 94 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 95 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void config_sources_npm(source **srcs, int *nsrcs, int nx, int ny, int nsteps);
void config_sources_quick(source **srcs, int *nsrcs, int nx, int ny, int nsteps); void config_sources(source **srcs, int *nsrcs, int nx, int ny, int nsteps);
void config_sources_resumable(source **srcs, int *nsrcs, int nx, int ny, int nsteps) {const int ____chimes_did_disable3 = new_stack((void *)(&config_sources), "config_sources", &____must_manage_config_sources, 5, 0, (size_t)(3785853840841797310UL), (size_t)(3785853840841797311UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 96 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (*nsrcs == 0) {
# 97 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        *srcs = (source *) ({ void *____chimes_tmp_ptr = malloc((sizeof(source)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(source), 3785853840841797254UL, 0, 1, (int)sizeof(struct _source), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 98 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (*srcs == __null) {
# 99 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Allocation failed\n");
# 100 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 101 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 102 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->x = nx / 2;
# 103 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->y = ny / 2;
# 104 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->freq = 15.0f;
# 105 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->t = 0;
# 106 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        *nsrcs = 1;
# 107 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 108 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 109 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 110 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < *nsrcs; i++) {
# 111 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         source *curr; curr = ((*srcs) + i) ;
# 112 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->x < 0 || curr->x >= nx) {
# 113 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid x value for source\n");
# 114 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 115 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 116 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->y < 0 || curr->y >= ny) {
# 117 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid y value for source\n");
# 118 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 119 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 120 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->t < 0 || curr->t >= nsteps) {
# 121 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid t value for source\n");
# 122 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 123 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 124 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    } }
# 125 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "config_sources", &____must_manage_config_sources, ____alias_loc_id_3, ____chimes_did_disable3, false); }
# 126 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 127 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
float **sample_sources_npm(source *srcs, int nsrcs, int nsteps, float dt);
float **sample_sources_quick(source *srcs, int nsrcs, int nsteps, float dt); float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt);
float **sample_sources_resumable(source *srcs, int nsrcs, int nsteps, float dt) {const int ____chimes_did_disable4 = new_stack((void *)(&sample_sources), "sample_sources", &____must_manage_sample_sources, 4, 0, (size_t)(3785853840841797397UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 128 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     float **src_samples; src_samples = ((float **) ({ void *____chimes_tmp_ptr = malloc((nsrcs * sizeof(float *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, nsrcs * sizeof(float *), 3785853840841797335UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 129 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (src_samples == __null) {
# 130 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Allocation failed\n");
# 131 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 132 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 133 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 134 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsrcs; i++) {
# 135 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        src_samples[i] = (float *) ({ void *____chimes_tmp_ptr = malloc((nsteps * sizeof(float)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, nsteps * sizeof(float), 3785853840841797355UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 136 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (src_samples[i] == __null) {
# 137 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Allocation failed\n");
# 138 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 139 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 140 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         call_lbl_0: ({ calling_npm("ricker_wavelet", 0); ricker_wavelet_npm(src_samples[i], nsteps, dt, srcs[i].freq); });
# 141 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    } }
# 142 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     float **____chimes_ret_var_1; ; ____chimes_ret_var_1 = (src_samples); rm_stack(true, 3785853840841797335UL, "sample_sources", &____must_manage_sample_sources, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_1; ;
# 143 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(true, 3785853840841797335UL, "sample_sources", &____must_manage_sample_sources, ____alias_loc_id_4, ____chimes_did_disable4, false); }
# 144 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 145 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void init_progress_npm(int length, int goal, int disabled);
void init_progress_quick(int length, int goal, int disabled); void init_progress(int length, int goal, int disabled);
void init_progress_resumable(int length, int goal, int disabled) {const int ____chimes_did_disable5 = new_stack((void *)(&init_progress), "init_progress", &____must_manage_init_progress, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 146 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int i; ;
# 147 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_buffer != __null) {
# 148 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Progress initialized multiple times\n");
# 149 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 150 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 151 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 152 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (length > 100) {
# 153 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Invalid progress length, must be <= 100\n");
# 154 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 155 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 156 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 157 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_disabled = disabled;
# 158 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 159 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (disabled) {rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5, false); return; };
# 160 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 161 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer = (char *) ({ void *____chimes_tmp_ptr = malloc((sizeof(char) * (length + 3)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(char) * (length + 3), 3785853840841797450UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 162 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    ((progress_buffer != __null) ? static_cast<void> (0) : __assert_fail ("progress_buffer != __null", "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp", 162, __PRETTY_FUNCTION__));
# 163 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_length = length;
# 164 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_goal = goal;
# 165 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_num_ticks = 0;
# 166 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 167 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[0] = '|';
# 168 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[length + 1] = '|';
# 169 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[length + 2] = '\0';
# 170 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 171 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    for (i = 1; i <= length; i++) {
# 172 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        progress_buffer[i] = '-';
# 173 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 174 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 175 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    fprintf(stderr, "%s", progress_buffer);
# 176 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5, false); }
# 177 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 178 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void update_progress_npm(int progress);
void update_progress_quick(int progress); void update_progress(int progress);
void update_progress_resumable(int progress) {const int ____chimes_did_disable6 = new_stack((void *)(&update_progress), "update_progress", &____must_manage_update_progress, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 179 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int i; ;
# 180 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 181 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_disabled) {
# 182 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6, false); return;
# 183 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 184 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 185 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_buffer == __null) {
# 186 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Calling update_progress without having called "
# 187 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "init_progress\n");
# 188 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 189 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 190 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 191 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     double perc_progress; perc_progress = ((double)progress / (double)progress_goal) ;
# 192 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     int ticks; ticks = ((int)(perc_progress * progress_length)) ;
# 193 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks > progress_length) {
# 194 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        ticks = progress_length;
# 195 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 196 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 197 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks < progress_num_ticks) {
# 198 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Ticks went backwards?\n");
# 199 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 200 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 201 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 202 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks > progress_num_ticks) {
# 203 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        for (i = 1; i < 1 + ticks; i++) {
# 204 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            progress_buffer[i] = '=';
# 205 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 206 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 207 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        for (i = 0; i < progress_length + 2; i++) {
# 208 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "\b");
# 209 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 210 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 211 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "%s", progress_buffer);
# 212 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 213 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 214 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_num_ticks = ticks;
# 215 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6, false); }
# 216 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 217 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void finish_progress_npm();
void finish_progress_quick(); void finish_progress();
void finish_progress_resumable() {const int ____chimes_did_disable7 = new_stack((void *)(&finish_progress), "finish_progress", &____must_manage_finish_progress, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 218 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_disabled) {
# 219 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7, false); return;
# 220 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 221 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 222 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     call_lbl_0: ({ calling_npm("update_progress", 0); update_progress_npm(progress_goal); });
# 223 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    fprintf(stderr, "\n");
# 224 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 225 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     ({ free_helper((((unsigned char *)progress_buffer) - sizeof(void *)), 3785853840841797450UL);free((((unsigned char *)progress_buffer) - sizeof(void *))); }) ;
# 226 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7, false); }
# 44 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
double seconds_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; ; ;
# 45 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     struct timeval tp; ;
# 46 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     struct timezone tzp; ;
# 47 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 48 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_0, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 49 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_0, ____chimes_did_disable0, false); }

double seconds() { return (____chimes_replaying ? seconds_resumable() : seconds_quick()); }
# 51 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void ricker_wavelet_quick(float *source, int nsteps, float dt, float freq) {const int ____chimes_did_disable1 = new_stack((void *)(&ricker_wavelet), "ricker_wavelet", &____must_manage_ricker_wavelet, 4, 0, (size_t)(3785853840841797085UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 52 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     float shift; shift = (-1.5594f / freq) ;
# 53 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 54 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsteps; i++) {
# 55 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         float time; time = (i*dt + shift) ;
# 56 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         float pi_freq_t; pi_freq_t = (3.141517f * freq * time) ;
# 57 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         float sqr_pi_freq_t; sqr_pi_freq_t = (pi_freq_t * pi_freq_t) ;
# 58 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        source[i] = 1e5f * (1.f - 2 * sqr_pi_freq_t) * exp(-sqr_pi_freq_t);
# 59 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    } }
# 60 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "ricker_wavelet", &____must_manage_ricker_wavelet, ____alias_loc_id_1, ____chimes_did_disable1, false); }

void ricker_wavelet(float *source, int nsteps, float dt, float freq) { (____chimes_replaying ? ricker_wavelet_resumable(source, nsteps, dt, freq) : ricker_wavelet_quick(source, nsteps, dt, freq)); }
# 62 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void parse_source_quick(char *optarg, source *out) {const int ____chimes_did_disable2 = new_stack((void *)(&parse_source), "parse_source", &____must_manage_parse_source, 2, 0, (size_t)(3785853840841797179UL), (size_t)(3785853840841797180UL)) ; ; ;
# 63 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *x_str; x_str = (optarg) ;
# 64 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *first_comma; first_comma = (strchr(x_str, ',')) ;
# 65 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (first_comma == __null) {
# 66 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 67 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 68 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 69 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 70 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *y_str; y_str = (first_comma + 1) ;
# 71 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *second_comma; second_comma = (strchr(y_str, ',')) ;
# 72 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (second_comma == __null) {
# 73 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 74 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 75 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 76 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 77 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *freq_str; freq_str = (second_comma + 1) ;
# 78 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *third_comma; third_comma = (strchr(freq_str, ',')) ;
# 79 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (third_comma == __null) {
# 80 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 81 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 82 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 83 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 84 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     char *time_str; time_str = (third_comma + 1) ;
# 85 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *first_comma = '\0';
# 86 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *second_comma = '\0';
# 87 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *third_comma = '\0';
# 88 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 89 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->x = atoi(x_str);
# 90 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->y = atoi(y_str);
# 91 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->freq = atof(freq_str);
# 92 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->t = atoi(time_str);
# 93 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "parse_source", &____must_manage_parse_source, ____alias_loc_id_2, ____chimes_did_disable2, false); }

void parse_source(char *optarg, source *out) { (____chimes_replaying ? parse_source_resumable(optarg, out) : parse_source_quick(optarg, out)); }
# 95 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void config_sources_quick(source **srcs, int *nsrcs, int nx, int ny, int nsteps) {const int ____chimes_did_disable3 = new_stack((void *)(&config_sources), "config_sources", &____must_manage_config_sources, 5, 0, (size_t)(3785853840841797310UL), (size_t)(3785853840841797311UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 96 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (*nsrcs == 0) {
# 97 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        *srcs = (source *) ({ void *____chimes_tmp_ptr = malloc((sizeof(source)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(source), 3785853840841797254UL, 0, 1, (int)sizeof(struct _source), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 98 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (*srcs == __null) {
# 99 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Allocation failed\n");
# 100 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 101 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 102 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->x = nx / 2;
# 103 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->y = ny / 2;
# 104 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->freq = 15.0f;
# 105 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->t = 0;
# 106 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        *nsrcs = 1;
# 107 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 108 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 109 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 110 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < *nsrcs; i++) {
# 111 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         source *curr; curr = ((*srcs) + i) ;
# 112 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->x < 0 || curr->x >= nx) {
# 113 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid x value for source\n");
# 114 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 115 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 116 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->y < 0 || curr->y >= ny) {
# 117 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid y value for source\n");
# 118 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 119 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 120 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->t < 0 || curr->t >= nsteps) {
# 121 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid t value for source\n");
# 122 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 123 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 124 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    } }
# 125 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "config_sources", &____must_manage_config_sources, ____alias_loc_id_3, ____chimes_did_disable3, false); }

void config_sources(source **srcs, int *nsrcs, int nx, int ny, int nsteps) { (____chimes_replaying ? config_sources_resumable(srcs, nsrcs, nx, ny, nsteps) : config_sources_quick(srcs, nsrcs, nx, ny, nsteps)); }
# 127 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
float **sample_sources_quick(source *srcs, int nsrcs, int nsteps, float dt) {const int ____chimes_did_disable4 = new_stack((void *)(&sample_sources), "sample_sources", &____must_manage_sample_sources, 4, 0, (size_t)(3785853840841797397UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 128 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     float **src_samples; src_samples = ((float **) ({ void *____chimes_tmp_ptr = malloc((nsrcs * sizeof(float *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, nsrcs * sizeof(float *), 3785853840841797335UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 129 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (src_samples == __null) {
# 130 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Allocation failed\n");
# 131 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 132 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 133 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 134 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    { int i; for ( i = (0) ; i < nsrcs; i++) {
# 135 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        src_samples[i] = (float *) ({ void *____chimes_tmp_ptr = malloc((nsteps * sizeof(float)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, nsteps * sizeof(float), 3785853840841797355UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 136 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (src_samples[i] == __null) {
# 137 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Allocation failed\n");
# 138 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 139 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 140 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
         call_lbl_0: ({ calling_npm("ricker_wavelet", 0); ricker_wavelet_npm(src_samples[i], nsteps, dt, srcs[i].freq); });
# 141 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    } }
# 142 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     float **____chimes_ret_var_1; ; ____chimes_ret_var_1 = (src_samples); rm_stack(true, 3785853840841797335UL, "sample_sources", &____must_manage_sample_sources, ____alias_loc_id_4, ____chimes_did_disable4, false); return ____chimes_ret_var_1; ;
# 143 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(true, 3785853840841797335UL, "sample_sources", &____must_manage_sample_sources, ____alias_loc_id_4, ____chimes_did_disable4, false); }

float **sample_sources(source *srcs, int nsrcs, int nsteps, float dt) { return (____chimes_replaying ? sample_sources_resumable(srcs, nsrcs, nsteps, dt) : sample_sources_quick(srcs, nsrcs, nsteps, dt)); }
# 145 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void init_progress_quick(int length, int goal, int disabled) {const int ____chimes_did_disable5 = new_stack((void *)(&init_progress), "init_progress", &____must_manage_init_progress, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 146 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int i; ;
# 147 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_buffer != __null) {
# 148 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Progress initialized multiple times\n");
# 149 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 150 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 151 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 152 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (length > 100) {
# 153 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Invalid progress length, must be <= 100\n");
# 154 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 155 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 156 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 157 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_disabled = disabled;
# 158 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 159 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (disabled) {rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5, false); return; };
# 160 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 161 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer = (char *) ({ void *____chimes_tmp_ptr = malloc((sizeof(char) * (length + 3)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(char) * (length + 3), 3785853840841797450UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 162 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    ((progress_buffer != __null) ? static_cast<void> (0) : __assert_fail ("progress_buffer != __null", "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp", 162, __PRETTY_FUNCTION__));
# 163 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_length = length;
# 164 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_goal = goal;
# 165 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_num_ticks = 0;
# 166 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 167 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[0] = '|';
# 168 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[length + 1] = '|';
# 169 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[length + 2] = '\0';
# 170 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 171 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    for (i = 1; i <= length; i++) {
# 172 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        progress_buffer[i] = '-';
# 173 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 174 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 175 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    fprintf(stderr, "%s", progress_buffer);
# 176 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "init_progress", &____must_manage_init_progress, ____alias_loc_id_5, ____chimes_did_disable5, false); }

void init_progress(int length, int goal, int disabled) { (____chimes_replaying ? init_progress_resumable(length, goal, disabled) : init_progress_quick(length, goal, disabled)); }
# 178 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void update_progress_quick(int progress) {const int ____chimes_did_disable6 = new_stack((void *)(&update_progress), "update_progress", &____must_manage_update_progress, 1, 0, (size_t)(0UL)) ; ; ;
# 179 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int i; ;
# 180 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 181 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_disabled) {
# 182 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6, false); return;
# 183 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 184 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 185 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_buffer == __null) {
# 186 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Calling update_progress without having called "
# 187 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "init_progress\n");
# 188 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 189 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 190 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 191 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     double perc_progress; perc_progress = ((double)progress / (double)progress_goal) ;
# 192 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     int ticks; ticks = ((int)(perc_progress * progress_length)) ;
# 193 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks > progress_length) {
# 194 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        ticks = progress_length;
# 195 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 196 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 197 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks < progress_num_ticks) {
# 198 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Ticks went backwards?\n");
# 199 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 200 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 201 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 202 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks > progress_num_ticks) {
# 203 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        for (i = 1; i < 1 + ticks; i++) {
# 204 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            progress_buffer[i] = '=';
# 205 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 206 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 207 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        for (i = 0; i < progress_length + 2; i++) {
# 208 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "\b");
# 209 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 210 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 211 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "%s", progress_buffer);
# 212 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 213 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 214 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_num_ticks = ticks;
# 215 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "update_progress", &____must_manage_update_progress, ____alias_loc_id_6, ____chimes_did_disable6, false); }

void update_progress(int progress) { (____chimes_replaying ? update_progress_resumable(progress) : update_progress_quick(progress)); }
# 217 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void finish_progress_quick() {const int ____chimes_did_disable7 = new_stack((void *)(&finish_progress), "finish_progress", &____must_manage_finish_progress, 0, 0) ; ; ;
# 218 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_disabled) {
# 219 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7, false); return;
# 220 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 221 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 222 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     call_lbl_0: ({ calling_npm("update_progress", 0); update_progress_npm(progress_goal); });
# 223 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    fprintf(stderr, "\n");
# 224 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 225 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     ({ free_helper((((unsigned char *)progress_buffer) - sizeof(void *)), 3785853840841797450UL);free((((unsigned char *)progress_buffer) - sizeof(void *))); }) ;
# 226 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
rm_stack(false, 0UL, "finish_progress", &____must_manage_finish_progress, 0, ____chimes_did_disable7, false); }

void finish_progress() { (____chimes_replaying ? finish_progress_resumable() : finish_progress_quick()); }
# 44 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
double seconds_npm() {
# 45 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    struct timeval tp;
# 46 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    struct timezone tzp;
# 47 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int i = gettimeofday(&tp, &tzp);
# 48 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     double ____chimes_ret_var_0; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); return ____chimes_ret_var_0; ;
# 49 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}
# 51 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void ricker_wavelet_npm(float *source, int nsteps, float dt, float freq) {
# 52 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    float shift = -1.5594f / freq;
# 53 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 54 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    for (int i = 0; i < nsteps; i++) {
# 55 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        float time = i*dt + shift;
# 56 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        float pi_freq_t = 3.141517f * freq * time;
# 57 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        float sqr_pi_freq_t = pi_freq_t * pi_freq_t;
# 58 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        source[i] = 1e5f * (1.f - 2 * sqr_pi_freq_t) * exp(-sqr_pi_freq_t);
# 59 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 60 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}
# 62 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void parse_source_npm(char *optarg, source *out) {
# 63 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    char *x_str = optarg;
# 64 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    char *first_comma = strchr(x_str, ',');
# 65 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (first_comma == __null) {
# 66 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 67 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 68 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 69 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 70 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    char *y_str = first_comma + 1;
# 71 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    char *second_comma = strchr(y_str, ',');
# 72 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (second_comma == __null) {
# 73 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 74 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 75 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 76 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 77 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    char *freq_str = second_comma + 1;
# 78 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    char *third_comma = strchr(freq_str, ',');
# 79 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (third_comma == __null) {
# 80 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Improperly formatted argument to -p, must "
# 81 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "be x,y,f,t\n");
# 82 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 83 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 84 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    char *time_str = third_comma + 1;
# 85 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *first_comma = '\0';
# 86 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *second_comma = '\0';
# 87 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    *third_comma = '\0';
# 88 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 89 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->x = atoi(x_str);
# 90 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->y = atoi(y_str);
# 91 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->freq = atof(freq_str);
# 92 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    out->t = atoi(time_str);
# 93 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}
# 95 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void config_sources_npm(source **srcs, int *nsrcs, int nx, int ny, int nsteps) {
# 96 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (*nsrcs == 0) {
# 97 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        *srcs = (source *) ({ void *____chimes_tmp_ptr = malloc((sizeof(source)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(source), 3785853840841797254UL, 0, 1, (int)sizeof(struct _source), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 98 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (*srcs == __null) {
# 99 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Allocation failed\n");
# 100 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 101 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 102 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->x = nx / 2;
# 103 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->y = ny / 2;
# 104 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->freq = 15.0f;
# 105 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        (*srcs)->t = 0;
# 106 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        *nsrcs = 1;
# 107 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 108 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 109 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 110 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    for (int i = 0; i < *nsrcs; i++) {
# 111 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        source *curr = (*srcs) + i;
# 112 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->x < 0 || curr->x >= nx) {
# 113 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid x value for source\n");
# 114 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 115 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 116 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->y < 0 || curr->y >= ny) {
# 117 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid y value for source\n");
# 118 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 119 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 120 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (curr->t < 0 || curr->t >= nsteps) {
# 121 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Invalid t value for source\n");
# 122 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 123 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 124 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 125 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}
# 127 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
float **sample_sources_npm(source *srcs, int nsrcs, int nsteps, float dt) {
# 128 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    float **src_samples = (float **) ({ void *____chimes_tmp_ptr = malloc((nsrcs * sizeof(float *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, nsrcs * sizeof(float *), 3785853840841797335UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 129 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (src_samples == __null) {
# 130 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Allocation failed\n");
# 131 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 132 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 133 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 134 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    for (int i = 0; i < nsrcs; i++) {
# 135 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        src_samples[i] = (float *) ({ void *____chimes_tmp_ptr = malloc((nsteps * sizeof(float)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, nsteps * sizeof(float), 3785853840841797355UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 136 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        if (src_samples[i] == __null) {
# 137 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "Allocation failed\n");
# 138 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            exit(1);
# 139 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 140 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        ricker_wavelet_npm(src_samples[i], nsteps, dt, srcs[i].freq);
# 141 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 142 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     float ** ____chimes_ret_var_1; ____chimes_ret_var_1 = (src_samples); return ____chimes_ret_var_1; ;
# 143 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}
# 145 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void init_progress_npm(int length, int goal, int disabled) {
# 146 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int i;
# 147 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_buffer != __null) {
# 148 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Progress initialized multiple times\n");
# 149 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 150 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 151 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 152 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (length > 100) {
# 153 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Invalid progress length, must be <= 100\n");
# 154 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 155 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 156 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 157 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_disabled = disabled;
# 158 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 159 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (disabled) {return; };
# 160 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 161 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer = (char *) ({ void *____chimes_tmp_ptr = malloc((sizeof(char) * (length + 3)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(char) * (length + 3), 3785853840841797450UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 162 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    ((progress_buffer != __null) ? static_cast<void> (0) : __assert_fail ("progress_buffer != __null", "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp", 162, __PRETTY_FUNCTION__));
# 163 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_length = length;
# 164 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_goal = goal;
# 165 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_num_ticks = 0;
# 166 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 167 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[0] = '|';
# 168 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[length + 1] = '|';
# 169 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_buffer[length + 2] = '\0';
# 170 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 171 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    for (i = 1; i <= length; i++) {
# 172 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        progress_buffer[i] = '-';
# 173 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 174 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 175 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    fprintf(stderr, "%s", progress_buffer);
# 176 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}
# 178 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void update_progress_npm(int progress) {
# 179 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int i;
# 180 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 181 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_disabled) {
# 182 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        return;
# 183 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 184 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 185 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_buffer == __null) {
# 186 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Calling update_progress without having called "
# 187 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
                "init_progress\n");
# 188 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 189 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 190 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 191 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    double perc_progress = (double)progress / (double)progress_goal;
# 192 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    int ticks = (int)(perc_progress * progress_length);
# 193 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks > progress_length) {
# 194 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        ticks = progress_length;
# 195 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 196 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 197 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks < progress_num_ticks) {
# 198 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "Ticks went backwards?\n");
# 199 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        exit(1);
# 200 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 201 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 202 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (ticks > progress_num_ticks) {
# 203 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        for (i = 1; i < 1 + ticks; i++) {
# 204 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            progress_buffer[i] = '=';
# 205 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 206 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 207 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        for (i = 0; i < progress_length + 2; i++) {
# 208 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
            fprintf(stderr, "\b");
# 209 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        }
# 210 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 211 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        fprintf(stderr, "%s", progress_buffer);
# 212 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 213 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 214 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    progress_num_ticks = ticks;
# 215 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}
# 217 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
void finish_progress_npm() {
# 218 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    if (progress_disabled) {
# 219 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
        return;
# 220 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    }
# 221 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 222 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    update_progress_npm(progress_goal);
# 223 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
    fprintf(stderr, "\n");
# 224 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
# 225 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
     ({ free_helper((((unsigned char *)progress_buffer) - sizeof(void *)), 3785853840841797450UL);free((((unsigned char *)progress_buffer) - sizeof(void *))); }) ;
# 226 "/scratch/jmg3/chimes/src/examples/openmp/./lib/common.cpp"
}





static int module_init() {
    init_module(3785853840841796990UL, 20, 8, 0, 7, 8, 0, 8, 2, 0, 3,
                           &____alias_loc_id_0, (unsigned)3, (unsigned)0, (unsigned)0, (3785853840841796990UL + 1UL), (3785853840841796990UL + 3UL), (3785853840841796990UL + 4UL),
                           &____alias_loc_id_1, (unsigned)10, (unsigned)0, (unsigned)0, (3785853840841796990UL + 26UL), (3785853840841796990UL + 27UL), (3785853840841796990UL + 28UL), (3785853840841796990UL + 29UL), (3785853840841796990UL + 30UL), (3785853840841796990UL + 31UL), (3785853840841796990UL + 32UL), (3785853840841796990UL + 33UL), (3785853840841796990UL + 34UL), (3785853840841796990UL + 95UL),
                           &____alias_loc_id_2, (unsigned)13, (unsigned)0, (unsigned)0, (3785853840841796990UL + 100UL), (3785853840841796990UL + 101UL), (3785853840841796990UL + 102UL), (3785853840841796990UL + 103UL), (3785853840841796990UL + 104UL), (3785853840841796990UL + 105UL), (3785853840841796990UL + 106UL), (3785853840841796990UL + 107UL), (3785853840841796990UL + 108UL), (3785853840841796990UL + 118UL), (3785853840841796990UL + 158UL), (3785853840841796990UL + 177UL), (3785853840841796990UL + 190UL),
                           &____alias_loc_id_3, (unsigned)10, (unsigned)0, (unsigned)0, (3785853840841796990UL + 198UL), (3785853840841796990UL + 199UL), (3785853840841796990UL + 200UL), (3785853840841796990UL + 201UL), (3785853840841796990UL + 202UL), (3785853840841796990UL + 203UL), (3785853840841796990UL + 204UL), (3785853840841796990UL + 264UL), (3785853840841796990UL + 320UL), (3785853840841796990UL + 321UL),
                           &____alias_loc_id_4, (unsigned)8, (unsigned)0, (unsigned)0, (3785853840841796990UL + 326UL), (3785853840841796990UL + 327UL), (3785853840841796990UL + 328UL), (3785853840841796990UL + 329UL), (3785853840841796990UL + 330UL), (3785853840841796990UL + 331UL), (3785853840841796990UL + 332UL), (3785853840841796990UL + 345UL),
                           &____alias_loc_id_5, (unsigned)7, (unsigned)0, (unsigned)0, (3785853840841796990UL + 411UL), (3785853840841796990UL + 412UL), (3785853840841796990UL + 413UL), (3785853840841796990UL + 414UL), (3785853840841796990UL + 460UL), (3785853840841796990UL + 613UL), (3785853840841796990UL + 616UL),
                           &____alias_loc_id_6, (unsigned)6, (unsigned)0, (unsigned)0, (3785853840841796990UL + 460UL), (3785853840841796990UL + 503UL), (3785853840841796990UL + 504UL), (3785853840841796990UL + 505UL), (3785853840841796990UL + 506UL), (3785853840841796990UL + 616UL),
                            "config_sources", 0, "_Z14config_sourcesPP7_sourcePiiii", "_Z18config_sources_npmPP7_sourcePiiii", 0, 5, (3785853840841796990UL + 320UL), (3785853840841796990UL + 321UL), 0UL, 0UL, 0UL, 0UL, 9, "malloc", 1, 0UL, (3785853840841796990UL + 264UL), "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 609UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 610UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 610UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 610UL), 0UL, "exit", 1, 0UL, 0UL,
                            "init_progress", 0, "_Z13init_progressiii", "_Z17init_progress_npmiii", 0, 3, 0UL, 0UL, 0UL, 0UL, 7, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 614UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 615UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (3785853840841796990UL + 460UL), "__assert_fail", 4, (3785853840841796990UL + 617UL), (3785853840841796990UL + 618UL), 0UL, (3785853840841796990UL + 619UL), 0UL, "fprintf", 3, (3785853840841796990UL + 123UL), (3785853840841796990UL + 623UL), (3785853840841796990UL + 460UL), 0UL,
                            "seconds", 0, "_Z7secondsv", "_Z11seconds_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (3785853840841796990UL + 1UL), (3785853840841796990UL + 2UL), 0UL,
                            "finish_progress", 0, "_Z15finish_progressv", "_Z19finish_progress_npmv", 0, 0, 0UL, 3, "update_progress", 1, 0UL, 0UL, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 626UL), 0UL, "free", 1, (3785853840841796990UL + 460UL), 0UL,
                            "update_progress", 0, "_Z15update_progressi", "_Z19update_progress_npmi", 0, 1, 0UL, 0UL, 6, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 624UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 625UL), 0UL, "exit", 1, 0UL, 0UL, "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 626UL), 0UL, "fprintf", 3, (3785853840841796990UL + 123UL), (3785853840841796990UL + 623UL), (3785853840841796990UL + 460UL), 0UL,
                            "ricker_wavelet", 0, "_Z14ricker_waveletPfiff", "_Z18ricker_wavelet_npmPfiff", 0, 4, (3785853840841796990UL + 95UL), 0UL, 0UL, 0UL, 0UL, 1, "exp", 1, 0UL, 0UL,
                            "parse_source", 0, "_Z12parse_sourcePcP7_source", "_Z16parse_source_npmPcP7_source", 0, 2, (3785853840841796990UL + 189UL), (3785853840841796990UL + 190UL), 0UL, 13, "strchr", 2, (3785853840841796990UL + 189UL), 0UL, (3785853840841796990UL + 118UL), "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 608UL), 0UL, "exit", 1, 0UL, 0UL, "strchr", 2, (3785853840841796990UL + 118UL), 0UL, (3785853840841796990UL + 177UL), "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 608UL), 0UL, "exit", 1, 0UL, 0UL, "strchr", 2, (3785853840841796990UL + 177UL), 0UL, (3785853840841796990UL + 158UL), "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 608UL), 0UL, "exit", 1, 0UL, 0UL, "atoi", 1, (3785853840841796990UL + 189UL), 0UL, "atoi", 1, (3785853840841796990UL + 118UL), 0UL, "atof", 1, (3785853840841796990UL + 177UL), 0UL, "atoi", 1, (3785853840841796990UL + 158UL), 0UL,
                            "sample_sources", 0, "_Z14sample_sourcesP7_sourceiif", "_Z18sample_sources_npmP7_sourceiif", 0, 4, (3785853840841796990UL + 407UL), 0UL, 0UL, 0UL, (3785853840841796990UL + 345UL), 7, "malloc", 1, 0UL, (3785853840841796990UL + 345UL), "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 609UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (3785853840841796990UL + 365UL), "fprintf", 2, (3785853840841796990UL + 123UL), (3785853840841796990UL + 609UL), 0UL, "exit", 1, 0UL, 0UL, "ricker_wavelet", 4, (3785853840841796990UL + 365UL), 0UL, 0UL, 0UL, 0UL,
                           "config_sources", &(____chimes_does_checkpoint_config_sources_npm),
                           "init_progress", &(____chimes_does_checkpoint_init_progress_npm),
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "finish_progress", &(____chimes_does_checkpoint_finish_progress_npm),
                           "update_progress", &(____chimes_does_checkpoint_update_progress_npm),
                           "ricker_wavelet", &(____chimes_does_checkpoint_ricker_wavelet_npm),
                           "parse_source", &(____chimes_does_checkpoint_parse_source_npm),
                           "sample_sources", &(____chimes_does_checkpoint_sample_sources_npm),
                             (3785853840841796990UL + 26UL), (3785853840841796990UL + 95UL),
                             (3785853840841796990UL + 199UL), (3785853840841796990UL + 321UL),
                             (3785853840841796990UL + 198UL), (3785853840841796990UL + 320UL),
                             (3785853840841796990UL + 607UL), (3785853840841796990UL + 123UL),
                             (3785853840841796990UL + 613UL), (3785853840841796990UL + 460UL),
                             (3785853840841796990UL + 320UL), (3785853840841796990UL + 264UL),
                             (3785853840841796990UL + 330UL), (3785853840841796990UL + 345UL),
                             (3785853840841796990UL + 332UL), (3785853840841796990UL + 345UL),
                             (3785853840841796990UL + 345UL), (3785853840841796990UL + 365UL),
                             (3785853840841796990UL + 108UL), (3785853840841796990UL + 158UL),
                             (3785853840841796990UL + 326UL), (3785853840841796990UL + 407UL),
                             (3785853840841796990UL + 204UL), (3785853840841796990UL + 264UL),
                             (3785853840841796990UL + 102UL), (3785853840841796990UL + 189UL),
                             (3785853840841796990UL + 103UL), (3785853840841796990UL + 118UL),
                             (3785853840841796990UL + 100UL), (3785853840841796990UL + 189UL),
                             (3785853840841796990UL + 101UL), (3785853840841796990UL + 190UL),
                             (3785853840841796990UL + 106UL), (3785853840841796990UL + 177UL),
                             (3785853840841796990UL + 107UL), (3785853840841796990UL + 158UL),
                             (3785853840841796990UL + 104UL), (3785853840841796990UL + 118UL),
                             (3785853840841796990UL + 105UL), (3785853840841796990UL + 177UL),
                     "_source", 128UL, 4, "int", (int)__builtin_offsetof (struct _source, x), "int", (int)__builtin_offsetof (struct _source, y), "float", (int)__builtin_offsetof (struct _source, freq), "int", (int)__builtin_offsetof (struct _source, t),
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                     "timezone", 64UL, 2, "int", (int)__builtin_offsetof (struct timezone, tz_minuteswest), "int", (int)__builtin_offsetof (struct timezone, tz_dsttime),
                             "config_sources", "_Z14config_sourcesPP7_sourcePiiii", 0, 0,
                             "init_progress", "_Z13init_progressiii", 0, 0,
                             "seconds", "_Z7secondsv", 0, 0,
                             "finish_progress", "_Z15finish_progressv", 0, 1, "update_progress",
                             "update_progress", "_Z15update_progressi", 0, 0,
                             "ricker_wavelet", "_Z14ricker_waveletPfiff", 0, 0,
                             "parse_source", "_Z12parse_sourcePcP7_source", 0, 0,
                             "sample_sources", "_Z14sample_sourcesP7_sourceiif", 0, 1, "ricker_wavelet",
        "ricker_wavelet", 0UL, (int)4, 3785853840841797355UL, 0UL, 0UL, 0UL,
        "update_progress", 0UL, (int)1, 0UL);
    register_global_var("global|progress_buffer", "i8*", (void *)(&progress_buffer), 8, 1, 0, (3785853840841796990UL + 613UL), 0);
    register_global_var("global|progress_disabled", "i32", (void *)(&progress_disabled), 4, 0, 0, 0UL, 0);
    register_global_var("global|progress_length", "i32", (void *)(&progress_length), 4, 0, 0, 0UL, 0);
    register_global_var("global|progress_goal", "i32", (void *)(&progress_goal), 4, 0, 0, 0UL, 0);
    register_global_var("global|progress_num_ticks", "i32", (void *)(&progress_num_ticks), 4, 0, 0, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
