# 1 "pairwiseAlign.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "pairwiseAlign.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_pairwiseAlign_npm = 1;
static int ____chimes_does_checkpoint_bubbleSort_both_npm = 1;
static int ____chimes_does_checkpoint_qSort_npm = 1;
static int ____chimes_does_checkpoint_bubbleSort_npm = 1;
static int ____chimes_does_checkpoint_qSort_both_npm = 1;
static int ____chimes_does_checkpoint_freeA_npm = 1;
static int ____chimes_does_checkpoint_gridInfo_npm = 1;
static int ____chimes_does_checkpoint_getSeconds_npm = 1;

static int ____must_checkpoint_pairwiseAlign_maxReports_0 = 2;
static int ____must_checkpoint_pairwiseAlign_minSeparation_0 = 2;
static int ____must_checkpoint_pairwiseAlign_sortReports_0 = 2;
static int ____must_checkpoint_pairwiseAlign_report_0 = 2;
static int ____must_checkpoint_pairwiseAlign_index_0 = 2;
static int ____must_checkpoint_pairwiseAlign_best_0 = 2;
static int ____must_checkpoint_pairwiseAlign_goodEndsI_0 = 2;
static int ____must_checkpoint_pairwiseAlign_goodEndsJ_0 = 2;
static int ____must_checkpoint_pairwiseAlign_gapFirst_0 = 2;
static int ____must_checkpoint_pairwiseAlign_gapExtend_0 = 2;
static int ____must_checkpoint_pairwiseAlign_iBeg_0 = 2;
static int ____must_checkpoint_pairwiseAlign_iEnd_0 = 2;
static int ____must_checkpoint_pairwiseAlign_jBeg_0 = 2;
static int ____must_checkpoint_pairwiseAlign_jEnd_0 = 2;
static int ____must_checkpoint_pairwiseAlign_myRow_0 = 2;
static int ____must_checkpoint_pairwiseAlign_myTaskID_0 = 2;
static int ____must_checkpoint_pairwiseAlign_threadNum_0 = 2;
static int ____must_checkpoint_pairwiseAlign_mainSeq_0 = 2;
static int ____must_checkpoint_pairwiseAlign_matchSeq_0 = 2;
static int ____must_checkpoint_pairwiseAlign_weights_0 = 2;
static int ____must_checkpoint_pairwiseAlign_goodScores_0 = 2;
static int ____must_checkpoint_pairwiseAlign_scores_0 = 2;
static int ____must_checkpoint_pairwiseAlign_V_0 = 2;
static int ____must_checkpoint_pairwiseAlign_F_0 = 2;
static int ____must_checkpoint_pairwiseAlign_llMinScore_0 = 2;
static int ____must_checkpoint_pairwiseAlign_A_0 = 2;
static int ____must_checkpoint_pairwiseAlign_beginTime_0 = 2;

static int ____must_manage_pairwiseAlign = 2;
static int ____must_manage_bubbleSort_both = 2;
static int ____must_manage_qSort = 2;
static int ____must_manage_bubbleSort = 2;
static int ____must_manage_qSort_both = 2;
static int ____must_manage_freeA = 2;
static int ____must_manage_gridInfo = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
static unsigned ____alias_loc_id_8;
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
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
# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 11 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
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



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
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
# 12 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
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
# 13 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c" 2
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



# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include-fixed/bits/mathdef.h" 1 3 4
# 55 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include-fixed/bits/mathdef.h" 3 4
typedef double float_t;

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
# 63 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
__signbitf (float __x) throw ()
{
  __extension__ union { float __f; int __i; } __u = { __f: __x };
  return __u.__i < 0;
}
extern __inline __attribute__ ((__gnu_inline__)) int
__signbit (double __x) throw ()
{
  __extension__ union { double __d; int __i[2]; } __u = { __d: __x };
  return __u.__i[0] < 0;
}

extern __inline __attribute__ ((__gnu_inline__)) int
__signbitl (long double __x) throw ()
{
  __extension__ union { long double __d; int __i[4]; } __u = { __d: __x };
  return __u.__i[0] < 0;
}
# 116 "/usr/include/bits/mathinline.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) double fdim (double __x, double __y) throw ();
extern __inline __attribute__ ((__gnu_inline__)) double
fdim (double __x, double __y) throw ()
{
  return __x <= __y ? 0 : __x - __y;
}

extern __inline __attribute__ ((__gnu_inline__)) float fdimf (float __x, float __y) throw ();
extern __inline __attribute__ ((__gnu_inline__)) float
fdimf (float __x, float __y) throw ()
{
  return __x <= __y ? 0 : __x - __y;
}
# 417 "/usr/include/math.h" 2 3 4
# 472 "/usr/include/math.h" 3 4
}
# 14 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c" 2
# 14 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"

# 1 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h" 1
# 91 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
typedef struct simmat {
  char similarity[((64) + 1)][((64) + 1)];
  char aminoAcid[(((64) + 1) + 1)];
  char *bases;
  char *codon[(((64) + 1) + 1)];
  unsigned char encode[((64) + ((64) + 1))];
  unsigned char encode_first[((64) + ((64) + 1))];
  char hyphen, star;
  int exact, similar, dissimilar, gapStart, gapExtend, matchLimit;
} SIMMATRIX_T;







typedef struct seqdat {
  unsigned char *main, *match;
  int mainLen, matchLen, maxValidation;
} SEQDATA_T;







typedef struct astr {
  SEQDATA_T *seqData;
  SIMMATRIX_T *simMatrix;
  long long **goodScores;
  int numThreads, *numReports, **goodEndsI, **goodEndsJ;
} ASTR_T;







typedef struct bstr {
  long long **bestScores;
  int numThreads, *numReports;
  int **bestStartsI, **bestStartsJ, **bestEndsI, **bestEndsJ;
  unsigned char ***bestSeqsI, ***bestSeqsJ;
} BSTR_T;







typedef struct cstr {
  long long *finalScores;
  int numReports;
  int *finalStartsI, *finalStartsJ, *finalEndsI, *finalEndsJ;
  unsigned char **finalSeqsI, **finalSeqsJ;
} CSTR_T;
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/sequenceAlignment.h"
void getUserParameters(void);

SEQDATA_T *genScalData(unsigned int, SIMMATRIX_T*, int, int, int);

SEQDATA_T *freeSeqData(SEQDATA_T*);

SIMMATRIX_T *genSimMatrix(int, int, int, int, int, int, int);

SIMMATRIX_T *freeSimMatrix(SIMMATRIX_T*);

void verifyData(SIMMATRIX_T*, SEQDATA_T*, int, int);

int gridInfo(int*, int*, int*, int*);

void qSort(int*, const int*, const int, const int);

void qSort_both(long long*, int*, const long long*, const int);

ASTR_T *pairwiseAlign(SEQDATA_T*, SIMMATRIX_T*, int, int, int);

ASTR_T *freeA(ASTR_T*);

BSTR_T *scanBackward(ASTR_T*, int, int, int);

BSTR_T *freeB(BSTR_T*);

void verifyAlignment(SIMMATRIX_T*, BSTR_T*, int);

CSTR_T *mergeAlignment(BSTR_T*, int, int);

CSTR_T *freeC(CSTR_T*);

void verifyMergeAlignment(SIMMATRIX_T*, CSTR_T*, int);

double getSeconds(void);

void dispElapsedTime(double);
# 16 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c" 2
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int gridInfo_npm(int *npRow, int *npCol, int *myRow, int *myCol);
int gridInfo_quick(int *npRow, int *npCol, int *myRow, int *myCol); int gridInfo(int *npRow, int *npCol, int *myRow, int *myCol);
int gridInfo_resumable(int *npRow, int *npCol, int *myRow, int *myCol)
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&gridInfo), "gridInfo", &____must_manage_gridInfo, 4, 0, (size_t)(7756732687571761703UL), (size_t)(7756732687571761704UL), (size_t)(7756732687571761705UL), (size_t)(7756732687571761706UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 28 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int threadNum; int numThreads; int minPer; int per; int row; int col; ;
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  threadNum = 0;
# 53 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  numThreads = 1;
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  minPer = numThreads + 2;
# 72 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 1; i <= numThreads; i++) {
# 73 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if ( (numThreads % i) == 0 ) {
# 74 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      row = i;
# 75 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      col = numThreads / i;
# 76 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      per = row + col;
# 77 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (per < minPer) {
# 78 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 *npRow = row;
# 79 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 *npCol = col;
# 80 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 minPer = per;
# 81 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 82 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 83 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( threadNum < ( (*npRow) * (*npCol) ) ) {
# 98 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myRow = threadNum / (*npCol);
# 99 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myCol = threadNum % (*npCol);
# 100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (( (*npRow) * (*npCol) )); rm_stack(false, 0UL, "gridInfo", &____must_manage_gridInfo, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  } else {
# 102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myRow = -1;
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myCol = -1;
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((-1)); rm_stack(false, 0UL, "gridInfo", &____must_manage_gridInfo, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_1; ;
# 105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "gridInfo", &____must_manage_gridInfo, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
static void bubbleSort_npm(int *b, int left, int right);
static void bubbleSort_quick(int *b, int left, int right); static void bubbleSort(int *b, int left, int right);
static
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort_resumable(int *b, int left, int right) {const int ____chimes_did_disable1 = new_stack((void *)(&bubbleSort), "bubbleSort", &____must_manage_bubbleSort, 3, 0, (size_t)(7756732687571761833UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int j; int t; ;
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = right; i >= left; i--) {
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    for (j = left+1; j <= i; j++) {
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (b[j-1] > b[j]) {
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 t = b[j-1];
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 b[j-1] = b[j];
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 b[j] = t;
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "bubbleSort", &____must_manage_bubbleSort, ____alias_loc_id_4, ____chimes_did_disable1, false); }
# 145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void qSort_npm(int *b, const int *a, const int left, const int right);
void qSort_quick(int *b, const int *a, const int left, const int right); void qSort(int *b, const int *a, const int left, const int right);
void qSort_resumable(int *b, const int *a, const int left, const int right) {const int ____chimes_did_disable2 = new_stack((void *)(&qSort), "qSort", &____must_manage_qSort, 4, 0, (size_t)(7756732687571761750UL), (size_t)(7756732687571761751UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; ;
# 148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = left; i <= right; i++) {
# 156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    b[i] = a[i];
# 157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   call_lbl_0: ({ calling_npm("bubbleSort", 0); bubbleSort_npm(b, left, right); });
# 159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "qSort", &____must_manage_qSort, ____alias_loc_id_3, ____chimes_did_disable2, false); }
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
static void bubbleSort_both_npm(long long *y, int *a, int left, int right);
static void bubbleSort_both_quick(long long *y, int *a, int left, int right); static void bubbleSort_both(long long *y, int *a, int left, int right);
static
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort_both_resumable(long long *y, int *a, int left, int right) {const int ____chimes_did_disable3 = new_stack((void *)(&bubbleSort_both), "bubbleSort_both", &____must_manage_bubbleSort_both, 4, 0, (size_t)(7756732687571761994UL), (size_t)(7756732687571761995UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int j; int t; ;
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  long long lT; ;
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = right; i >= left; i--) {
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    for (j = left+1; j <= i; j++) {
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (y[j-1] > y[j]) {
# 183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 t = a[j-1];
# 184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 a[j-1] = a[j];
# 185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 a[j] = t;
# 186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 lT = y[j-1];
# 187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 y[j-1] = y[j];
# 188 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 y[j] = lT;
# 189 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 190 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 191 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 192 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "bubbleSort_both", &____must_manage_bubbleSort_both, ____alias_loc_id_6, ____chimes_did_disable3, false); }
# 205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void qSort_both_npm(long long *y, int *a, const long long *x, const int n);
void qSort_both_quick(long long *y, int *a, const long long *x, const int n); void qSort_both(long long *y, int *a, const long long *x, const int n);
void qSort_both_resumable(long long *y, int *a, const long long *x, const int n) {const int ____chimes_did_disable4 = new_stack((void *)(&qSort_both), "qSort_both", &____must_manage_qSort_both, 4, 0, (size_t)(7756732687571761882UL), (size_t)(7756732687571761883UL), (size_t)(7756732687571761884UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; ;
# 208 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 209 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 210 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 1; i <= n; i++) {
# 215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    y[i] = x[i];
# 216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    a[i] = i;
# 217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   call_lbl_0: ({ calling_npm("bubbleSort_both", 0); bubbleSort_both_npm(y, a, 1, n); });
# 219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "qSort_both", &____must_manage_qSort_both, ____alias_loc_id_5, ____chimes_did_disable4, false); }
# 277 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 277 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *pairwiseAlign_npm(SEQDATA_T *seqData, SIMMATRIX_T *simMatrix, int minScore, int maxReports, int minSeparation);static double (*____chimes_extern_func_getSeconds)(void) = getSeconds;
ASTR_T *pairwiseAlign_quick(SEQDATA_T *seqData, SIMMATRIX_T *simMatrix, int minScore, int maxReports, int minSeparation); ASTR_T *pairwiseAlign(SEQDATA_T *seqData, SIMMATRIX_T *simMatrix, int minScore, int maxReports, int minSeparation);
ASTR_T *pairwiseAlign_resumable(SEQDATA_T *seqData, SIMMATRIX_T *simMatrix,
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        int minScore, int maxReports, int minSeparation) {const int ____chimes_did_disable5 = new_stack((void *)(&pairwiseAlign), "pairwiseAlign", &____must_manage_pairwiseAlign, 5, 2, (size_t)(7756732687571763795UL), (size_t)(7756732687571763795UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "pairwiseAlign|maxReports|0", &____must_checkpoint_pairwiseAlign_maxReports_0, "i32", (void *)(&maxReports), (size_t)4, 0, 0, 0, "pairwiseAlign|minSeparation|0", &____must_checkpoint_pairwiseAlign_minSeparation_0, "i32", (void *)(&minSeparation), (size_t)4, 0, 0, 0) ; double beginTime;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *A;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long llMinScore;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *F;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *V;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *scores;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *goodScores;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
char **weights;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
unsigned char *matchSeq;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
unsigned char *mainSeq;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int threadNum;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int myTaskID;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int myRow;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int jEnd;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int jBeg;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int iEnd;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int iBeg;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int gapExtend;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int gapFirst;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *goodEndsJ;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *goodEndsI;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *best;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *index;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int report;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int sortReports;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (____must_checkpoint_pairwiseAlign_beginTime_0 || ____must_checkpoint_pairwiseAlign_A_0 || ____must_checkpoint_pairwiseAlign_llMinScore_0 || ____must_checkpoint_pairwiseAlign_F_0 || ____must_checkpoint_pairwiseAlign_V_0 || ____must_checkpoint_pairwiseAlign_scores_0 || ____must_checkpoint_pairwiseAlign_goodScores_0 || ____must_checkpoint_pairwiseAlign_weights_0 || ____must_checkpoint_pairwiseAlign_matchSeq_0 || ____must_checkpoint_pairwiseAlign_mainSeq_0 || ____must_checkpoint_pairwiseAlign_threadNum_0 || ____must_checkpoint_pairwiseAlign_myTaskID_0 || ____must_checkpoint_pairwiseAlign_myRow_0 || ____must_checkpoint_pairwiseAlign_jEnd_0 || ____must_checkpoint_pairwiseAlign_jBeg_0 || ____must_checkpoint_pairwiseAlign_iEnd_0 || ____must_checkpoint_pairwiseAlign_iBeg_0 || ____must_checkpoint_pairwiseAlign_gapExtend_0 || ____must_checkpoint_pairwiseAlign_gapFirst_0 || ____must_checkpoint_pairwiseAlign_goodEndsJ_0 || ____must_checkpoint_pairwiseAlign_goodEndsI_0 || ____must_checkpoint_pairwiseAlign_best_0 || ____must_checkpoint_pairwiseAlign_index_0 || ____must_checkpoint_pairwiseAlign_report_0 || ____must_checkpoint_pairwiseAlign_sortReports_0) { register_stack_vars(25, "pairwiseAlign|beginTime|0", &____must_checkpoint_pairwiseAlign_beginTime_0, "double", (void *)(&beginTime), (size_t)8, 0, 0, 0, "pairwiseAlign|A|0", &____must_checkpoint_pairwiseAlign_A_0, "%struct.astr*", (void *)(&A), (size_t)8, 1, 0, 0, "pairwiseAlign|llMinScore|0", &____must_checkpoint_pairwiseAlign_llMinScore_0, "i64", (void *)(&llMinScore), (size_t)8, 0, 0, 0, "pairwiseAlign|F|0", &____must_checkpoint_pairwiseAlign_F_0, "i64*", (void *)(&F), (size_t)8, 1, 0, 0, "pairwiseAlign|V|0", &____must_checkpoint_pairwiseAlign_V_0, "i64*", (void *)(&V), (size_t)8, 1, 0, 0, "pairwiseAlign|scores|0", &____must_checkpoint_pairwiseAlign_scores_0, "i64*", (void *)(&scores), (size_t)8, 1, 0, 0, "pairwiseAlign|goodScores|0", &____must_checkpoint_pairwiseAlign_goodScores_0, "i64*", (void *)(&goodScores), (size_t)8, 1, 0, 0, "pairwiseAlign|weights|0", &____must_checkpoint_pairwiseAlign_weights_0, "i8**", (void *)(&weights), (size_t)8, 1, 0, 0, "pairwiseAlign|matchSeq|0", &____must_checkpoint_pairwiseAlign_matchSeq_0, "i8*", (void *)(&matchSeq), (size_t)8, 1, 0, 0, "pairwiseAlign|mainSeq|0", &____must_checkpoint_pairwiseAlign_mainSeq_0, "i8*", (void *)(&mainSeq), (size_t)8, 1, 0, 0, "pairwiseAlign|threadNum|0", &____must_checkpoint_pairwiseAlign_threadNum_0, "i32", (void *)(&threadNum), (size_t)4, 0, 0, 0, "pairwiseAlign|myTaskID|0", &____must_checkpoint_pairwiseAlign_myTaskID_0, "i32", (void *)(&myTaskID), (size_t)4, 0, 0, 0, "pairwiseAlign|myRow|0", &____must_checkpoint_pairwiseAlign_myRow_0, "i32", (void *)(&myRow), (size_t)4, 0, 0, 0, "pairwiseAlign|jEnd|0", &____must_checkpoint_pairwiseAlign_jEnd_0, "i32", (void *)(&jEnd), (size_t)4, 0, 0, 0, "pairwiseAlign|jBeg|0", &____must_checkpoint_pairwiseAlign_jBeg_0, "i32", (void *)(&jBeg), (size_t)4, 0, 0, 0, "pairwiseAlign|iEnd|0", &____must_checkpoint_pairwiseAlign_iEnd_0, "i32", (void *)(&iEnd), (size_t)4, 0, 0, 0, "pairwiseAlign|iBeg|0", &____must_checkpoint_pairwiseAlign_iBeg_0, "i32", (void *)(&iBeg), (size_t)4, 0, 0, 0, "pairwiseAlign|gapExtend|0", &____must_checkpoint_pairwiseAlign_gapExtend_0, "i32", (void *)(&gapExtend), (size_t)4, 0, 0, 0, "pairwiseAlign|gapFirst|0", &____must_checkpoint_pairwiseAlign_gapFirst_0, "i32", (void *)(&gapFirst), (size_t)4, 0, 0, 0, "pairwiseAlign|goodEndsJ|0", &____must_checkpoint_pairwiseAlign_goodEndsJ_0, "i32*", (void *)(&goodEndsJ), (size_t)8, 1, 0, 0, "pairwiseAlign|goodEndsI|0", &____must_checkpoint_pairwiseAlign_goodEndsI_0, "i32*", (void *)(&goodEndsI), (size_t)8, 1, 0, 0, "pairwiseAlign|best|0", &____must_checkpoint_pairwiseAlign_best_0, "i32*", (void *)(&best), (size_t)8, 1, 0, 0, "pairwiseAlign|index|0", &____must_checkpoint_pairwiseAlign_index_0, "i32*", (void *)(&index), (size_t)8, 1, 0, 0, "pairwiseAlign|report|0", &____must_checkpoint_pairwiseAlign_report_0, "i32", (void *)(&report), (size_t)4, 0, 0, 0, "pairwiseAlign|sortReports|0", &____must_checkpoint_pairwiseAlign_sortReports_0, "i32", (void *)(&sortReports), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } ; ;
# 279 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 280 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int j; int k; int r; int n; int m; ;
# 281 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        int worst; ;
# 282 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       int myCol; int npRow; int npCol; ;
# 283 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    int maxThreads; int matchLimit; ;
# 284 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ;
# 285 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ;
# 286 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ;
# 287 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    long long G; long long Vp; long long E; long long W; ;
# 288 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A = (__null) ;
# 289 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   double endTime; ;
# 290 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 291 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 293 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  llMinScore = (long long)minScore;
# 294 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 295 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 296 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 297 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  matchLimit = simMatrix->matchLimit;
# 298 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 299 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 300 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 301 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A = (ASTR_T*) ({ void *____chimes_tmp_ptr = malloc((sizeof(ASTR_T)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(ASTR_T), 7756732687571763550UL, 0, 1, (int)sizeof(struct astr), 6, (int)__builtin_offsetof(struct astr, seqData), (int)__builtin_offsetof(struct astr, simMatrix), (int)__builtin_offsetof(struct astr, goodScores), (int)__builtin_offsetof(struct astr, numReports), (int)__builtin_offsetof(struct astr, goodEndsI), (int)__builtin_offsetof(struct astr, goodEndsJ)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 302 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A\n");
# 303 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 304 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 305 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 306 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 307 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 308 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numThreads = 0;
# 309 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numReports = __null;
# 310 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->goodScores = __null;
# 311 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->goodEndsI = A->goodEndsJ = __null;
# 312 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 313 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 314 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 315 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->seqData = seqData;
# 316 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->simMatrix = simMatrix;
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  maxThreads = 1;
# 330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numThreads = maxThreads;
# 338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->numReports = (int*) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->numReports\n");
# 341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodScores = (long long**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(long long *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(long long*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       == __null ) {
# 349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodScores\n");
# 350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodEndsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodEndsI\n");
# 358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodEndsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodEndsJ\n");
# 366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 0; i < maxThreads; i++) {
# 373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->numReports[i] = 0;
# 374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->goodScores[i] = 0L;
# 375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->goodEndsI[i] = A->goodEndsJ[i] = __null;
# 376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  {
# 402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     call_lbl_0: ({ calling_npm("gridInfo", 0); gridInfo_npm(&npRow, &npCol, &myRow, &myCol); });
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    threadNum = 0;
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    myTaskID = threadNum;
# 428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (myRow >= 0 && myCol >= 0) {
# 433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      sortReports = 3 * maxReports;
# 437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      gapExtend = simMatrix->gapExtend;
# 438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      gapFirst = simMatrix->gapStart + gapExtend;
# 439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodScores =
# 446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (long long*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(long long), 7756732687571762997UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodScores for thread %d\n",
# 448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodEndsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571762951UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodEndsI for thread %d\n",
# 457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodEndsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763019UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodEndsJ for thread %d\n",
# 466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i <= sortReports; i++) {
# 474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 goodScores[i] = 0L;
# 475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 goodEndsI[i] = goodEndsJ[i] = 0;
# 476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 482 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 483 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (scores = (long long*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(long long), 7756732687571763115UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 484 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 == __null ) {
# 485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate scores for thread %d\n",
# 486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (index = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763453UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate index for thread %d\n",
# 495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if( (best = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763103UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate best for thread %d\n",
# 504 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 505 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 506 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 507 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 508 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 509 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 510 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 511 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 512 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      report = 0;
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      n = A->seqData->mainLen;
# 525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      m = A->seqData->matchLen;
# 526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      iBeg = 1 + (n*myRow)/npRow;
# 528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      jBeg = 1 + (m*myCol)/npCol;
# 529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      iEnd = ( (n < (n*(myRow+1))/npRow + (matchLimit-1)) ? n : (n*(myRow+1))/npRow + (matchLimit-1) );
# 531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      jEnd = ( (m < (m*(myCol+1))/npCol + (matchLimit-1)) ? m : (m*(myCol+1))/npCol + (matchLimit-1) );
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (mainSeq =
# 548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((iEnd - iBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (iEnd - iBeg + 2) * sizeof(unsigned char), 7756732687571762445UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 549 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 550 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate mainSeq for thread %d\n",
# 551 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 552 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 553 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 554 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 555 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 556 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 557 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = iBeg; i <= iEnd; i++) {
# 559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 mainSeq[i - iBeg + 1] = A->seqData->main[i];
# 560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (matchSeq =
# 563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(unsigned char), 7756732687571762517UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
         == __null ) {
# 565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate matchSeq for thread %d\n",
# 566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 matchSeq[j - jBeg + 1] = A->seqData->match[j];
# 575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (weights = (char**) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1)*sizeof(char*), 7756732687571762542UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 585 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate weights for thread %d\n",
# 586 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 587 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 588 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 589 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 590 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 591 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 592 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 593 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i < ((64) + 1); i++) {
# 594 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if ( (weights[i] = (char*) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1)*sizeof(char), 7756732687571762539UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 595 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate weights[%d] for thread %d\n",
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        i, myTaskID);
# 597 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 598 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 599 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 600 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 601 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 602 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 603 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 for (j = 1; j < ((64) + 1); j++) {
# 604 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   weights[i][j] = simMatrix->similarity[i][j];
# 605 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 606 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 641 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 641 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (V = (long long*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(long long), 7756732687571762722UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 642 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 643 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate V for thread %d\n",
# 644 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 645 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 646 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 647 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 648 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 650 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 651 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 652 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 V[j - jBeg + 1] = 0L;
# 653 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 654 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 655 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (F = (long long*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(long long), 7756732687571762725UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 656 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 657 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate F for thread %d\n",
# 658 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 659 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 660 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 661 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 662 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 663 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 664 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 665 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 666 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 F[j - jBeg + 1] = (long long)(-gapFirst);
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 668 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 669 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 670 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 671 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 672 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       call_lbl_1: beginTime = ({ calling((void*)getSeconds, 1, ____alias_loc_id_1, 0UL, 0); (getSeconds)(); }) ;
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = iBeg; i <= iEnd; i++) {
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 G = (long long)(weights[mainSeq[i-iBeg+1]][ matchSeq[1] ]);
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 Vp = V[1];
# 739 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 V[1] = ( (0L > ( (F[1] > G) ? F[1] : G )) ? 0L : ( (F[1] > G) ? F[1] : G ) );
# 765 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 765 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 F[1] = ( (F[1] - gapExtend > V[1] - gapFirst) ? F[1] - gapExtend : V[1] - gapFirst );
# 766 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 E = V[1] - gapFirst;
# 767 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 768 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 769 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 770 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 771 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 772 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 773 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 for (j = jBeg + 2; j <= jEnd; j++) {
# 774 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 775 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 776 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 777 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   W = (long long)weights[ mainSeq[i-iBeg+1] ][ matchSeq[j-jBeg+1] ];
# 778 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 779 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 780 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 781 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 782 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 783 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 784 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 785 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   G = W + Vp;
# 786 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 787 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 788 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 789 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 790 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 791 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 792 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   Vp = V[j - jBeg + 1];
# 793 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   V[j - jBeg + 1] = ( (( (0L > E) ? 0L : E ) > ( (F[j - jBeg + 1] > G) ? F[j - jBeg + 1] : G )) ? ( (0L > E) ? 0L : E ) : ( (F[j - jBeg + 1] > G) ? F[j - jBeg + 1] : G ) );
# 805 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 805 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( V[j-jBeg+1] >= llMinScore && W > 0L && V[j-jBeg+1] == G &&
# 806 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        ( j == jEnd || i == iEnd ||
# 807 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   weights[mainSeq[i-iBeg+2]][matchSeq[j-jBeg+2]] <= 0 ) ) {
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     for (r = report; r >= 1; r--) {
# 845 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if (i - goodEndsI[r] >= minSeparation) {
# 846 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  break;
# 847 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 848 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if ( abs(j - goodEndsJ[r]) >= minSeparation) {
# 849 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  continue;
# 850 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 851 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if (goodScores[r] > V[j - jBeg + 1]) {
# 852 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goto discardPoint;
# 853 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 854 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 855 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 856 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 857 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = r; k < report; k++) {
# 858 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodScores[k] = goodScores[k+1];
# 859 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsI[k] = goodEndsI[k+1];
# 860 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsJ[k] = goodEndsJ[k+1];
# 861 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 862 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       report--;
# 863 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     }
# 864 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 865 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 867 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     report++;
# 868 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodScores[report] = V[j - jBeg + 1];
# 869 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodEndsI[report] = i;
# 870 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodEndsJ[report] = j;
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     if (report == sortReports) {
# 912 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        call_lbl_2: ({ calling_npm("qSort_both", 0); qSort_both_npm(scores, index, goodScores, sortReports); });
# 913 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       worst = sortReports - maxReports + 1;
# 914 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       llMinScore = scores[worst] + 1L;
# 915 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        call_lbl_3: ({ calling_npm("qSort", 0); qSort_npm(best, index, worst, sortReports); });
# 916 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 917 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 918 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodScores[best[k]];
# 919 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 920 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 921 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodScores[k] = scores[k];
# 922 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 923 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 924 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 925 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodEndsI[ best[k] ];
# 926 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 927 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 928 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsI[k] = scores[k];
# 929 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 930 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 931 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodEndsJ[ best[k] ];
# 932 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 933 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 934 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsJ[k] = scores[k];
# 935 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 936 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       report = maxReports;
# 937 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     }
# 938 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 939 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 discardPoint:
# 950 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 950 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   F[j-jBeg+1] = ( (F[j-jBeg+1] - gapExtend > V[j-jBeg+1] - gapFirst) ? F[j-jBeg+1] - gapExtend : V[j-jBeg+1] - gapFirst );
# 951 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   E = ( (E - gapExtend > V[j - jBeg + 1] - gapFirst) ? E - gapExtend : V[j - jBeg + 1] - gapFirst );
# 952 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 953 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 954 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 955 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 956 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 958 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       call_lbl_4: endTime = ({ calling((void*)getSeconds, 4, ____alias_loc_id_0, 0UL, 0); (getSeconds)(); }) ;
# 959 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 960 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 961 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 962 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 963 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 964 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 965 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (myTaskID == 0) {
# 966 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("\n        Match time = %10.5f seconds\n",
# 967 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        endTime - beginTime);
# 968 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 969 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 970 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 971 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 972 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 973 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 974 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (report == 0) {
# 975 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 A->numReports[threadNum] = report;
# 976 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      } else {
# 977 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 978 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 979 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (report <= maxReports) {
# 981 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 982 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 983 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 984 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodScores[threadNum] =
# 985 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (long long*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(long long), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 986 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: can't allocate A->goodScores for thread %d\n",
# 987 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 988 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 989 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 991 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 992 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 993 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 994 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsI[threadNum] =
# 995 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 996 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsI for thread %d\n",
# 997 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 998 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 999 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1000 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1001 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1002 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1003 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1004 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsJ[threadNum] =
# 1005 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1006 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsJ for thread %d\n",
# 1007 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1008 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1009 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1010 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1011 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1012 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    call_lbl_5: ({ calling_npm("qSort_both", 0); qSort_both_npm(scores, index, goodScores, report); });
# 1025 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   j = 1;
# 1026 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   for (i = report; i >= 1; i--) {
# 1027 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodScores[threadNum][j] = goodScores[ index[i] ];
# 1028 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsI[threadNum][j] = goodEndsI[ index[i] ];
# 1029 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsJ[threadNum][j] = goodEndsJ[ index[i] ];
# 1030 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     j++;
# 1031 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1032 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1033 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1034 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1035 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->numReports[threadNum] = report;
# 1036 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1037 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 } else {
# 1038 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1039 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1040 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1041 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1042 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1043 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1044 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   worst = ( (report - maxReports + 1 > 1) ? report - maxReports + 1 : 1 );
# 1045 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1046 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1047 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1048 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodScores[threadNum] =
# 1049 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (long long*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(long long), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) ==
# 1050 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        __null ) {
# 1051 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodScores for thread %d\n",
# 1052 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1053 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1054 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1055 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1056 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1057 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1058 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1059 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsI[threadNum] =
# 1060 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1061 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsI for thread %d\n",
# 1062 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1063 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1064 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1065 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1066 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1067 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1068 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1069 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsJ[threadNum] =
# 1070 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1071 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsJ for thread %d\n",
# 1072 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1073 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1074 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1075 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1076 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1077 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    call_lbl_6: ({ calling_npm("qSort_both", 0); qSort_both_npm(scores, index, goodScores, report); });
# 1090 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   j = 1;
# 1091 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   for (i = report; i >= worst; i--) {
# 1092 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodScores[threadNum][j] = goodScores[ index[i] ];
# 1093 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsI[threadNum][j] = goodEndsI[ index[i] ];
# 1094 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsJ[threadNum][j] = goodEndsJ[ index[i] ];
# 1095 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     j++;
# 1096 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1097 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1098 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1099 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->numReports[threadNum] = maxReports;
# 1101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  ({ free_helper((((unsigned char *)weights[i]) - sizeof(void *)), 7756732687571762539UL);free((((unsigned char *)weights[i]) - sizeof(void *))); }) ;
# 1108 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1109 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)weights) - sizeof(void *)), 7756732687571762542UL);free((((unsigned char *)weights) - sizeof(void *))); }) ;
# 1110 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodScores) - sizeof(void *)), 7756732687571762997UL);free((((unsigned char *)goodScores) - sizeof(void *))); }) ;
# 1111 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodEndsI) - sizeof(void *)), 7756732687571762951UL);free((((unsigned char *)goodEndsI) - sizeof(void *))); }) ;
# 1112 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodEndsJ) - sizeof(void *)), 7756732687571763019UL);free((((unsigned char *)goodEndsJ) - sizeof(void *))); }) ;
# 1113 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)F) - sizeof(void *)), 7756732687571762725UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 1114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)V) - sizeof(void *)), 7756732687571762722UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 1115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)scores) - sizeof(void *)), 7756732687571763115UL);free((((unsigned char *)scores) - sizeof(void *))); }) ;
# 1116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)index) - sizeof(void *)), 7756732687571763453UL);free((((unsigned char *)index) - sizeof(void *))); }) ;
# 1117 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)best) - sizeof(void *)), 7756732687571763103UL);free((((unsigned char *)best) - sizeof(void *))); }) ;
# 1118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)mainSeq) - sizeof(void *)), 7756732687571762445UL);free((((unsigned char *)mainSeq) - sizeof(void *))); }) ;
# 1120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)matchSeq) - sizeof(void *)), 7756732687571762517UL);free((((unsigned char *)matchSeq) - sizeof(void *))); }) ;
# 1121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 1124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ASTR_T *____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((A)); rm_stack(true, 7756732687571763550UL, "pairwiseAlign", &____must_manage_pairwiseAlign, ____alias_loc_id_7, ____chimes_did_disable5, false); return ____chimes_ret_var_2; ;
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(true, 7756732687571763550UL, "pairwiseAlign", &____must_manage_pairwiseAlign, ____alias_loc_id_7, ____chimes_did_disable5, false); }
# 1127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *freeA_npm(ASTR_T *A);
ASTR_T *freeA_quick(ASTR_T *A); ASTR_T *freeA(ASTR_T *A);
ASTR_T *freeA_resumable(ASTR_T *A) {const int ____chimes_did_disable6 = new_stack((void *)(&freeA), "freeA", &____must_manage_freeA, 1, 0, (size_t)(7756732687571763943UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 1131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; ;
# 1133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if (A) {
# 1135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->numReports) {
# 1136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->numReports) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->numReports) - sizeof(void *))); }) ;
# 1137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->numReports = __null;
# 1138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodScores) {
# 1140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodScores[i]) {
# 1142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodScores[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodScores[i]) - sizeof(void *))); }) ;
# 1143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodScores[i] = __null;
# 1144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodScores) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodScores) - sizeof(void *))); }) ;
# 1147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodScores = __null;
# 1148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodEndsI) {
# 1150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodEndsI[i]) {
# 1152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodEndsI[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsI[i]) - sizeof(void *))); }) ;
# 1153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodEndsI[i] = __null;
# 1154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodEndsI) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsI) - sizeof(void *))); }) ;
# 1157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodEndsI = __null;
# 1158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodEndsJ) {
# 1160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodEndsJ[i]) {
# 1162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodEndsJ[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsJ[i]) - sizeof(void *))); }) ;
# 1163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodEndsJ[i] = __null;
# 1164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodEndsJ) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsJ) - sizeof(void *))); }) ;
# 1167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodEndsJ = __null;
# 1168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     ({ free_helper((((unsigned char *)A) - sizeof(void *)), 7756732687571763943UL);free((((unsigned char *)A) - sizeof(void *))); }) ;
# 1170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 1171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ASTR_T *____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((__null)); rm_stack(true, 7756732687571763550UL, "freeA", &____must_manage_freeA, ____alias_loc_id_8, ____chimes_did_disable6, false); return ____chimes_ret_var_3; ;
# 1172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(true, 7756732687571763550UL, "freeA", &____must_manage_freeA, ____alias_loc_id_8, ____chimes_did_disable6, false); }
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int gridInfo_quick(int *npRow, int *npCol, int *myRow, int *myCol)
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&gridInfo), "gridInfo", &____must_manage_gridInfo, 4, 0, (size_t)(7756732687571761703UL), (size_t)(7756732687571761704UL), (size_t)(7756732687571761705UL), (size_t)(7756732687571761706UL)) ; ; ;
# 28 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int threadNum; int numThreads; int minPer; int per; int row; int col; ;
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  threadNum = 0;
# 53 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  numThreads = 1;
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  minPer = numThreads + 2;
# 72 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 1; i <= numThreads; i++) {
# 73 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if ( (numThreads % i) == 0 ) {
# 74 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      row = i;
# 75 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      col = numThreads / i;
# 76 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      per = row + col;
# 77 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (per < minPer) {
# 78 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 *npRow = row;
# 79 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 *npCol = col;
# 80 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 minPer = per;
# 81 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 82 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 83 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( threadNum < ( (*npRow) * (*npCol) ) ) {
# 98 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myRow = threadNum / (*npCol);
# 99 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myCol = threadNum % (*npCol);
# 100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     int ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (( (*npRow) * (*npCol) )); rm_stack(false, 0UL, "gridInfo", &____must_manage_gridInfo, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  } else {
# 102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myRow = -1;
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myCol = -1;
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = ((-1)); rm_stack(false, 0UL, "gridInfo", &____must_manage_gridInfo, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_1; ;
# 105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "gridInfo", &____must_manage_gridInfo, ____alias_loc_id_2, ____chimes_did_disable0, false); }

int gridInfo(int *npRow, int *npCol, int *myRow, int *myCol) { return (____chimes_replaying ? gridInfo_resumable(npRow, npCol, myRow, myCol) : gridInfo_quick(npRow, npCol, myRow, myCol)); }
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
static
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort_quick(int *b, int left, int right) {const int ____chimes_did_disable1 = new_stack((void *)(&bubbleSort), "bubbleSort", &____must_manage_bubbleSort, 3, 0, (size_t)(7756732687571761833UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int j; int t; ;
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = right; i >= left; i--) {
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    for (j = left+1; j <= i; j++) {
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (b[j-1] > b[j]) {
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 t = b[j-1];
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 b[j-1] = b[j];
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 b[j] = t;
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "bubbleSort", &____must_manage_bubbleSort, ____alias_loc_id_4, ____chimes_did_disable1, false); }

static
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort(int *b, int left, int right) { (____chimes_replaying ? bubbleSort_resumable(b, left, right) : bubbleSort_quick(b, left, right)); }
# 145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void qSort_quick(int *b, const int *a, const int left, const int right) {const int ____chimes_did_disable2 = new_stack((void *)(&qSort), "qSort", &____must_manage_qSort, 4, 0, (size_t)(7756732687571761750UL), (size_t)(7756732687571761751UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; ;
# 148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = left; i <= right; i++) {
# 156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    b[i] = a[i];
# 157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   call_lbl_0: ({ calling_npm("bubbleSort", 0); bubbleSort_npm(b, left, right); });
# 159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "qSort", &____must_manage_qSort, ____alias_loc_id_3, ____chimes_did_disable2, false); }

void qSort(int *b, const int *a, const int left, const int right) { (____chimes_replaying ? qSort_resumable(b, a, left, right) : qSort_quick(b, a, left, right)); }
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
static
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort_both_quick(long long *y, int *a, int left, int right) {const int ____chimes_did_disable3 = new_stack((void *)(&bubbleSort_both), "bubbleSort_both", &____must_manage_bubbleSort_both, 4, 0, (size_t)(7756732687571761994UL), (size_t)(7756732687571761995UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int j; int t; ;
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  long long lT; ;
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = right; i >= left; i--) {
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    for (j = left+1; j <= i; j++) {
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (y[j-1] > y[j]) {
# 183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 t = a[j-1];
# 184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 a[j-1] = a[j];
# 185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 a[j] = t;
# 186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 lT = y[j-1];
# 187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 y[j-1] = y[j];
# 188 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 y[j] = lT;
# 189 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 190 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 191 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 192 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "bubbleSort_both", &____must_manage_bubbleSort_both, ____alias_loc_id_6, ____chimes_did_disable3, false); }

static
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort_both(long long *y, int *a, int left, int right) { (____chimes_replaying ? bubbleSort_both_resumable(y, a, left, right) : bubbleSort_both_quick(y, a, left, right)); }
# 205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void qSort_both_quick(long long *y, int *a, const long long *x, const int n) {const int ____chimes_did_disable4 = new_stack((void *)(&qSort_both), "qSort_both", &____must_manage_qSort_both, 4, 0, (size_t)(7756732687571761882UL), (size_t)(7756732687571761883UL), (size_t)(7756732687571761884UL), (size_t)(0UL)) ; ; ;
# 206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; ;
# 208 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 209 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 210 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 1; i <= n; i++) {
# 215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    y[i] = x[i];
# 216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    a[i] = i;
# 217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   call_lbl_0: ({ calling_npm("bubbleSort_both", 0); bubbleSort_both_npm(y, a, 1, n); });
# 219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(false, 0UL, "qSort_both", &____must_manage_qSort_both, ____alias_loc_id_5, ____chimes_did_disable4, false); }

void qSort_both(long long *y, int *a, const long long *x, const int n) { (____chimes_replaying ? qSort_both_resumable(y, a, x, n) : qSort_both_quick(y, a, x, n)); }
# 277 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *pairwiseAlign_quick(SEQDATA_T *seqData, SIMMATRIX_T *simMatrix,
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        int minScore, int maxReports, int minSeparation) {const int ____chimes_did_disable5 = new_stack((void *)(&pairwiseAlign), "pairwiseAlign", &____must_manage_pairwiseAlign, 5, 2, (size_t)(7756732687571763795UL), (size_t)(7756732687571763795UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), "pairwiseAlign|maxReports|0", &____must_checkpoint_pairwiseAlign_maxReports_0, "i32", (void *)(&maxReports), (size_t)4, 0, 0, 0, "pairwiseAlign|minSeparation|0", &____must_checkpoint_pairwiseAlign_minSeparation_0, "i32", (void *)(&minSeparation), (size_t)4, 0, 0, 0) ; double beginTime;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *A;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long llMinScore;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *F;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *V;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *scores;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
long long *goodScores;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
char **weights;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
unsigned char *matchSeq;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
unsigned char *mainSeq;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int threadNum;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int myTaskID;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int myRow;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int jEnd;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int jBeg;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int iEnd;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int iBeg;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int gapExtend;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int gapFirst;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *goodEndsJ;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *goodEndsI;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *best;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int *index;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int report;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int sortReports;
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (____must_checkpoint_pairwiseAlign_beginTime_0 || ____must_checkpoint_pairwiseAlign_A_0 || ____must_checkpoint_pairwiseAlign_llMinScore_0 || ____must_checkpoint_pairwiseAlign_F_0 || ____must_checkpoint_pairwiseAlign_V_0 || ____must_checkpoint_pairwiseAlign_scores_0 || ____must_checkpoint_pairwiseAlign_goodScores_0 || ____must_checkpoint_pairwiseAlign_weights_0 || ____must_checkpoint_pairwiseAlign_matchSeq_0 || ____must_checkpoint_pairwiseAlign_mainSeq_0 || ____must_checkpoint_pairwiseAlign_threadNum_0 || ____must_checkpoint_pairwiseAlign_myTaskID_0 || ____must_checkpoint_pairwiseAlign_myRow_0 || ____must_checkpoint_pairwiseAlign_jEnd_0 || ____must_checkpoint_pairwiseAlign_jBeg_0 || ____must_checkpoint_pairwiseAlign_iEnd_0 || ____must_checkpoint_pairwiseAlign_iBeg_0 || ____must_checkpoint_pairwiseAlign_gapExtend_0 || ____must_checkpoint_pairwiseAlign_gapFirst_0 || ____must_checkpoint_pairwiseAlign_goodEndsJ_0 || ____must_checkpoint_pairwiseAlign_goodEndsI_0 || ____must_checkpoint_pairwiseAlign_best_0 || ____must_checkpoint_pairwiseAlign_index_0 || ____must_checkpoint_pairwiseAlign_report_0 || ____must_checkpoint_pairwiseAlign_sortReports_0) { register_stack_vars(25, "pairwiseAlign|beginTime|0", &____must_checkpoint_pairwiseAlign_beginTime_0, "double", (void *)(&beginTime), (size_t)8, 0, 0, 0, "pairwiseAlign|A|0", &____must_checkpoint_pairwiseAlign_A_0, "%struct.astr*", (void *)(&A), (size_t)8, 1, 0, 0, "pairwiseAlign|llMinScore|0", &____must_checkpoint_pairwiseAlign_llMinScore_0, "i64", (void *)(&llMinScore), (size_t)8, 0, 0, 0, "pairwiseAlign|F|0", &____must_checkpoint_pairwiseAlign_F_0, "i64*", (void *)(&F), (size_t)8, 1, 0, 0, "pairwiseAlign|V|0", &____must_checkpoint_pairwiseAlign_V_0, "i64*", (void *)(&V), (size_t)8, 1, 0, 0, "pairwiseAlign|scores|0", &____must_checkpoint_pairwiseAlign_scores_0, "i64*", (void *)(&scores), (size_t)8, 1, 0, 0, "pairwiseAlign|goodScores|0", &____must_checkpoint_pairwiseAlign_goodScores_0, "i64*", (void *)(&goodScores), (size_t)8, 1, 0, 0, "pairwiseAlign|weights|0", &____must_checkpoint_pairwiseAlign_weights_0, "i8**", (void *)(&weights), (size_t)8, 1, 0, 0, "pairwiseAlign|matchSeq|0", &____must_checkpoint_pairwiseAlign_matchSeq_0, "i8*", (void *)(&matchSeq), (size_t)8, 1, 0, 0, "pairwiseAlign|mainSeq|0", &____must_checkpoint_pairwiseAlign_mainSeq_0, "i8*", (void *)(&mainSeq), (size_t)8, 1, 0, 0, "pairwiseAlign|threadNum|0", &____must_checkpoint_pairwiseAlign_threadNum_0, "i32", (void *)(&threadNum), (size_t)4, 0, 0, 0, "pairwiseAlign|myTaskID|0", &____must_checkpoint_pairwiseAlign_myTaskID_0, "i32", (void *)(&myTaskID), (size_t)4, 0, 0, 0, "pairwiseAlign|myRow|0", &____must_checkpoint_pairwiseAlign_myRow_0, "i32", (void *)(&myRow), (size_t)4, 0, 0, 0, "pairwiseAlign|jEnd|0", &____must_checkpoint_pairwiseAlign_jEnd_0, "i32", (void *)(&jEnd), (size_t)4, 0, 0, 0, "pairwiseAlign|jBeg|0", &____must_checkpoint_pairwiseAlign_jBeg_0, "i32", (void *)(&jBeg), (size_t)4, 0, 0, 0, "pairwiseAlign|iEnd|0", &____must_checkpoint_pairwiseAlign_iEnd_0, "i32", (void *)(&iEnd), (size_t)4, 0, 0, 0, "pairwiseAlign|iBeg|0", &____must_checkpoint_pairwiseAlign_iBeg_0, "i32", (void *)(&iBeg), (size_t)4, 0, 0, 0, "pairwiseAlign|gapExtend|0", &____must_checkpoint_pairwiseAlign_gapExtend_0, "i32", (void *)(&gapExtend), (size_t)4, 0, 0, 0, "pairwiseAlign|gapFirst|0", &____must_checkpoint_pairwiseAlign_gapFirst_0, "i32", (void *)(&gapFirst), (size_t)4, 0, 0, 0, "pairwiseAlign|goodEndsJ|0", &____must_checkpoint_pairwiseAlign_goodEndsJ_0, "i32*", (void *)(&goodEndsJ), (size_t)8, 1, 0, 0, "pairwiseAlign|goodEndsI|0", &____must_checkpoint_pairwiseAlign_goodEndsI_0, "i32*", (void *)(&goodEndsI), (size_t)8, 1, 0, 0, "pairwiseAlign|best|0", &____must_checkpoint_pairwiseAlign_best_0, "i32*", (void *)(&best), (size_t)8, 1, 0, 0, "pairwiseAlign|index|0", &____must_checkpoint_pairwiseAlign_index_0, "i32*", (void *)(&index), (size_t)8, 1, 0, 0, "pairwiseAlign|report|0", &____must_checkpoint_pairwiseAlign_report_0, "i32", (void *)(&report), (size_t)4, 0, 0, 0, "pairwiseAlign|sortReports|0", &____must_checkpoint_pairwiseAlign_sortReports_0, "i32", (void *)(&sortReports), (size_t)4, 0, 0, 0); } ; ;
# 279 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 280 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; int j; int k; int r; int n; int m; ;
# 281 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        int worst; ;
# 282 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       int myCol; int npRow; int npCol; ;
# 283 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    int maxThreads; int matchLimit; ;
# 284 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ;
# 285 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ;
# 286 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ;
# 287 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    long long G; long long Vp; long long E; long long W; ;
# 288 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A = (__null) ;
# 289 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   double endTime; ;
# 290 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 291 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 293 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  llMinScore = (long long)minScore;
# 294 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 295 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 296 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 297 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  matchLimit = simMatrix->matchLimit;
# 298 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 299 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 300 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 301 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A = (ASTR_T*) ({ void *____chimes_tmp_ptr = malloc((sizeof(ASTR_T)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, sizeof(ASTR_T), 7756732687571763550UL, 0, 1, (int)sizeof(struct astr), 6, (int)__builtin_offsetof(struct astr, seqData), (int)__builtin_offsetof(struct astr, simMatrix), (int)__builtin_offsetof(struct astr, goodScores), (int)__builtin_offsetof(struct astr, numReports), (int)__builtin_offsetof(struct astr, goodEndsI), (int)__builtin_offsetof(struct astr, goodEndsJ)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 302 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A\n");
# 303 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 304 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 305 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 306 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 307 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 308 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numThreads = 0;
# 309 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numReports = __null;
# 310 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->goodScores = __null;
# 311 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->goodEndsI = A->goodEndsJ = __null;
# 312 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 313 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 314 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 315 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->seqData = seqData;
# 316 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->simMatrix = simMatrix;
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  maxThreads = 1;
# 330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numThreads = maxThreads;
# 338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->numReports = (int*) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->numReports\n");
# 341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodScores = (long long**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(long long *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(long long*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       == __null ) {
# 349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodScores\n");
# 350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodEndsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodEndsI\n");
# 358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodEndsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodEndsJ\n");
# 366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 0; i < maxThreads; i++) {
# 373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->numReports[i] = 0;
# 374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->goodScores[i] = 0L;
# 375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->goodEndsI[i] = A->goodEndsJ[i] = __null;
# 376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  {
# 402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     call_lbl_0: ({ calling_npm("gridInfo", 0); gridInfo_npm(&npRow, &npCol, &myRow, &myCol); });
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    threadNum = 0;
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    myTaskID = threadNum;
# 428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (myRow >= 0 && myCol >= 0) {
# 433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      sortReports = 3 * maxReports;
# 437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      gapExtend = simMatrix->gapExtend;
# 438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      gapFirst = simMatrix->gapStart + gapExtend;
# 439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodScores =
# 446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (long long*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(long long), 7756732687571762997UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodScores for thread %d\n",
# 448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodEndsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571762951UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodEndsI for thread %d\n",
# 457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodEndsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763019UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodEndsJ for thread %d\n",
# 466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i <= sortReports; i++) {
# 474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 goodScores[i] = 0L;
# 475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 goodEndsI[i] = goodEndsJ[i] = 0;
# 476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 482 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 483 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (scores = (long long*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(long long), 7756732687571763115UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 484 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 == __null ) {
# 485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate scores for thread %d\n",
# 486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (index = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763453UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate index for thread %d\n",
# 495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if( (best = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763103UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate best for thread %d\n",
# 504 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 505 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 506 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 507 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 508 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 509 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 510 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 511 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 512 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      report = 0;
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      n = A->seqData->mainLen;
# 525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      m = A->seqData->matchLen;
# 526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      iBeg = 1 + (n*myRow)/npRow;
# 528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      jBeg = 1 + (m*myCol)/npCol;
# 529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      iEnd = ( (n < (n*(myRow+1))/npRow + (matchLimit-1)) ? n : (n*(myRow+1))/npRow + (matchLimit-1) );
# 531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      jEnd = ( (m < (m*(myCol+1))/npCol + (matchLimit-1)) ? m : (m*(myCol+1))/npCol + (matchLimit-1) );
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (mainSeq =
# 548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((iEnd - iBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (iEnd - iBeg + 2) * sizeof(unsigned char), 7756732687571762445UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 549 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 550 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate mainSeq for thread %d\n",
# 551 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 552 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 553 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 554 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 555 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 556 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 557 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = iBeg; i <= iEnd; i++) {
# 559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 mainSeq[i - iBeg + 1] = A->seqData->main[i];
# 560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (matchSeq =
# 563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(unsigned char), 7756732687571762517UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
         == __null ) {
# 565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate matchSeq for thread %d\n",
# 566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 matchSeq[j - jBeg + 1] = A->seqData->match[j];
# 575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (weights = (char**) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char *)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1)*sizeof(char*), 7756732687571762542UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 585 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate weights for thread %d\n",
# 586 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 587 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 588 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 589 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 590 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 591 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 592 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 593 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i < ((64) + 1); i++) {
# 594 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if ( (weights[i] = (char*) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, ((64) + 1)*sizeof(char), 7756732687571762539UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 595 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate weights[%d] for thread %d\n",
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        i, myTaskID);
# 597 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 598 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 599 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 600 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 601 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 602 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 603 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 for (j = 1; j < ((64) + 1); j++) {
# 604 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   weights[i][j] = simMatrix->similarity[i][j];
# 605 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 606 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 641 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 641 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (V = (long long*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(long long), 7756732687571762722UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 642 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 643 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate V for thread %d\n",
# 644 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 645 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 646 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 647 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 648 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 650 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 651 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 652 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 V[j - jBeg + 1] = 0L;
# 653 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 654 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 655 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (F = (long long*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(long long), 7756732687571762725UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 656 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 657 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate F for thread %d\n",
# 658 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 659 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 660 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 661 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 662 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 663 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 664 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 665 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 666 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 F[j - jBeg + 1] = (long long)(-gapFirst);
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 668 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 669 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 670 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 671 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 672 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       call_lbl_1: beginTime = ({ calling((void*)getSeconds, 1, ____alias_loc_id_1, 0UL, 0); (getSeconds)(); }) ;
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = iBeg; i <= iEnd; i++) {
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 G = (long long)(weights[mainSeq[i-iBeg+1]][ matchSeq[1] ]);
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 Vp = V[1];
# 739 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 V[1] = ( (0L > ( (F[1] > G) ? F[1] : G )) ? 0L : ( (F[1] > G) ? F[1] : G ) );
# 765 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 765 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 F[1] = ( (F[1] - gapExtend > V[1] - gapFirst) ? F[1] - gapExtend : V[1] - gapFirst );
# 766 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 E = V[1] - gapFirst;
# 767 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 768 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 769 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 770 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 771 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 772 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 773 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 for (j = jBeg + 2; j <= jEnd; j++) {
# 774 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 775 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 776 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 777 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   W = (long long)weights[ mainSeq[i-iBeg+1] ][ matchSeq[j-jBeg+1] ];
# 778 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 779 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 780 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 781 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 782 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 783 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 784 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 785 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   G = W + Vp;
# 786 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 787 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 788 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 789 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 790 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 791 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 792 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   Vp = V[j - jBeg + 1];
# 793 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   V[j - jBeg + 1] = ( (( (0L > E) ? 0L : E ) > ( (F[j - jBeg + 1] > G) ? F[j - jBeg + 1] : G )) ? ( (0L > E) ? 0L : E ) : ( (F[j - jBeg + 1] > G) ? F[j - jBeg + 1] : G ) );
# 805 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 805 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( V[j-jBeg+1] >= llMinScore && W > 0L && V[j-jBeg+1] == G &&
# 806 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        ( j == jEnd || i == iEnd ||
# 807 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   weights[mainSeq[i-iBeg+2]][matchSeq[j-jBeg+2]] <= 0 ) ) {
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     for (r = report; r >= 1; r--) {
# 845 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if (i - goodEndsI[r] >= minSeparation) {
# 846 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  break;
# 847 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 848 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if ( abs(j - goodEndsJ[r]) >= minSeparation) {
# 849 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  continue;
# 850 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 851 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if (goodScores[r] > V[j - jBeg + 1]) {
# 852 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goto discardPoint;
# 853 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 854 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 855 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 856 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 857 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = r; k < report; k++) {
# 858 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodScores[k] = goodScores[k+1];
# 859 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsI[k] = goodEndsI[k+1];
# 860 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsJ[k] = goodEndsJ[k+1];
# 861 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 862 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       report--;
# 863 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     }
# 864 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 865 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 867 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     report++;
# 868 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodScores[report] = V[j - jBeg + 1];
# 869 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodEndsI[report] = i;
# 870 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodEndsJ[report] = j;
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     if (report == sortReports) {
# 912 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        call_lbl_2: ({ calling_npm("qSort_both", 0); qSort_both_npm(scores, index, goodScores, sortReports); });
# 913 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       worst = sortReports - maxReports + 1;
# 914 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       llMinScore = scores[worst] + 1L;
# 915 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        call_lbl_3: ({ calling_npm("qSort", 0); qSort_npm(best, index, worst, sortReports); });
# 916 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 917 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 918 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodScores[best[k]];
# 919 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 920 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 921 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodScores[k] = scores[k];
# 922 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 923 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 924 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 925 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodEndsI[ best[k] ];
# 926 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 927 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 928 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsI[k] = scores[k];
# 929 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 930 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 931 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodEndsJ[ best[k] ];
# 932 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 933 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 934 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsJ[k] = scores[k];
# 935 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 936 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       report = maxReports;
# 937 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     }
# 938 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 939 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 discardPoint:
# 950 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 950 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   F[j-jBeg+1] = ( (F[j-jBeg+1] - gapExtend > V[j-jBeg+1] - gapFirst) ? F[j-jBeg+1] - gapExtend : V[j-jBeg+1] - gapFirst );
# 951 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   E = ( (E - gapExtend > V[j - jBeg + 1] - gapFirst) ? E - gapExtend : V[j - jBeg + 1] - gapFirst );
# 952 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 953 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 954 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 955 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 956 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 958 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       call_lbl_4: endTime = ({ calling((void*)getSeconds, 4, ____alias_loc_id_0, 0UL, 0); (getSeconds)(); }) ;
# 959 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 960 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 961 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 962 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 963 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 964 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 965 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (myTaskID == 0) {
# 966 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("\n        Match time = %10.5f seconds\n",
# 967 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        endTime - beginTime);
# 968 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 969 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 970 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 971 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 972 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 973 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 974 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (report == 0) {
# 975 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 A->numReports[threadNum] = report;
# 976 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      } else {
# 977 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 978 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 979 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (report <= maxReports) {
# 981 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 982 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 983 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 984 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodScores[threadNum] =
# 985 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (long long*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(long long), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 986 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: can't allocate A->goodScores for thread %d\n",
# 987 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 988 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 989 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 991 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 992 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 993 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 994 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsI[threadNum] =
# 995 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 996 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsI for thread %d\n",
# 997 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 998 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 999 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1000 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1001 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1002 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1003 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1004 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsJ[threadNum] =
# 1005 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1006 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsJ for thread %d\n",
# 1007 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1008 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1009 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1010 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1011 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1012 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    call_lbl_5: ({ calling_npm("qSort_both", 0); qSort_both_npm(scores, index, goodScores, report); });
# 1025 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   j = 1;
# 1026 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   for (i = report; i >= 1; i--) {
# 1027 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodScores[threadNum][j] = goodScores[ index[i] ];
# 1028 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsI[threadNum][j] = goodEndsI[ index[i] ];
# 1029 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsJ[threadNum][j] = goodEndsJ[ index[i] ];
# 1030 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     j++;
# 1031 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1032 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1033 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1034 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1035 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->numReports[threadNum] = report;
# 1036 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1037 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 } else {
# 1038 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1039 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1040 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1041 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1042 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1043 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1044 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   worst = ( (report - maxReports + 1 > 1) ? report - maxReports + 1 : 1 );
# 1045 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1046 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1047 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1048 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodScores[threadNum] =
# 1049 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (long long*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(long long)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(long long), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) ==
# 1050 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        __null ) {
# 1051 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodScores for thread %d\n",
# 1052 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1053 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1054 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1055 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1056 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1057 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1058 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1059 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsI[threadNum] =
# 1060 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1061 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsI for thread %d\n",
# 1062 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1063 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1064 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1065 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1066 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1067 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1068 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1069 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsJ[threadNum] =
# 1070 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); ; malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1071 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsJ for thread %d\n",
# 1072 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1073 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1074 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1075 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1076 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1077 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    call_lbl_6: ({ calling_npm("qSort_both", 0); qSort_both_npm(scores, index, goodScores, report); });
# 1090 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   j = 1;
# 1091 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   for (i = report; i >= worst; i--) {
# 1092 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodScores[threadNum][j] = goodScores[ index[i] ];
# 1093 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsI[threadNum][j] = goodEndsI[ index[i] ];
# 1094 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsJ[threadNum][j] = goodEndsJ[ index[i] ];
# 1095 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     j++;
# 1096 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1097 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1098 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1099 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->numReports[threadNum] = maxReports;
# 1101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  ({ free_helper((((unsigned char *)weights[i]) - sizeof(void *)), 7756732687571762539UL);free((((unsigned char *)weights[i]) - sizeof(void *))); }) ;
# 1108 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1109 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)weights) - sizeof(void *)), 7756732687571762542UL);free((((unsigned char *)weights) - sizeof(void *))); }) ;
# 1110 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodScores) - sizeof(void *)), 7756732687571762997UL);free((((unsigned char *)goodScores) - sizeof(void *))); }) ;
# 1111 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodEndsI) - sizeof(void *)), 7756732687571762951UL);free((((unsigned char *)goodEndsI) - sizeof(void *))); }) ;
# 1112 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodEndsJ) - sizeof(void *)), 7756732687571763019UL);free((((unsigned char *)goodEndsJ) - sizeof(void *))); }) ;
# 1113 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)F) - sizeof(void *)), 7756732687571762725UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 1114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)V) - sizeof(void *)), 7756732687571762722UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 1115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)scores) - sizeof(void *)), 7756732687571763115UL);free((((unsigned char *)scores) - sizeof(void *))); }) ;
# 1116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)index) - sizeof(void *)), 7756732687571763453UL);free((((unsigned char *)index) - sizeof(void *))); }) ;
# 1117 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)best) - sizeof(void *)), 7756732687571763103UL);free((((unsigned char *)best) - sizeof(void *))); }) ;
# 1118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)mainSeq) - sizeof(void *)), 7756732687571762445UL);free((((unsigned char *)mainSeq) - sizeof(void *))); }) ;
# 1120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)matchSeq) - sizeof(void *)), 7756732687571762517UL);free((((unsigned char *)matchSeq) - sizeof(void *))); }) ;
# 1121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 1124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ASTR_T *____chimes_ret_var_2; ; ____chimes_ret_var_2 = ((A)); rm_stack(true, 7756732687571763550UL, "pairwiseAlign", &____must_manage_pairwiseAlign, ____alias_loc_id_7, ____chimes_did_disable5, false); return ____chimes_ret_var_2; ;
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(true, 7756732687571763550UL, "pairwiseAlign", &____must_manage_pairwiseAlign, ____alias_loc_id_7, ____chimes_did_disable5, false); }

ASTR_T *pairwiseAlign(SEQDATA_T *seqData, SIMMATRIX_T *simMatrix,
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        int minScore, int maxReports, int minSeparation) { return (____chimes_replaying ? pairwiseAlign_resumable(seqData, simMatrix, minScore, maxReports, minSeparation) : pairwiseAlign_quick(seqData, simMatrix, minScore, maxReports, minSeparation)); }
# 1130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *freeA_quick(ASTR_T *A) {const int ____chimes_did_disable6 = new_stack((void *)(&freeA), "freeA", &____must_manage_freeA, 1, 0, (size_t)(7756732687571763943UL)) ; ; ;
# 1131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i; ;
# 1133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if (A) {
# 1135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->numReports) {
# 1136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->numReports) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->numReports) - sizeof(void *))); }) ;
# 1137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->numReports = __null;
# 1138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodScores) {
# 1140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodScores[i]) {
# 1142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodScores[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodScores[i]) - sizeof(void *))); }) ;
# 1143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodScores[i] = __null;
# 1144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodScores) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodScores) - sizeof(void *))); }) ;
# 1147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodScores = __null;
# 1148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodEndsI) {
# 1150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodEndsI[i]) {
# 1152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodEndsI[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsI[i]) - sizeof(void *))); }) ;
# 1153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodEndsI[i] = __null;
# 1154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodEndsI) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsI) - sizeof(void *))); }) ;
# 1157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodEndsI = __null;
# 1158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodEndsJ) {
# 1160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodEndsJ[i]) {
# 1162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodEndsJ[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsJ[i]) - sizeof(void *))); }) ;
# 1163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodEndsJ[i] = __null;
# 1164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodEndsJ) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsJ) - sizeof(void *))); }) ;
# 1167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodEndsJ = __null;
# 1168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     ({ free_helper((((unsigned char *)A) - sizeof(void *)), 7756732687571763943UL);free((((unsigned char *)A) - sizeof(void *))); }) ;
# 1170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 1171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ASTR_T *____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((__null)); rm_stack(true, 7756732687571763550UL, "freeA", &____must_manage_freeA, ____alias_loc_id_8, ____chimes_did_disable6, false); return ____chimes_ret_var_3; ;
# 1172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
rm_stack(true, 7756732687571763550UL, "freeA", &____must_manage_freeA, ____alias_loc_id_8, ____chimes_did_disable6, false); }

ASTR_T *freeA(ASTR_T *A) { return (____chimes_replaying ? freeA_resumable(A) : freeA_quick(A)); }
# 26 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
int gridInfo_npm(int *npRow, int *npCol, int *myRow, int *myCol)
# 27 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
{
# 28 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 29 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i, threadNum, numThreads, minPer, per, row, col;
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 52 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  threadNum = 0;
# 53 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  numThreads = 1;
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 71 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  minPer = numThreads + 2;
# 72 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 1; i <= numThreads; i++) {
# 73 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if ( (numThreads % i) == 0 ) {
# 74 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      row = i;
# 75 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      col = numThreads / i;
# 76 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      per = row + col;
# 77 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (per < minPer) {
# 78 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 *npRow = row;
# 79 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 *npCol = col;
# 80 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 minPer = per;
# 81 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 82 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 83 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 97 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( threadNum < ( (*npRow) * (*npCol) ) ) {
# 98 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myRow = threadNum / (*npCol);
# 99 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myCol = threadNum % (*npCol);
# 100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     int ____chimes_ret_var_0; ____chimes_ret_var_0 = (( (*npRow) * (*npCol) )); return ____chimes_ret_var_0; ;
# 101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  } else {
# 102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myRow = -1;
# 103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    *myCol = -1;
# 104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     int ____chimes_ret_var_1; ____chimes_ret_var_1 = ((-1)); return ____chimes_ret_var_1; ;
# 105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
}
# 118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
static
# 119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort_npm(int *b, int left, int right) {
# 120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i, j, t;
# 122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = right; i >= left; i--) {
# 124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    for (j = left+1; j <= i; j++) {
# 125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (b[j-1] > b[j]) {
# 126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 t = b[j-1];
# 127 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 b[j-1] = b[j];
# 128 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 b[j] = t;
# 129 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
}
# 145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void qSort_npm(int *b, const int *a, const int left, const int right) {
# 146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i;
# 148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = left; i <= right; i++) {
# 156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    b[i] = a[i];
# 157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  bubbleSort_npm(b, left, right);
# 159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
}
# 174 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
static
# 175 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void bubbleSort_both_npm(long long *y, int *a, int left, int right) {
# 176 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 177 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i, j, t;
# 178 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  long long lT;
# 179 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 180 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = right; i >= left; i--) {
# 181 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    for (j = left+1; j <= i; j++) {
# 182 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (y[j-1] > y[j]) {
# 183 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 t = a[j-1];
# 184 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 a[j-1] = a[j];
# 185 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 a[j] = t;
# 186 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 lT = y[j-1];
# 187 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 y[j-1] = y[j];
# 188 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 y[j] = lT;
# 189 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 190 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 191 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 192 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
}
# 205 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
void qSort_both_npm(long long *y, int *a, const long long *x, const int n) {
# 206 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 207 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i;
# 208 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 209 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 210 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 211 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 212 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 213 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 214 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 1; i <= n; i++) {
# 215 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    y[i] = x[i];
# 216 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    a[i] = i;
# 217 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 218 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  bubbleSort_both_npm(y, a, 1, n);
# 219 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
}
# 277 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *pairwiseAlign_npm(SEQDATA_T *seqData, SIMMATRIX_T *simMatrix,
# 278 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        int minScore, int maxReports, int minSeparation) {
# 279 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 280 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i, j, k, r, n, m, sortReports, report;
# 281 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int *index, *best, *goodEndsI, *goodEndsJ, gapFirst, gapExtend, worst;
# 282 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int iBeg, iEnd, jBeg, jEnd, myRow, myCol, npRow, npCol;
# 283 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int myTaskID, threadNum, maxThreads, matchLimit;
# 284 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  unsigned char *mainSeq, *matchSeq;
# 285 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  char **weights;
# 286 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  long long *goodScores, *scores;
# 287 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  long long *V, *F, G, Vp, E, W, llMinScore;
# 288 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  ASTR_T *A=__null;
# 289 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  double beginTime, endTime;
# 290 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 291 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 292 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 293 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  llMinScore = (long long)minScore;
# 294 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 295 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 296 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 297 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  matchLimit = simMatrix->matchLimit;
# 298 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 299 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 300 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 301 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A = (ASTR_T*) ({ void *____chimes_tmp_ptr = malloc((sizeof(ASTR_T)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(ASTR_T), 7756732687571763550UL, 0, 1, (int)sizeof(struct astr), 6, (int)__builtin_offsetof(struct astr, seqData), (int)__builtin_offsetof(struct astr, simMatrix), (int)__builtin_offsetof(struct astr, goodScores), (int)__builtin_offsetof(struct astr, numReports), (int)__builtin_offsetof(struct astr, goodEndsI), (int)__builtin_offsetof(struct astr, goodEndsJ)); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 302 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A\n");
# 303 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 304 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 305 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 306 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 307 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 308 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numThreads = 0;
# 309 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numReports = __null;
# 310 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->goodScores = __null;
# 311 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->goodEndsI = A->goodEndsJ = __null;
# 312 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 313 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 314 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 315 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->seqData = seqData;
# 316 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->simMatrix = simMatrix;
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 329 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  maxThreads = 1;
# 330 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 331 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 332 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 333 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 334 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 335 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 336 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 337 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  A->numThreads = maxThreads;
# 338 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 339 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->numReports = (int*) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 340 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->numReports\n");
# 341 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 342 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 343 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 344 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 345 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 346 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 347 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodScores = (long long**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(long long *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(long long*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 348 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       == __null ) {
# 349 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodScores\n");
# 350 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 351 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 352 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 353 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 354 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 355 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 356 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodEndsI = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 357 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodEndsI\n");
# 358 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 359 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 360 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 361 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 362 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 363 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 364 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if ( (A->goodEndsJ = (int**) ({ void *____chimes_tmp_ptr = malloc((maxThreads * sizeof(int *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, maxThreads * sizeof(int*), 7756732687571763795UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 365 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    printf("pairwiseAlign: cannot allocate A->goodEndsJ\n");
# 366 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 367 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 368 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 369 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    exit (1);
# 370 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 371 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 372 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  for (i = 0; i < maxThreads; i++) {
# 373 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->numReports[i] = 0;
# 374 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->goodScores[i] = 0L;
# 375 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    A->goodEndsI[i] = A->goodEndsJ[i] = __null;
# 376 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 401 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  {
# 402 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 403 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 404 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 405 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    gridInfo_npm(&npRow, &npCol, &myRow, &myCol);
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 417 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    threadNum = 0;
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 427 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    myTaskID = threadNum;
# 428 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 429 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 430 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 431 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 432 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (myRow >= 0 && myCol >= 0) {
# 433 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 434 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 435 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 436 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      sortReports = 3 * maxReports;
# 437 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      gapExtend = simMatrix->gapExtend;
# 438 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      gapFirst = simMatrix->gapStart + gapExtend;
# 439 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 440 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 441 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 442 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 443 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 444 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 445 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodScores =
# 446 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (long long*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(long long), 7756732687571762997UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 447 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodScores for thread %d\n",
# 448 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 449 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 450 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 451 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 452 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 453 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 454 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 455 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodEndsI = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571762951UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 456 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodEndsI for thread %d\n",
# 457 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 458 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 459 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 460 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 461 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 462 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 463 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 464 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (goodEndsJ = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763019UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 465 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate goodEndsJ for thread %d\n",
# 466 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 467 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 468 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 469 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 470 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 471 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 472 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 473 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i <= sortReports; i++) {
# 474 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 goodScores[i] = 0L;
# 475 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 goodEndsI[i] = goodEndsJ[i] = 0;
# 476 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 477 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 478 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 479 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 480 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 481 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 482 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 483 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (scores = (long long*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(long long), 7756732687571763115UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 484 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 == __null ) {
# 485 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate scores for thread %d\n",
# 486 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 487 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 488 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 489 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 490 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 491 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 492 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 493 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (index = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763453UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 494 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate index for thread %d\n",
# 495 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 496 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 497 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 498 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 499 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 500 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 501 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 502 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if( (best = (int*) ({ void *____chimes_tmp_ptr = malloc(((sortReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (sortReports+1)*sizeof(int), 7756732687571763103UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 503 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate best for thread %d\n",
# 504 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 505 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 506 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 507 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 508 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 509 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 510 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 511 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 512 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      report = 0;
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 524 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      n = A->seqData->mainLen;
# 525 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      m = A->seqData->matchLen;
# 526 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 527 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      iBeg = 1 + (n*myRow)/npRow;
# 528 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      jBeg = 1 + (m*myCol)/npCol;
# 529 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 530 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      iEnd = ( (n < (n*(myRow+1))/npRow + (matchLimit-1)) ? n : (n*(myRow+1))/npRow + (matchLimit-1) );
# 531 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      jEnd = ( (m < (m*(myCol+1))/npCol + (matchLimit-1)) ? m : (m*(myCol+1))/npCol + (matchLimit-1) );
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 547 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (mainSeq =
# 548 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((iEnd - iBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (iEnd - iBeg + 2) * sizeof(unsigned char), 7756732687571762445UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 549 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 550 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate mainSeq for thread %d\n",
# 551 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 552 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 553 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 554 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 555 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 556 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 557 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 558 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = iBeg; i <= iEnd; i++) {
# 559 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 mainSeq[i - iBeg + 1] = A->seqData->main[i];
# 560 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 561 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 562 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (matchSeq =
# 563 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     (unsigned char*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(unsigned char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(unsigned char), 7756732687571762517UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 564 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
         == __null ) {
# 565 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate matchSeq for thread %d\n",
# 566 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 567 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 568 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 569 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 570 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 571 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 572 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 573 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 574 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 matchSeq[j - jBeg + 1] = A->seqData->match[j];
# 575 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 584 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (weights = (char**) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char *)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, ((64) + 1)*sizeof(char*), 7756732687571762542UL, 1, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 585 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate weights for thread %d\n",
# 586 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 587 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 588 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 589 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 590 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 591 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 592 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 593 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i < ((64) + 1); i++) {
# 594 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if ( (weights[i] = (char*) ({ void *____chimes_tmp_ptr = malloc((((64) + 1) * sizeof(char)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, ((64) + 1)*sizeof(char), 7756732687571762539UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 595 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate weights[%d] for thread %d\n",
# 596 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        i, myTaskID);
# 597 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 598 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 599 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 600 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 601 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 602 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 603 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 for (j = 1; j < ((64) + 1); j++) {
# 604 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   weights[i][j] = simMatrix->similarity[i][j];
# 605 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 606 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 641 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 641 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (V = (long long*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(long long), 7756732687571762722UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 642 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 643 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate V for thread %d\n",
# 644 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 645 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 646 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 647 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 648 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 649 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 650 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 651 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 652 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 V[j - jBeg + 1] = 0L;
# 653 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 654 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 655 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if ( (F = (long long*) ({ void *____chimes_tmp_ptr = malloc(((jEnd - jBeg + 2) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (jEnd - jBeg + 2) * sizeof(long long), 7756732687571762725UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) )
# 656 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    == __null ) {
# 657 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("pairwiseAlign: cannot allocate F for thread %d\n",
# 658 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        myTaskID);
# 659 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 660 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 661 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 662 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 exit (1);
# 663 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 664 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 665 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (j = jBeg; j <= jEnd; j++) {
# 666 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 F[j - jBeg + 1] = (long long)(-gapFirst);
# 667 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 668 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 669 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 670 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 671 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 672 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      beginTime = (*____chimes_extern_func_getSeconds)();
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 681 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = iBeg; i <= iEnd; i++) {
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 705 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 G = (long long)(weights[mainSeq[i-iBeg+1]][ matchSeq[1] ]);
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 738 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 Vp = V[1];
# 739 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 V[1] = ( (0L > ( (F[1] > G) ? F[1] : G )) ? 0L : ( (F[1] > G) ? F[1] : G ) );
# 765 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 765 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 F[1] = ( (F[1] - gapExtend > V[1] - gapFirst) ? F[1] - gapExtend : V[1] - gapFirst );
# 766 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 E = V[1] - gapFirst;
# 767 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 768 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 769 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 770 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 771 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 772 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 773 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 for (j = jBeg + 2; j <= jEnd; j++) {
# 774 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 775 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 776 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 777 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   W = (long long)weights[ mainSeq[i-iBeg+1] ][ matchSeq[j-jBeg+1] ];
# 778 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 779 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 780 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 781 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 782 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 783 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 784 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 785 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   G = W + Vp;
# 786 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 787 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 788 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 789 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 790 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 791 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 792 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   Vp = V[j - jBeg + 1];
# 793 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   V[j - jBeg + 1] = ( (( (0L > E) ? 0L : E ) > ( (F[j - jBeg + 1] > G) ? F[j - jBeg + 1] : G )) ? ( (0L > E) ? 0L : E ) : ( (F[j - jBeg + 1] > G) ? F[j - jBeg + 1] : G ) );
# 805 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 805 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( V[j-jBeg+1] >= llMinScore && W > 0L && V[j-jBeg+1] == G &&
# 806 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        ( j == jEnd || i == iEnd ||
# 807 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   weights[mainSeq[i-iBeg+2]][matchSeq[j-jBeg+2]] <= 0 ) ) {
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 844 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     for (r = report; r >= 1; r--) {
# 845 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if (i - goodEndsI[r] >= minSeparation) {
# 846 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  break;
# 847 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 848 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if ( abs(j - goodEndsJ[r]) >= minSeparation) {
# 849 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  continue;
# 850 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 851 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       if (goodScores[r] > V[j - jBeg + 1]) {
# 852 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goto discardPoint;
# 853 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 854 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 855 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 856 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 857 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = r; k < report; k++) {
# 858 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodScores[k] = goodScores[k+1];
# 859 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsI[k] = goodEndsI[k+1];
# 860 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsJ[k] = goodEndsJ[k+1];
# 861 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 862 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       report--;
# 863 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     }
# 864 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 865 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 866 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 867 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     report++;
# 868 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodScores[report] = V[j - jBeg + 1];
# 869 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodEndsI[report] = i;
# 870 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     goodEndsJ[report] = j;
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 911 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     if (report == sortReports) {
# 912 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       qSort_both_npm(scores, index, goodScores, sortReports);
# 913 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       worst = sortReports - maxReports + 1;
# 914 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       llMinScore = scores[worst] + 1L;
# 915 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       qSort_npm(best, index, worst, sortReports);
# 916 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 917 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 918 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodScores[best[k]];
# 919 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 920 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 921 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodScores[k] = scores[k];
# 922 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 923 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 924 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 925 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodEndsI[ best[k] ];
# 926 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 927 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 928 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsI[k] = scores[k];
# 929 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 930 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = worst; k <= sortReports; k++) {
# 931 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  scores[k - worst + 1] = goodEndsJ[ best[k] ];
# 932 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 933 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       for (k = 1; k <= maxReports; k++) {
# 934 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  goodEndsJ[k] = scores[k];
# 935 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       }
# 936 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       report = maxReports;
# 937 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     }
# 938 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 939 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 discardPoint:
# 950 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 950 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   F[j-jBeg+1] = ( (F[j-jBeg+1] - gapExtend > V[j-jBeg+1] - gapFirst) ? F[j-jBeg+1] - gapExtend : V[j-jBeg+1] - gapFirst );
# 951 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   E = ( (E - gapExtend > V[j - jBeg + 1] - gapFirst) ? E - gapExtend : V[j - jBeg + 1] - gapFirst );
# 952 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 953 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 954 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 955 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 956 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 957 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 958 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      endTime = (*____chimes_extern_func_getSeconds)();
# 959 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 960 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 961 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 962 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 963 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 964 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 965 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (myTaskID == 0) {
# 966 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 printf("\n        Match time = %10.5f seconds\n",
# 967 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        endTime - beginTime);
# 968 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 969 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 970 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 971 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 972 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 973 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 974 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      if (report == 0) {
# 975 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 A->numReports[threadNum] = report;
# 976 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      } else {
# 977 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 978 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 979 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 980 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (report <= maxReports) {
# 981 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 982 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 983 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 984 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodScores[threadNum] =
# 985 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (long long*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(long long), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 986 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: can't allocate A->goodScores for thread %d\n",
# 987 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 988 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 989 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 990 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 991 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 992 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 993 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 994 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsI[threadNum] =
# 995 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 996 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsI for thread %d\n",
# 997 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 998 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 999 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1000 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1001 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1002 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1003 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1004 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsJ[threadNum] =
# 1005 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((report + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (report+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1006 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsJ for thread %d\n",
# 1007 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1008 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1009 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1010 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1011 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1012 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1024 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   qSort_both_npm(scores, index, goodScores, report);
# 1025 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   j = 1;
# 1026 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   for (i = report; i >= 1; i--) {
# 1027 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodScores[threadNum][j] = goodScores[ index[i] ];
# 1028 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsI[threadNum][j] = goodEndsI[ index[i] ];
# 1029 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsJ[threadNum][j] = goodEndsJ[ index[i] ];
# 1030 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     j++;
# 1031 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1032 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1033 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1034 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1035 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->numReports[threadNum] = report;
# 1036 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1037 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 } else {
# 1038 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1039 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1040 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1041 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1042 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1043 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1044 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   worst = ( (report - maxReports + 1 > 1) ? report - maxReports + 1 : 1 );
# 1045 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1046 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1047 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1048 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodScores[threadNum] =
# 1049 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (long long*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(long long)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(long long), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) ==
# 1050 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
        __null ) {
# 1051 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodScores for thread %d\n",
# 1052 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1053 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1054 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1055 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1056 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1057 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1058 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1059 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsI[threadNum] =
# 1060 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1061 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsI for thread %d\n",
# 1062 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1063 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1064 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1065 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1066 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1067 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1068 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1069 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   if ( (A->goodEndsJ[threadNum] =
# 1070 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  (int*) ({ void *____chimes_tmp_ptr = malloc(((maxReports + 1) * sizeof(int)) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, (maxReports+1)*sizeof(int), 7756732687571763795UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ) == __null ) {
# 1071 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     printf("pairwiseAlign: cannot allocate A->goodEndsJ for thread %d\n",
# 1072 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     myTaskID);
# 1073 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1074 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1075 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1076 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     exit (1);
# 1077 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1089 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   qSort_both_npm(scores, index, goodScores, report);
# 1090 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   j = 1;
# 1091 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   for (i = report; i >= worst; i--) {
# 1092 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodScores[threadNum][j] = goodScores[ index[i] ];
# 1093 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsI[threadNum][j] = goodEndsI[ index[i] ];
# 1094 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     A->goodEndsJ[threadNum][j] = goodEndsJ[ index[i] ];
# 1095 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     j++;
# 1096 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   }
# 1097 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1098 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1099 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1100 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->numReports[threadNum] = maxReports;
# 1101 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1102 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1103 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1104 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1105 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1106 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 1; i < ((64) + 1); i++) {
# 1107 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  ({ free_helper((((unsigned char *)weights[i]) - sizeof(void *)), 7756732687571762539UL);free((((unsigned char *)weights[i]) - sizeof(void *))); }) ;
# 1108 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1109 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)weights) - sizeof(void *)), 7756732687571762542UL);free((((unsigned char *)weights) - sizeof(void *))); }) ;
# 1110 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodScores) - sizeof(void *)), 7756732687571762997UL);free((((unsigned char *)goodScores) - sizeof(void *))); }) ;
# 1111 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodEndsI) - sizeof(void *)), 7756732687571762951UL);free((((unsigned char *)goodEndsI) - sizeof(void *))); }) ;
# 1112 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)goodEndsJ) - sizeof(void *)), 7756732687571763019UL);free((((unsigned char *)goodEndsJ) - sizeof(void *))); }) ;
# 1113 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)F) - sizeof(void *)), 7756732687571762725UL);free((((unsigned char *)F) - sizeof(void *))); }) ;
# 1114 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)V) - sizeof(void *)), 7756732687571762722UL);free((((unsigned char *)V) - sizeof(void *))); }) ;
# 1115 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)scores) - sizeof(void *)), 7756732687571763115UL);free((((unsigned char *)scores) - sizeof(void *))); }) ;
# 1116 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)index) - sizeof(void *)), 7756732687571763453UL);free((((unsigned char *)index) - sizeof(void *))); }) ;
# 1117 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)best) - sizeof(void *)), 7756732687571763103UL);free((((unsigned char *)best) - sizeof(void *))); }) ;
# 1118 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1119 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)mainSeq) - sizeof(void *)), 7756732687571762445UL);free((((unsigned char *)mainSeq) - sizeof(void *))); }) ;
# 1120 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)matchSeq) - sizeof(void *)), 7756732687571762517UL);free((((unsigned char *)matchSeq) - sizeof(void *))); }) ;
# 1121 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1122 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1123 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 1124 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1125 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ASTR_T * ____chimes_ret_var_2; ____chimes_ret_var_2 = ((A)); return ____chimes_ret_var_2; ;
# 1126 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
}
# 1130 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
ASTR_T *freeA_npm(ASTR_T *A) {
# 1131 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1132 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  int i;
# 1133 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
# 1134 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  if (A) {
# 1135 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->numReports) {
# 1136 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->numReports) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->numReports) - sizeof(void *))); }) ;
# 1137 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->numReports = __null;
# 1138 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1139 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodScores) {
# 1140 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1141 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodScores[i]) {
# 1142 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodScores[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodScores[i]) - sizeof(void *))); }) ;
# 1143 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodScores[i] = __null;
# 1144 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1145 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1146 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodScores) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodScores) - sizeof(void *))); }) ;
# 1147 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodScores = __null;
# 1148 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1149 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodEndsI) {
# 1150 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1151 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodEndsI[i]) {
# 1152 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodEndsI[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsI[i]) - sizeof(void *))); }) ;
# 1153 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodEndsI[i] = __null;
# 1154 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1155 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1156 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodEndsI) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsI) - sizeof(void *))); }) ;
# 1157 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodEndsI = __null;
# 1158 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1159 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    if (A->goodEndsJ) {
# 1160 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      for (i = 0; i < A->numThreads; i++) {
# 1161 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 if (A->goodEndsJ[i]) {
# 1162 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    ({ free_helper((((unsigned char *)A->goodEndsJ[i]) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsJ[i]) - sizeof(void *))); }) ;
# 1163 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   A->goodEndsJ[i] = __null;
# 1164 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
 }
# 1165 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      }
# 1166 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
       ({ free_helper((((unsigned char *)A->goodEndsJ) - sizeof(void *)), 7756732687571763795UL);free((((unsigned char *)A->goodEndsJ) - sizeof(void *))); }) ;
# 1167 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
      A->goodEndsJ = __null;
# 1168 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
    }
# 1169 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
     ({ free_helper((((unsigned char *)A) - sizeof(void *)), 7756732687571763943UL);free((((unsigned char *)A) - sizeof(void *))); }) ;
# 1170 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
  }
# 1171 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
   ASTR_T * ____chimes_ret_var_3; ____chimes_ret_var_3 = ((__null)); return ____chimes_ret_var_3; ;
# 1172 "/gpfs-biou/jmg3/spec/benchspec/OMP2012/372.smithwa/src/pairwiseAlign.c"
}





static int module_init() {
    init_module(7756732687571761587UL, 33, 7, 27, 9, 7, 1, 8, 7, 0, 3,
                           &____alias_loc_id_0, (unsigned)18, (unsigned)0, (unsigned)0, (7756732687571761587UL + 416UL), (7756732687571761587UL + 417UL), (7756732687571761587UL + 418UL), (7756732687571761587UL + 419UL), (7756732687571761587UL + 423UL), (7756732687571761587UL + 430UL), (7756732687571761587UL + 450UL), (7756732687571761587UL + 451UL), (7756732687571761587UL + 452UL), (7756732687571761587UL + 453UL), (7756732687571761587UL + 454UL), (7756732687571761587UL + 456UL), (7756732687571761587UL + 1135UL), (7756732687571761587UL + 1138UL), (7756732687571761587UL + 1364UL), (7756732687571761587UL + 1410UL), (7756732687571761587UL + 1432UL), (7756732687571761587UL + 1528UL),
                           &____alias_loc_id_1, (unsigned)32, (unsigned)0, (unsigned)0, (7756732687571761587UL + 416UL), (7756732687571761587UL + 417UL), (7756732687571761587UL + 420UL), (7756732687571761587UL + 421UL), (7756732687571761587UL + 422UL), (7756732687571761587UL + 423UL), (7756732687571761587UL + 424UL), (7756732687571761587UL + 425UL), (7756732687571761587UL + 426UL), (7756732687571761587UL + 427UL), (7756732687571761587UL + 428UL), (7756732687571761587UL + 429UL), (7756732687571761587UL + 431UL), (7756732687571761587UL + 432UL), (7756732687571761587UL + 433UL), (7756732687571761587UL + 434UL), (7756732687571761587UL + 443UL), (7756732687571761587UL + 444UL), (7756732687571761587UL + 445UL), (7756732687571761587UL + 446UL), (7756732687571761587UL + 447UL), (7756732687571761587UL + 448UL), (7756732687571761587UL + 449UL), (7756732687571761587UL + 858UL), (7756732687571761587UL + 930UL), (7756732687571761587UL + 952UL), (7756732687571761587UL + 955UL), (7756732687571761587UL + 1135UL), (7756732687571761587UL + 1138UL), (7756732687571761587UL + 1364UL), (7756732687571761587UL + 1410UL), (7756732687571761587UL + 1432UL),
                           &____alias_loc_id_2, (unsigned)18, (unsigned)0, (unsigned)0, (7756732687571761587UL + 1UL), (7756732687571761587UL + 2UL), (7756732687571761587UL + 3UL), (7756732687571761587UL + 4UL), (7756732687571761587UL + 5UL), (7756732687571761587UL + 6UL), (7756732687571761587UL + 7UL), (7756732687571761587UL + 8UL), (7756732687571761587UL + 9UL), (7756732687571761587UL + 10UL), (7756732687571761587UL + 11UL), (7756732687571761587UL + 12UL), (7756732687571761587UL + 13UL), (7756732687571761587UL + 14UL), (7756732687571761587UL + 116UL), (7756732687571761587UL + 117UL), (7756732687571761587UL + 118UL), (7756732687571761587UL + 119UL),
                           &____alias_loc_id_3, (unsigned)6, (unsigned)0, (unsigned)0, (7756732687571761587UL + 122UL), (7756732687571761587UL + 123UL), (7756732687571761587UL + 124UL), (7756732687571761587UL + 125UL), (7756732687571761587UL + 126UL), (7756732687571761587UL + 163UL),
                           &____alias_loc_id_4, (unsigned)7, (unsigned)0, (unsigned)0, (7756732687571761587UL + 167UL), (7756732687571761587UL + 168UL), (7756732687571761587UL + 169UL), (7756732687571761587UL + 170UL), (7756732687571761587UL + 171UL), (7756732687571761587UL + 172UL), (7756732687571761587UL + 246UL),
                           &____alias_loc_id_5, (unsigned)7, (unsigned)0, (unsigned)0, (7756732687571761587UL + 249UL), (7756732687571761587UL + 250UL), (7756732687571761587UL + 251UL), (7756732687571761587UL + 252UL), (7756732687571761587UL + 253UL), (7756732687571761587UL + 295UL), (7756732687571761587UL + 296UL),
                           &____alias_loc_id_6, (unsigned)10, (unsigned)0, (unsigned)0, (7756732687571761587UL + 299UL), (7756732687571761587UL + 300UL), (7756732687571761587UL + 301UL), (7756732687571761587UL + 302UL), (7756732687571761587UL + 303UL), (7756732687571761587UL + 304UL), (7756732687571761587UL + 305UL), (7756732687571761587UL + 306UL), (7756732687571761587UL + 407UL), (7756732687571761587UL + 408UL),
                           &____alias_loc_id_7, (unsigned)18, (unsigned)0, (unsigned)0, (7756732687571761587UL + 411UL), (7756732687571761587UL + 412UL), (7756732687571761587UL + 413UL), (7756732687571761587UL + 414UL), (7756732687571761587UL + 415UL), (7756732687571761587UL + 416UL), (7756732687571761587UL + 417UL), (7756732687571761587UL + 430UL), (7756732687571761587UL + 439UL), (7756732687571761587UL + 440UL), (7756732687571761587UL + 441UL), (7756732687571761587UL + 442UL), (7756732687571761587UL + 454UL), (7756732687571761587UL + 455UL), (7756732687571761587UL + 457UL), (7756732687571761587UL + 458UL), (7756732687571761587UL + 1963UL), (7756732687571761587UL + 2208UL),
                           &____alias_loc_id_8, (unsigned)5, (unsigned)0, (unsigned)0, (7756732687571761587UL + 2166UL), (7756732687571761587UL + 2167UL), (7756732687571761587UL + 2168UL), (7756732687571761587UL + 2208UL), (7756732687571761587UL + 2356UL),
                            "pairwiseAlign", 0, "_Z13pairwiseAlignP6seqdatP6simmatiii", "_Z17pairwiseAlign_npmP6seqdatP6simmatiii", 2, &____alias_loc_id_0, &____alias_loc_id_1, 5, (7756732687571761587UL + 2208UL), (7756732687571761587UL + 2208UL), 0UL, 0UL, 0UL, (7756732687571761587UL + 1963UL), 90, "malloc", 1, 0UL, (7756732687571761587UL + 1963UL), "printf", 1, (7756732687571761587UL + 2357UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 1, (7756732687571761587UL + 2358UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 1, (7756732687571761587UL + 2358UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 1, (7756732687571761587UL + 2360UL), 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 1, (7756732687571761587UL + 2360UL), 0UL, "exit", 1, 0UL, 0UL, "gridInfo", 4, (7756732687571761587UL + 437UL), (7756732687571761587UL + 438UL), (7756732687571761587UL + 435UL), (7756732687571761587UL + 436UL), 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1410UL), "printf", 2, (7756732687571761587UL + 2362UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1364UL), "printf", 2, (7756732687571761587UL + 2363UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1432UL), "printf", 2, (7756732687571761587UL + 2363UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1528UL), "printf", 2, (7756732687571761587UL + 2365UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1866UL), "printf", 2, (7756732687571761587UL + 2366UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1516UL), "printf", 2, (7756732687571761587UL + 2367UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 858UL), "printf", 2, (7756732687571761587UL + 2368UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 930UL), "printf", 2, (7756732687571761587UL + 2369UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 955UL), "printf", 2, (7756732687571761587UL + 2368UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 952UL), "printf", 3, (7756732687571761587UL + 2371UL), 0UL, 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1135UL), "printf", 2, (7756732687571761587UL + 2372UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 1138UL), "printf", 2, (7756732687571761587UL + 2372UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "getSeconds", 0, 0UL, "abs", 1, 0UL, 0UL, "qSort_both", 4, (7756732687571761587UL + 1528UL), (7756732687571761587UL + 1866UL), (7756732687571761587UL + 1410UL), 0UL, 0UL, "qSort", 4, (7756732687571761587UL + 1516UL), (7756732687571761587UL + 1866UL), 0UL, 0UL, 0UL, "getSeconds", 0, 0UL, "printf", 2, (7756732687571761587UL + 2374UL), 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 2, (7756732687571761587UL + 2375UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 2, (7756732687571761587UL + 2375UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 2, (7756732687571761587UL + 2375UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "qSort_both", 4, (7756732687571761587UL + 1528UL), (7756732687571761587UL + 1866UL), (7756732687571761587UL + 1410UL), 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 2, (7756732687571761587UL + 2378UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 2, (7756732687571761587UL + 2375UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "malloc", 1, 0UL, (7756732687571761587UL + 2208UL), "printf", 2, (7756732687571761587UL + 2375UL), 0UL, 0UL, "exit", 1, 0UL, 0UL, "qSort_both", 4, (7756732687571761587UL + 1528UL), (7756732687571761587UL + 1866UL), (7756732687571761587UL + 1410UL), 0UL, 0UL, "free", 1, (7756732687571761587UL + 952UL), 0UL, "free", 1, (7756732687571761587UL + 955UL), 0UL, "free", 1, (7756732687571761587UL + 1410UL), 0UL, "free", 1, (7756732687571761587UL + 1364UL), 0UL, "free", 1, (7756732687571761587UL + 1432UL), 0UL, "free", 1, (7756732687571761587UL + 1138UL), 0UL, "free", 1, (7756732687571761587UL + 1135UL), 0UL, "free", 1, (7756732687571761587UL + 1528UL), 0UL, "free", 1, (7756732687571761587UL + 1866UL), 0UL, "free", 1, (7756732687571761587UL + 1516UL), 0UL, "free", 1, (7756732687571761587UL + 858UL), 0UL, "free", 1, (7756732687571761587UL + 930UL), 0UL,
                            "bubbleSort_both", 1, (void *)(&bubbleSort_both_npm), (void *)__null, 0, 4, (7756732687571761587UL + 407UL), (7756732687571761587UL + 408UL), 0UL, 0UL, 0UL, 0,
                            "qSort", 0, "_Z5qSortPiPKiii", "_Z9qSort_npmPiPKiii", 0, 4, (7756732687571761587UL + 163UL), (7756732687571761587UL + 164UL), 0UL, 0UL, 0UL, 1, "bubbleSort", 3, (7756732687571761587UL + 163UL), 0UL, 0UL, 0UL,
                            "bubbleSort", 1, (void *)(&bubbleSort_npm), (void *)__null, 0, 3, (7756732687571761587UL + 246UL), 0UL, 0UL, 0UL, 0,
                            "qSort_both", 0, "_Z10qSort_bothPxPiPKxi", "_Z14qSort_both_npmPxPiPKxi", 0, 4, (7756732687571761587UL + 295UL), (7756732687571761587UL + 296UL), (7756732687571761587UL + 297UL), 0UL, 0UL, 1, "bubbleSort_both", 4, (7756732687571761587UL + 295UL), (7756732687571761587UL + 296UL), 0UL, 0UL, 0UL,
                            "freeA", 0, "_Z5freeAP4astr", "_Z9freeA_npmP4astr", 0, 1, (7756732687571761587UL + 2356UL), (7756732687571761587UL + 1963UL), 8, "free", 1, (7756732687571761587UL + 2208UL), 0UL, "free", 1, (7756732687571761587UL + 2208UL), 0UL, "free", 1, (7756732687571761587UL + 2208UL), 0UL, "free", 1, (7756732687571761587UL + 2208UL), 0UL, "free", 1, (7756732687571761587UL + 2208UL), 0UL, "free", 1, (7756732687571761587UL + 2208UL), 0UL, "free", 1, (7756732687571761587UL + 2208UL), 0UL, "free", 1, (7756732687571761587UL + 2356UL), 0UL,
                            "gridInfo", 0, "_Z8gridInfoPiS_S_S_", "_Z12gridInfo_npmPiS_S_S_", 0, 4, (7756732687571761587UL + 116UL), (7756732687571761587UL + 117UL), (7756732687571761587UL + 118UL), (7756732687571761587UL + 119UL), 0UL, 0,
                               "getSeconds", (void **)&(____chimes_extern_func_getSeconds),
                           "pairwiseAlign", &(____chimes_does_checkpoint_pairwiseAlign_npm),
                           "bubbleSort_both", &(____chimes_does_checkpoint_bubbleSort_both_npm),
                           "qSort", &(____chimes_does_checkpoint_qSort_npm),
                           "bubbleSort", &(____chimes_does_checkpoint_bubbleSort_npm),
                           "qSort_both", &(____chimes_does_checkpoint_qSort_both_npm),
                           "freeA", &(____chimes_does_checkpoint_freeA_npm),
                           "gridInfo", &(____chimes_does_checkpoint_gridInfo_npm),
                           "getSeconds", &(____chimes_does_checkpoint_getSeconds_npm),
                             (7756732687571761587UL + 458UL), (7756732687571761587UL + 1963UL),
                             (7756732687571761587UL + 455UL), (7756732687571761587UL + 1963UL),
                             (7756732687571761587UL + 250UL), (7756732687571761587UL + 296UL),
                             (7756732687571761587UL + 251UL), (7756732687571761587UL + 297UL),
                             (7756732687571761587UL + 2208UL), (7756732687571761587UL + 2208UL),
                             (7756732687571761587UL + 955UL), (7756732687571761587UL + 952UL),
                             (7756732687571761587UL + 1963UL), (7756732687571761587UL + 2208UL),
                             (7756732687571761587UL + 443UL), (7756732687571761587UL + 858UL),
                             (7756732687571761587UL + 3UL), (7756732687571761587UL + 117UL),
                             (7756732687571761587UL + 2UL), (7756732687571761587UL + 116UL),
                             (7756732687571761587UL + 5UL), (7756732687571761587UL + 119UL),
                             (7756732687571761587UL + 4UL), (7756732687571761587UL + 118UL),
                             (7756732687571761587UL + 425UL), (7756732687571761587UL + 1516UL),
                             (7756732687571761587UL + 424UL), (7756732687571761587UL + 1866UL),
                             (7756732687571761587UL + 427UL), (7756732687571761587UL + 1432UL),
                             (7756732687571761587UL + 426UL), (7756732687571761587UL + 1364UL),
                             (7756732687571761587UL + 449UL), (7756732687571761587UL + 1138UL),
                             (7756732687571761587UL + 448UL), (7756732687571761587UL + 1135UL),
                             (7756732687571761587UL + 300UL), (7756732687571761587UL + 408UL),
                             (7756732687571761587UL + 447UL), (7756732687571761587UL + 1528UL),
                             (7756732687571761587UL + 446UL), (7756732687571761587UL + 1410UL),
                             (7756732687571761587UL + 445UL), (7756732687571761587UL + 955UL),
                             (7756732687571761587UL + 444UL), (7756732687571761587UL + 930UL),
                             (7756732687571761587UL + 122UL), (7756732687571761587UL + 163UL),
                             (7756732687571761587UL + 123UL), (7756732687571761587UL + 164UL),
                             (7756732687571761587UL + 2168UL), (7756732687571761587UL + 1963UL),
                             (7756732687571761587UL + 167UL), (7756732687571761587UL + 246UL),
                             (7756732687571761587UL + 249UL), (7756732687571761587UL + 295UL),
                             (7756732687571761587UL + 411UL), (7756732687571761587UL + 2208UL),
                             (7756732687571761587UL + 412UL), (7756732687571761587UL + 2208UL),
                             (7756732687571761587UL + 299UL), (7756732687571761587UL + 407UL),
                             (7756732687571761587UL + 2166UL), (7756732687571761587UL + 2356UL),
                             (7756732687571761587UL + 2356UL), (7756732687571761587UL + 2208UL),
                     "astr", 448UL, 7, "%struct.seqdat*", (int)__builtin_offsetof (struct astr, seqData), "%struct.simmat*", (int)__builtin_offsetof (struct astr, simMatrix), "long long int**", (int)__builtin_offsetof (struct astr, goodScores), "int", (int)__builtin_offsetof (struct astr, numThreads), "int*", (int)__builtin_offsetof (struct astr, numReports), "int**", (int)__builtin_offsetof (struct astr, goodEndsI), "int**", (int)__builtin_offsetof (struct astr, goodEndsJ),
                     "seqdat", 256UL, 5, "unsigned char*", (int)__builtin_offsetof (struct seqdat, main), "unsigned char*", (int)__builtin_offsetof (struct seqdat, match), "int", (int)__builtin_offsetof (struct seqdat, mainLen), "int", (int)__builtin_offsetof (struct seqdat, matchLen), "int", (int)__builtin_offsetof (struct seqdat, maxValidation),
                     "simmat", 40960UL, 14, "[ 4225 x char ]", (int)__builtin_offsetof (struct simmat, similarity), "[ 66 x char ]", (int)__builtin_offsetof (struct simmat, aminoAcid), "char*", (int)__builtin_offsetof (struct simmat, bases), "[ 66 x char* ]", (int)__builtin_offsetof (struct simmat, codon), "[ 129 x unsigned char ]", (int)__builtin_offsetof (struct simmat, encode), "[ 129 x unsigned char ]", (int)__builtin_offsetof (struct simmat, encode_first), "char", (int)__builtin_offsetof (struct simmat, hyphen), "char", (int)__builtin_offsetof (struct simmat, star), "int", (int)__builtin_offsetof (struct simmat, exact), "int", (int)__builtin_offsetof (struct simmat, similar), "int", (int)__builtin_offsetof (struct simmat, dissimilar), "int", (int)__builtin_offsetof (struct simmat, gapStart), "int", (int)__builtin_offsetof (struct simmat, gapExtend), "int", (int)__builtin_offsetof (struct simmat, matchLimit),
                             "pairwiseAlign", "_Z13pairwiseAlignP6seqdatP6simmatiii", 0, 7, "gridInfo", "getSeconds", "qSort_both", "qSort", "getSeconds", "qSort_both", "qSort_both",
                             "bubbleSort_both", "_ZL15bubbleSort_bothPxPiii", 0, 0,
                             "qSort", "_Z5qSortPiPKiii", 0, 1, "bubbleSort",
                             "bubbleSort", "_ZL10bubbleSortPiii", 0, 0,
                             "qSort_both", "_Z10qSort_bothPxPiPKxi", 0, 1, "bubbleSort_both",
                             "freeA", "_Z5freeAP4astr", 0, 0,
                             "gridInfo", "_Z8gridInfoPiS_S_S_", 0, 0,
                        "pairwiseAlign|maxReports|0", 1, "getSeconds",
                        "pairwiseAlign|minSeparation|0", 1, "getSeconds",
                        "pairwiseAlign|sortReports|0", 1, "getSeconds",
                        "pairwiseAlign|report|0", 1, "getSeconds",
                        "pairwiseAlign|index|0", 1, "getSeconds",
                        "pairwiseAlign|best|0", 1, "getSeconds",
                        "pairwiseAlign|goodEndsI|0", 1, "getSeconds",
                        "pairwiseAlign|goodEndsJ|0", 1, "getSeconds",
                        "pairwiseAlign|gapFirst|0", 1, "getSeconds",
                        "pairwiseAlign|gapExtend|0", 1, "getSeconds",
                        "pairwiseAlign|iBeg|0", 1, "getSeconds",
                        "pairwiseAlign|iEnd|0", 1, "getSeconds",
                        "pairwiseAlign|jBeg|0", 1, "getSeconds",
                        "pairwiseAlign|jEnd|0", 1, "getSeconds",
                        "pairwiseAlign|myRow|0", 1, "pairwiseAlign",
                        "pairwiseAlign|myTaskID|0", 1, "getSeconds",
                        "pairwiseAlign|threadNum|0", 1, "getSeconds",
                        "pairwiseAlign|mainSeq|0", 1, "getSeconds",
                        "pairwiseAlign|matchSeq|0", 1, "getSeconds",
                        "pairwiseAlign|weights|0", 1, "getSeconds",
                        "pairwiseAlign|goodScores|0", 1, "getSeconds",
                        "pairwiseAlign|scores|0", 1, "getSeconds",
                        "pairwiseAlign|V|0", 1, "getSeconds",
                        "pairwiseAlign|F|0", 1, "getSeconds",
                        "pairwiseAlign|llMinScore|0", 1, "getSeconds",
                        "pairwiseAlign|A|0", 1, "getSeconds",
                        "pairwiseAlign|beginTime|0", 1, "getSeconds",
        "bubbleSort", 0UL, (int)3, 7756732687571761750UL, 0UL, 0UL,
        "bubbleSort_both", 0UL, (int)4, 7756732687571761882UL, 7756732687571761883UL, 0UL, 0UL,
        "gridInfo", 0UL, (int)4, 7756732687571762024UL, 7756732687571762025UL, 7756732687571762022UL, 7756732687571762023UL,
        "qSort_both", 0UL, (int)4, 7756732687571763115UL, 7756732687571763453UL, 7756732687571762997UL, 0UL,
        "qSort", 0UL, (int)4, 7756732687571763103UL, 7756732687571763453UL, 0UL, 0UL,
        "qSort_both", 0UL, (int)4, 7756732687571763115UL, 7756732687571763453UL, 7756732687571762997UL, 0UL,
        "qSort_both", 0UL, (int)4, 7756732687571763115UL, 7756732687571763453UL, 7756732687571762997UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();
