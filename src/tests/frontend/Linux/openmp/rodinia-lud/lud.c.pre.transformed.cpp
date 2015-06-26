# 1 "lud.c.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "lud.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_create_matrix_from_file_npm = 1;
static int ____chimes_does_checkpoint_get_interval_by_sec_npm = 1;
static int ____chimes_does_checkpoint_lud_base_npm = 1;
static int ____chimes_does_checkpoint_lud_verify_npm = 1;
static int ____chimes_does_checkpoint_matrix_duplicate_npm = 1;
static int ____chimes_does_checkpoint_print_matrix_npm = 1;
static int ____chimes_does_checkpoint_stopwatch_start_npm = 1;
static int ____chimes_does_checkpoint_stopwatch_stop_npm = 1;

static int ____must_checkpoint_main_matrix_dim_0 = 2;
static int ____must_checkpoint_main_option_index_0 = 2;
static int ____must_checkpoint_main_ret_0 = 2;
static int ____must_checkpoint_main_input_file_0 = 2;
static int ____must_checkpoint_main_mm_0 = 2;
static int ____must_checkpoint_main_sw_0 = 2;
static int ____must_checkpoint_main_____chimes_unroll_var_0_0 = 2;

static int ____must_manage_main = 2;

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
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<command-line>"
# 1 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 147 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/jmg3/num-debug/src/libchimes/libchimes.h" 2


extern void init_chimes();
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
        const char *funcname, int *conditional, unsigned loc_id, int disabled);
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
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void free_wrapper(void *ptr, size_t group);
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
# 67 "/home/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 19 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
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



# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h" 1 3 4
# 40 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stdarg.h" 3 4
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
# 20 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 28 "/usr/include/unistd.h" 3 4
extern "C" {
# 203 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/bits/posix_opt.h" 1 3 4
# 204 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/bits/environments.h" 1 3 4
# 23 "/usr/include/bits/environments.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 24 "/usr/include/bits/environments.h" 2 3 4
# 208 "/usr/include/unistd.h" 2 3 4
# 227 "/usr/include/unistd.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 228 "/usr/include/unistd.h" 2 3 4





typedef __gid_t gid_t;




typedef __uid_t uid_t;
# 256 "/usr/include/unistd.h" 3 4
typedef __useconds_t useconds_t;




typedef __pid_t pid_t;






typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 288 "/usr/include/unistd.h" 3 4
extern int access (__const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (__const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, __const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 331 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 342 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, __const void *__buf, size_t __n) ;
# 373 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, __const void *__buf, size_t __n,
         __off_t __offset) ;
# 401 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, __const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
# 429 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 441 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 466 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (__const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, __const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 508 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (__const char *__path, char *__const __argv[],
     char *__const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *__const __argv[], char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (__const char *__path, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (__const char *__path, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (__const char *__file, char *__const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (__const char *__file, __const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (__const char *__file, char *__const __argv[],
      char *__const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/bits/confname.h" 1 3 4
# 26 "/usr/include/bits/confname.h" 3 4
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS,

    _PC_REC_INCR_XFER_SIZE,

    _PC_REC_MAX_XFER_SIZE,

    _PC_REC_MIN_XFER_SIZE,

    _PC_REC_XFER_ALIGN,

    _PC_ALLOC_SIZE_MIN,

    _PC_SYMLINK_MAX,

    _PC_2_SYMLINKS

  };


enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,




    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_IOV_MAX = _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,



    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS,


    _SC_ADVISORY_INFO,

    _SC_BARRIERS,

    _SC_BASE,

    _SC_C_LANG_SUPPORT,

    _SC_C_LANG_SUPPORT_R,

    _SC_CLOCK_SELECTION,

    _SC_CPUTIME,

    _SC_THREAD_CPUTIME,

    _SC_DEVICE_IO,

    _SC_DEVICE_SPECIFIC,

    _SC_DEVICE_SPECIFIC_R,

    _SC_FD_MGMT,

    _SC_FIFO,

    _SC_PIPE,

    _SC_FILE_ATTRIBUTES,

    _SC_FILE_LOCKING,

    _SC_FILE_SYSTEM,

    _SC_MONOTONIC_CLOCK,

    _SC_MULTI_PROCESS,

    _SC_SINGLE_PROCESS,

    _SC_NETWORKING,

    _SC_READER_WRITER_LOCKS,

    _SC_SPIN_LOCKS,

    _SC_REGEXP,

    _SC_REGEX_VERSION,

    _SC_SHELL,

    _SC_SIGNALS,

    _SC_SPAWN,

    _SC_SPORADIC_SERVER,

    _SC_THREAD_SPORADIC_SERVER,

    _SC_SYSTEM_DATABASE,

    _SC_SYSTEM_DATABASE_R,

    _SC_TIMEOUTS,

    _SC_TYPED_MEMORY_OBJECTS,

    _SC_USER_GROUPS,

    _SC_USER_GROUPS_R,

    _SC_2_PBS,

    _SC_2_PBS_ACCOUNTING,

    _SC_2_PBS_LOCATE,

    _SC_2_PBS_MESSAGE,

    _SC_2_PBS_TRACK,

    _SC_SYMLOOP_MAX,

    _SC_STREAMS,

    _SC_2_PBS_CHECKPOINT,


    _SC_V6_ILP32_OFF32,

    _SC_V6_ILP32_OFFBIG,

    _SC_V6_LP64_OFF64,

    _SC_V6_LPBIG_OFFBIG,


    _SC_HOST_NAME_MAX,

    _SC_TRACE,

    _SC_TRACE_EVENT_FILTER,

    _SC_TRACE_INHERIT,

    _SC_TRACE_LOG,


    _SC_LEVEL1_ICACHE_SIZE,

    _SC_LEVEL1_ICACHE_ASSOC,

    _SC_LEVEL1_ICACHE_LINESIZE,

    _SC_LEVEL1_DCACHE_SIZE,

    _SC_LEVEL1_DCACHE_ASSOC,

    _SC_LEVEL1_DCACHE_LINESIZE,

    _SC_LEVEL2_CACHE_SIZE,

    _SC_LEVEL2_CACHE_ASSOC,

    _SC_LEVEL2_CACHE_LINESIZE,

    _SC_LEVEL3_CACHE_SIZE,

    _SC_LEVEL3_CACHE_ASSOC,

    _SC_LEVEL3_CACHE_LINESIZE,

    _SC_LEVEL4_CACHE_SIZE,

    _SC_LEVEL4_CACHE_ASSOC,

    _SC_LEVEL4_CACHE_LINESIZE,



    _SC_IPV6 = _SC_LEVEL1_ICACHE_SIZE + 50,

    _SC_RAW_SOCKETS,


    _SC_V7_ILP32_OFF32,

    _SC_V7_ILP32_OFFBIG,

    _SC_V7_LP64_OFF64,

    _SC_V7_LPBIG_OFFBIG,


    _SC_SS_REPL_MAX,


    _SC_TRACE_EVENT_NAME_MAX,

    _SC_TRACE_NAME_MAX,

    _SC_TRACE_SYS_MAX,

    _SC_TRACE_USER_EVENT_MAX,


    _SC_XOPEN_STREAMS,


    _SC_THREAD_ROBUST_PRIO_INHERIT,

    _SC_THREAD_ROBUST_PRIO_PROTECT

  };


enum
  {
    _CS_PATH,


    _CS_V6_WIDTH_RESTRICTED_ENVS,



    _CS_GNU_LIBC_VERSION,

    _CS_GNU_LIBPTHREAD_VERSION,


    _CS_V5_WIDTH_RESTRICTED_ENVS,



    _CS_V7_WIDTH_RESTRICTED_ENVS,



    _CS_LFS_CFLAGS = 1000,

    _CS_LFS_LDFLAGS,

    _CS_LFS_LIBS,

    _CS_LFS_LINTFLAGS,

    _CS_LFS64_CFLAGS,

    _CS_LFS64_LDFLAGS,

    _CS_LFS64_LIBS,

    _CS_LFS64_LINTFLAGS,


    _CS_XBS5_ILP32_OFF32_CFLAGS = 1100,

    _CS_XBS5_ILP32_OFF32_LDFLAGS,

    _CS_XBS5_ILP32_OFF32_LIBS,

    _CS_XBS5_ILP32_OFF32_LINTFLAGS,

    _CS_XBS5_ILP32_OFFBIG_CFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LDFLAGS,

    _CS_XBS5_ILP32_OFFBIG_LIBS,

    _CS_XBS5_ILP32_OFFBIG_LINTFLAGS,

    _CS_XBS5_LP64_OFF64_CFLAGS,

    _CS_XBS5_LP64_OFF64_LDFLAGS,

    _CS_XBS5_LP64_OFF64_LIBS,

    _CS_XBS5_LP64_OFF64_LINTFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_CFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LDFLAGS,

    _CS_XBS5_LPBIG_OFFBIG_LIBS,

    _CS_XBS5_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V6_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFF32_LIBS,

    _CS_POSIX_V6_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V6_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V6_LP64_OFF64_CFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V6_LP64_OFF64_LIBS,

    _CS_POSIX_V6_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V6_LPBIG_OFFBIG_LINTFLAGS,


    _CS_POSIX_V7_ILP32_OFF32_CFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFF32_LIBS,

    _CS_POSIX_V7_ILP32_OFF32_LINTFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_CFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_ILP32_OFFBIG_LIBS,

    _CS_POSIX_V7_ILP32_OFFBIG_LINTFLAGS,

    _CS_POSIX_V7_LP64_OFF64_CFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LDFLAGS,

    _CS_POSIX_V7_LP64_OFF64_LIBS,

    _CS_POSIX_V7_LP64_OFF64_LINTFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_CFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LDFLAGS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LIBS,

    _CS_POSIX_V7_LPBIG_OFFBIG_LINTFLAGS,


    _CS_V6_ENV,

    _CS_V7_ENV

  };
# 607 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (__const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();




extern __pid_t getpgrp (void) throw ();
# 643 "/usr/include/unistd.h" 3 4
extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 669 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();
# 686 "/usr/include/unistd.h" 3 4
extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw ();




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw ();




extern int seteuid (__uid_t __uid) throw ();






extern int setgid (__gid_t __gid) throw ();




extern int setregid (__gid_t __rgid, __gid_t __egid) throw ();




extern int setegid (__gid_t __gid) throw ();





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw ();



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw ();






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, __const char *__from, int __tofd,
     __const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (__const char *__from, __const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (__const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (__const char *__from, int __tofd,
        __const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, __const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, __const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (__const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (__const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 890 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 50 "/usr/include/getopt.h" 3 4
extern "C" {
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 187 "/usr/include/getopt.h" 3 4
}
# 891 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (__const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (__const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (__const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (__const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (__const char *__prompt) __attribute__ ((__nonnull__ (1)));
# 976 "/usr/include/unistd.h" 3 4
extern int fsync (int __fd);






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 1007 "/usr/include/unistd.h" 3 4
extern int truncate (__const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1019 "/usr/include/unistd.h" 3 4
extern int truncate64 (__const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1036 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1047 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1068 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1101 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1122 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (__const char *__key, __const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__block, int __edflag) throw () __attribute__ ((__nonnull__ (1)));






extern void swab (__const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));







extern char *ctermid (char *__s) throw ();
# 1160 "/usr/include/unistd.h" 3 4
}
# 21 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c" 2
# 1 "/usr/include/getopt.h" 1 3 4
# 50 "/usr/include/getopt.h" 3 4
extern "C" {
# 59 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 73 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 106 "/usr/include/getopt.h" 3 4
struct option
{
  const char *name;


  int has_arg;
  int *flag;
  int val;
};
# 152 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 175 "/usr/include/getopt.h" 3 4
extern int getopt_long (int ___argc, char *const *___argv,
   const char *__shortopts,
          const struct option *__longopts, int *__longind)
       throw ();
extern int getopt_long_only (int ___argc, char *const *___argv,
        const char *__shortopts,
               const struct option *__longopts, int *__longind)
       throw ();




}
# 22 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 33 "/usr/include/stdlib.h" 3 4
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 71 "/usr/include/sys/types.h" 3 4
typedef __mode_t mode_t;




typedef __nlink_t nlink_t;
# 105 "/usr/include/sys/types.h" 3 4
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







typedef __suseconds_t suseconds_t;





# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
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
# 23 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c" 2
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
# 24 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c" 2
# 24 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"

# 1 "/scratch/jmg3/rodinia_3.0/openmp/lud/common/common.h" 1



# 1 "/usr/include/time.h" 1 3 4
# 30 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/opt/apps/gcc/4.8.2/lib/gcc/x86_64-unknown-linux-gnu/4.8.2/include/stddef.h" 1 3 4
# 39 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/bits/time.h" 1 3 4
# 43 "/usr/include/time.h" 2 3 4
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  __const char *tm_zone;




};
# 161 "/usr/include/time.h" 3 4
struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 180 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   __const char *__restrict __format,
   __const struct tm *__restrict __tp) throw ();





extern char *strptime (__const char *__restrict __s,
         __const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     __const char *__restrict __format,
     __const struct tm *__restrict __tp,
     __locale_t __loc) throw ();



extern char *strptime_l (__const char *__restrict __s,
    __const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (__const time_t *__timer) throw ();



extern struct tm *localtime (__const time_t *__timer) throw ();





extern struct tm *gmtime_r (__const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (__const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (__const struct tm *__tp) throw ();


extern char *ctime (__const time_t *__timer) throw ();







extern char *asctime_r (__const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (__const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (__const time_t *__when) throw ();
# 313 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 328 "/usr/include/time.h" 3 4
extern int nanosleep (__const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, __const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       __const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     __const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();
# 390 "/usr/include/time.h" 3 4
extern int getdate_err;
# 399 "/usr/include/time.h" 3 4
extern struct tm *getdate (__const char *__string);
# 413 "/usr/include/time.h" 3 4
extern int getdate_r (__const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 5 "/scratch/jmg3/rodinia_3.0/openmp/lud/common/common.h" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 29 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/bits/time.h" 1 3 4
# 30 "/usr/include/sys/time.h" 2 3 4
# 39 "/usr/include/sys/time.h" 3 4
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
# 6 "/scratch/jmg3/rodinia_3.0/openmp/lud/common/common.h" 2


extern "C" {
# 18 "/scratch/jmg3/rodinia_3.0/openmp/lud/common/common.h"
typedef enum _FUNC_RETURN_CODE {
    RET_SUCCESS,
    RET_FAILURE
}func_ret_t;

typedef struct __stopwatch_t{
    struct timeval begin;
    struct timeval end;
}stopwatch;

void
stopwatch_start(stopwatch *sw);

void
stopwatch_stop (stopwatch *sw);

double
get_interval_by_sec(stopwatch *sw);

int
get_interval_by_usec(stopwatch *sw);

func_ret_t
create_matrix_from_file(float **mp, const char *filename, int *size_p);

func_ret_t
create_matrix_from_random(float **mp, int size);

func_ret_t
create_matrix(float **mp, int size);

void
lud_verify(float *m, float *lu, int size);

void
matrix_multiply(float *inputa, float *inputb, float *output, int size);

void
matrix_duplicate(float *src, float **dst, int matrix_dim);

void
print_matrix(float *mm, int matrix_dim);


}
# 26 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c" 2
# 26 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 27 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
static int do_verify = 0;
# 28 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 29 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
static struct option long_options[] = {
# 30 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 31 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      {"input", 1, __null, 'i'},
# 32 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      {"size", 1, __null, 's'},
# 33 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      {"verify", 0, __null, 'v'},
# 34 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      {0,0,0,0}
# 35 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
};
# 36 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 37 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
extern void
# 38 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
lud_base(float *m, int matrix_dim);
# 39 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 40 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
static enum _FUNC_RETURN_CODE (*____chimes_extern_func_create_matrix_from_file)(float **, const char *, int *) = create_matrix_from_file;static double (*____chimes_extern_func_get_interval_by_sec)(struct __stopwatch_t *) = get_interval_by_sec;static void (*____chimes_extern_func_lud_base)(float *, int) = lud_base;static void (*____chimes_extern_func_lud_verify)(float *, float *, int) = lud_verify;static void (*____chimes_extern_func_matrix_duplicate)(float *, float **, int) = matrix_duplicate;static void (*____chimes_extern_func_print_matrix)(float *, int) = print_matrix;static void (*____chimes_extern_func_stopwatch_start)(struct __stopwatch_t *) = stopwatch_start;static void (*____chimes_extern_func_stopwatch_stop)(struct __stopwatch_t *) = stopwatch_stop;
int main_quick ( int argc, char *argv[] ); int main ( int argc, char *argv[] );
int
# 41 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
main_resumable ( int argc, char *argv[] )
# 42 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&main), "main", &____must_manage_main, 2, 0, (size_t)(0UL), (size_t)(5766999286144554380UL)) ; double ____chimes_unroll_var_0;
stopwatch sw;
float *mm;
const char *input_file;
func_ret_t ret;
int option_index;
int matrix_dim;
 if (____must_checkpoint_main_____chimes_unroll_var_0_0 || ____must_checkpoint_main_sw_0 || ____must_checkpoint_main_mm_0 || ____must_checkpoint_main_input_file_0 || ____must_checkpoint_main_ret_0 || ____must_checkpoint_main_option_index_0 || ____must_checkpoint_main_matrix_dim_0) { register_stack_vars(7, "main|____chimes_unroll_var_0|0", &____must_checkpoint_main_____chimes_unroll_var_0_0, "double", (void *)(&____chimes_unroll_var_0), (size_t)8, 0, 0, 0, "main|sw|0", &____must_checkpoint_main_sw_0, "%struct.__stopwatch_t = type { %struct.timeval, %struct.timeval }", (void *)(&sw), (size_t)32, 0, 1, 0, "main|mm|0", &____must_checkpoint_main_mm_0, "float*", (void *)(&mm), (size_t)8, 1, 0, 0, "main|input_file|0", &____must_checkpoint_main_input_file_0, "i8*", (void *)(&input_file), (size_t)8, 1, 0, 0, "main|ret|0", &____must_checkpoint_main_ret_0, "i32", (void *)(&ret), (size_t)4, 0, 0, 0, "main|option_index|0", &____must_checkpoint_main_option_index_0, "i32", (void *)(&option_index), (size_t)4, 0, 0, 0, "main|matrix_dim|0", &____must_checkpoint_main_matrix_dim_0, "i32", (void *)(&matrix_dim), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(13): { goto call_lbl_13; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(24): { goto call_lbl_24; } case(27): { goto call_lbl_27; } case(29): { goto call_lbl_29; } default: { chimes_error(); } } } ; ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     matrix_dim = (32) ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  int opt; option_index = (0) ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     input_file = (__null) ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  float *m; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  while ((opt = getopt_long(argc, argv, "::vs:i:",
# 51 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
                            long_options, &option_index)) != -1 ) {
# 52 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      switch(opt){
# 53 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case 'i':
# 54 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          input_file = optarg;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case 'v':
# 57 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          do_verify = 1;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case 's':
# 60 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          matrix_dim = atoi(optarg);
# 61 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "Currently not supported, use -i instead\n");
# 62 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "Usage: %s [-v] [-s matrix_size|-i input_file]\n", argv[0]);
# 63 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          exit(1);
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case '?':
# 65 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "invalid option\n");
# 66 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case ':':
# 68 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "missing argument\n");
# 69 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        default:
# 71 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "Usage: %s [-v] [-s matrix_size|-i input_file]\n",
# 72 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
                  argv[0]);
# 73 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          exit(1);
# 74 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      }
# 75 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 77 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if ( (optind < argc) || (optind == 1)) {
# 78 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      fprintf(stderr, "Usage: %s [-v] [-s matrix_size|-i input_file]\n", argv[0]);
# 79 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      exit(1);
# 80 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 81 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if (input_file) {
# 83 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      printf("Reading matrix from file %s\n", input_file);
# 84 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
       call_lbl_13: ret = (____chimes_does_checkpoint_create_matrix_from_file_npm ? ( ({ calling((void*)create_matrix_from_file, 13, ____alias_loc_id_6, 0UL, 3, (size_t)(5766999286144554242UL), (size_t)(5766999286144554430UL), (size_t)(5766999286144554237UL)); (create_matrix_from_file)(&m, input_file, &matrix_dim); }) ) : (({ calling_npm("create_matrix_from_file", ____alias_loc_id_6); (*____chimes_extern_func_create_matrix_from_file)(&m, input_file, &matrix_dim); })));
# 85 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      if (ret != RET_SUCCESS) {
# 86 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          m = __null;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "error create matrix from file %s\n", input_file);
# 88 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          exit(1);
# 89 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      }
# 90 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  } else {
# 91 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf("No input file specified!\n");
# 92 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    exit(1);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 94 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if (do_verify){
# 96 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf("Before LUD\n");
# 97 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_19: (____chimes_does_checkpoint_print_matrix_npm ? ( ({ calling((void*)print_matrix, 19, ____alias_loc_id_8, 0UL, 2, (size_t)(5766999286144554349UL), (size_t)(0UL)); (print_matrix)(m, matrix_dim); }) ) : (({ calling_npm("print_matrix", ____alias_loc_id_8); (*____chimes_extern_func_print_matrix)(m, matrix_dim); })));
# 98 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_20: (____chimes_does_checkpoint_matrix_duplicate_npm ? ( ({ calling((void*)matrix_duplicate, 20, ____alias_loc_id_7, 0UL, 3, (size_t)(5766999286144554349UL), (size_t)(5766999286144554243UL), (size_t)(0UL)); (matrix_duplicate)(m, &mm, matrix_dim); }) ) : (({ calling_npm("matrix_duplicate", ____alias_loc_id_7); (*____chimes_extern_func_matrix_duplicate)(m, &mm, matrix_dim); })));
# 99 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 100 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   call_lbl_21: (____chimes_does_checkpoint_stopwatch_start_npm ? ( ({ calling((void*)stopwatch_start, 21, ____alias_loc_id_5, 0UL, 1, (size_t)(5766999286144554244UL)); (stopwatch_start)(&sw); }) ) : (({ calling_npm("stopwatch_start", ____alias_loc_id_5); (*____chimes_extern_func_stopwatch_start)(&sw); })));
# 102 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   call_lbl_22: (____chimes_does_checkpoint_lud_base_npm ? ( ({ calling((void*)lud_base, 22, ____alias_loc_id_4, 0UL, 2, (size_t)(5766999286144554349UL), (size_t)(0UL)); (lud_base)(m, matrix_dim); }) ) : (({ calling_npm("lud_base", ____alias_loc_id_4); (*____chimes_extern_func_lud_base)(m, matrix_dim); })));
# 103 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   call_lbl_23: (____chimes_does_checkpoint_stopwatch_stop_npm ? ( ({ calling((void*)stopwatch_stop, 23, ____alias_loc_id_3, 0UL, 1, (size_t)(5766999286144554244UL)); (stopwatch_stop)(&sw); }) ) : (({ calling_npm("stopwatch_stop", ____alias_loc_id_3); (*____chimes_extern_func_stopwatch_stop)(&sw); })));
# 104 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
       call_lbl_24: ____chimes_unroll_var_0 = ((____chimes_does_checkpoint_get_interval_by_sec_npm ? ( ({ calling((void*)get_interval_by_sec, 24, ____alias_loc_id_1, 0UL, 1, (size_t)(5766999286144554244UL)); (get_interval_by_sec)(&sw); }) ) : (({ calling_npm("get_interval_by_sec", ____alias_loc_id_1); (*____chimes_extern_func_get_interval_by_sec)(&sw); })))) ; printf("Time consumed(ms): %lf\n", 1000*____chimes_unroll_var_0);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if (do_verify){
# 107 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf("After LUD\n");
# 108 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_27: (____chimes_does_checkpoint_print_matrix_npm ? ( ({ calling((void*)print_matrix, 27, ____alias_loc_id_2, 0UL, 2, (size_t)(5766999286144554349UL), (size_t)(0UL)); (print_matrix)(m, matrix_dim); }) ) : (({ calling_npm("print_matrix", ____alias_loc_id_2); (*____chimes_extern_func_print_matrix)(m, matrix_dim); })));
# 109 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf(">>>Verify<<<<\n");
# 110 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_29: (____chimes_does_checkpoint_lud_verify_npm ? ( ({ calling((void*)lud_verify, 29, ____alias_loc_id_0, 0UL, 3, (size_t)(5766999286144554367UL), (size_t)(5766999286144554349UL), (size_t)(0UL)); (lud_verify)(mm, m, matrix_dim); }) ) : (({ calling_npm("lud_verify", ____alias_loc_id_0); (*____chimes_extern_func_lud_verify)(mm, m, matrix_dim); })));
# 111 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    free_wrapper(mm, 5766999286144554367UL);
# 112 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 113 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  free_wrapper(m, 5766999286144554349UL);
# 115 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_9, ____chimes_did_disable0); return 0;
# 117 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
}
int
# 41 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
main_quick ( int argc, char *argv[] )
# 42 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&main), "main", &____must_manage_main, 2, 0, (size_t)(0UL), (size_t)(5766999286144554380UL)) ; double ____chimes_unroll_var_0;
stopwatch sw;
float *mm;
const char *input_file;
func_ret_t ret;
int option_index;
int matrix_dim;
 if (____must_checkpoint_main_____chimes_unroll_var_0_0 || ____must_checkpoint_main_sw_0 || ____must_checkpoint_main_mm_0 || ____must_checkpoint_main_input_file_0 || ____must_checkpoint_main_ret_0 || ____must_checkpoint_main_option_index_0 || ____must_checkpoint_main_matrix_dim_0) { register_stack_vars(7, "main|____chimes_unroll_var_0|0", &____must_checkpoint_main_____chimes_unroll_var_0_0, "double", (void *)(&____chimes_unroll_var_0), (size_t)8, 0, 0, 0, "main|sw|0", &____must_checkpoint_main_sw_0, "%struct.__stopwatch_t = type { %struct.timeval, %struct.timeval }", (void *)(&sw), (size_t)32, 0, 1, 0, "main|mm|0", &____must_checkpoint_main_mm_0, "float*", (void *)(&mm), (size_t)8, 1, 0, 0, "main|input_file|0", &____must_checkpoint_main_input_file_0, "i8*", (void *)(&input_file), (size_t)8, 1, 0, 0, "main|ret|0", &____must_checkpoint_main_ret_0, "i32", (void *)(&ret), (size_t)4, 0, 0, 0, "main|option_index|0", &____must_checkpoint_main_option_index_0, "i32", (void *)(&option_index), (size_t)4, 0, 0, 0, "main|matrix_dim|0", &____must_checkpoint_main_matrix_dim_0, "i32", (void *)(&matrix_dim), (size_t)4, 0, 0, 0); } ; ;
# 43 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     matrix_dim = (32) ;
# 44 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  int opt; option_index = (0) ;
# 45 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   ;
# 46 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     input_file = (__null) ;
# 47 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  float *m; ;
# 48 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    ;
# 49 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 50 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  while ((opt = getopt_long(argc, argv, "::vs:i:",
# 51 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
                            long_options, &option_index)) != -1 ) {
# 52 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      switch(opt){
# 53 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case 'i':
# 54 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          input_file = optarg;
# 55 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 56 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case 'v':
# 57 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          do_verify = 1;
# 58 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 59 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case 's':
# 60 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          matrix_dim = atoi(optarg);
# 61 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "Currently not supported, use -i instead\n");
# 62 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "Usage: %s [-v] [-s matrix_size|-i input_file]\n", argv[0]);
# 63 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          exit(1);
# 64 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case '?':
# 65 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "invalid option\n");
# 66 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 67 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        case ':':
# 68 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "missing argument\n");
# 69 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          break;
# 70 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
        default:
# 71 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "Usage: %s [-v] [-s matrix_size|-i input_file]\n",
# 72 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
                  argv[0]);
# 73 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          exit(1);
# 74 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      }
# 75 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 76 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 77 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if ( (optind < argc) || (optind == 1)) {
# 78 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      fprintf(stderr, "Usage: %s [-v] [-s matrix_size|-i input_file]\n", argv[0]);
# 79 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      exit(1);
# 80 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 81 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 82 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if (input_file) {
# 83 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      printf("Reading matrix from file %s\n", input_file);
# 84 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
       call_lbl_13: ret = (____chimes_does_checkpoint_create_matrix_from_file_npm ? ( ({ calling((void*)create_matrix_from_file, 13, ____alias_loc_id_6, 0UL, 3, (size_t)(5766999286144554242UL), (size_t)(5766999286144554430UL), (size_t)(5766999286144554237UL)); (create_matrix_from_file)(&m, input_file, &matrix_dim); }) ) : (({ calling_npm("create_matrix_from_file", ____alias_loc_id_6); (*____chimes_extern_func_create_matrix_from_file)(&m, input_file, &matrix_dim); })));
# 85 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      if (ret != RET_SUCCESS) {
# 86 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          m = __null;
# 87 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          fprintf(stderr, "error create matrix from file %s\n", input_file);
# 88 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
          exit(1);
# 89 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
      }
# 90 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  } else {
# 91 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf("No input file specified!\n");
# 92 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    exit(1);
# 93 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 94 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 95 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if (do_verify){
# 96 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf("Before LUD\n");
# 97 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_19: (____chimes_does_checkpoint_print_matrix_npm ? ( ({ calling((void*)print_matrix, 19, ____alias_loc_id_8, 0UL, 2, (size_t)(5766999286144554349UL), (size_t)(0UL)); (print_matrix)(m, matrix_dim); }) ) : (({ calling_npm("print_matrix", ____alias_loc_id_8); (*____chimes_extern_func_print_matrix)(m, matrix_dim); })));
# 98 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_20: (____chimes_does_checkpoint_matrix_duplicate_npm ? ( ({ calling((void*)matrix_duplicate, 20, ____alias_loc_id_7, 0UL, 3, (size_t)(5766999286144554349UL), (size_t)(5766999286144554243UL), (size_t)(0UL)); (matrix_duplicate)(m, &mm, matrix_dim); }) ) : (({ calling_npm("matrix_duplicate", ____alias_loc_id_7); (*____chimes_extern_func_matrix_duplicate)(m, &mm, matrix_dim); })));
# 99 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 100 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 101 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   call_lbl_21: (____chimes_does_checkpoint_stopwatch_start_npm ? ( ({ calling((void*)stopwatch_start, 21, ____alias_loc_id_5, 0UL, 1, (size_t)(5766999286144554244UL)); (stopwatch_start)(&sw); }) ) : (({ calling_npm("stopwatch_start", ____alias_loc_id_5); (*____chimes_extern_func_stopwatch_start)(&sw); })));
# 102 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   call_lbl_22: (____chimes_does_checkpoint_lud_base_npm ? ( ({ calling((void*)lud_base, 22, ____alias_loc_id_4, 0UL, 2, (size_t)(5766999286144554349UL), (size_t)(0UL)); (lud_base)(m, matrix_dim); }) ) : (({ calling_npm("lud_base", ____alias_loc_id_4); (*____chimes_extern_func_lud_base)(m, matrix_dim); })));
# 103 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
   call_lbl_23: (____chimes_does_checkpoint_stopwatch_stop_npm ? ( ({ calling((void*)stopwatch_stop, 23, ____alias_loc_id_3, 0UL, 1, (size_t)(5766999286144554244UL)); (stopwatch_stop)(&sw); }) ) : (({ calling_npm("stopwatch_stop", ____alias_loc_id_3); (*____chimes_extern_func_stopwatch_stop)(&sw); })));
# 104 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
       call_lbl_24: ____chimes_unroll_var_0 = ((____chimes_does_checkpoint_get_interval_by_sec_npm ? ( ({ calling((void*)get_interval_by_sec, 24, ____alias_loc_id_1, 0UL, 1, (size_t)(5766999286144554244UL)); (get_interval_by_sec)(&sw); }) ) : (({ calling_npm("get_interval_by_sec", ____alias_loc_id_1); (*____chimes_extern_func_get_interval_by_sec)(&sw); })))) ; printf("Time consumed(ms): %lf\n", 1000*____chimes_unroll_var_0);
# 105 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 106 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  if (do_verify){
# 107 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf("After LUD\n");
# 108 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_27: (____chimes_does_checkpoint_print_matrix_npm ? ( ({ calling((void*)print_matrix, 27, ____alias_loc_id_2, 0UL, 2, (size_t)(5766999286144554349UL), (size_t)(0UL)); (print_matrix)(m, matrix_dim); }) ) : (({ calling_npm("print_matrix", ____alias_loc_id_2); (*____chimes_extern_func_print_matrix)(m, matrix_dim); })));
# 109 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    printf(">>>Verify<<<<\n");
# 110 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
     call_lbl_29: (____chimes_does_checkpoint_lud_verify_npm ? ( ({ calling((void*)lud_verify, 29, ____alias_loc_id_0, 0UL, 3, (size_t)(5766999286144554367UL), (size_t)(5766999286144554349UL), (size_t)(0UL)); (lud_verify)(mm, m, matrix_dim); }) ) : (({ calling_npm("lud_verify", ____alias_loc_id_0); (*____chimes_extern_func_lud_verify)(mm, m, matrix_dim); })));
# 111 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
    free_wrapper(mm, 5766999286144554367UL);
# 112 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  }
# 113 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 114 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  free_wrapper(m, 5766999286144554349UL);
# 115 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
# 116 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
  rm_stack(false, 0UL, "main", &____must_manage_main, ____alias_loc_id_9, ____chimes_did_disable0); return 0;
# 117 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
}

int
# 41 "/scratch/jmg3/rodinia_3.0/openmp/lud/base/lud.c"
main ( int argc, char *argv[] ) { init_chimes(); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }







static int module_init() {
    init_module(5766999286144554233UL, 7, 1, 7, 10, 0, 8, 8, 0, 9, 4,
                           &____alias_loc_id_0, (unsigned)0, (unsigned)0, (unsigned)1, "lud_verify", (unsigned)2, (5766999286144554233UL + 116UL), (5766999286144554233UL + 134UL),
                           &____alias_loc_id_1, (unsigned)0, (unsigned)0, (unsigned)1, "get_interval_by_sec", (unsigned)1, (5766999286144554233UL + 11UL),
                           &____alias_loc_id_2, (unsigned)1, (unsigned)0, (unsigned)1, (5766999286144554233UL + 12UL), "print_matrix", (unsigned)1, (5766999286144554233UL + 116UL),
                           &____alias_loc_id_3, (unsigned)0, (unsigned)0, (unsigned)1, "stopwatch_stop", (unsigned)1, (5766999286144554233UL + 11UL),
                           &____alias_loc_id_4, (unsigned)0, (unsigned)0, (unsigned)1, "lud_base", (unsigned)1, (5766999286144554233UL + 116UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (unsigned)1, (5766999286144554233UL + 7UL), "stopwatch_start", (unsigned)1, (5766999286144554233UL + 11UL),
                           &____alias_loc_id_6, (unsigned)8, (unsigned)0, (unsigned)1, (5766999286144554233UL + 1UL), (5766999286144554233UL + 2UL), (5766999286144554233UL + 3UL), (5766999286144554233UL + 4UL), (5766999286144554233UL + 5UL), (5766999286144554233UL + 6UL), (5766999286144554233UL + 8UL), (5766999286144554233UL + 179UL), "create_matrix_from_file", (unsigned)3, (5766999286144554233UL + 4UL), (5766999286144554233UL + 9UL), (5766999286144554233UL + 197UL),
                           &____alias_loc_id_7, (unsigned)0, (unsigned)0, (unsigned)1, "matrix_duplicate", (unsigned)2, (5766999286144554233UL + 10UL), (5766999286144554233UL + 116UL),
                           &____alias_loc_id_8, (unsigned)1, (unsigned)0, (unsigned)1, (5766999286144554233UL + 7UL), "print_matrix", (unsigned)1, (5766999286144554233UL + 116UL),
                           &____alias_loc_id_9, (unsigned)1, (unsigned)0, (unsigned)0, (5766999286144554233UL + 12UL),
                               "create_matrix_from_file", (void **)&(____chimes_extern_func_create_matrix_from_file),
                               "get_interval_by_sec", (void **)&(____chimes_extern_func_get_interval_by_sec),
                               "lud_base", (void **)&(____chimes_extern_func_lud_base),
                               "lud_verify", (void **)&(____chimes_extern_func_lud_verify),
                               "matrix_duplicate", (void **)&(____chimes_extern_func_matrix_duplicate),
                               "print_matrix", (void **)&(____chimes_extern_func_print_matrix),
                               "stopwatch_start", (void **)&(____chimes_extern_func_stopwatch_start),
                               "stopwatch_stop", (void **)&(____chimes_extern_func_stopwatch_stop),
                           "create_matrix_from_file", &(____chimes_does_checkpoint_create_matrix_from_file_npm),
                           "get_interval_by_sec", &(____chimes_does_checkpoint_get_interval_by_sec_npm),
                           "lud_base", &(____chimes_does_checkpoint_lud_base_npm),
                           "lud_verify", &(____chimes_does_checkpoint_lud_verify_npm),
                           "matrix_duplicate", &(____chimes_does_checkpoint_matrix_duplicate_npm),
                           "print_matrix", &(____chimes_does_checkpoint_print_matrix_npm),
                           "stopwatch_start", &(____chimes_does_checkpoint_stopwatch_start_npm),
                           "stopwatch_stop", &(____chimes_does_checkpoint_stopwatch_stop_npm),
                             (5766999286144554233UL + 147UL), (5766999286144554233UL + 79UL),
                             (5766999286144554233UL + 10UL), (5766999286144554233UL + 134UL),
                             (5766999286144554233UL + 180UL), (5766999286144554233UL + 76UL),
                             (5766999286144554233UL + 3UL), (5766999286144554233UL + 147UL),
                             (5766999286144554233UL + 178UL), (5766999286144554233UL + 197UL),
                             (5766999286144554233UL + 9UL), (5766999286144554233UL + 116UL),
                             (5766999286144554233UL + 8UL), (5766999286144554233UL + 197UL),
                     "_FUNC_RETURN_CODE", 0,
                     "__stopwatch_t", 2, "%struct.timeval", (int)__builtin_offsetof (struct __stopwatch_t, begin), "%struct.timeval", (int)__builtin_offsetof (struct __stopwatch_t, end),
                     "option", 4, "char*", (int)__builtin_offsetof (struct option, name), "int", (int)__builtin_offsetof (struct option, has_arg), "int*", (int)__builtin_offsetof (struct option, flag), "int", (int)__builtin_offsetof (struct option, val),
                     "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "main", "main", 9, "create_matrix_from_file", "print_matrix", "matrix_duplicate", "stopwatch_start", "lud_base", "stopwatch_stop", "get_interval_by_sec", "print_matrix", "lud_verify",
                        "main|matrix_dim|0", 1, "main",
                        "main|option_index|0", 1, "main",
                        "main|ret|0", 7, "stopwatch_stop", "stopwatch_start", "print_matrix", "matrix_duplicate", "lud_verify", "lud_base", "get_interval_by_sec",
                        "main|input_file|0", 8, "stopwatch_stop", "stopwatch_start", "print_matrix", "matrix_duplicate", "lud_verify", "lud_base", "get_interval_by_sec", "create_matrix_from_file",
                        "main|mm|0", 1, "main",
                        "main|sw|0", 1, "main",
                        "main|____chimes_unroll_var_0|0", 2, "print_matrix", "lud_verify",
        "create_matrix_from_file", 0UL, (int)3, 5766999286144554242UL, 5766999286144554430UL, 5766999286144554237UL,
        "print_matrix", 0UL, (int)2, 5766999286144554349UL, 0UL,
        "matrix_duplicate", 0UL, (int)3, 5766999286144554349UL, 5766999286144554243UL, 0UL,
        "stopwatch_start", 0UL, (int)1, 5766999286144554244UL,
        "lud_base", 0UL, (int)2, 5766999286144554349UL, 0UL,
        "stopwatch_stop", 0UL, (int)1, 5766999286144554244UL,
        "get_interval_by_sec", 0UL, (int)1, 5766999286144554244UL,
        "print_matrix", 0UL, (int)2, 5766999286144554349UL, 0UL,
        "lud_verify", 0UL, (int)3, 5766999286144554367UL, 5766999286144554349UL, 0UL);
    register_global_var("global|do_verify", "i32", (void *)(&do_verify), 4.0, 0, 0, 0UL, 0);
    register_global_var("global|long_options", "<{ { i8*, i32, i32*, i32, [4 x i8] }, { i8*, i32, i32*, i32, [4 x i8] }, { i8*, i32, i32*, i32, [4 x i8] }, { i8*, i32, i32*, i32, [4 x i8] } }>", (void *)(&long_options), 128.0, 0, 1, 0UL, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
