# 1 "bfs.cpp.pre.transformed.cpp"
# 1 "<command-line>"
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 1 3 4
# 147 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "bfs.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_seconds_npm = 1;
static int ____chimes_does_checkpoint_Usage_npm = 1;


static int ____must_manage_seconds = 2;
static int ____must_manage_Usage = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
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
# 69 "/home/jmg3/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
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
# 2 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp" 2
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
# 3 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp" 2
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
# 4 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp" 2
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
# 5 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp" 2
# 1 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/omp.h" 1 3 4
# 34 "/gpfs-biou/jmg3/gcc-install/lib/gcc/powerpc64-unknown-linux-gnu/4.8.1/include/omp.h" 3 4
typedef struct
{
  unsigned char _x[4]
    __attribute__((__aligned__(4)));
} omp_lock_t;

typedef struct
{
  unsigned char _x[16]
    __attribute__((__aligned__(8)));
} omp_nest_lock_t;


typedef enum omp_sched_t
{
  omp_sched_static = 1,
  omp_sched_dynamic = 2,
  omp_sched_guided = 3,
  omp_sched_auto = 4
} omp_sched_t;


extern "C" {





extern void omp_set_num_threads (int) throw ();
extern int omp_get_num_threads (void) throw ();
extern int omp_get_max_threads (void) throw ();
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_procs (void) throw ();

extern int omp_in_parallel (void) throw ();

extern void omp_set_dynamic (int) throw ();
extern int omp_get_dynamic (void) throw ();

extern void omp_set_nested (int) throw ();
extern int omp_get_nested (void) throw ();

extern void omp_init_lock (omp_lock_t *) throw ();
extern void omp_destroy_lock (omp_lock_t *) throw ();
extern void omp_set_lock (omp_lock_t *) throw ();
extern void omp_unset_lock (omp_lock_t *) throw ();
extern int omp_test_lock (omp_lock_t *) throw ();

extern void omp_init_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_destroy_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_set_nest_lock (omp_nest_lock_t *) throw ();
extern void omp_unset_nest_lock (omp_nest_lock_t *) throw ();
extern int omp_test_nest_lock (omp_nest_lock_t *) throw ();

extern double omp_get_wtime (void) throw ();
extern double omp_get_wtick (void) throw ();

void omp_set_schedule (omp_sched_t, int) throw ();
void omp_get_schedule (omp_sched_t *, int *) throw ();
int omp_get_thread_limit (void) throw ();
void omp_set_max_active_levels (int) throw ();
int omp_get_max_active_levels (void) throw ();
int omp_get_level (void) throw ();
int omp_get_ancestor_thread_num (int) throw ();
int omp_get_team_size (int) throw ();
int omp_get_active_level (void) throw ();

int omp_in_final (void) throw ();


}
# 6 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 27 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 28 "/usr/include/sys/time.h" 2 3 4

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
# 7 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp" 2
# 7 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 8 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 9 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 10 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"

# 1 "/home/jmg3/chimes/src/libchimes/checkpoint.h" 1
# 11 "/home/jmg3/chimes/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp" 2
# 12 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 13 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
double seconds_npm();
double seconds_quick(); double seconds();
double seconds_resumable() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 15 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     struct timeval tp; ;
# 16 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     struct timezone tzp; ;
# 17 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 18 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 19 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); }
# 20 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 21 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 22 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int no_of_nodes;
# 23 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int edge_list_size;
# 24 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
FILE *fp;
# 25 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 26 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 27 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
struct Node
# 28 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
{
# 29 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 int starting;
# 30 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 int no_of_edges;
# 31 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
};
# 32 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 33 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
void BFSGraph(int argc, char** argv);
# 34 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
void Usage_npm(int argc, char**argv);
void Usage_quick(int argc, char**argv); void Usage(int argc, char**argv);
void Usage_resumable(int argc, char**argv){const int ____chimes_did_disable1 = new_stack((void *)(&Usage), "Usage", &____must_manage_Usage, 2, 0, (size_t)(0UL), (size_t)(6277575452893475190UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
fprintf(stderr,"Usage: %s <num_threads> <input_file>\n", argv[0]);
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "Usage", &____must_manage_Usage, ____alias_loc_id_3, ____chimes_did_disable1, false); }
# 40 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 41 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 42 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int main_quick( int argc, char** argv); int main( int argc, char** argv);void BFSGraph_quick( int argc, char** argv); void BFSGraph( int argc, char** argv);
int main_resumable( int argc, char** argv)
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
{const int ____chimes_did_disable2 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6277575452893475212UL)) ; if (____chimes_replaying) { switch(get_next_call()) { case(0): { goto call_lbl_0; } default: { chimes_error(); } } } ; ;
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 no_of_nodes=0;
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 edge_list_size=0;
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  call_lbl_0: ({ calling((void*)BFSGraph, 0, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(6277575452893475212UL)); (BFSGraph)(argc, argv); }) ;
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_4, ____chimes_did_disable2, false); }
# 50 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 51 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 52 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 53 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 54 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 55 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 56 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
void BFSGraph_resumable( int argc, char** argv)
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
{const int ____chimes_did_disable3 = new_stack((void *)(&BFSGraph), "BFSGraph", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6277575452893475598UL)) ; int count_iters;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool stop;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int k;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int *h_cost;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int *h_graph_edges;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool *h_graph_visited;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool *h_updating_graph_mask;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool *h_graph_mask;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
Node *h_graph_nodes;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
double start_time;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int num_omp_threads;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 register_stack_vars(11, "BFSGraph|count_iters|0", (int *)0x0, "i32", (void *)(&count_iters), (size_t)4, 0, 0, 0, "BFSGraph|stop|0", (int *)0x0, "i8", (void *)(&stop), (size_t)1, 0, 0, 0, "BFSGraph|k|0", (int *)0x0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "BFSGraph|h_cost|0", (int *)0x0, "i32*", (void *)(&h_cost), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_edges|0", (int *)0x0, "i32*", (void *)(&h_graph_edges), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_visited|0", (int *)0x0, "i8*", (void *)(&h_graph_visited), (size_t)8, 1, 0, 0, "BFSGraph|h_updating_graph_mask|0", (int *)0x0, "i8*", (void *)(&h_updating_graph_mask), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_mask|0", (int *)0x0, "i8*", (void *)(&h_graph_mask), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_nodes|0", (int *)0x0, "%struct.Node*", (void *)(&h_graph_nodes), (size_t)8, 1, 0, 0, "BFSGraph|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "BFSGraph|num_omp_threads|0", (int *)0x0, "i32", (void *)(&num_omp_threads), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } ; ;
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    char *input_f; ;
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
        call_lbl_0: start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 if(argc!=3){
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  call_lbl_1: ({ calling_npm("Usage", 0); Usage_npm(argc, argv); });
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 exit(0);
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 }
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 68 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 num_omp_threads = atoi(argv[1]);
# 69 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 input_f = argv[2];
# 70 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 71 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 printf("Reading File\n");
# 72 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 73 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fp = fopen(input_f,"r");
# 74 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 if(!fp)
# 75 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 76 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  printf("Error Reading graph file\n");
# 77 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  rm_stack(false, 0UL, "BFSGraph", (int *)0x0, ____alias_loc_id_5, ____chimes_did_disable3, false); return;
# 78 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 }
# 79 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 80 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  int source; source = (0) ;
# 81 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 82 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fscanf(fp,"%d",&no_of_nodes);
# 83 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 84 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 85 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_nodes = ((Node*) ({ void *____chimes_tmp_ptr = malloc((sizeof(Node) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(Node)*no_of_nodes, 6277575452893475580UL, 0, 1, (int)sizeof(struct Node), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_mask = ((bool*) ({ void *____chimes_tmp_ptr = malloc((sizeof(bool) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(bool)*no_of_nodes, 6277575452893475586UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_updating_graph_mask = ((bool*) ({ void *____chimes_tmp_ptr = malloc((sizeof(bool) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(bool)*no_of_nodes, 6277575452893475588UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_visited = ((bool*) ({ void *____chimes_tmp_ptr = malloc((sizeof(bool) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(bool)*no_of_nodes, 6277575452893475590UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 int start; int edgeno; ;
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 92 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 { unsigned int i; for( i = (0) ; i < no_of_nodes; i++)
# 93 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 94 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  fscanf(fp,"%d %d",&start,&edgeno);
# 95 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_nodes[i].starting = start;
# 96 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_nodes[i].no_of_edges = edgeno;
# 97 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_mask[i]=false;
# 98 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_updating_graph_mask[i]=false;
# 99 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_visited[i]=false;
# 100 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 } }
# 101 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 102 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 103 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fscanf(fp,"%d",&source);
# 104 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 105 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 106 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 h_graph_mask[source]=true;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 h_graph_visited[source]=true;
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fscanf(fp,"%d",&edge_list_size);
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 int id; int cost; ;
# 113 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_edges = ((int*) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * edge_list_size) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(int)*edge_list_size, 6277575452893475583UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 114 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 { int i; for( i = (0) ; i < edge_list_size ; i++)
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  fscanf(fp,"%d",&id);
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  fscanf(fp,"%d",&cost);
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_edges[i] = id;
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 } }
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 if (fp) {fclose(fp); };
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 125 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 126 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_cost = ((int*) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(int)*no_of_nodes, 6277575452893475592UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 { int i; for ( i = (0) ;i<no_of_nodes; i++) { h_cost[i]=-1; } };
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 h_cost[source]=0;
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 printf("Start traversing the tree\n");
# 132 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 133 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    k = (0) ;
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    int tid; int i; ;
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
       count_iters = (0) ;
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 do
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  stop=false;
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  omp_set_num_threads(num_omp_threads);
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
{ call_lbl_4: bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(4, &____chimes_region_id0, 3, &i, &id, &tid); int ____chimes_first_iter0 = 1;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
#pragma omp parallel for private(tid, i, id) firstprivate(____chimes_first_iter0)
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  for(tid = 0; tid < no_of_nodes; tid++ )
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  { { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 3, &i, &id, &tid); ____chimes_first_iter0 = 0; } {
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   if (h_graph_mask[tid] == true){
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_graph_mask[tid]=false;
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   for(i=h_graph_nodes[tid].starting; i<(h_graph_nodes[tid].no_of_edges + h_graph_nodes[tid].starting); i++)
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    {
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    id = h_graph_edges[i];
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    if(!h_graph_visited[id])
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     {
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     h_cost[id]=h_cost[tid]+1;
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     h_updating_graph_mask[id]=true;
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     }
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    }
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   }
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   } } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 163 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 164 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    for(tid=0; tid< no_of_nodes ; tid++ )
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  {
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   if (h_updating_graph_mask[tid] == true){
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_graph_mask[tid]=true;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_graph_visited[tid]=true;
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   stop=true;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_updating_graph_mask[tid]=false;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   }
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  }
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  k++;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
         call_lbl_2: checkpoint_transformed(2, ____alias_loc_id_1);
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
        count_iters++;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 }
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 while(stop);
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     double end_time; call_lbl_3: end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 printf("Result stored in result.txt, execution took %f s, %d iters\n", end_time - start_time, count_iters);
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_nodes) - sizeof(void *)), 6277575452893475580UL);free((((unsigned char *)h_graph_nodes) - sizeof(void *))); }) ;
# 194 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_edges) - sizeof(void *)), 6277575452893475583UL);free((((unsigned char *)h_graph_edges) - sizeof(void *))); }) ;
# 195 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_mask) - sizeof(void *)), 6277575452893475586UL);free((((unsigned char *)h_graph_mask) - sizeof(void *))); }) ;
# 196 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_updating_graph_mask) - sizeof(void *)), 6277575452893475588UL);free((((unsigned char *)h_updating_graph_mask) - sizeof(void *))); }) ;
# 197 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_visited) - sizeof(void *)), 6277575452893475590UL);free((((unsigned char *)h_graph_visited) - sizeof(void *))); }) ;
# 198 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_cost) - sizeof(void *)), 6277575452893475592UL);free((((unsigned char *)h_cost) - sizeof(void *))); }) ;
# 199 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 200 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "BFSGraph", (int *)0x0, ____alias_loc_id_5, ____chimes_did_disable3, false); }
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
double seconds_quick() {const int ____chimes_did_disable0 = new_stack((void *)(&seconds), "seconds", &____must_manage_seconds, 0, 0) ; ; ;
# 15 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     struct timeval tp; ;
# 16 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     struct timezone tzp; ;
# 17 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     int i; i = (gettimeofday(&tp, &tzp)) ;
# 18 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); return ____chimes_ret_var_0; ;
# 19 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "seconds", &____must_manage_seconds, ____alias_loc_id_2, ____chimes_did_disable0, false); }

double seconds() { return (____chimes_replaying ? seconds_resumable() : seconds_quick()); }
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
void Usage_quick(int argc, char**argv){const int ____chimes_did_disable1 = new_stack((void *)(&Usage), "Usage", &____must_manage_Usage, 2, 0, (size_t)(0UL), (size_t)(6277575452893475190UL)) ; ; ;
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
fprintf(stderr,"Usage: %s <num_threads> <input_file>\n", argv[0]);
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "Usage", &____must_manage_Usage, ____alias_loc_id_3, ____chimes_did_disable1, false); }

void Usage(int argc, char**argv) { (____chimes_replaying ? Usage_resumable(argc, argv) : Usage_quick(argc, argv)); }
# 43 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int main_quick( int argc, char** argv)
# 44 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
{const int ____chimes_did_disable2 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6277575452893475212UL)) ; ; ;
# 45 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 no_of_nodes=0;
# 46 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 edge_list_size=0;
# 47 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  call_lbl_0: ({ calling((void*)BFSGraph, 0, ____alias_loc_id_0, 0UL, 2, (size_t)(0UL), (size_t)(6277575452893475212UL)); BFSGraph_quick(argc, argv); }) ;
# 48 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     int ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (0); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_4, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 49 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_4, ____chimes_did_disable2, false); }

int main( int argc, char** argv) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 56 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
void BFSGraph_quick( int argc, char** argv)
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
{const int ____chimes_did_disable3 = new_stack((void *)(&BFSGraph), "BFSGraph", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6277575452893475598UL)) ; int count_iters;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool stop;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int k;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int *h_cost;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int *h_graph_edges;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool *h_graph_visited;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool *h_updating_graph_mask;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
bool *h_graph_mask;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
Node *h_graph_nodes;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
double start_time;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
int num_omp_threads;
# 57 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 register_stack_vars(11, "BFSGraph|count_iters|0", (int *)0x0, "i32", (void *)(&count_iters), (size_t)4, 0, 0, 0, "BFSGraph|stop|0", (int *)0x0, "i8", (void *)(&stop), (size_t)1, 0, 0, 0, "BFSGraph|k|0", (int *)0x0, "i32", (void *)(&k), (size_t)4, 0, 0, 0, "BFSGraph|h_cost|0", (int *)0x0, "i32*", (void *)(&h_cost), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_edges|0", (int *)0x0, "i32*", (void *)(&h_graph_edges), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_visited|0", (int *)0x0, "i8*", (void *)(&h_graph_visited), (size_t)8, 1, 0, 0, "BFSGraph|h_updating_graph_mask|0", (int *)0x0, "i8*", (void *)(&h_updating_graph_mask), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_mask|0", (int *)0x0, "i8*", (void *)(&h_graph_mask), (size_t)8, 1, 0, 0, "BFSGraph|h_graph_nodes|0", (int *)0x0, "%struct.Node*", (void *)(&h_graph_nodes), (size_t)8, 1, 0, 0, "BFSGraph|start_time|0", (int *)0x0, "double", (void *)(&start_time), (size_t)8, 0, 0, 0, "BFSGraph|num_omp_threads|0", (int *)0x0, "i32", (void *)(&num_omp_threads), (size_t)4, 0, 0, 0); ; ;
# 58 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    char *input_f; ;
# 59 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ;
# 60 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 61 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
        call_lbl_0: start_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 62 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 63 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 if(argc!=3){
# 64 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  call_lbl_1: ({ calling_npm("Usage", 0); Usage_npm(argc, argv); });
# 65 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 exit(0);
# 66 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 }
# 67 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 68 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 num_omp_threads = atoi(argv[1]);
# 69 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 input_f = argv[2];
# 70 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 71 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 printf("Reading File\n");
# 72 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 73 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fp = fopen(input_f,"r");
# 74 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 if(!fp)
# 75 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 76 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  printf("Error Reading graph file\n");
# 77 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  rm_stack(false, 0UL, "BFSGraph", (int *)0x0, ____alias_loc_id_5, ____chimes_did_disable3, false); return;
# 78 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 }
# 79 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 80 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  int source; source = (0) ;
# 81 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 82 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fscanf(fp,"%d",&no_of_nodes);
# 83 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 84 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 85 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_nodes = ((Node*) ({ void *____chimes_tmp_ptr = malloc((sizeof(Node) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(Node)*no_of_nodes, 6277575452893475580UL, 0, 1, (int)sizeof(struct Node), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 86 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_mask = ((bool*) ({ void *____chimes_tmp_ptr = malloc((sizeof(bool) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(bool)*no_of_nodes, 6277575452893475586UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 87 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_updating_graph_mask = ((bool*) ({ void *____chimes_tmp_ptr = malloc((sizeof(bool) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(bool)*no_of_nodes, 6277575452893475588UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 88 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_visited = ((bool*) ({ void *____chimes_tmp_ptr = malloc((sizeof(bool) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(bool)*no_of_nodes, 6277575452893475590UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 89 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 90 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 int start; int edgeno; ;
# 91 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 92 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 { unsigned int i; for( i = (0) ; i < no_of_nodes; i++)
# 93 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 94 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  fscanf(fp,"%d %d",&start,&edgeno);
# 95 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_nodes[i].starting = start;
# 96 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_nodes[i].no_of_edges = edgeno;
# 97 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_mask[i]=false;
# 98 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_updating_graph_mask[i]=false;
# 99 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_visited[i]=false;
# 100 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 } }
# 101 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 102 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 103 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fscanf(fp,"%d",&source);
# 104 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 105 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 106 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 107 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 h_graph_mask[source]=true;
# 108 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 h_graph_visited[source]=true;
# 109 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 110 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 fscanf(fp,"%d",&edge_list_size);
# 111 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 112 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 int id; int cost; ;
# 113 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_graph_edges = ((int*) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * edge_list_size) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(int)*edge_list_size, 6277575452893475583UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 114 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 { int i; for( i = (0) ; i < edge_list_size ; i++)
# 115 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 116 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  fscanf(fp,"%d",&id);
# 117 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  fscanf(fp,"%d",&cost);
# 118 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  h_graph_edges[i] = id;
# 119 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 } }
# 120 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 121 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 if (fp) {fclose(fp); };
# 123 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 124 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 125 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 126 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    h_cost = ((int*) ({ void *____chimes_tmp_ptr = malloc((sizeof(int) * no_of_nodes) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(int)*no_of_nodes, 6277575452893475592UL, 0, 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 127 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 { int i; for ( i = (0) ;i<no_of_nodes; i++) { h_cost[i]=-1; } };
# 129 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 h_cost[source]=0;
# 130 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 131 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 printf("Start traversing the tree\n");
# 132 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 133 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    k = (0) ;
# 134 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 135 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    int tid; int i; ;
# 136 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ;
# 137 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
       count_iters = (0) ;
# 138 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 139 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 do
# 140 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 {
# 141 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 142 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  stop=false;
# 143 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 144 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 145 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  omp_set_num_threads(num_omp_threads);
# 146 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
{ call_lbl_4: bool ____chimes_disable0 = disable_current_thread(); void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(4, &____chimes_region_id0, 3, &i, &id, &tid); int ____chimes_first_iter0 = 1;
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
#pragma omp parallel for private(tid, i, id) firstprivate(____chimes_first_iter0)
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 147 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 148 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  for(tid = 0; tid < no_of_nodes; tid++ )
# 149 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  { { if (____chimes_first_iter0) { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 3, &i, &id, &tid); ____chimes_first_iter0 = 0; } {
# 150 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   if (h_graph_mask[tid] == true){
# 151 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_graph_mask[tid]=false;
# 152 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   for(i=h_graph_nodes[tid].starting; i<(h_graph_nodes[tid].no_of_edges + h_graph_nodes[tid].starting); i++)
# 153 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    {
# 154 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    id = h_graph_edges[i];
# 155 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    if(!h_graph_visited[id])
# 156 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     {
# 157 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     h_cost[id]=h_cost[tid]+1;
# 158 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     h_updating_graph_mask[id]=true;
# 159 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     }
# 160 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    }
# 161 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   }
# 162 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   } } } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 1); reenable_current_thread(____chimes_disable0); }
# 163 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 164 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    for(tid=0; tid< no_of_nodes ; tid++ )
# 165 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  {
# 166 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   if (h_updating_graph_mask[tid] == true){
# 167 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_graph_mask[tid]=true;
# 168 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_graph_visited[tid]=true;
# 169 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   stop=true;
# 170 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   h_updating_graph_mask[tid]=false;
# 171 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
   }
# 172 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  }
# 173 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  k++;
# 174 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 175 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 176 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
         call_lbl_2: checkpoint_transformed(2, ____alias_loc_id_1);
# 177 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 178 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
        count_iters++;
# 179 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 }
# 180 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 while(stop);
# 181 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 182 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     double end_time; call_lbl_3: end_time = (({ calling_npm("seconds", 0); seconds_npm(); })) ;
# 183 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 184 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 185 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 186 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 187 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 188 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 189 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
 printf("Result stored in result.txt, execution took %f s, %d iters\n", end_time - start_time, count_iters);
# 190 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 191 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 192 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 193 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_nodes) - sizeof(void *)), 6277575452893475580UL);free((((unsigned char *)h_graph_nodes) - sizeof(void *))); }) ;
# 194 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_edges) - sizeof(void *)), 6277575452893475583UL);free((((unsigned char *)h_graph_edges) - sizeof(void *))); }) ;
# 195 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_mask) - sizeof(void *)), 6277575452893475586UL);free((((unsigned char *)h_graph_mask) - sizeof(void *))); }) ;
# 196 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_updating_graph_mask) - sizeof(void *)), 6277575452893475588UL);free((((unsigned char *)h_updating_graph_mask) - sizeof(void *))); }) ;
# 197 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_graph_visited) - sizeof(void *)), 6277575452893475590UL);free((((unsigned char *)h_graph_visited) - sizeof(void *))); }) ;
# 198 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
  ({ free_helper((((unsigned char *)h_cost) - sizeof(void *)), 6277575452893475592UL);free((((unsigned char *)h_cost) - sizeof(void *))); }) ;
# 199 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 200 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
rm_stack(false, 0UL, "BFSGraph", (int *)0x0, ____alias_loc_id_5, ____chimes_did_disable3, false); }

void BFSGraph( int argc, char** argv) { (____chimes_replaying ? BFSGraph_resumable(argc, argv) : BFSGraph_quick(argc, argv)); }
# 14 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
double seconds_npm() {
# 15 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    struct timeval tp;
# 16 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    struct timezone tzp;
# 17 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
    int i = gettimeofday(&tp, &tzp);
# 18 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
     double ____chimes_ret_var_0; ____chimes_ret_var_0 = (((double)tp.tv_sec + (double)tp.tv_usec * 1.e-6)); return ____chimes_ret_var_0; ;
# 19 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
}
# 35 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
void Usage_npm(int argc, char**argv){
# 36 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 37 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
fprintf(stderr,"Usage: %s <num_threads> <input_file>\n", argv[0]);
# 38 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
# 39 "/gpfs-biou/jmg3/rodinia_3.0/openmp/bfs/bfs.cpp"
}





static int module_init() {
    init_module(6277575452893475151UL, 13, 4, 0, 6, 2, 0, 2, 3, 0, 5,
                           &____alias_loc_id_0, (unsigned)4, (unsigned)0, (unsigned)0, (6277575452893475151UL + 42UL), (6277575452893475151UL + 43UL), (6277575452893475151UL + 44UL), (6277575452893475151UL + 459UL),
                           &____alias_loc_id_1, (unsigned)29, (unsigned)0, (unsigned)0, (6277575452893475151UL + 32UL), (6277575452893475151UL + 62UL), (6277575452893475151UL + 63UL), (6277575452893475151UL + 64UL), (6277575452893475151UL + 65UL), (6277575452893475151UL + 66UL), (6277575452893475151UL + 67UL), (6277575452893475151UL + 68UL), (6277575452893475151UL + 69UL), (6277575452893475151UL + 70UL), (6277575452893475151UL + 71UL), (6277575452893475151UL + 74UL), (6277575452893475151UL + 75UL), (6277575452893475151UL + 77UL), (6277575452893475151UL + 78UL), (6277575452893475151UL + 79UL), (6277575452893475151UL + 80UL), (6277575452893475151UL + 81UL), (6277575452893475151UL + 82UL), (6277575452893475151UL + 83UL), (6277575452893475151UL + 84UL), (6277575452893475151UL + 85UL), (6277575452893475151UL + 429UL), (6277575452893475151UL + 432UL), (6277575452893475151UL + 435UL), (6277575452893475151UL + 437UL), (6277575452893475151UL + 439UL), (6277575452893475151UL + 441UL), (6277575452893475151UL + 461UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (unsigned)0, (6277575452893475151UL + 1UL), (6277575452893475151UL + 3UL), (6277575452893475151UL + 4UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (unsigned)0, (6277575452893475151UL + 26UL), (6277575452893475151UL + 27UL),
                           &____alias_loc_id_4, (unsigned)1, (unsigned)0, (unsigned)0, (6277575452893475151UL + 45UL),
                           &____alias_loc_id_5, (unsigned)9, (unsigned)0, (unsigned)0, (6277575452893475151UL + 32UL), (6277575452893475151UL + 62UL), (6277575452893475151UL + 63UL), (6277575452893475151UL + 64UL), (6277575452893475151UL + 65UL), (6277575452893475151UL + 66UL), (6277575452893475151UL + 85UL), (6277575452893475151UL + 86UL), (6277575452893475151UL + 461UL),
                            "seconds", 0, "_Z7secondsv", "_Z11seconds_npmv", 0, 0, 0UL, 1, "gettimeofday", 2, (6277575452893475151UL + 1UL), (6277575452893475151UL + 2UL), 0UL,
                            "Usage", 0, "_Z5UsageiPPc", "_Z9Usage_npmiPPc", 0, 2, 0UL, (6277575452893475151UL + 39UL), 0UL, 1, "fprintf", 3, (6277575452893475151UL + 32UL), (6277575452893475151UL + 463UL), (6277575452893475151UL + 35UL), 0UL,
                           "seconds", &(____chimes_does_checkpoint_seconds_npm),
                           "Usage", &(____chimes_does_checkpoint_Usage_npm),
                             (6277575452893475151UL + 39UL), (6277575452893475151UL + 35UL),
                             (6277575452893475151UL + 27UL), (6277575452893475151UL + 39UL),
                             (6277575452893475151UL + 461UL), (6277575452893475151UL + 32UL),
                             (6277575452893475151UL + 44UL), (6277575452893475151UL + 61UL),
                             (6277575452893475151UL + 447UL), (6277575452893475151UL + 106UL),
                             (6277575452893475151UL + 77UL), (6277575452893475151UL + 432UL),
                             (6277575452893475151UL + 63UL), (6277575452893475151UL + 447UL),
                             (6277575452893475151UL + 64UL), (6277575452893475151UL + 106UL),
                             (6277575452893475151UL + 71UL), (6277575452893475151UL + 439UL),
                             (6277575452893475151UL + 70UL), (6277575452893475151UL + 437UL),
                             (6277575452893475151UL + 68UL), (6277575452893475151UL + 429UL),
                             (6277575452893475151UL + 69UL), (6277575452893475151UL + 435UL),
                             (6277575452893475151UL + 79UL), (6277575452893475151UL + 441UL),
                     "Node", 64UL, 2, "int", (int)__builtin_offsetof (struct Node, starting), "int", (int)__builtin_offsetof (struct Node, no_of_edges),
                     "_IO_FILE", 1728UL, 29, "int", (int)__builtin_offsetof (struct _IO_FILE, _flags), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_read_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_ptr), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_write_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_buf_end), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_backup_base), "char*", (int)__builtin_offsetof (struct _IO_FILE, _IO_save_end), "%struct._IO_marker*", (int)__builtin_offsetof (struct _IO_FILE, _markers), "%struct._IO_FILE*", (int)__builtin_offsetof (struct _IO_FILE, _chain), "int", (int)__builtin_offsetof (struct _IO_FILE, _fileno), "int", (int)__builtin_offsetof (struct _IO_FILE, _flags2), "long int", (int)__builtin_offsetof (struct _IO_FILE, _old_offset), "unsigned short", (int)__builtin_offsetof (struct _IO_FILE, _cur_column), "signed char", (int)__builtin_offsetof (struct _IO_FILE, _vtable_offset), "[ 1 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _shortbuf), "void*", (int)__builtin_offsetof (struct _IO_FILE, _lock), "long int", (int)__builtin_offsetof (struct _IO_FILE, _offset), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad1), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad2), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad3), "void*", (int)__builtin_offsetof (struct _IO_FILE, __pad4), "long unsigned int", (int)__builtin_offsetof (struct _IO_FILE, __pad5), "int", (int)__builtin_offsetof (struct _IO_FILE, _mode), "[ 20 x char ]", (int)__builtin_offsetof (struct _IO_FILE, _unused2),
                     "_IO_marker", 0UL, 0,
                     "timeval", 128UL, 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "long int", (int)__builtin_offsetof (struct timeval, tv_usec),
                     "timezone", 64UL, 2, "int", (int)__builtin_offsetof (struct timezone, tz_minuteswest), "int", (int)__builtin_offsetof (struct timezone, tz_dsttime),
                             "seconds", "_Z7secondsv", 0, 0,
                             "Usage", "_Z5UsageiPPc", 0, 0,
                             "main", "main", 0, 1, "BFSGraph",
                             "BFSGraph", "_Z8BFSGraphiPPc", 0, 4, "seconds", "Usage", "checkpoint", "seconds",
        "seconds", 0UL, (int)0,
        "Usage", 0UL, (int)2, 0UL, 6277575452893475598UL,
        "seconds", 0UL, (int)0);
    register_global_var("global|no_of_nodes", "i32", (void *)(&no_of_nodes), 4, 0, 0, 0UL, 0);
    register_global_var("global|edge_list_size", "i32", (void *)(&edge_list_size), 4, 0, 0, 0UL, 0);
    register_global_var("global|fp", "%struct._IO_FILE*", (void *)(&fp), 8, 1, 0, (6277575452893475151UL + 461UL), 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
