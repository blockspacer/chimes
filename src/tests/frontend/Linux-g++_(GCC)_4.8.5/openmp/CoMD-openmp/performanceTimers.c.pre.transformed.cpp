# 1 "performanceTimers.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 1 3 4
# 147 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "performanceTimers.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_printPerformanceResults_npm = 1;
static int ____chimes_does_checkpoint_printPerformanceResultsYaml_npm = 1;
static int ____chimes_does_checkpoint_getTime_npm = 1;
static int ____chimes_does_checkpoint_getTick_npm = 1;
static int ____chimes_does_checkpoint_profileStop_npm = 1;
static int ____chimes_does_checkpoint_getElapsedTime_npm = 1;
static int ____chimes_does_checkpoint_profileStart_npm = 1;
static int ____chimes_does_checkpoint_timerStats_npm = 1;
static int ____chimes_does_checkpoint_addDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_getMyRank_npm = 1;
static int ____chimes_does_checkpoint_getNRanks_npm = 1;
static int ____chimes_does_checkpoint_maxRankDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_minRankDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_printRank_npm = 1;

static int ____must_checkpoint_printPerformanceResults_nGlobalAtoms_0 = 2;
static int ____must_checkpoint_printPerformanceResults_printRate_0 = 2;
static int ____must_checkpoint_printPerformanceResults_tick_0 = 2;
static int ____must_checkpoint_printPerformanceResults_loopTime_0 = 2;
static int ____must_checkpoint_timerStats_sendBuf_0 = 2;
static int ____must_checkpoint_timerStats_recvBuf_0 = 2;
static int ____must_checkpoint_timerStats_ii_1 = 2;
static int ____must_checkpoint_timerStats_reduceSendBuf_0 = 2;
static int ____must_checkpoint_timerStats_reduceRecvBuf_0 = 2;
static int ____must_checkpoint_timerStats_ii_2 = 2;
static int ____must_checkpoint_timerStats_ii_6 = 2;
static int ____must_checkpoint_printPerformanceResultsYaml_file_0 = 2;
static int ____must_checkpoint_printPerformanceResultsYaml_tick_0 = 2;
static int ____must_checkpoint_printPerformanceResultsYaml_loopTime_0 = 2;

static int ____must_manage_printPerformanceResults = 2;
static int ____must_manage_printPerformanceResultsYaml = 2;
static int ____must_manage_getTime = 2;
static int ____must_manage_profileStop = 2;
static int ____must_manage_getTick = 2;
static int ____must_manage_getElapsedTime = 2;
static int ____must_manage_profileStart = 2;
static int ____must_manage_timerStats = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
static unsigned ____alias_loc_id_8;
static unsigned ____alias_loc_id_9;
static unsigned ____alias_loc_id_10;
static unsigned ____alias_loc_id_11;
static unsigned ____alias_loc_id_12;
static unsigned ____alias_loc_id_13;
static unsigned ____alias_loc_id_14;
static unsigned ____alias_loc_id_15;
static unsigned ____alias_loc_id_16;
static unsigned ____alias_loc_id_17;
static unsigned ____alias_loc_id_18;
static unsigned ____alias_loc_id_19;
static unsigned ____alias_loc_id_20;
static unsigned ____alias_loc_id_21;
# 1 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/scratch/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stddef.h" 1
# 149 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stddef.h"
typedef long int ptrdiff_t;
# 211 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stddef.h"
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
# 1 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 29 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 1 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1





# 1 "/usr/include/stdio.h" 1 3 4
# 28 "/usr/include/stdio.h" 3 4
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
# 29 "/usr/include/stdio.h" 2 3 4

extern "C" {



# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stddef.h" 1 3 4
# 35 "/usr/include/stdio.h" 2 3 4

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
# 37 "/usr/include/stdio.h" 2 3 4
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
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stddef.h" 1 3 4
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
# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stdarg.h" 3 4
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
# 7 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 2


enum TimerHandle{
   totalTimer,
   loopTimer,
   timestepTimer,
   positionTimer,
   velocityTimer,
   redistributeTimer,
   atomHaloTimer,
   computeForceTimer,
   eamHaloTimer,
   commHaloTimer,
   commReduceTimer,
   numberOfTimers};
# 57 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 30 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 30 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 31 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"

# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
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
# 33 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 29 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-redhat-linux/4.4.4/include/stddef.h" 1 3 4
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
# 34 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdint.h" 1 3 4
# 9 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/bits/wchar.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 29 "/usr/include/stdint.h" 2 3 4
# 37 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 66 "/usr/include/stdint.h" 3 4
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 91 "/usr/include/stdint.h" 3 4
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 104 "/usr/include/stdint.h" 3 4
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 120 "/usr/include/stdint.h" 3 4
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 135 "/usr/include/stdint.h" 3 4
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 10 "/opt/apps/software/Core/GCC/4.8.5/lib/gcc/x86_64-unknown-linux-gnu/4.8.5/include/stdint.h" 2 3 4
# 35 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 274 "/usr/include/inttypes.h" 3 4
extern "C" {




typedef struct
  {
    long int quot;
    long int rem;
  } imaxdiv_t;
# 298 "/usr/include/inttypes.h" 3 4
extern intmax_t imaxabs (intmax_t __n) throw () __attribute__ ((__const__));


extern imaxdiv_t imaxdiv (intmax_t __numer, intmax_t __denom)
      throw () __attribute__ ((__const__));


extern intmax_t strtoimax (__const char *__restrict __nptr,
      char **__restrict __endptr, int __base) throw ();


extern uintmax_t strtoumax (__const char *__restrict __nptr,
       char ** __restrict __endptr, int __base) throw ();


extern intmax_t wcstoimax (__const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();


extern uintmax_t wcstoumax (__const wchar_t *__restrict __nptr,
       wchar_t ** __restrict __endptr, int __base)
     throw ();





extern long int __strtol_internal (__const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
strtoimax (__const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __strtoul_internal (__const char *
          __restrict __nptr,
          char ** __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
strtoumax (__const char *__restrict nptr, char **__restrict endptr, int base) throw ()

{
  return __strtoul_internal (nptr, endptr, base, 0);
}

extern long int __wcstol_internal (__const wchar_t * __restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) intmax_t
wcstoimax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstol_internal (nptr, endptr, base, 0);
}

extern unsigned long int __wcstoul_internal (__const wchar_t *
          __restrict __nptr,
          wchar_t **
          __restrict __endptr,
          int __base, int __group)
  throw () __attribute__ ((__nonnull__ (1))) ;

extern __inline __attribute__ ((__gnu_inline__)) uintmax_t
wcstoumax (__const wchar_t *__restrict nptr, wchar_t **__restrict endptr, int base) throw ()

{
  return __wcstoul_internal (nptr, endptr, base, 0);
}
# 442 "/usr/include/inttypes.h" 3 4
}
# 36 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
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
# 37 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 37 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 38 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"

# 1 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 40 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h"
typedef struct RankReduceDataSt
{
   double val;
   int rank;
} RankReduceData;


int getNRanks(void);


int getMyRank(void);


int printRank(void);


void timestampBarrier(const char* msg);


void initParallel(int *argc, char ***argv);


void destroyParallel(void);


void barrierParallel(void);


int sendReceiveParallel(void* sendBuf, int sendLen, int dest,
                        void* recvBuf, int recvLen, int source);


void addIntParallel(int* sendBuf, int* recvBuf, int count);


void addRealParallel(real_t* sendBuf, real_t* recvBuf, int count);


void addDoubleParallel(double* sendBuf, double* recvBuf, int count);


void maxIntParallel(int* sendBuf, int* recvBuf, int count);


void minRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);


void maxRankDoubleParallel(RankReduceData* sendBuf, RankReduceData* recvBuf, int count);


void bcastParallel(void* buf, int len, int root);


int builtWithMpi(void);
# 41 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/yamlOutput.h" 1
# 12 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/yamlOutput.h"
void yamlBegin(void);
void yamlEnd(void);

void yamlAppInfo(FILE* file);

void printSeparator(FILE* file);
# 42 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 42 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 43 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime(void);
# 44 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick(void);
# 45 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static void timerStats(void);
# 46 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 47 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 48 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 49 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
char* timerName[numberOfTimers] = {
# 50 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "total",
# 51 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "loop",
# 52 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "timestep",
# 53 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  position",
# 54 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  velocity",
# 55 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  redistribute",
# 56 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "    atomHalo",
# 57 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  force",
# 58 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "    eamHalo",
# 59 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "commHalo",
# 60 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "commReduce"
# 61 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
};
# 62 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 63 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 64 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 65 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
typedef struct TimersSt
# 66 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 67 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t start;
# 68 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t total;
# 69 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t count;
# 70 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t elapsed;
# 71 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 72 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   int minRank;
# 73 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   int maxRank;
# 74 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 75 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double minValue;
# 76 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double maxValue;
# 77 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double average;
# 78 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double stdev;
# 79 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
} Timers;
# 80 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 81 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 82 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
typedef struct TimerGlobalSt
# 83 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 84 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomRate;
# 85 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomAllRate;
# 86 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomsPerUSec;
# 87 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
} TimerGlobal;
# 88 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 89 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static Timers perfTimer[numberOfTimers];
# 90 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static TimerGlobal perfGlobal;
# 91 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 92 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStart_npm(const enum TimerHandle handle);static uint64_t getTime_npm(void);
void profileStart_quick(const enum TimerHandle handle); void profileStart(const enum TimerHandle handle);static uint64_t getTime_quick(void); static uint64_t getTime(void);
void profileStart_resumable(const enum TimerHandle handle)
# 93 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&profileStart), "profileStart", &____must_manage_profileStart, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 94 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_0: perfTimer[handle].start = ({ calling_npm("getTime", 0); getTime_npm(); });
# 95 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStart", &____must_manage_profileStart, ____alias_loc_id_14, ____chimes_did_disable0, false); }
# 96 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 97 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStop_npm(const enum TimerHandle handle);
void profileStop_quick(const enum TimerHandle handle); void profileStop(const enum TimerHandle handle);
void profileStop_resumable(const enum TimerHandle handle)
# 98 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&profileStop), "profileStop", &____must_manage_profileStop, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 99 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].count += 1;
# 100 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t delta; call_lbl_0: delta = (({ calling_npm("getTime", 0); getTime_npm(); }) - perfTimer[handle].start) ;
# 101 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].total += delta;
# 102 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed += delta;
# 103 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStop", &____must_manage_profileStop, ____alias_loc_id_16, ____chimes_did_disable1, false); }
# 104 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 105 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 106 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 107 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 108 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double getElapsedTime_npm(const enum TimerHandle handle);static double getTick_npm(void);
double getElapsedTime_quick(const enum TimerHandle handle); double getElapsedTime(const enum TimerHandle handle);static double getTick_quick(void); static double getTick(void);
double getElapsedTime_resumable(const enum TimerHandle handle)
# 109 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getElapsedTime), "getElapsedTime", &____must_manage_getElapsedTime, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 110 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double etime; call_lbl_0: etime = (({ calling_npm("getTick", 0); getTick_npm(); }) * (double)perfTimer[handle].elapsed) ;
# 111 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed = 0;
# 112 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 113 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (etime); rm_stack(false, 0UL, "getElapsedTime", &____must_manage_getElapsedTime, ____alias_loc_id_17, ____chimes_did_disable2, false); return ____chimes_ret_var_0; ;
# 114 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "getElapsedTime", &____must_manage_getElapsedTime, ____alias_loc_id_17, ____chimes_did_disable2, false); }
# 115 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 116 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 117 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 118 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 119 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 120 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResults_npm(int nGlobalAtoms, int printRate);void timerStats_npm(void);static int (*____chimes_extern_func_getMyRank)(void) = getMyRank;static int (*____chimes_extern_func_getNRanks)(void) = getNRanks;static int (*____chimes_extern_func_printRank)(void) = printRank;
void printPerformanceResults_quick(int nGlobalAtoms, int printRate); void printPerformanceResults(int nGlobalAtoms, int printRate);void timerStats_quick(void); void timerStats(void);
void printPerformanceResults_resumable(int nGlobalAtoms, int printRate)
# 121 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&printPerformanceResults), "printPerformanceResults", &____must_manage_printPerformanceResults, 2, 2, (size_t)(0UL), (size_t)(0UL), "printPerformanceResults|nGlobalAtoms|0", &____must_checkpoint_printPerformanceResults_nGlobalAtoms_0, "i32", (void *)(&nGlobalAtoms), (size_t)4, 0, 0, 0, "printPerformanceResults|printRate|0", &____must_checkpoint_printPerformanceResults_printRate_0, "i32", (void *)(&printRate), (size_t)4, 0, 0, 0) ; double loopTime;
# 121 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double tick;
# 121 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
 if (____must_checkpoint_printPerformanceResults_loopTime_0 || ____must_checkpoint_printPerformanceResults_tick_0) { register_stack_vars(2, "printPerformanceResults|loopTime|0", &____must_checkpoint_printPerformanceResults_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResults|tick|0", &____must_checkpoint_printPerformanceResults_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } default: { chimes_error(); } } } ; ;
# 122 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 123 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_0: ({ calling((void*)timerStats, 0, ____alias_loc_id_1, 0UL, 0); (timerStats)(); }) ;
# 124 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 125 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_1: if (! ({ calling((void*)printRank, 1, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3, false); return; };
# 127 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 128 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 129 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_2: tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 130 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total*tick) ;
# 131 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 132 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_0; call_lbl_3: ____chimes_unroll_var_0 = ( ({ calling((void*)getMyRank, 3, ____alias_loc_id_3, 0UL, 0); (getMyRank)(); }) ) ; fprintf(stdout, "\n\nTimings for Rank %d\n", ____chimes_unroll_var_0);
# 133 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "        Timer        # Calls    Avg/Call (s)   Total (s)    %% Loop\n");
# 134 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "___________________________________________________________________\n");
# 135 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii<numberOfTimers; ++ii)
# 136 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 137 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       double totalTime; totalTime = (perfTimer[ii].total*tick) ;
# 138 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(stdout, "%-16s%12%lu     %8.4f      %8.4f    %8.2f\n",
# 140 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 timerName[ii],
# 141 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 perfTimer[ii].count,
# 142 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/(double)perfTimer[ii].count,
# 143 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime,
# 144 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/loopTime*100.0); };
# 145 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 146 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 147 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_1; call_lbl_4: ____chimes_unroll_var_1 = ( ({ calling((void*)getNRanks, 4, ____alias_loc_id_2, 0UL, 0); (getNRanks)(); }) ) ; fprintf(stdout, "\nTiming Statistics Across %d Ranks:\n", ____chimes_unroll_var_1);
# 148 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "        Timer        Rank: Min(s)       Rank: Max(s)      Avg(s)    Stdev(s)\n");
# 149 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "_____________________________________________________________________________\n");
# 150 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 151 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ++ii)
# 152 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 153 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(stdout, "%-16s%6d:%10.4f  %6d:%10.4f  %10.4f  %10.4f\n",
# 155 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            timerName[ii],
# 156 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].minRank, perfTimer[ii].minValue*tick,
# 157 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].maxRank, perfTimer[ii].maxValue*tick,
# 158 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].average*tick, perfTimer[ii].stdev*tick); };
# 159 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 160 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_0); double atomsPerTask; call_lbl_5: atomsPerTask = (nGlobalAtoms/(real_t) ({ calling((void*)getNRanks, 5, ____alias_loc_id_0, 0UL, 0); (getNRanks)(); }) ) ;
# 161 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 162 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (atomsPerTask * perfTimer[timestepTimer].count * printRate);
# 163 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomAllRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 164 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (nGlobalAtoms * perfTimer[timestepTimer].count * printRate);
# 165 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomsPerUSec = 1.0 / perfGlobal.atomAllRate;
# 166 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 167 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 168 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average atom update rate:     %6.2f us/atom/task\n", perfGlobal.atomRate);
# 169 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 170 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 171 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 172 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average all atom update rate: %6.2f us/atom\n", perfGlobal.atomAllRate);
# 173 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 174 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 175 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 176 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average atom rate:            %6.2f atoms/us\n", perfGlobal.atomsPerUSec);
# 177 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 178 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3, false); }
# 179 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 180 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResultsYaml_npm(FILE* file);
void printPerformanceResultsYaml_quick(FILE* file); void printPerformanceResultsYaml(FILE* file);
void printPerformanceResultsYaml_resumable(FILE* file)
# 181 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&printPerformanceResultsYaml), "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, 1, 1, (size_t)(378804644937150946UL), "printPerformanceResultsYaml|file|0", &____must_checkpoint_printPerformanceResultsYaml_file_0, "%struct._IO_FILE*", (void *)(&file), (size_t)8, 1, 0, 0) ; double loopTime;
# 181 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double tick;
# 181 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
 if (____must_checkpoint_printPerformanceResultsYaml_loopTime_0 || ____must_checkpoint_printPerformanceResultsYaml_tick_0) { register_stack_vars(2, "printPerformanceResultsYaml|loopTime|0", &____must_checkpoint_printPerformanceResultsYaml_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResultsYaml|tick|0", &____must_checkpoint_printPerformanceResultsYaml_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } default: { chimes_error(); } } } ; ;
# 182 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_11); call_lbl_0: if (! ({ calling((void*)printRank, 0, ____alias_loc_id_11, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4, false); return; };
# 184 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 185 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_1: tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 186 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total*tick) ;
# 187 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 188 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"\nPerformance Results:\n");
# 189 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_2; call_lbl_2: ____chimes_unroll_var_2 = ( ({ calling((void*)getNRanks, 2, ____alias_loc_id_13, 0UL, 0); (getNRanks)(); }) ) ; fprintf(file, "  TotalRanks: %d\n", ____chimes_unroll_var_2);
# 190 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  ReportingTimeUnits: seconds\n");
# 191 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_3; call_lbl_3: ____chimes_unroll_var_3 = ( ({ calling((void*)getMyRank, 3, ____alias_loc_id_12, 0UL, 0); (getMyRank)(); }) ) ; fprintf(file, "Performance Results For Rank %d:\n", ____chimes_unroll_var_3);
# 192 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 193 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 194 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 195 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 196 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
          double totalTime; totalTime = (perfTimer[ii].total*tick) ;
# 197 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 198 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    CallCount:  %lu\n", perfTimer[ii].count);
# 199 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgPerCall: %8.4f\n", totalTime/(double)perfTimer[ii].count);
# 200 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    Total:      %8.4f\n", totalTime);
# 201 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    PercentLoop: %8.2f\n", totalTime/loopTime*100);
# 202 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 203 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 204 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 205 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "Performance Results Across Ranks:\n");
# 206 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 207 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 208 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 209 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 210 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 211 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinRank: %d\n", perfTimer[ii].minRank);
# 212 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinTime: %8.4f\n", perfTimer[ii].minValue*tick);
# 213 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxRank: %d\n", perfTimer[ii].maxRank);
# 214 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxTime: %8.4f\n", perfTimer[ii].maxValue*tick);
# 215 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgTime: %8.4f\n", perfTimer[ii].average*tick);
# 216 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    StdevTime: %8.4f\n", perfTimer[ii].stdev*tick);
# 217 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 218 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 219 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 220 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"Performance Global Update Rates:\n");
# 221 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomUpdateRate:\n");
# 222 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomRate);
# 223 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom/task\n");
# 224 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AllAtomUpdateRate:\n");
# 225 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomAllRate);
# 226 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom\n");
# 227 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomRate:\n");
# 228 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomsPerUSec);
# 229 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: atoms/us\n");
# 230 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 231 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "\n");
# 232 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4, false); }
# 243 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 243 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime_resumable(void)
# 244 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&getTime), "getTime", &____must_manage_getTime, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 245 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    struct timeval ptime; ;
# 246 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t t; t = (0) ;
# 247 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   gettimeofday(&ptime, (struct timezone *)__null);
# 248 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   t = ((uint64_t)1000000)*(uint64_t)ptime.tv_sec + (uint64_t)ptime.tv_usec;
# 249 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 250 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (t); rm_stack(false, 0UL, "getTime", &____must_manage_getTime, ____alias_loc_id_15, ____chimes_did_disable5, false); return ____chimes_ret_var_1; ;
# 251 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "getTime", &____must_manage_getTime, ____alias_loc_id_15, ____chimes_did_disable5, false); }
# 252 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 253 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 254 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 255 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 256 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 257 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick_resumable(void)
# 258 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&getTick), "getTick", &____must_manage_getTick, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 259 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double seconds_per_cycle; seconds_per_cycle = (1.0e-6) ;
# 260 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (seconds_per_cycle); rm_stack(false, 0UL, "getTick", &____must_manage_getTick, ____alias_loc_id_18, ____chimes_did_disable6, false); return ____chimes_ret_var_2; ;
# 261 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "getTick", &____must_manage_getTick, ____alias_loc_id_18, ____chimes_did_disable6, false); }
# 262 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 263 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 264 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static void (*____chimes_extern_func_addDoubleParallel)(double *, double *, int) = addDoubleParallel;static void (*____chimes_extern_func_maxRankDoubleParallel)(struct RankReduceDataSt *, struct RankReduceDataSt *, int) = maxRankDoubleParallel;static void (*____chimes_extern_func_minRankDoubleParallel)(struct RankReduceDataSt *, struct RankReduceDataSt *, int) = minRankDoubleParallel;
void timerStats_resumable(void)
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&timerStats), "timerStats", &____must_manage_timerStats, 0, 0) ; RankReduceData reduceRecvBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
RankReduceData reduceSendBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double recvBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double sendBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
 if (____must_checkpoint_timerStats_reduceRecvBuf_0 || ____must_checkpoint_timerStats_reduceSendBuf_0 || ____must_checkpoint_timerStats_recvBuf_0 || ____must_checkpoint_timerStats_sendBuf_0) { register_stack_vars(4, "timerStats|reduceRecvBuf|0", &____must_checkpoint_timerStats_reduceRecvBuf_0, "[11 x %struct.RankReduceDataSt]", (void *)(reduceRecvBuf), (size_t)176, 0, 0, 0, "timerStats|reduceSendBuf|0", &____must_checkpoint_timerStats_reduceSendBuf_0, "[11 x %struct.RankReduceDataSt]", (void *)(reduceSendBuf), (size_t)176, 0, 0, 0, "timerStats|recvBuf|0", &____must_checkpoint_timerStats_recvBuf_0, "[11 x double]", (void *)(recvBuf), (size_t)88, 0, 0, 0, "timerStats|sendBuf|0", &____must_checkpoint_timerStats_sendBuf_0, "[11 x double]", (void *)(sendBuf), (size_t)88, 0, 0, 0); } if (____chimes_replaying) { goto lbl_0; } ; ;
# 266 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     ;
# 267 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 268 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 269 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ;ii < numberOfTimers; ii++) { sendBuf[ii] = (double)perfTimer[ii].total; } };
# 271 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_0: ({ calling((void*)addDoubleParallel, 0, ____alias_loc_id_9, 0UL, 3, (size_t)(378804644937150517UL), (size_t)(378804644937150518UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 272 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 273 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_0: int ii; if (____must_checkpoint_timerStats_ii_1 != 0) { register_stack_var("timerStats|ii|1", &____must_checkpoint_timerStats_ii_1, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_1; } for ( ii = (0) ;ii < numberOfTimers; ii++) { alias_group_changed(____alias_loc_id_10); call_lbl_1: perfTimer[ii].average = recvBuf[ii] / (double) ({ calling((void*)getNRanks, 1, ____alias_loc_id_10, 0UL, 0); (getNRanks)(); }) ; } };
# 275 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 276 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 277 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 278 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       ;
# 279 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_1: int ii; if (____must_checkpoint_timerStats_ii_2 != 0) { register_stack_var("timerStats|ii|2", &____must_checkpoint_timerStats_ii_2, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_2; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 280 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 281 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].val = (double)perfTimer[ii].total;
# 282 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_2: reduceSendBuf[ii].rank = ({ calling((void*)getMyRank, 2, ____alias_loc_id_8, 0UL, 0); (getMyRank)(); }) ;
# 283 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 284 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_3: ({ calling((void*)minRankDoubleParallel, 3, ____alias_loc_id_7, 0UL, 3, (size_t)(378804644937150521UL), (size_t)(378804644937150522UL), (size_t)(0UL)); (minRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 285 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 286 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 287 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minValue = reduceRecvBuf[ii].val;
# 288 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minRank = reduceRecvBuf[ii].rank;
# 289 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 290 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_4: ({ calling((void*)maxRankDoubleParallel, 4, ____alias_loc_id_6, 0UL, 3, (size_t)(378804644937150521UL), (size_t)(378804644937150522UL), (size_t)(0UL)); (maxRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 291 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 292 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 293 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxValue = reduceRecvBuf[ii].val;
# 294 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxRank = reduceRecvBuf[ii].rank;
# 295 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 296 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 297 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 298 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 299 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 300 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       double temp; temp = ((double)perfTimer[ii].total - perfTimer[ii].average) ;
# 301 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      sendBuf[ii] = temp * temp;
# 302 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 303 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_5: ({ calling((void*)addDoubleParallel, 5, ____alias_loc_id_4, 0UL, 3, (size_t)(378804644937150517UL), (size_t)(378804644937150518UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 304 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_2: int ii; if (____must_checkpoint_timerStats_ii_6 != 0) { register_stack_var("timerStats|ii|6", &____must_checkpoint_timerStats_ii_6, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } default: { chimes_error(); } } } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 305 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 306 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        int ____chimes_unroll_var_4; call_lbl_6: ____chimes_unroll_var_4 = ( ({ calling((void*)getNRanks, 6, ____alias_loc_id_5, 0UL, 0); (getNRanks)(); }) ) ; perfTimer[ii].stdev = sqrt(recvBuf[ii] / (double) ____chimes_unroll_var_4);
# 307 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 308 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "timerStats", &____must_manage_timerStats, ____alias_loc_id_20, ____chimes_did_disable7, false); }
# 92 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStart_quick(const enum TimerHandle handle)
# 93 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&profileStart), "profileStart", &____must_manage_profileStart, 1, 0, (size_t)(0UL)) ; ; ;
# 94 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_0: perfTimer[handle].start = ({ calling_npm("getTime", 0); getTime_npm(); });
# 95 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStart", &____must_manage_profileStart, ____alias_loc_id_14, ____chimes_did_disable0, false); }

void profileStart(const enum TimerHandle handle) { (____chimes_replaying ? profileStart_resumable(handle) : profileStart_quick(handle)); }
# 97 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStop_quick(const enum TimerHandle handle)
# 98 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&profileStop), "profileStop", &____must_manage_profileStop, 1, 0, (size_t)(0UL)) ; ; ;
# 99 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].count += 1;
# 100 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t delta; call_lbl_0: delta = (({ calling_npm("getTime", 0); getTime_npm(); }) - perfTimer[handle].start) ;
# 101 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].total += delta;
# 102 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed += delta;
# 103 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStop", &____must_manage_profileStop, ____alias_loc_id_16, ____chimes_did_disable1, false); }

void profileStop(const enum TimerHandle handle) { (____chimes_replaying ? profileStop_resumable(handle) : profileStop_quick(handle)); }
# 108 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double getElapsedTime_quick(const enum TimerHandle handle)
# 109 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getElapsedTime), "getElapsedTime", &____must_manage_getElapsedTime, 1, 0, (size_t)(0UL)) ; ; ;
# 110 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double etime; call_lbl_0: etime = (({ calling_npm("getTick", 0); getTick_npm(); }) * (double)perfTimer[handle].elapsed) ;
# 111 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed = 0;
# 112 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 113 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (etime); rm_stack(false, 0UL, "getElapsedTime", &____must_manage_getElapsedTime, ____alias_loc_id_17, ____chimes_did_disable2, false); return ____chimes_ret_var_0; ;
# 114 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "getElapsedTime", &____must_manage_getElapsedTime, ____alias_loc_id_17, ____chimes_did_disable2, false); }

double getElapsedTime(const enum TimerHandle handle) { return (____chimes_replaying ? getElapsedTime_resumable(handle) : getElapsedTime_quick(handle)); }
# 120 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResults_quick(int nGlobalAtoms, int printRate)
# 121 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&printPerformanceResults), "printPerformanceResults", &____must_manage_printPerformanceResults, 2, 2, (size_t)(0UL), (size_t)(0UL), "printPerformanceResults|nGlobalAtoms|0", &____must_checkpoint_printPerformanceResults_nGlobalAtoms_0, "i32", (void *)(&nGlobalAtoms), (size_t)4, 0, 0, 0, "printPerformanceResults|printRate|0", &____must_checkpoint_printPerformanceResults_printRate_0, "i32", (void *)(&printRate), (size_t)4, 0, 0, 0) ; double loopTime;
# 121 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double tick;
# 121 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
 if (____must_checkpoint_printPerformanceResults_loopTime_0 || ____must_checkpoint_printPerformanceResults_tick_0) { register_stack_vars(2, "printPerformanceResults|loopTime|0", &____must_checkpoint_printPerformanceResults_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResults|tick|0", &____must_checkpoint_printPerformanceResults_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } ; ;
# 122 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 123 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_0: ({ calling((void*)timerStats, 0, ____alias_loc_id_1, 0UL, 0); timerStats_quick(); }) ;
# 124 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 125 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_1: if (! ({ calling((void*)printRank, 1, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3, false); return; };
# 127 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 128 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 129 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_2: tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 130 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total*tick) ;
# 131 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 132 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_0; call_lbl_3: ____chimes_unroll_var_0 = ( ({ calling((void*)getMyRank, 3, ____alias_loc_id_3, 0UL, 0); (getMyRank)(); }) ) ; fprintf(stdout, "\n\nTimings for Rank %d\n", ____chimes_unroll_var_0);
# 133 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "        Timer        # Calls    Avg/Call (s)   Total (s)    %% Loop\n");
# 134 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "___________________________________________________________________\n");
# 135 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii<numberOfTimers; ++ii)
# 136 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 137 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       double totalTime; totalTime = (perfTimer[ii].total*tick) ;
# 138 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(stdout, "%-16s%12%lu     %8.4f      %8.4f    %8.2f\n",
# 140 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 timerName[ii],
# 141 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 perfTimer[ii].count,
# 142 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/(double)perfTimer[ii].count,
# 143 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime,
# 144 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/loopTime*100.0); };
# 145 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 146 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 147 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_1; call_lbl_4: ____chimes_unroll_var_1 = ( ({ calling((void*)getNRanks, 4, ____alias_loc_id_2, 0UL, 0); (getNRanks)(); }) ) ; fprintf(stdout, "\nTiming Statistics Across %d Ranks:\n", ____chimes_unroll_var_1);
# 148 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "        Timer        Rank: Min(s)       Rank: Max(s)      Avg(s)    Stdev(s)\n");
# 149 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "_____________________________________________________________________________\n");
# 150 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 151 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ++ii)
# 152 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 153 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(stdout, "%-16s%6d:%10.4f  %6d:%10.4f  %10.4f  %10.4f\n",
# 155 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            timerName[ii],
# 156 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].minRank, perfTimer[ii].minValue*tick,
# 157 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].maxRank, perfTimer[ii].maxValue*tick,
# 158 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].average*tick, perfTimer[ii].stdev*tick); };
# 159 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 160 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_0); double atomsPerTask; call_lbl_5: atomsPerTask = (nGlobalAtoms/(real_t) ({ calling((void*)getNRanks, 5, ____alias_loc_id_0, 0UL, 0); (getNRanks)(); }) ) ;
# 161 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 162 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (atomsPerTask * perfTimer[timestepTimer].count * printRate);
# 163 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomAllRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 164 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (nGlobalAtoms * perfTimer[timestepTimer].count * printRate);
# 165 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomsPerUSec = 1.0 / perfGlobal.atomAllRate;
# 166 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 167 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 168 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average atom update rate:     %6.2f us/atom/task\n", perfGlobal.atomRate);
# 169 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 170 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 171 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 172 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average all atom update rate: %6.2f us/atom\n", perfGlobal.atomAllRate);
# 173 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 174 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 175 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 176 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average atom rate:            %6.2f atoms/us\n", perfGlobal.atomsPerUSec);
# 177 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 178 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3, false); }

void printPerformanceResults(int nGlobalAtoms, int printRate) { (____chimes_replaying ? printPerformanceResults_resumable(nGlobalAtoms, printRate) : printPerformanceResults_quick(nGlobalAtoms, printRate)); }
# 180 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResultsYaml_quick(FILE* file)
# 181 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&printPerformanceResultsYaml), "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, 1, 1, (size_t)(378804644937150946UL), "printPerformanceResultsYaml|file|0", &____must_checkpoint_printPerformanceResultsYaml_file_0, "%struct._IO_FILE*", (void *)(&file), (size_t)8, 1, 0, 0) ; double loopTime;
# 181 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double tick;
# 181 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
 if (____must_checkpoint_printPerformanceResultsYaml_loopTime_0 || ____must_checkpoint_printPerformanceResultsYaml_tick_0) { register_stack_vars(2, "printPerformanceResultsYaml|loopTime|0", &____must_checkpoint_printPerformanceResultsYaml_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResultsYaml|tick|0", &____must_checkpoint_printPerformanceResultsYaml_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } ; ;
# 182 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_11); call_lbl_0: if (! ({ calling((void*)printRank, 0, ____alias_loc_id_11, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4, false); return; };
# 184 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 185 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_1: tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 186 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total*tick) ;
# 187 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 188 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"\nPerformance Results:\n");
# 189 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_2; call_lbl_2: ____chimes_unroll_var_2 = ( ({ calling((void*)getNRanks, 2, ____alias_loc_id_13, 0UL, 0); (getNRanks)(); }) ) ; fprintf(file, "  TotalRanks: %d\n", ____chimes_unroll_var_2);
# 190 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  ReportingTimeUnits: seconds\n");
# 191 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_3; call_lbl_3: ____chimes_unroll_var_3 = ( ({ calling((void*)getMyRank, 3, ____alias_loc_id_12, 0UL, 0); (getMyRank)(); }) ) ; fprintf(file, "Performance Results For Rank %d:\n", ____chimes_unroll_var_3);
# 192 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 193 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 194 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 195 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 196 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
          double totalTime; totalTime = (perfTimer[ii].total*tick) ;
# 197 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 198 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    CallCount:  %lu\n", perfTimer[ii].count);
# 199 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgPerCall: %8.4f\n", totalTime/(double)perfTimer[ii].count);
# 200 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    Total:      %8.4f\n", totalTime);
# 201 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    PercentLoop: %8.2f\n", totalTime/loopTime*100);
# 202 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 203 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 204 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 205 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "Performance Results Across Ranks:\n");
# 206 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 207 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 208 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 209 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 210 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 211 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinRank: %d\n", perfTimer[ii].minRank);
# 212 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinTime: %8.4f\n", perfTimer[ii].minValue*tick);
# 213 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxRank: %d\n", perfTimer[ii].maxRank);
# 214 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxTime: %8.4f\n", perfTimer[ii].maxValue*tick);
# 215 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgTime: %8.4f\n", perfTimer[ii].average*tick);
# 216 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    StdevTime: %8.4f\n", perfTimer[ii].stdev*tick);
# 217 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 218 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 219 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 220 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"Performance Global Update Rates:\n");
# 221 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomUpdateRate:\n");
# 222 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomRate);
# 223 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom/task\n");
# 224 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AllAtomUpdateRate:\n");
# 225 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomAllRate);
# 226 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom\n");
# 227 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomRate:\n");
# 228 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomsPerUSec);
# 229 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: atoms/us\n");
# 230 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 231 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "\n");
# 232 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4, false); }

void printPerformanceResultsYaml(FILE* file) { (____chimes_replaying ? printPerformanceResultsYaml_resumable(file) : printPerformanceResultsYaml_quick(file)); }
# 243 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime_quick(void)
# 244 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&getTime), "getTime", &____must_manage_getTime, 0, 0) ; ; ;
# 245 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    struct timeval ptime; ;
# 246 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t t; t = (0) ;
# 247 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   gettimeofday(&ptime, (struct timezone *)__null);
# 248 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   t = ((uint64_t)1000000)*(uint64_t)ptime.tv_sec + (uint64_t)ptime.tv_usec;
# 249 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 250 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (t); rm_stack(false, 0UL, "getTime", &____must_manage_getTime, ____alias_loc_id_15, ____chimes_did_disable5, false); return ____chimes_ret_var_1; ;
# 251 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "getTime", &____must_manage_getTime, ____alias_loc_id_15, ____chimes_did_disable5, false); }

static uint64_t getTime(void) { return (____chimes_replaying ? getTime_resumable() : getTime_quick()); }
# 257 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick_quick(void)
# 258 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&getTick), "getTick", &____must_manage_getTick, 0, 0) ; ; ;
# 259 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double seconds_per_cycle; seconds_per_cycle = (1.0e-6) ;
# 260 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (seconds_per_cycle); rm_stack(false, 0UL, "getTick", &____must_manage_getTick, ____alias_loc_id_18, ____chimes_did_disable6, false); return ____chimes_ret_var_2; ;
# 261 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "getTick", &____must_manage_getTick, ____alias_loc_id_18, ____chimes_did_disable6, false); }

static double getTick(void) { return (____chimes_replaying ? getTick_resumable() : getTick_quick()); }
# 264 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void timerStats_quick(void)
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&timerStats), "timerStats", &____must_manage_timerStats, 0, 0) ; RankReduceData reduceRecvBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
RankReduceData reduceSendBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double recvBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double sendBuf[11];
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
 if (____must_checkpoint_timerStats_reduceRecvBuf_0 || ____must_checkpoint_timerStats_reduceSendBuf_0 || ____must_checkpoint_timerStats_recvBuf_0 || ____must_checkpoint_timerStats_sendBuf_0) { register_stack_vars(4, "timerStats|reduceRecvBuf|0", &____must_checkpoint_timerStats_reduceRecvBuf_0, "[11 x %struct.RankReduceDataSt]", (void *)(reduceRecvBuf), (size_t)176, 0, 0, 0, "timerStats|reduceSendBuf|0", &____must_checkpoint_timerStats_reduceSendBuf_0, "[11 x %struct.RankReduceDataSt]", (void *)(reduceSendBuf), (size_t)176, 0, 0, 0, "timerStats|recvBuf|0", &____must_checkpoint_timerStats_recvBuf_0, "[11 x double]", (void *)(recvBuf), (size_t)88, 0, 0, 0, "timerStats|sendBuf|0", &____must_checkpoint_timerStats_sendBuf_0, "[11 x double]", (void *)(sendBuf), (size_t)88, 0, 0, 0); } ; ;
# 266 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     ;
# 267 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 268 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 269 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ;ii < numberOfTimers; ii++) { sendBuf[ii] = (double)perfTimer[ii].total; } };
# 271 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_0: ({ calling((void*)addDoubleParallel, 0, ____alias_loc_id_9, 0UL, 3, (size_t)(378804644937150517UL), (size_t)(378804644937150518UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 272 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 273 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_0: int ii; if (____must_checkpoint_timerStats_ii_1 != 0) { register_stack_var("timerStats|ii|1", &____must_checkpoint_timerStats_ii_1, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ;ii < numberOfTimers; ii++) { alias_group_changed(____alias_loc_id_10); call_lbl_1: perfTimer[ii].average = recvBuf[ii] / (double) ({ calling((void*)getNRanks, 1, ____alias_loc_id_10, 0UL, 0); (getNRanks)(); }) ; } };
# 275 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 276 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 277 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 278 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       ;
# 279 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_1: int ii; if (____must_checkpoint_timerStats_ii_2 != 0) { register_stack_var("timerStats|ii|2", &____must_checkpoint_timerStats_ii_2, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 280 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 281 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].val = (double)perfTimer[ii].total;
# 282 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_2: reduceSendBuf[ii].rank = ({ calling((void*)getMyRank, 2, ____alias_loc_id_8, 0UL, 0); (getMyRank)(); }) ;
# 283 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 284 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_3: ({ calling((void*)minRankDoubleParallel, 3, ____alias_loc_id_7, 0UL, 3, (size_t)(378804644937150521UL), (size_t)(378804644937150522UL), (size_t)(0UL)); (minRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 285 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 286 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 287 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minValue = reduceRecvBuf[ii].val;
# 288 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minRank = reduceRecvBuf[ii].rank;
# 289 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 290 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_4: ({ calling((void*)maxRankDoubleParallel, 4, ____alias_loc_id_6, 0UL, 3, (size_t)(378804644937150521UL), (size_t)(378804644937150522UL), (size_t)(0UL)); (maxRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 291 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 292 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 293 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxValue = reduceRecvBuf[ii].val;
# 294 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxRank = reduceRecvBuf[ii].rank;
# 295 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 296 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 297 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 298 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 299 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 300 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       double temp; temp = ((double)perfTimer[ii].total - perfTimer[ii].average) ;
# 301 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      sendBuf[ii] = temp * temp;
# 302 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 303 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_5: ({ calling((void*)addDoubleParallel, 5, ____alias_loc_id_4, 0UL, 3, (size_t)(378804644937150517UL), (size_t)(378804644937150518UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 304 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_2: int ii; if (____must_checkpoint_timerStats_ii_6 != 0) { register_stack_var("timerStats|ii|6", &____must_checkpoint_timerStats_ii_6, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 305 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 306 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        int ____chimes_unroll_var_4; call_lbl_6: ____chimes_unroll_var_4 = ( ({ calling((void*)getNRanks, 6, ____alias_loc_id_5, 0UL, 0); (getNRanks)(); }) ) ; perfTimer[ii].stdev = sqrt(recvBuf[ii] / (double) ____chimes_unroll_var_4);
# 307 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 308 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "timerStats", &____must_manage_timerStats, ____alias_loc_id_20, ____chimes_did_disable7, false); }

void timerStats(void) { (____chimes_replaying ? timerStats_resumable() : timerStats_quick()); }
# 92 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStart_npm(const enum TimerHandle handle)
# 93 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 94 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].start = getTime_npm();
# 95 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 97 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStop_npm(const enum TimerHandle handle)
# 98 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 99 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].count += 1;
# 100 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t delta = getTime_npm() - perfTimer[handle].start;
# 101 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].total += delta;
# 102 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed += delta;
# 103 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 108 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double getElapsedTime_npm(const enum TimerHandle handle)
# 109 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 110 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double etime = getTick_npm() * (double)perfTimer[handle].elapsed;
# 111 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed = 0;
# 112 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 113 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double ____chimes_ret_var_0; ____chimes_ret_var_0 = (etime); return ____chimes_ret_var_0; ;
# 114 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 120 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResults_npm(int nGlobalAtoms, int printRate)
# 121 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 122 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 123 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   timerStats_npm();
# 124 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 125 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   if (!(*____chimes_extern_func_printRank)()) {return; };
# 127 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 128 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 129 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double tick = getTick_npm();
# 130 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double loopTime = perfTimer[loopTimer].total*tick;
# 131 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 132 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_0 = (*____chimes_extern_func_getMyRank)(); fprintf(stdout, "\n\nTimings for Rank %d\n", ____chimes_unroll_var_0);
# 133 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "        Timer        # Calls    Avg/Call (s)   Total (s)    %% Loop\n");
# 134 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "___________________________________________________________________\n");
# 135 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii=0; ii<numberOfTimers; ++ii)
# 136 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 137 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      double totalTime = perfTimer[ii].total*tick;
# 138 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(stdout, "%-16s%12%lu     %8.4f      %8.4f    %8.2f\n",
# 140 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 timerName[ii],
# 141 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 perfTimer[ii].count,
# 142 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/(double)perfTimer[ii].count,
# 143 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime,
# 144 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/loopTime*100.0); };
# 145 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 146 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 147 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_1 = (*____chimes_extern_func_getNRanks)(); fprintf(stdout, "\nTiming Statistics Across %d Ranks:\n", ____chimes_unroll_var_1);
# 148 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "        Timer        Rank: Min(s)       Rank: Max(s)      Avg(s)    Stdev(s)\n");
# 149 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "_____________________________________________________________________________\n");
# 150 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 151 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ++ii)
# 152 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 153 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(stdout, "%-16s%6d:%10.4f  %6d:%10.4f  %10.4f  %10.4f\n",
# 155 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            timerName[ii],
# 156 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].minRank, perfTimer[ii].minValue*tick,
# 157 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].maxRank, perfTimer[ii].maxValue*tick,
# 158 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].average*tick, perfTimer[ii].stdev*tick); };
# 159 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 160 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomsPerTask = nGlobalAtoms/(real_t)(*____chimes_extern_func_getNRanks)();
# 161 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 162 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (atomsPerTask * perfTimer[timestepTimer].count * printRate);
# 163 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomAllRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 164 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (nGlobalAtoms * perfTimer[timestepTimer].count * printRate);
# 165 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomsPerUSec = 1.0 / perfGlobal.atomAllRate;
# 166 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 167 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 168 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average atom update rate:     %6.2f us/atom/task\n", perfGlobal.atomRate);
# 169 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 170 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 171 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 172 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average all atom update rate: %6.2f us/atom\n", perfGlobal.atomAllRate);
# 173 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 174 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 175 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "\n---------------------------------------------------\n");
# 176 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, " Average atom rate:            %6.2f atoms/us\n", perfGlobal.atomsPerUSec);
# 177 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(stdout, "---------------------------------------------------\n\n");
# 178 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 180 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResultsYaml_npm(FILE* file)
# 181 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 182 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   if (! (*____chimes_extern_func_printRank)()) {return; };
# 184 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 185 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double tick = getTick_npm();
# 186 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double loopTime = perfTimer[loopTimer].total*tick;
# 187 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 188 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"\nPerformance Results:\n");
# 189 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_2 = (*____chimes_extern_func_getNRanks)(); fprintf(file, "  TotalRanks: %d\n", ____chimes_unroll_var_2);
# 190 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  ReportingTimeUnits: seconds\n");
# 191 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_3 = (*____chimes_extern_func_getMyRank)(); fprintf(file, "Performance Results For Rank %d:\n", ____chimes_unroll_var_3);
# 192 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 193 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 194 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 195 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 196 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         double totalTime = perfTimer[ii].total*tick;
# 197 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 198 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    CallCount:  %lu\n", perfTimer[ii].count);
# 199 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgPerCall: %8.4f\n", totalTime/(double)perfTimer[ii].count);
# 200 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    Total:      %8.4f\n", totalTime);
# 201 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    PercentLoop: %8.2f\n", totalTime/loopTime*100);
# 202 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 203 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 204 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 205 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "Performance Results Across Ranks:\n");
# 206 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 207 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 208 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 209 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 210 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 211 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinRank: %d\n", perfTimer[ii].minRank);
# 212 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinTime: %8.4f\n", perfTimer[ii].minValue*tick);
# 213 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxRank: %d\n", perfTimer[ii].maxRank);
# 214 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxTime: %8.4f\n", perfTimer[ii].maxValue*tick);
# 215 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgTime: %8.4f\n", perfTimer[ii].average*tick);
# 216 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    StdevTime: %8.4f\n", perfTimer[ii].stdev*tick);
# 217 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 218 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 219 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 220 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"Performance Global Update Rates:\n");
# 221 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomUpdateRate:\n");
# 222 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomRate);
# 223 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom/task\n");
# 224 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AllAtomUpdateRate:\n");
# 225 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomAllRate);
# 226 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom\n");
# 227 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomRate:\n");
# 228 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomsPerUSec);
# 229 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: atoms/us\n");
# 230 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 231 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "\n");
# 232 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 243 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime_npm(void)
# 244 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 245 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   struct timeval ptime;
# 246 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t t = 0;
# 247 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   gettimeofday(&ptime, (struct timezone *)__null);
# 248 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   t = ((uint64_t)1000000)*(uint64_t)ptime.tv_sec + (uint64_t)ptime.tv_usec;
# 249 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 250 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t ____chimes_ret_var_1; ____chimes_ret_var_1 = (t); return ____chimes_ret_var_1; ;
# 251 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 257 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick_npm(void)
# 258 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 259 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double seconds_per_cycle = 1.0e-6;
# 260 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double ____chimes_ret_var_2; ____chimes_ret_var_2 = (seconds_per_cycle); return ____chimes_ret_var_2; ;
# 261 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 264 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void timerStats_npm(void)
# 265 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 266 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double sendBuf[numberOfTimers], recvBuf[numberOfTimers];
# 267 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 268 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 269 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0;ii < numberOfTimers; ii++) { sendBuf[ii] = (double)perfTimer[ii].total; };
# 271 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_addDoubleParallel)(sendBuf, recvBuf, numberOfTimers);
# 272 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 273 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0;ii < numberOfTimers; ii++) { perfTimer[ii].average = recvBuf[ii] / (double)(*____chimes_extern_func_getNRanks)(); };
# 275 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 276 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 277 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 278 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   RankReduceData reduceSendBuf[numberOfTimers], reduceRecvBuf[numberOfTimers];
# 279 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 280 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 281 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].val = (double)perfTimer[ii].total;
# 282 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].rank = (*____chimes_extern_func_getMyRank)();
# 283 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 284 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_minRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers);
# 285 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 286 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 287 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minValue = reduceRecvBuf[ii].val;
# 288 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minRank = reduceRecvBuf[ii].rank;
# 289 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 290 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_maxRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers);
# 291 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 292 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 293 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxValue = reduceRecvBuf[ii].val;
# 294 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxRank = reduceRecvBuf[ii].rank;
# 295 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 296 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 297 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 298 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 299 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 300 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      double temp = (double)perfTimer[ii].total - perfTimer[ii].average;
# 301 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      sendBuf[ii] = temp * temp;
# 302 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 303 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_addDoubleParallel)(sendBuf, recvBuf, numberOfTimers);
# 304 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 305 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 306 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       int ____chimes_unroll_var_4 = (*____chimes_extern_func_getNRanks)(); perfTimer[ii].stdev = sqrt(recvBuf[ii] / (double) ____chimes_unroll_var_4);
# 307 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 308 "/scratch/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}





static int module_init() {
    init_module(378804644937150185UL, 3, 8, 14, 22, 8, 6, 14, 5, 0, 7,
                           &____alias_loc_id_0, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 113UL), (378804644937150185UL + 114UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 106UL), (378804644937150185UL + 107UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (unsigned)0, (378804644937150185UL + 110UL), (378804644937150185UL + 111UL), (378804644937150185UL + 112UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 108UL), (378804644937150185UL + 109UL),
                           &____alias_loc_id_4, (unsigned)5, (unsigned)0, (unsigned)1, (378804644937150185UL + 332UL), (378804644937150185UL + 340UL), (378804644937150185UL + 341UL), (378804644937150185UL + 342UL), (378804644937150185UL + 786UL), "addDoubleParallel", (unsigned)2, (378804644937150185UL + 332UL), (378804644937150185UL + 333UL),
                           &____alias_loc_id_5, (unsigned)3, (unsigned)0, (unsigned)0, (378804644937150185UL + 343UL), (378804644937150185UL + 344UL), (378804644937150185UL + 786UL),
                           &____alias_loc_id_6, (unsigned)2, (unsigned)0, (unsigned)1, (378804644937150185UL + 339UL), (378804644937150185UL + 786UL), "maxRankDoubleParallel", (unsigned)2, (378804644937150185UL + 336UL), (378804644937150185UL + 337UL),
                           &____alias_loc_id_7, (unsigned)4, (unsigned)0, (unsigned)1, (378804644937150185UL + 335UL), (378804644937150185UL + 336UL), (378804644937150185UL + 338UL), (378804644937150185UL + 786UL), "minRankDoubleParallel", (unsigned)2, (378804644937150185UL + 336UL), (378804644937150185UL + 337UL),
                           &____alias_loc_id_8, (unsigned)4, (unsigned)0, (unsigned)0, (378804644937150185UL + 335UL), (378804644937150185UL + 336UL), (378804644937150185UL + 338UL), (378804644937150185UL + 786UL),
                           &____alias_loc_id_9, (unsigned)2, (unsigned)0, (unsigned)1, (378804644937150185UL + 332UL), (378804644937150185UL + 334UL), "addDoubleParallel", (unsigned)2, (378804644937150185UL + 332UL), (378804644937150185UL + 333UL),
                            &____alias_loc_id_10, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 335UL), (378804644937150185UL + 786UL),
                            &____alias_loc_id_11, (unsigned)1, (unsigned)0, (unsigned)0, (378804644937150185UL + 557UL),
                            &____alias_loc_id_12, (unsigned)1, (unsigned)0, (unsigned)0, (378804644937150185UL + 560UL),
                            &____alias_loc_id_13, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 558UL), (378804644937150185UL + 559UL),
                            &____alias_loc_id_14, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 1UL), (378804644937150185UL + 786UL),
                            &____alias_loc_id_15, (unsigned)3, (unsigned)0, (unsigned)0, (378804644937150185UL + 14UL), (378804644937150185UL + 15UL), (378804644937150185UL + 16UL),
                            &____alias_loc_id_16, (unsigned)3, (unsigned)0, (unsigned)0, (378804644937150185UL + 33UL), (378804644937150185UL + 34UL), (378804644937150185UL + 786UL),
                            &____alias_loc_id_17, (unsigned)4, (unsigned)0, (unsigned)0, (378804644937150185UL + 71UL), (378804644937150185UL + 72UL), (378804644937150185UL + 73UL), (378804644937150185UL + 786UL),
                            &____alias_loc_id_18, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 97UL), (378804644937150185UL + 98UL),
                            &____alias_loc_id_19, (unsigned)2, (unsigned)0, (unsigned)0, (378804644937150185UL + 115UL), (378804644937150185UL + 796UL),
                            &____alias_loc_id_20, (unsigned)3, (unsigned)0, (unsigned)0, (378804644937150185UL + 343UL), (378804644937150185UL + 344UL), (378804644937150185UL + 786UL),
                            &____alias_loc_id_21, (unsigned)4, (unsigned)0, (unsigned)0, (378804644937150185UL + 561UL), (378804644937150185UL + 562UL), (378804644937150185UL + 563UL), (378804644937150185UL + 564UL),
                            "printPerformanceResults", 0, "_Z23printPerformanceResultsii", "_Z27printPerformanceResults_npmii", 4, &____alias_loc_id_0, &____alias_loc_id_1, &____alias_loc_id_2, &____alias_loc_id_3, 2, 0UL, 0UL, 0UL, 23, "timerStats", 0, 0UL, "printRank", 0, 0UL, "getTick", 0, 0UL, "getMyRank", 0, 0UL, "fprintf", 3, (378804644937150185UL + 200UL), (378804644937150185UL + 788UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 789UL), 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 789UL), 0UL, "fprintf", 7, (378804644937150185UL + 200UL), (378804644937150185UL + 791UL), (378804644937150185UL + 171UL), 0UL, 0UL, 0UL, 0UL, 0UL, "getNRanks", 0, 0UL, "fprintf", 3, (378804644937150185UL + 200UL), (378804644937150185UL + 792UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 793UL), 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 794UL), 0UL, "fprintf", 9, (378804644937150185UL + 200UL), (378804644937150185UL + 795UL), (378804644937150185UL + 171UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "getNRanks", 0, 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 797UL), 0UL, "fprintf", 3, (378804644937150185UL + 200UL), (378804644937150185UL + 798UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 797UL), 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 797UL), 0UL, "fprintf", 3, (378804644937150185UL + 200UL), (378804644937150185UL + 800UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 797UL), 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 797UL), 0UL, "fprintf", 3, (378804644937150185UL + 200UL), (378804644937150185UL + 801UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 200UL), (378804644937150185UL + 797UL), 0UL,
                            "printPerformanceResultsYaml", 0, "_Z27printPerformanceResultsYamlP8_IO_FILE", "_Z31printPerformanceResultsYaml_npmP8_IO_FILE", 3, &____alias_loc_id_11, &____alias_loc_id_12, &____alias_loc_id_13, 1, (378804644937150185UL + 761UL), 0UL, 32, "printRank", 0, 0UL, "getTick", 0, 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 788UL), 0UL, "getNRanks", 0, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 803UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 804UL), 0UL, "getMyRank", 0, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 805UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 780UL), (378804644937150185UL + 171UL), 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 807UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 788UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 788UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 810UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 811UL), 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 780UL), (378804644937150185UL + 171UL), 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 812UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 813UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 812UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 813UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 813UL), 0UL, 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 817UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 805UL), 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 819UL), 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 810UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 821UL), 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 817UL), 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 810UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 813UL), 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 780UL), 0UL, "fprintf", 3, (378804644937150185UL + 761UL), (378804644937150185UL + 810UL), 0UL, 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 807UL), 0UL, "fprintf", 2, (378804644937150185UL + 761UL), (378804644937150185UL + 826UL), 0UL,
                            "getTime", 1, (void *)(&getTime_npm), (void *)__null, 0, 0, 0UL, 1, "gettimeofday", 2, (378804644937150185UL + 14UL), (378804644937150185UL + 827UL), 0UL,
                            "getTick", 1, (void *)(&getTick_npm), (void *)__null, 0, 0, 0UL, 0,
                            "profileStop", 0, "_Z11profileStop11TimerHandle", "_Z15profileStop_npm11TimerHandle", 0, 1, 0UL, 0UL, 1, "getTime", 0, 0UL,
                            "getElapsedTime", 0, "_Z14getElapsedTime11TimerHandle", "_Z18getElapsedTime_npm11TimerHandle", 0, 1, 0UL, 0UL, 1, "getTick", 0, 0UL,
                            "profileStart", 0, "_Z12profileStart11TimerHandle", "_Z16profileStart_npm11TimerHandle", 0, 1, 0UL, 0UL, 1, "getTime", 0, 0UL,
                            "timerStats", 1, (void *)(&timerStats_npm), (void *)__null, 7, &____alias_loc_id_10, &____alias_loc_id_4, &____alias_loc_id_5, &____alias_loc_id_6, &____alias_loc_id_7, &____alias_loc_id_8, &____alias_loc_id_9, 0, 0UL, 8, "addDoubleParallel", 3, (378804644937150185UL + 332UL), (378804644937150185UL + 333UL), 0UL, 0UL, "getNRanks", 0, 0UL, "getMyRank", 0, 0UL, "minRankDoubleParallel", 3, (378804644937150185UL + 336UL), (378804644937150185UL + 337UL), 0UL, 0UL, "maxRankDoubleParallel", 3, (378804644937150185UL + 336UL), (378804644937150185UL + 337UL), 0UL, 0UL, "addDoubleParallel", 3, (378804644937150185UL + 332UL), (378804644937150185UL + 333UL), 0UL, 0UL, "getNRanks", 0, 0UL, "sqrt", 1, 0UL, 0UL,
                               "addDoubleParallel", (void **)&(____chimes_extern_func_addDoubleParallel),
                               "getMyRank", (void **)&(____chimes_extern_func_getMyRank),
                               "getNRanks", (void **)&(____chimes_extern_func_getNRanks),
                               "maxRankDoubleParallel", (void **)&(____chimes_extern_func_maxRankDoubleParallel),
                               "minRankDoubleParallel", (void **)&(____chimes_extern_func_minRankDoubleParallel),
                               "printRank", (void **)&(____chimes_extern_func_printRank),
                           "printPerformanceResults", &(____chimes_does_checkpoint_printPerformanceResults_npm),
                           "printPerformanceResultsYaml", &(____chimes_does_checkpoint_printPerformanceResultsYaml_npm),
                           "getTime", &(____chimes_does_checkpoint_getTime_npm),
                           "getTick", &(____chimes_does_checkpoint_getTick_npm),
                           "profileStop", &(____chimes_does_checkpoint_profileStop_npm),
                           "getElapsedTime", &(____chimes_does_checkpoint_getElapsedTime_npm),
                           "profileStart", &(____chimes_does_checkpoint_profileStart_npm),
                           "timerStats", &(____chimes_does_checkpoint_timerStats_npm),
                           "addDoubleParallel", &(____chimes_does_checkpoint_addDoubleParallel_npm),
                           "getMyRank", &(____chimes_does_checkpoint_getMyRank_npm),
                           "getNRanks", &(____chimes_does_checkpoint_getNRanks_npm),
                           "maxRankDoubleParallel", &(____chimes_does_checkpoint_maxRankDoubleParallel_npm),
                           "minRankDoubleParallel", &(____chimes_does_checkpoint_minRankDoubleParallel_npm),
                           "printRank", &(____chimes_does_checkpoint_printRank_npm),
                             (378804644937150185UL + 785UL), (378804644937150185UL + 171UL),
                             (378804644937150185UL + 557UL), (378804644937150185UL + 761UL),
                             (378804644937150185UL + 787UL), (378804644937150185UL + 200UL),
                     "RankReduceDataSt", 128UL, 2, "double", (int)__builtin_offsetof (struct RankReduceDataSt, val), "int", (int)__builtin_offsetof (struct RankReduceDataSt, rank),
                     "TimerGlobalSt", 192UL, 3, "double", (int)__builtin_offsetof (struct TimerGlobalSt, atomRate), "double", (int)__builtin_offsetof (struct TimerGlobalSt, atomAllRate), "double", (int)__builtin_offsetof (struct TimerGlobalSt, atomsPerUSec),
                     "TimerHandle", 32UL, 0,
                     "TimersSt", 576UL, 10, "long unsigned int", (int)__builtin_offsetof (struct TimersSt, start), "long unsigned int", (int)__builtin_offsetof (struct TimersSt, total), "long unsigned int", (int)__builtin_offsetof (struct TimersSt, count), "long unsigned int", (int)__builtin_offsetof (struct TimersSt, elapsed), "int", (int)__builtin_offsetof (struct TimersSt, minRank), "int", (int)__builtin_offsetof (struct TimersSt, maxRank), "double", (int)__builtin_offsetof (struct TimersSt, minValue), "double", (int)__builtin_offsetof (struct TimersSt, maxValue), "double", (int)__builtin_offsetof (struct TimersSt, average), "double", (int)__builtin_offsetof (struct TimersSt, stdev),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "printPerformanceResults", "_Z23printPerformanceResultsii", 0, 6, "timerStats", "printRank", "getTick", "getMyRank", "getNRanks", "getNRanks",
                             "printPerformanceResultsYaml", "_Z27printPerformanceResultsYamlP8_IO_FILE", 0, 4, "printRank", "getTick", "getNRanks", "getMyRank",
                             "getTime", "_ZL7getTimev", 0, 0,
                             "profileStop", "_Z11profileStop11TimerHandle", 0, 1, "getTime",
                             "getTick", "_ZL7getTickv", 0, 0,
                             "getElapsedTime", "_Z14getElapsedTime11TimerHandle", 0, 1, "getTick",
                             "profileStart", "_Z12profileStart11TimerHandle", 0, 1, "getTime",
                             "timerStats", "_ZL10timerStatsv", 0, 7, "addDoubleParallel", "getNRanks", "getMyRank", "minRankDoubleParallel", "maxRankDoubleParallel", "addDoubleParallel", "getNRanks",
                        "printPerformanceResults|nGlobalAtoms|0", 4, "timerStats", "printRank", "getNRanks", "getMyRank",
                        "printPerformanceResults|printRate|0", 4, "timerStats", "printRank", "getNRanks", "getMyRank",
                        "printPerformanceResults|tick|0", 2, "getNRanks", "getMyRank",
                        "printPerformanceResults|loopTime|0", 1, "getMyRank",
                        "timerStats|sendBuf|0", 1, "timerStats",
                        "timerStats|recvBuf|0", 5, "minRankDoubleParallel", "maxRankDoubleParallel", "getNRanks", "getMyRank", "addDoubleParallel",
                        "timerStats|ii|1", 1, "getNRanks",
                        "timerStats|reduceSendBuf|0", 1, "timerStats",
                        "timerStats|reduceRecvBuf|0", 5, "minRankDoubleParallel", "maxRankDoubleParallel", "getNRanks", "getMyRank", "addDoubleParallel",
                        "timerStats|ii|2", 1, "getMyRank",
                        "timerStats|ii|6", 1, "getNRanks",
                        "printPerformanceResultsYaml|file|0", 3, "printRank", "getNRanks", "getMyRank",
                        "printPerformanceResultsYaml|tick|0", 2, "getNRanks", "getMyRank",
                        "printPerformanceResultsYaml|loopTime|0", 2, "getNRanks", "getMyRank",
        "getTime", 0UL, (int)0,
        "getTime", 0UL, (int)0,
        "getTick", 0UL, (int)0,
        "getTick", 0UL, (int)0,
        "getTick", 0UL, (int)0);
    register_global_var("global|timerName", "[11 x i8*]", (void *)(&timerName), 88, 0, 0, 0UL, 0);
    register_global_var("global|perfTimer", "[11 x %struct.TimersSt]", (void *)(&perfTimer), 792, 0, 0, 0UL, 0);
    register_global_var("global|perfGlobal", "%struct.TimerGlobalSt = type { double, double, double }", (void *)(&perfGlobal), 24, 0, 1, 0UL, 0);
    register_constant(378804644937150185UL + 0UL, (void *)((timerName)[0]), 6);
    register_constant(378804644937150185UL + 1UL, (void *)((timerName)[1]), 5);
    register_constant(378804644937150185UL + 2UL, (void *)((timerName)[2]), 9);
    register_constant(378804644937150185UL + 3UL, (void *)((timerName)[3]), 11);
    register_constant(378804644937150185UL + 4UL, (void *)((timerName)[4]), 11);
    register_constant(378804644937150185UL + 5UL, (void *)((timerName)[5]), 15);
    register_constant(378804644937150185UL + 6UL, (void *)((timerName)[6]), 13);
    register_constant(378804644937150185UL + 7UL, (void *)((timerName)[7]), 8);
    register_constant(378804644937150185UL + 8UL, (void *)((timerName)[8]), 12);
    register_constant(378804644937150185UL + 9UL, (void *)((timerName)[9]), 9);
    register_constant(378804644937150185UL + 10UL, (void *)((timerName)[10]), 11);
    return 0;
}

static const int __libchimes_module_init = module_init();
