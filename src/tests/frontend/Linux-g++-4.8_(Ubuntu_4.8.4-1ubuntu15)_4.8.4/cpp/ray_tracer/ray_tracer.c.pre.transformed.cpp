# 1 "ray_tracer.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "ray_tracer.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_get_cos_angle_v1v2_npm = 1;
static int ____chimes_does_checkpoint_modv_npm = 1;
static int ____chimes_does_checkpoint_move_npm = 1;
static int ____chimes_does_checkpoint_get_sphere_intersec_npm = 1;
static int ____chimes_does_checkpoint_move_to_npm = 1;
static int ____chimes_does_checkpoint_get_coord_npm = 1;
static int ____chimes_does_checkpoint_parse_three_doubles_npm = 1;
static int ____chimes_does_checkpoint_init_npm = 1;
static int ____chimes_does_checkpoint_parse_config_npm = 1;
static int ____chimes_does_checkpoint_usage_npm = 1;
static int ____chimes_does_checkpoint_rot_y_npm = 1;
static int ____chimes_does_checkpoint_rot_x_npm = 1;

static int ____must_checkpoint_main_conf_0 = 2;

static int ____must_manage_get_cos_angle_v1v2 = 2;
static int ____must_manage_modv = 2;
static int ____must_manage_move = 2;
static int ____must_manage_get_sphere_intersec = 2;
static int ____must_manage_move_to = 2;
static int ____must_manage_get_coord = 2;
static int ____must_manage_parse_three_doubles = 2;
static int ____must_manage_init = 2;
static int ____must_manage_parse_config = 2;
static int ____must_manage_usage = 2;
static int ____must_manage_rot_y = 2;
static int ____must_manage_rot_x = 2;

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
# 1 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/home/mg1/chimes/src/libchimes/libchimes.h" 2


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
# 76 "/home/mg1/chimes/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 402 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 403 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4

extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


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


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
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
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;
# 154 "/usr/include/libio.h" 3 4
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 177 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 245 "/usr/include/libio.h" 3 4
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
# 293 "/usr/include/libio.h" 3 4
  __off64_t _offset;
# 302 "/usr/include/libio.h" 3 4
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
# 338 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
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
# 434 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 464 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 526 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();
# 195 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3 4
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);
# 272 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();
# 356 "/usr/include/stdio.h" 3 4
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3 4
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4
# 471 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4
# 531 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3 4
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3 4
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3 4
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;
# 846 "/usr/include/stdio.h" 3 4
extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 933 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 1 3 4
# 35 "/usr/include/x86_64-linux-gnu/bits/stdio.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) int
vprintf (const char *__restrict __fmt, __gnuc_va_list __arg)
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
__attribute__ ((__leaf__)) feof_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x10) != 0);
}


extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) ferror_unlocked (FILE *__stream) throw ()
{
  return (((__stream)->_flags & 0x20) != 0);
}
# 934 "/usr/include/stdio.h" 2 3 4
# 942 "/usr/include/stdio.h" 3 4
}
# 2 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 64 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 65 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 2 3 4

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
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


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
# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 235 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 236 "/usr/include/stdlib.h" 2 3 4



extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));





extern __inline __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) atoi (const char *__nptr) throw ()
{
  return (int) strtol (__nptr, (char **) __null, 10);
}
extern __inline __attribute__ ((__gnu_inline__)) long int
__attribute__ ((__leaf__)) atol (const char *__nptr) throw ()
{
  return strtol (__nptr, (char **) __null, 10);
}




__extension__ extern __inline __attribute__ ((__gnu_inline__)) long long int
__attribute__ ((__leaf__)) atoll (const char *__nptr) throw ()
{
  return strtoll (__nptr, (char **) __null, 10);
}
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
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
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 132 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/time.h" 1 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;
# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 133 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;





# 1 "/usr/include/time.h" 1 3 4
# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 44 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
}
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));


__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_major (unsigned long long int __dev) throw ()
{
  return ((__dev >> 8) & 0xfff) | ((unsigned int) (__dev >> 32) & ~0xfff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned int
__attribute__ ((__leaf__)) gnu_dev_minor (unsigned long long int __dev) throw ()
{
  return (__dev & 0xff) | ((unsigned int) (__dev >> 12) & ~0xff);
}

__extension__ extern __inline __attribute__ ((__gnu_inline__)) __attribute__ ((__const__)) unsigned long long int
__attribute__ ((__leaf__)) gnu_dev_makedev (unsigned int __major, unsigned int __minor) throw ()
{
  return ((__minor & 0xff) | ((__major & 0xfff) << 8)
   | (((unsigned long long int) (__minor & ~0xff)) << 12)
   | (((unsigned long long int) (__major & ~0xfff)) << 32));
}

}
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
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
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
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
# 271 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


}
# 315 "/usr/include/stdlib.h" 2 3 4






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
    __extension__ unsigned long long int __a;

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
# 466 "/usr/include/stdlib.h" 3 4
extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;
# 480 "/usr/include/stdlib.h" 3 4
extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));
# 535 "/usr/include/stdlib.h" 3 4
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 716 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 1 3 4
# 19 "/usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h" 3 4
extern __inline __attribute__ ((__gnu_inline__)) void *
bsearch (const void *__key, const void *__base, size_t __nmemb, size_t __size,
  __compar_fn_t __compar)
{
  size_t __l, __u, __idx;
  const void *__p;
  int __comparison;

  __l = 0;
  __u = __nmemb;
  while (__l < __u)
    {
      __idx = (__l + __u) / 2;
      __p = (void *) (((const char *) __base) + (__idx * __size));
      __comparison = (*__compar) (__key, __p);
      if (__comparison < 0)
 __u = __idx;
      else if (__comparison > 0)
 __l = __idx + 1;
      else
 return (void *) __p;
    }

  return __null;
}
# 760 "/usr/include/stdlib.h" 2 3 4




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
# 811 "/usr/include/stdlib.h" 3 4
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






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();
# 887 "/usr/include/stdlib.h" 3 4
extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 3 4

extern __inline __attribute__ ((__gnu_inline__)) double
__attribute__ ((__leaf__)) atof (const char *__nptr) throw ()
{
  return strtod (__nptr, (char **) __null);
}
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
}
# 3 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 66 "/usr/include/assert.h" 3 4
extern "C" {


extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     throw () __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     throw () __attribute__ ((__noreturn__));


}
# 4 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c" 2
# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
extern "C" {



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 33 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 35 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 46 "/usr/include/math.h" 2 3 4
# 69 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


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


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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






extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));





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
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));


extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));




extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 70 "/usr/include/math.h" 2 3 4
# 88 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


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


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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






extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));





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
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));




extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 89 "/usr/include/math.h" 2 3 4
# 133 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


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


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();
# 153 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();
# 178 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
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






extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));





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
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();
# 365 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4
extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));




extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 134 "/usr/include/math.h" 2 3 4
# 149 "/usr/include/math.h" 3 4
extern int signgam;
# 190 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 302 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 325 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 427 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 1 3 4
# 123 "/usr/include/x86_64-linux-gnu/bits/mathinline.h" 3 4



extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbitf (float __x) throw ()
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x8) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbit (double __x) throw ()
{

  int __m;
  __asm ("pmovmskb %1, %0" : "=r" (__m) : "x" (__x));
  return (__m & 0x80) != 0;




}
extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) int
__attribute__ ((__leaf__)) __signbitl (long double __x) throw ()
{
  __extension__ union { long double __l; int __i[3]; } __u = { __l: __x };
  return (__u.__i[2] & 0x8000) != 0;
}
# 428 "/usr/include/math.h" 2 3 4
# 489 "/usr/include/math.h" 3 4
}
# 5 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4
# 44 "/usr/include/string.h" 3 4


extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) void *
memchr (void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const void *
memchr (const void *__s, int __c, size_t __n) throw ()
{
  return __builtin_memchr (__s, __c, __n);
}

}
# 105 "/usr/include/string.h" 3 4
extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 129 "/usr/include/string.h" 3 4
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));
# 166 "/usr/include/string.h" 3 4
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 210 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strchr (char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strchr (const char *__s, int __c) throw ()
{
  return __builtin_strchr (__s, __c);
}

}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strrchr (char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strrchr (const char *__s, int __c) throw ()
{
  return __builtin_strrchr (__s, __c);
}

}
# 271 "/usr/include/string.h" 3 4
extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 284 "/usr/include/string.h" 3 4
extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strpbrk (char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strpbrk (const char *__s, const char *__accept) throw ()
{
  return __builtin_strpbrk (__s, __accept);
}

}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
strstr (char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
strstr (const char *__haystack, const char *__needle) throw ()
{
  return __builtin_strstr (__haystack, __needle);
}

}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 381 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();
# 437 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
index (char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
index (const char *__s, int __c) throw ()
{
  return __builtin_index (__s, __c);
}

}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));


extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) char *
rindex (char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

extern __inline __attribute__ ((__always_inline__)) __attribute__ ((__gnu_inline__)) const char *
rindex (const char *__s, int __c) throw ()
{
  return __builtin_rindex (__s, __c);
}

}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 643 "/usr/include/string.h" 3 4
}
# 6 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 27 "/usr/include/unistd.h" 3 4
extern "C" {
# 202 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/posix_opt.h" 1 3 4
# 203 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/environments.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/environments.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/environments.h" 2 3 4
# 207 "/usr/include/unistd.h" 2 3 4
# 226 "/usr/include/unistd.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 1 3 4
# 227 "/usr/include/unistd.h" 2 3 4
# 267 "/usr/include/unistd.h" 3 4
typedef __intptr_t intptr_t;






typedef __socklen_t socklen_t;
# 287 "/usr/include/unistd.h" 3 4
extern int access (const char *__name, int __type) throw () __attribute__ ((__nonnull__ (1)));




extern int euidaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));


extern int eaccess (const char *__name, int __type)
     throw () __attribute__ ((__nonnull__ (1)));






extern int faccessat (int __fd, const char *__file, int __type, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;
# 334 "/usr/include/unistd.h" 3 4
extern __off_t lseek (int __fd, __off_t __offset, int __whence) throw ();
# 345 "/usr/include/unistd.h" 3 4
extern __off64_t lseek64 (int __fd, __off64_t __offset, int __whence)
     throw ();






extern int close (int __fd);






extern ssize_t read (int __fd, void *__buf, size_t __nbytes) ;





extern ssize_t write (int __fd, const void *__buf, size_t __n) ;
# 376 "/usr/include/unistd.h" 3 4
extern ssize_t pread (int __fd, void *__buf, size_t __nbytes,
        __off_t __offset) ;






extern ssize_t pwrite (int __fd, const void *__buf, size_t __n,
         __off_t __offset) ;
# 404 "/usr/include/unistd.h" 3 4
extern ssize_t pread64 (int __fd, void *__buf, size_t __nbytes,
   __off64_t __offset) ;


extern ssize_t pwrite64 (int __fd, const void *__buf, size_t __n,
    __off64_t __offset) ;







extern int pipe (int __pipedes[2]) throw () ;




extern int pipe2 (int __pipedes[2], int __flags) throw () ;
# 432 "/usr/include/unistd.h" 3 4
extern unsigned int alarm (unsigned int __seconds) throw ();
# 444 "/usr/include/unistd.h" 3 4
extern unsigned int sleep (unsigned int __seconds);







extern __useconds_t ualarm (__useconds_t __value, __useconds_t __interval)
     throw ();






extern int usleep (__useconds_t __useconds);
# 469 "/usr/include/unistd.h" 3 4
extern int pause (void);



extern int chown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchown (int __fd, __uid_t __owner, __gid_t __group) throw () ;




extern int lchown (const char *__file, __uid_t __owner, __gid_t __group)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int fchownat (int __fd, const char *__file, __uid_t __owner,
       __gid_t __group, int __flag)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int chdir (const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern int fchdir (int __fd) throw () ;
# 511 "/usr/include/unistd.h" 3 4
extern char *getcwd (char *__buf, size_t __size) throw () ;





extern char *get_current_dir_name (void) throw ();







extern char *getwd (char *__buf)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__)) ;




extern int dup (int __fd) throw () ;


extern int dup2 (int __fd, int __fd2) throw ();




extern int dup3 (int __fd, int __fd2, int __flags) throw ();



extern char **__environ;

extern char **environ;





extern int execve (const char *__path, char *const __argv[],
     char *const __envp[]) throw () __attribute__ ((__nonnull__ (1, 2)));




extern int fexecve (int __fd, char *const __argv[], char *const __envp[])
     throw () __attribute__ ((__nonnull__ (2)));




extern int execv (const char *__path, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execle (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execl (const char *__path, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int execvp (const char *__file, char *const __argv[])
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execlp (const char *__file, const char *__arg, ...)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int execvpe (const char *__file, char *const __argv[],
      char *const __envp[])
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern int nice (int __inc) throw () ;




extern void _exit (int __status) __attribute__ ((__noreturn__));





# 1 "/usr/include/x86_64-linux-gnu/bits/confname.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/bits/confname.h" 3 4
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
# 610 "/usr/include/unistd.h" 2 3 4


extern long int pathconf (const char *__path, int __name)
     throw () __attribute__ ((__nonnull__ (1)));


extern long int fpathconf (int __fd, int __name) throw ();


extern long int sysconf (int __name) throw ();



extern size_t confstr (int __name, char *__buf, size_t __len) throw ();




extern __pid_t getpid (void) throw ();


extern __pid_t getppid (void) throw ();


extern __pid_t getpgrp (void) throw ();


extern __pid_t __getpgid (__pid_t __pid) throw ();

extern __pid_t getpgid (__pid_t __pid) throw ();






extern int setpgid (__pid_t __pid, __pid_t __pgid) throw ();
# 660 "/usr/include/unistd.h" 3 4
extern int setpgrp (void) throw ();






extern __pid_t setsid (void) throw ();



extern __pid_t getsid (__pid_t __pid) throw ();



extern __uid_t getuid (void) throw ();


extern __uid_t geteuid (void) throw ();


extern __gid_t getgid (void) throw ();


extern __gid_t getegid (void) throw ();




extern int getgroups (int __size, __gid_t __list[]) throw () ;



extern int group_member (__gid_t __gid) throw ();






extern int setuid (__uid_t __uid) throw () ;




extern int setreuid (__uid_t __ruid, __uid_t __euid) throw () ;




extern int seteuid (__uid_t __uid) throw () ;






extern int setgid (__gid_t __gid) throw () ;




extern int setregid (__gid_t __rgid, __gid_t __egid) throw () ;




extern int setegid (__gid_t __gid) throw () ;





extern int getresuid (__uid_t *__ruid, __uid_t *__euid, __uid_t *__suid)
     throw ();



extern int getresgid (__gid_t *__rgid, __gid_t *__egid, __gid_t *__sgid)
     throw ();



extern int setresuid (__uid_t __ruid, __uid_t __euid, __uid_t __suid)
     throw () ;



extern int setresgid (__gid_t __rgid, __gid_t __egid, __gid_t __sgid)
     throw () ;






extern __pid_t fork (void) throw ();







extern __pid_t vfork (void) throw ();





extern char *ttyname (int __fd) throw ();



extern int ttyname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;



extern int isatty (int __fd) throw ();





extern int ttyslot (void) throw ();




extern int link (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int linkat (int __fromfd, const char *__from, int __tofd,
     const char *__to, int __flags)
     throw () __attribute__ ((__nonnull__ (2, 4))) ;




extern int symlink (const char *__from, const char *__to)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern ssize_t readlink (const char *__restrict __path,
    char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (1, 2))) ;




extern int symlinkat (const char *__from, int __tofd,
        const char *__to) throw () __attribute__ ((__nonnull__ (1, 3))) ;


extern ssize_t readlinkat (int __fd, const char *__restrict __path,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (2, 3))) ;



extern int unlink (const char *__name) throw () __attribute__ ((__nonnull__ (1)));



extern int unlinkat (int __fd, const char *__name, int __flag)
     throw () __attribute__ ((__nonnull__ (2)));



extern int rmdir (const char *__path) throw () __attribute__ ((__nonnull__ (1)));



extern __pid_t tcgetpgrp (int __fd) throw ();


extern int tcsetpgrp (int __fd, __pid_t __pgrp_id) throw ();






extern char *getlogin (void);







extern int getlogin_r (char *__name, size_t __name_len) __attribute__ ((__nonnull__ (1)));




extern int setlogin (const char *__name) throw () __attribute__ ((__nonnull__ (1)));
# 871 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/getopt.h" 1 3 4
# 48 "/usr/include/getopt.h" 3 4
extern "C" {
# 57 "/usr/include/getopt.h" 3 4
extern char *optarg;
# 71 "/usr/include/getopt.h" 3 4
extern int optind;




extern int opterr;



extern int optopt;
# 150 "/usr/include/getopt.h" 3 4
extern int getopt (int ___argc, char *const *___argv, const char *__shortopts)
       throw ();
# 185 "/usr/include/getopt.h" 3 4
}
# 872 "/usr/include/unistd.h" 2 3 4







extern int gethostname (char *__name, size_t __len) throw () __attribute__ ((__nonnull__ (1)));






extern int sethostname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;



extern int sethostid (long int __id) throw () ;





extern int getdomainname (char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;
extern int setdomainname (const char *__name, size_t __len)
     throw () __attribute__ ((__nonnull__ (1))) ;





extern int vhangup (void) throw ();


extern int revoke (const char *__file) throw () __attribute__ ((__nonnull__ (1))) ;







extern int profil (unsigned short int *__sample_buffer, size_t __size,
     size_t __offset, unsigned int __scale)
     throw () __attribute__ ((__nonnull__ (1)));





extern int acct (const char *__name) throw ();



extern char *getusershell (void) throw ();
extern void endusershell (void) throw ();
extern void setusershell (void) throw ();





extern int daemon (int __nochdir, int __noclose) throw () ;






extern int chroot (const char *__path) throw () __attribute__ ((__nonnull__ (1))) ;



extern char *getpass (const char *__prompt) __attribute__ ((__nonnull__ (1)));







extern int fsync (int __fd);





extern int syncfs (int __fd) throw ();






extern long int gethostid (void);


extern void sync (void) throw ();





extern int getpagesize (void) throw () __attribute__ ((__const__));




extern int getdtablesize (void) throw ();
# 993 "/usr/include/unistd.h" 3 4
extern int truncate (const char *__file, __off_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1005 "/usr/include/unistd.h" 3 4
extern int truncate64 (const char *__file, __off64_t __length)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 1016 "/usr/include/unistd.h" 3 4
extern int ftruncate (int __fd, __off_t __length) throw () ;
# 1026 "/usr/include/unistd.h" 3 4
extern int ftruncate64 (int __fd, __off64_t __length) throw () ;
# 1037 "/usr/include/unistd.h" 3 4
extern int brk (void *__addr) throw () ;





extern void *sbrk (intptr_t __delta) throw ();
# 1058 "/usr/include/unistd.h" 3 4
extern long int syscall (long int __sysno, ...) throw ();
# 1081 "/usr/include/unistd.h" 3 4
extern int lockf (int __fd, int __cmd, __off_t __len) ;
# 1091 "/usr/include/unistd.h" 3 4
extern int lockf64 (int __fd, int __cmd, __off64_t __len) ;
# 1112 "/usr/include/unistd.h" 3 4
extern int fdatasync (int __fildes);







extern char *crypt (const char *__key, const char *__salt)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern void encrypt (char *__glibc_block, int __edflag)
     throw () __attribute__ ((__nonnull__ (1)));






extern void swab (const void *__restrict __from, void *__restrict __to,
    ssize_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));
# 1151 "/usr/include/unistd.h" 3 4
}
# 7 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c" 2
# 7 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 8 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"

# 1 "/home/mg1/chimes/src/libchimes/checkpoint.h" 1
# 11 "/home/mg1/chimes/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*____chimes_fp)(void *));
# 10 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c" 2
# 10 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 11 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 12 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
typedef struct _sphere {
# 13 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double cx, cy, cz;
# 14 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double radius;
# 15 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double clR, clG, clB;
# 16 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
} sphere;
# 17 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 18 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
typedef struct _rgb {
# 19 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double r, g, b;
# 20 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
} rgb;
# 21 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 22 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
typedef struct _config {
# 23 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double px, py, pz;
# 24 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double lx, ly, lz;
# 25 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double dx, dy, dz;
# 26 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double svx, svy, svz;
# 27 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    int nx, ny;
# 28 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    sphere *spheres;
# 29 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    int nspheres;
# 30 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    int nt;
# 31 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
} config;
# 32 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 33 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void init_npm(sphere *s, double cx, double cy, double cz, double radius, double clR, double clG, double clB);
void init_quick(sphere *s, double cx, double cy, double cz, double radius, double clR, double clG, double clB); void init(sphere *s, double cx, double cy, double cz, double radius, double clR, double clG, double clB);
void init_resumable(sphere *s, double cx, double cy, double cz, double radius, double clR,
# 34 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double clG, double clB) {const int ____chimes_did_disable0 = new_stack((void *)(&init), "init", &____must_manage_init, 8, 0, (size_t)(6699244925701601349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 35 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((s) ? static_cast<void> (0) : __assert_fail ("s", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 35, __PRETTY_FUNCTION__));
# 36 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 37 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cx = cx;
# 38 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cy = cy;
# 39 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cz = cz;
# 40 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 41 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->radius = radius;
# 42 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 43 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clR = clR;
# 44 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clG = clG;
# 45 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clB = clB;
# 46 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "init", &____must_manage_init, ____alias_loc_id_1, ____chimes_did_disable0, false); }
# 47 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 48 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_coord_npm(double i1, double i2, double w1, double w2, double p);
double get_coord_quick(double i1, double i2, double w1, double w2, double p); double get_coord(double i1, double i2, double w1, double w2, double p);
double get_coord_resumable(double i1, double i2, double w1, double w2, double p) {const int ____chimes_did_disable1 = new_stack((void *)(&get_coord), "get_coord", &____must_manage_get_coord, 5, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 49 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((p - i1) / (i2 - i1)) * (w2 - w1) + w1); rm_stack(false, 0UL, "get_coord", &____must_manage_get_coord, ____alias_loc_id_2, ____chimes_did_disable1, false); return ____chimes_ret_var_0; ;
# 50 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "get_coord", &____must_manage_get_coord, ____alias_loc_id_2, ____chimes_did_disable1, false); }
# 51 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 52 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double modv_npm(double vx, double vy, double vz);
double modv_quick(double vx, double vy, double vz); double modv(double vx, double vy, double vz);
double modv_resumable(double vx, double vy, double vz) {const int ____chimes_did_disable2 = new_stack((void *)(&modv), "modv", &____must_manage_modv, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 53 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (sqrt(vx * vx + vy * vy + vz * vz)); rm_stack(false, 0UL, "modv", &____must_manage_modv, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 54 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "modv", &____must_manage_modv, ____alias_loc_id_3, ____chimes_did_disable2, false); }
# 55 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 56 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void move_npm(sphere *self, double vx, double vy, double vz);
void move_quick(sphere *self, double vx, double vy, double vz); void move(sphere *self, double vx, double vy, double vz);
void move_resumable(sphere *self, double vx, double vy, double vz) {const int ____chimes_did_disable3 = new_stack((void *)(&move), "move", &____must_manage_move, 4, 0, (size_t)(6699244925701601490UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 57 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cx += vx;
# 58 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy += vy;
# 59 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz += vz;
# 60 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "move", &____must_manage_move, ____alias_loc_id_4, ____chimes_did_disable3, false); }
# 61 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 62 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void move_to_npm(sphere *self, double vx, double vy, double vz);
void move_to_quick(sphere *self, double vx, double vy, double vz); void move_to(sphere *self, double vx, double vy, double vz);
void move_to_resumable(sphere *self, double vx, double vy, double vz) {const int ____chimes_did_disable4 = new_stack((void *)(&move_to), "move_to", &____must_manage_move_to, 4, 0, (size_t)(6699244925701601519UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 63 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cx = vx;
# 64 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy = vy;
# 65 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz = vz;
# 66 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "move_to", &____must_manage_move_to, ____alias_loc_id_5, ____chimes_did_disable4, false); }
# 67 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 68 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void rot_x_npm(sphere *self, double angle);
void rot_x_quick(sphere *self, double angle); void rot_x(sphere *self, double angle);
void rot_x_resumable(sphere *self, double angle) {const int ____chimes_did_disable5 = new_stack((void *)(&rot_x), "rot_x", &____must_manage_rot_x, 2, 0, (size_t)(6699244925701601570UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 69 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double y; y = (self->cy * cos(angle) - self->cz * sin(angle)) ;
# 70 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double z; z = (self->cy * sin(angle) + self->cz * cos(angle)) ;
# 71 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy = y;
# 72 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz = z;
# 73 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "rot_x", &____must_manage_rot_x, ____alias_loc_id_6, ____chimes_did_disable5, false); }
# 74 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 75 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void rot_y_npm(sphere *self, double angle);
void rot_y_quick(sphere *self, double angle); void rot_y(sphere *self, double angle);
void rot_y_resumable(sphere *self, double angle) {const int ____chimes_did_disable6 = new_stack((void *)(&rot_y), "rot_y", &____must_manage_rot_y, 2, 0, (size_t)(6699244925701601621UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 76 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
   double x; x = (self->cx * cos(angle) - self->cz * sin(angle)) ;
# 77 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
   double z; z = (self->cx * sin(angle) + self->cz * cos(angle)) ;
# 78 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  self->cx = x;
# 79 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  self->cz = z;
# 80 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "rot_y", &____must_manage_rot_y, ____alias_loc_id_7, ____chimes_did_disable6, false); }
# 81 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 82 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_sphere_intersec_npm(double cx, double cy, double cz, double radius, double px, double py, double pz, double vx, double vy, double vz);
double get_sphere_intersec_quick(double cx, double cy, double cz, double radius, double px, double py, double pz, double vx, double vy, double vz); double get_sphere_intersec(double cx, double cy, double cz, double radius, double px, double py, double pz, double vx, double vy, double vz);
double get_sphere_intersec_resumable(double cx, double cy, double cz, double radius,
# 83 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double px, double py, double pz, double vx, double vy, double vz) {const int ____chimes_did_disable7 = new_stack((void *)(&get_sphere_intersec), "get_sphere_intersec", &____must_manage_get_sphere_intersec, 10, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 84 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double A; A = ((vx * vx + vy * vy + vz * vz)) ;
# 85 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double B; B = (2.0 * (px * vx + py * vy + pz * vz - vx * cx - vy *
# 86 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        cy - vz * cz)) ;
# 87 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double C; C = (px * px - 2 * px * cx + cx * cx + py * py - 2 * py *
# 88 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      cy + cy * cy + pz * pz - 2 * pz * cz + cz * cz -
# 89 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      radius * radius) ;
# 90 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double D; D = (B * B - 4 * A * C) ;
# 91 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double t; t = (-1.0) ;
# 92 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    if (D >= 0)
# 93 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    {
# 94 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       double t1; t1 = ((-B - sqrt(D)) / (2.0 * A)) ;
# 95 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       double t2; t2 = ((-B + sqrt(D)) / (2.0 * A)) ;
# 96 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      if (t1 > t2) {t = t1; } else {t = t2; } ;
# 97 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    }
# 98 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (t); rm_stack(false, 0UL, "get_sphere_intersec", &____must_manage_get_sphere_intersec, ____alias_loc_id_8, ____chimes_did_disable7, false); return ____chimes_ret_var_2; ;
# 99 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "get_sphere_intersec", &____must_manage_get_sphere_intersec, ____alias_loc_id_8, ____chimes_did_disable7, false); }
# 100 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 101 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_cos_angle_v1v2_npm(double v1x, double v1y, double v1z, double v2x, double v2y, double v2z);
double get_cos_angle_v1v2_quick(double v1x, double v1y, double v1z, double v2x, double v2y, double v2z); double get_cos_angle_v1v2(double v1x, double v1y, double v1z, double v2x, double v2y, double v2z);
double get_cos_angle_v1v2_resumable(double v1x, double v1y, double v1z, double v2x,
# 102 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double v2y, double v2z) {const int ____chimes_did_disable8 = new_stack((void *)(&get_cos_angle_v1v2), "get_cos_angle_v1v2", &____must_manage_get_cos_angle_v1v2, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 103 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double a; call_lbl_0: a = (({ calling_npm("modv", 0); modv_npm(v1x, v1y, v1z); })) ;
# 104 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double b; call_lbl_1: b = (({ calling_npm("modv", 0); modv_npm(v2x, v2y, v2z); })) ;
# 105 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((v1x * v2x + v1y * v2y + v1z * v2z) / (a * b)); rm_stack(false, 0UL, "get_cos_angle_v1v2", &____must_manage_get_cos_angle_v1v2, ____alias_loc_id_9, ____chimes_did_disable8, false); return ____chimes_ret_var_3; ;
# 106 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "get_cos_angle_v1v2", &____must_manage_get_cos_angle_v1v2, ____alias_loc_id_9, ____chimes_did_disable8, false); }
# 107 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 108 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void usage_npm(char **argv);
void usage_quick(char **argv); void usage(char **argv);
void usage_resumable(char **argv) {const int ____chimes_did_disable9 = new_stack((void *)(&usage), "usage", &____must_manage_usage, 1, 0, (size_t)(6699244925701601874UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 109 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    fprintf(stderr, "usage: %s [-x nx] [-y ny] [-s sx,sy,sz,r,clr,clg,clb] "
# 110 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        "[-p px,py,pz]\n", argv[0]);
# 111 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    exit(1);
# 112 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "usage", &____must_manage_usage, 0, ____chimes_did_disable9, false); }
# 113 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 114 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void parse_three_doubles_npm(char *def, double *a, double *b, double *c);
void parse_three_doubles_quick(char *def, double *a, double *b, double *c); void parse_three_doubles(char *def, double *a, double *b, double *c);
void parse_three_doubles_resumable(char *def, double *a, double *b, double *c) {const int ____chimes_did_disable10 = new_stack((void *)(&parse_three_doubles), "parse_three_doubles", &____must_manage_parse_three_doubles, 4, 0, (size_t)(6699244925701601919UL), (size_t)(6699244925701601921UL), (size_t)(6699244925701601926UL), (size_t)(6699244925701601931UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 115 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     char *first_comma; first_comma = (strchr(def, ',')) ;
# 116 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((first_comma) ? static_cast<void> (0) : __assert_fail ("first_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 116, __PRETTY_FUNCTION__));
# 117 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     char *second_comma; second_comma = (strchr(first_comma + 1, ',')) ;
# 118 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((second_comma) ? static_cast<void> (0) : __assert_fail ("second_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 118, __PRETTY_FUNCTION__));
# 119 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 120 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *first_comma = '\0';
# 121 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *second_comma = '\0';
# 122 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 123 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *a = atof(def);
# 124 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *b = atof(first_comma + 1);
# 125 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *c = atof(second_comma + 1);
# 126 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "parse_three_doubles", &____must_manage_parse_three_doubles, ____alias_loc_id_10, ____chimes_did_disable10, false); }
# 127 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 128 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void parse_config_npm(int argc, char **argv, config *conf);
void parse_config_quick(int argc, char **argv, config *conf); void parse_config(int argc, char **argv, config *conf);
void parse_config_resumable(int argc, char **argv, config *conf) {const int ____chimes_did_disable11 = new_stack((void *)(&parse_config), "parse_config", &____must_manage_parse_config, 3, 0, (size_t)(0UL), (size_t)(6699244925701602203UL), (size_t)(6699244925701602142UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 129 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    int c; ;
# 130 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    opterr = 0;
# 131 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 132 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nx = 200;
# 133 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->ny = 200;
# 134 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->px = 0.0;
# 135 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->py = 0.0;
# 136 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->pz = 0.0;
# 137 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svx = 1.0;
# 138 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svy = 1.0;
# 139 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svz = 1.0;
# 140 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nt = 1000;
# 141 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->spheres = __null;
# 142 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nspheres = 0;
# 143 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 144 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    while ((c = getopt(argc, argv, "s:x:y:p:l:d:v:t:h")) != -1) {
# 145 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        switch (c) {
# 146 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'x':
# 147 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nx = atoi(optarg);
# 148 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 149 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'y':
# 150 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->ny = atoi(optarg);
# 151 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 152 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 't':
# 153 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nt = atoi(optarg);
# 154 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 155 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'v':
# 156 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_0: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->svx, &conf->svy, &conf->svz); });
# 157 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 158 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'p':
# 159 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_1: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->px, &conf->py, &conf->pz); });
# 160 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 161 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'l':
# 162 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_2: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->lx, &conf->ly, &conf->lz); });
# 163 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 164 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'd':
# 165 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_3: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->dx, &conf->dy, &conf->dz); });
# 166 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 167 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 's': {
# 168 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *sphere_def; sphere_def = (optarg) ;
# 169 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 170 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *first_comma; first_comma = (strchr(sphere_def, ',')) ;
# 171 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((first_comma) ? static_cast<void> (0) : __assert_fail ("first_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 171, __PRETTY_FUNCTION__));
# 172 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *second_comma; second_comma = (strchr(first_comma + 1, ',')) ;
# 173 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((second_comma) ? static_cast<void> (0) : __assert_fail ("second_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 173, __PRETTY_FUNCTION__));
# 174 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *third_comma; third_comma = (strchr(second_comma + 1, ',')) ;
# 175 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((third_comma) ? static_cast<void> (0) : __assert_fail ("third_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 175, __PRETTY_FUNCTION__));
# 176 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *fourth_comma; fourth_comma = (strchr(third_comma + 1, ',')) ;
# 177 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((fourth_comma) ? static_cast<void> (0) : __assert_fail ("fourth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 177, __PRETTY_FUNCTION__));
# 178 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *fifth_comma; fifth_comma = (strchr(fourth_comma + 1, ',')) ;
# 179 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((fifth_comma) ? static_cast<void> (0) : __assert_fail ("fifth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 179, __PRETTY_FUNCTION__));
# 180 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *sixth_comma; sixth_comma = (strchr(fifth_comma + 1, ',')) ;
# 181 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((sixth_comma) ? static_cast<void> (0) : __assert_fail ("sixth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 181, __PRETTY_FUNCTION__));
# 182 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 183 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *first_comma = '\0';
# 184 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *second_comma = '\0';
# 185 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *third_comma = '\0';
# 186 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *fourth_comma = '\0';
# 187 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *fifth_comma = '\0';
# 188 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *sixth_comma = '\0';
# 189 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 190 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->spheres = (sphere *) ({ void *____chimes_tmp_header; ____chimes_tmp_header = (conf->spheres) ; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((conf->spheres ? (((unsigned char *)conf->spheres) - sizeof(void *)) : (unsigned char *)(conf->spheres)), ((conf->nspheres + 1) * sizeof(sphere)) + sizeof(void *)); ; realloc_helper(____chimes_tmp_ptr, (conf->spheres ? (((unsigned char *)conf->spheres) - sizeof(void *)) : (unsigned char *)(conf->spheres)), ____chimes_tmp_header, (conf->nspheres + 1) * sizeof(sphere), 6699244925701602497UL, 0, 1, (int)sizeof(struct _sphere), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 192 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_4: ({ calling_npm("init", 0); init_npm(conf->spheres + conf->nspheres, atof(sphere_def), atof(first_comma + 1), atof(second_comma + 1), atof(third_comma + 1), atof(fourth_comma + 1), atof(fifth_comma + 1), atof(sixth_comma + 1)); });
# 196 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nspheres += 1;
# 197 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 198 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 199 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            }
# 200 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        case '?':
# 201 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            fprintf(stderr, "Missing argument to option %c\n", optopt);
# 202 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        case 'h':
# 203 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         call_lbl_5: default:
# 204 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            ({ calling_npm("usage", 0); usage_npm(argv); });
# 205 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        }
# 206 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    }
# 207 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "parse_config", &____must_manage_parse_config, ____alias_loc_id_11, ____chimes_did_disable11, false); }
# 208 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
int main_quick(int argc, char **argv); int main(int argc, char **argv);
int main_resumable(int argc, char **argv) {const int ____chimes_did_disable12 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6699244925701602689UL)) ; double f_max;
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rgb *screen;
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
config conf;
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
 register_stack_vars(3, "main|f_max|0", (int *)0x0, "double", (void *)(&f_max), (size_t)8, 0, 0, 0, "main|screen|0", (int *)0x0, "%struct._rgb*", (void *)(&screen), (size_t)8, 1, 0, 0, "main|conf|0", (int *)0x0, "%struct._config = type { double, double, double, double, double, double, double, double, double, double, double, double, i32, i32, %struct._sphere*, i32, i32 }", (void *)(&conf), (size_t)120, 0, 1, 1, (int)__builtin_offsetof(struct _config, spheres)); if (____chimes_replaying) { goto lbl_0; } ; ;
# 210 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      ;
# 211 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     call_lbl_0: ({ calling_npm("parse_config", 0); parse_config_npm(argc, argv, &conf); });
# 212 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       screen = ((rgb *) ({ void *____chimes_tmp_ptr = malloc((sizeof(rgb) * conf.nx * conf.ny) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(rgb) * conf.nx * conf.ny, 6699244925701602261UL, 0, 1, (int)sizeof(struct _rgb), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 213 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 214 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       f_max = (200.0) ;
# 215 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    { lbl_0: int t; register_stack_var("main|t|0", (int *)0x0, "i32", (void *)(&t), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(9): { goto call_lbl_9; } default: { chimes_error(); } } } for ( t = (0) ; t < conf.nt; t++) {
# 216 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      int i; ;
# 217 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 218 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
#pragma omp parallel for
# 219 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      for (i = 0; i < conf.nx * conf.ny; i++) {
# 220 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double x; call_lbl_1: x = (({ calling_npm("get_coord", 0); get_coord_npm(0.0, conf.nx, -f_max, f_max, i / conf.ny); })) ;
# 221 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double y; call_lbl_2: y = (({ calling_npm("get_coord", 0); get_coord_npm(0.0, conf.ny, -f_max, f_max, i % conf.ny); })) ;
# 222 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double t; t = (1.0E10) ;
# 223 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double vx; vx = (x - conf.px) ;
# 224 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double vy; vy = (y - conf.py) ;
# 225 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double vz; vz = (-conf.pz) ;
# 226 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 227 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double mod_v; call_lbl_3: mod_v = (({ calling_npm("modv", 0); modv_npm(vx, vy, vz); })) ;
# 228 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        vx = vx / mod_v;
# 229 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        vy = vy / mod_v;
# 230 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        vz = vz / mod_v;
# 231 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 232 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         bool bShadow; bShadow = (false) ;
# 233 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         sphere *spherehit; spherehit = (__null) ;
# 234 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        { int k; for ( k = (0) ; k < conf.nspheres; k++) {
# 235 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           sphere *sphn; sphn = (conf.spheres + k) ;
# 236 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double taux; call_lbl_4: taux = (({ calling_npm("get_sphere_intersec", 0); get_sphere_intersec_npm(sphn->cx, sphn->cy, sphn->cz, sphn->radius, conf.px, conf.py, conf.pz, vx, vy, vz); })) ;
# 238 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (taux < 0) {continue; };
# 239 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (taux > 0 && taux < t) {
# 240 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            t = taux;
# 241 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            spherehit = sphn;
# 242 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          }
# 243 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        } }
# 244 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 245 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         rgb color; ; color.r = 0.03; color.g = 0.06; color.b = 0.03;
# 246 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        if (spherehit != __null) {
# 247 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double itx; itx = (conf.px + t * vx) ;
# 248 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double ity; ity = (conf.py + t * vy) ;
# 249 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double itz; itz = (conf.pz + t * vz) ;
# 250 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 251 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double tauxla; call_lbl_5: tauxla = (({ calling_npm("get_sphere_intersec", 0); get_sphere_intersec_npm(spherehit->cx, spherehit->cy, spherehit->cz, spherehit->radius, conf.lx, conf.ly, conf.lz, itx - conf.lx, ity - conf.ly, itz - conf.lz); })) ;
# 254 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 255 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          { int k; for ( k = (0) ; k < conf.nspheres; k++) {
# 256 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
             sphere *sphnb; sphnb = (conf.spheres + k) ;
# 257 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            if (sphnb != spherehit) {
# 258 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
               double tauxlb; call_lbl_6: tauxlb = (({ calling_npm("get_sphere_intersec", 0); get_sphere_intersec_npm(sphnb->cx, sphnb->cy, sphnb->cz, sphnb->radius, conf.lx, conf.ly, conf.lz, itx - conf.lx, ity - conf.ly, itz -
# 261 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                  conf.lz); })) ;
# 262 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              if (tauxlb > 0 && tauxla < tauxlb) {
# 263 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                bShadow = true;
# 264 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 265 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              }
# 266 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            }
# 267 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          } }
# 268 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double cost; call_lbl_7: cost = (({ calling_npm("get_cos_angle_v1v2", 0); get_cos_angle_v1v2_npm(conf.dx, conf.dy, conf.dz, itx -
# 269 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              spherehit->cx, ity - spherehit->cy, itz -
# 270 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              spherehit->cz); })) ;
# 271 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (cost < 0) {cost = 0; };
# 272 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double fact; fact = (1.0) ;
# 273 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (bShadow == true) {fact = 0.5; } else {fact = 1.0; } ;
# 274 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          color.r = spherehit->clR * cost * fact;
# 275 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          color.g = spherehit->clG * cost * fact;
# 276 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          color.b = spherehit->clB * cost * fact;
# 277 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        }
# 278 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 279 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        screen[i].r = color.r;
# 280 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        screen[i].g = color.g;
# 281 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        screen[i].b = color.b;
# 282 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      }
# 283 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 284 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      { int i; for ( i = (0) ; i < conf.nspheres; i++) {
# 285 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           call_lbl_8: ({ calling_npm("move", 0); move_npm(conf.spheres + i, conf.svx, conf.svy, conf.svz); });
# 286 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      } }
# 287 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 288 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 289 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         call_lbl_9: checkpoint_transformed(9, ____alias_loc_id_0);
# 290 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 291 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 292 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      printf("%d/%d\n", (t + 1), conf.nt);
# 293 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    } }
# 294 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 295 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     ({ free_helper((((unsigned char *)screen) - sizeof(void *)), 6699244925701602261UL);free((((unsigned char *)screen) - sizeof(void *))); }) ;
# 296 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((0)); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable12, false); return ____chimes_ret_var_4; ;
# 297 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable12, false); }
# 33 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void init_quick(sphere *s, double cx, double cy, double cz, double radius, double clR,
# 34 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double clG, double clB) {const int ____chimes_did_disable0 = new_stack((void *)(&init), "init", &____must_manage_init, 8, 0, (size_t)(6699244925701601349UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 35 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((s) ? static_cast<void> (0) : __assert_fail ("s", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 35, __PRETTY_FUNCTION__));
# 36 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 37 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cx = cx;
# 38 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cy = cy;
# 39 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cz = cz;
# 40 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 41 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->radius = radius;
# 42 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 43 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clR = clR;
# 44 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clG = clG;
# 45 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clB = clB;
# 46 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "init", &____must_manage_init, ____alias_loc_id_1, ____chimes_did_disable0, false); }

void init(sphere *s, double cx, double cy, double cz, double radius, double clR,
# 34 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double clG, double clB) { (____chimes_replaying ? init_resumable(s, cx, cy, cz, radius, clR, clG, clB) : init_quick(s, cx, cy, cz, radius, clR, clG, clB)); }
# 48 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_coord_quick(double i1, double i2, double w1, double w2, double p) {const int ____chimes_did_disable1 = new_stack((void *)(&get_coord), "get_coord", &____must_manage_get_coord, 5, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 49 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_0; ; ____chimes_ret_var_0 = (((p - i1) / (i2 - i1)) * (w2 - w1) + w1); rm_stack(false, 0UL, "get_coord", &____must_manage_get_coord, ____alias_loc_id_2, ____chimes_did_disable1, false); return ____chimes_ret_var_0; ;
# 50 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "get_coord", &____must_manage_get_coord, ____alias_loc_id_2, ____chimes_did_disable1, false); }

double get_coord(double i1, double i2, double w1, double w2, double p) { return (____chimes_replaying ? get_coord_resumable(i1, i2, w1, w2, p) : get_coord_quick(i1, i2, w1, w2, p)); }
# 52 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double modv_quick(double vx, double vy, double vz) {const int ____chimes_did_disable2 = new_stack((void *)(&modv), "modv", &____must_manage_modv, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 53 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_1; ; ____chimes_ret_var_1 = (sqrt(vx * vx + vy * vy + vz * vz)); rm_stack(false, 0UL, "modv", &____must_manage_modv, ____alias_loc_id_3, ____chimes_did_disable2, false); return ____chimes_ret_var_1; ;
# 54 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "modv", &____must_manage_modv, ____alias_loc_id_3, ____chimes_did_disable2, false); }

double modv(double vx, double vy, double vz) { return (____chimes_replaying ? modv_resumable(vx, vy, vz) : modv_quick(vx, vy, vz)); }
# 56 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void move_quick(sphere *self, double vx, double vy, double vz) {const int ____chimes_did_disable3 = new_stack((void *)(&move), "move", &____must_manage_move, 4, 0, (size_t)(6699244925701601490UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 57 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cx += vx;
# 58 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy += vy;
# 59 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz += vz;
# 60 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "move", &____must_manage_move, ____alias_loc_id_4, ____chimes_did_disable3, false); }

void move(sphere *self, double vx, double vy, double vz) { (____chimes_replaying ? move_resumable(self, vx, vy, vz) : move_quick(self, vx, vy, vz)); }
# 62 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void move_to_quick(sphere *self, double vx, double vy, double vz) {const int ____chimes_did_disable4 = new_stack((void *)(&move_to), "move_to", &____must_manage_move_to, 4, 0, (size_t)(6699244925701601519UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 63 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cx = vx;
# 64 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy = vy;
# 65 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz = vz;
# 66 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "move_to", &____must_manage_move_to, ____alias_loc_id_5, ____chimes_did_disable4, false); }

void move_to(sphere *self, double vx, double vy, double vz) { (____chimes_replaying ? move_to_resumable(self, vx, vy, vz) : move_to_quick(self, vx, vy, vz)); }
# 68 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void rot_x_quick(sphere *self, double angle) {const int ____chimes_did_disable5 = new_stack((void *)(&rot_x), "rot_x", &____must_manage_rot_x, 2, 0, (size_t)(6699244925701601570UL), (size_t)(0UL)) ; ; ;
# 69 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double y; y = (self->cy * cos(angle) - self->cz * sin(angle)) ;
# 70 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double z; z = (self->cy * sin(angle) + self->cz * cos(angle)) ;
# 71 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy = y;
# 72 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz = z;
# 73 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "rot_x", &____must_manage_rot_x, ____alias_loc_id_6, ____chimes_did_disable5, false); }

void rot_x(sphere *self, double angle) { (____chimes_replaying ? rot_x_resumable(self, angle) : rot_x_quick(self, angle)); }
# 75 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void rot_y_quick(sphere *self, double angle) {const int ____chimes_did_disable6 = new_stack((void *)(&rot_y), "rot_y", &____must_manage_rot_y, 2, 0, (size_t)(6699244925701601621UL), (size_t)(0UL)) ; ; ;
# 76 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
   double x; x = (self->cx * cos(angle) - self->cz * sin(angle)) ;
# 77 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
   double z; z = (self->cx * sin(angle) + self->cz * cos(angle)) ;
# 78 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  self->cx = x;
# 79 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  self->cz = z;
# 80 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "rot_y", &____must_manage_rot_y, ____alias_loc_id_7, ____chimes_did_disable6, false); }

void rot_y(sphere *self, double angle) { (____chimes_replaying ? rot_y_resumable(self, angle) : rot_y_quick(self, angle)); }
# 82 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_sphere_intersec_quick(double cx, double cy, double cz, double radius,
# 83 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double px, double py, double pz, double vx, double vy, double vz) {const int ____chimes_did_disable7 = new_stack((void *)(&get_sphere_intersec), "get_sphere_intersec", &____must_manage_get_sphere_intersec, 10, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 84 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double A; A = ((vx * vx + vy * vy + vz * vz)) ;
# 85 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double B; B = (2.0 * (px * vx + py * vy + pz * vz - vx * cx - vy *
# 86 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        cy - vz * cz)) ;
# 87 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double C; C = (px * px - 2 * px * cx + cx * cx + py * py - 2 * py *
# 88 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      cy + cy * cy + pz * pz - 2 * pz * cz + cz * cz -
# 89 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      radius * radius) ;
# 90 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double D; D = (B * B - 4 * A * C) ;
# 91 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double t; t = (-1.0) ;
# 92 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    if (D >= 0)
# 93 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    {
# 94 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       double t1; t1 = ((-B - sqrt(D)) / (2.0 * A)) ;
# 95 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       double t2; t2 = ((-B + sqrt(D)) / (2.0 * A)) ;
# 96 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      if (t1 > t2) {t = t1; } else {t = t2; } ;
# 97 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    }
# 98 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_2; ; ____chimes_ret_var_2 = (t); rm_stack(false, 0UL, "get_sphere_intersec", &____must_manage_get_sphere_intersec, ____alias_loc_id_8, ____chimes_did_disable7, false); return ____chimes_ret_var_2; ;
# 99 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "get_sphere_intersec", &____must_manage_get_sphere_intersec, ____alias_loc_id_8, ____chimes_did_disable7, false); }

double get_sphere_intersec(double cx, double cy, double cz, double radius,
# 83 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double px, double py, double pz, double vx, double vy, double vz) { return (____chimes_replaying ? get_sphere_intersec_resumable(cx, cy, cz, radius, px, py, pz, vx, vy, vz) : get_sphere_intersec_quick(cx, cy, cz, radius, px, py, pz, vx, vy, vz)); }
# 101 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_cos_angle_v1v2_quick(double v1x, double v1y, double v1z, double v2x,
# 102 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double v2y, double v2z) {const int ____chimes_did_disable8 = new_stack((void *)(&get_cos_angle_v1v2), "get_cos_angle_v1v2", &____must_manage_get_cos_angle_v1v2, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 103 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double a; call_lbl_0: a = (({ calling_npm("modv", 0); modv_npm(v1x, v1y, v1z); })) ;
# 104 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double b; call_lbl_1: b = (({ calling_npm("modv", 0); modv_npm(v2x, v2y, v2z); })) ;
# 105 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_3; ; ____chimes_ret_var_3 = ((v1x * v2x + v1y * v2y + v1z * v2z) / (a * b)); rm_stack(false, 0UL, "get_cos_angle_v1v2", &____must_manage_get_cos_angle_v1v2, ____alias_loc_id_9, ____chimes_did_disable8, false); return ____chimes_ret_var_3; ;
# 106 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "get_cos_angle_v1v2", &____must_manage_get_cos_angle_v1v2, ____alias_loc_id_9, ____chimes_did_disable8, false); }

double get_cos_angle_v1v2(double v1x, double v1y, double v1z, double v2x,
# 102 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double v2y, double v2z) { return (____chimes_replaying ? get_cos_angle_v1v2_resumable(v1x, v1y, v1z, v2x, v2y, v2z) : get_cos_angle_v1v2_quick(v1x, v1y, v1z, v2x, v2y, v2z)); }
# 108 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void usage_quick(char **argv) {const int ____chimes_did_disable9 = new_stack((void *)(&usage), "usage", &____must_manage_usage, 1, 0, (size_t)(6699244925701601874UL)) ; ; ;
# 109 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    fprintf(stderr, "usage: %s [-x nx] [-y ny] [-s sx,sy,sz,r,clr,clg,clb] "
# 110 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        "[-p px,py,pz]\n", argv[0]);
# 111 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    exit(1);
# 112 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "usage", &____must_manage_usage, 0, ____chimes_did_disable9, false); }

void usage(char **argv) { (____chimes_replaying ? usage_resumable(argv) : usage_quick(argv)); }
# 114 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void parse_three_doubles_quick(char *def, double *a, double *b, double *c) {const int ____chimes_did_disable10 = new_stack((void *)(&parse_three_doubles), "parse_three_doubles", &____must_manage_parse_three_doubles, 4, 0, (size_t)(6699244925701601919UL), (size_t)(6699244925701601921UL), (size_t)(6699244925701601926UL), (size_t)(6699244925701601931UL)) ; ; ;
# 115 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     char *first_comma; first_comma = (strchr(def, ',')) ;
# 116 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((first_comma) ? static_cast<void> (0) : __assert_fail ("first_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 116, __PRETTY_FUNCTION__));
# 117 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     char *second_comma; second_comma = (strchr(first_comma + 1, ',')) ;
# 118 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((second_comma) ? static_cast<void> (0) : __assert_fail ("second_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 118, __PRETTY_FUNCTION__));
# 119 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 120 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *first_comma = '\0';
# 121 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *second_comma = '\0';
# 122 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 123 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *a = atof(def);
# 124 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *b = atof(first_comma + 1);
# 125 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *c = atof(second_comma + 1);
# 126 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "parse_three_doubles", &____must_manage_parse_three_doubles, ____alias_loc_id_10, ____chimes_did_disable10, false); }

void parse_three_doubles(char *def, double *a, double *b, double *c) { (____chimes_replaying ? parse_three_doubles_resumable(def, a, b, c) : parse_three_doubles_quick(def, a, b, c)); }
# 128 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void parse_config_quick(int argc, char **argv, config *conf) {const int ____chimes_did_disable11 = new_stack((void *)(&parse_config), "parse_config", &____must_manage_parse_config, 3, 0, (size_t)(0UL), (size_t)(6699244925701602203UL), (size_t)(6699244925701602142UL)) ; ; ;
# 129 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    int c; ;
# 130 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    opterr = 0;
# 131 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 132 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nx = 200;
# 133 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->ny = 200;
# 134 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->px = 0.0;
# 135 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->py = 0.0;
# 136 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->pz = 0.0;
# 137 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svx = 1.0;
# 138 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svy = 1.0;
# 139 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svz = 1.0;
# 140 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nt = 1000;
# 141 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->spheres = __null;
# 142 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nspheres = 0;
# 143 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 144 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    while ((c = getopt(argc, argv, "s:x:y:p:l:d:v:t:h")) != -1) {
# 145 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        switch (c) {
# 146 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'x':
# 147 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nx = atoi(optarg);
# 148 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 149 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'y':
# 150 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->ny = atoi(optarg);
# 151 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 152 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 't':
# 153 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nt = atoi(optarg);
# 154 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 155 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'v':
# 156 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_0: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->svx, &conf->svy, &conf->svz); });
# 157 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 158 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'p':
# 159 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_1: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->px, &conf->py, &conf->pz); });
# 160 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 161 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'l':
# 162 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_2: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->lx, &conf->ly, &conf->lz); });
# 163 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 164 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'd':
# 165 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_3: ({ calling_npm("parse_three_doubles", 0); parse_three_doubles_npm(optarg, &conf->dx, &conf->dy, &conf->dz); });
# 166 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 167 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 's': {
# 168 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *sphere_def; sphere_def = (optarg) ;
# 169 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 170 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *first_comma; first_comma = (strchr(sphere_def, ',')) ;
# 171 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((first_comma) ? static_cast<void> (0) : __assert_fail ("first_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 171, __PRETTY_FUNCTION__));
# 172 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *second_comma; second_comma = (strchr(first_comma + 1, ',')) ;
# 173 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((second_comma) ? static_cast<void> (0) : __assert_fail ("second_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 173, __PRETTY_FUNCTION__));
# 174 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *third_comma; third_comma = (strchr(second_comma + 1, ',')) ;
# 175 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((third_comma) ? static_cast<void> (0) : __assert_fail ("third_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 175, __PRETTY_FUNCTION__));
# 176 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *fourth_comma; fourth_comma = (strchr(third_comma + 1, ',')) ;
# 177 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((fourth_comma) ? static_cast<void> (0) : __assert_fail ("fourth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 177, __PRETTY_FUNCTION__));
# 178 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *fifth_comma; fifth_comma = (strchr(fourth_comma + 1, ',')) ;
# 179 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((fifth_comma) ? static_cast<void> (0) : __assert_fail ("fifth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 179, __PRETTY_FUNCTION__));
# 180 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 char *sixth_comma; sixth_comma = (strchr(fifth_comma + 1, ',')) ;
# 181 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((sixth_comma) ? static_cast<void> (0) : __assert_fail ("sixth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 181, __PRETTY_FUNCTION__));
# 182 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 183 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *first_comma = '\0';
# 184 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *second_comma = '\0';
# 185 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *third_comma = '\0';
# 186 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *fourth_comma = '\0';
# 187 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *fifth_comma = '\0';
# 188 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *sixth_comma = '\0';
# 189 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 190 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->spheres = (sphere *) ({ void *____chimes_tmp_header; ____chimes_tmp_header = (conf->spheres) ; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((conf->spheres ? (((unsigned char *)conf->spheres) - sizeof(void *)) : (unsigned char *)(conf->spheres)), ((conf->nspheres + 1) * sizeof(sphere)) + sizeof(void *)); ; realloc_helper(____chimes_tmp_ptr, (conf->spheres ? (((unsigned char *)conf->spheres) - sizeof(void *)) : (unsigned char *)(conf->spheres)), ____chimes_tmp_header, (conf->nspheres + 1) * sizeof(sphere), 6699244925701602497UL, 0, 1, (int)sizeof(struct _sphere), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 192 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                 call_lbl_4: ({ calling_npm("init", 0); init_npm(conf->spheres + conf->nspheres, atof(sphere_def), atof(first_comma + 1), atof(second_comma + 1), atof(third_comma + 1), atof(fourth_comma + 1), atof(fifth_comma + 1), atof(sixth_comma + 1)); });
# 196 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nspheres += 1;
# 197 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 198 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 199 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            }
# 200 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        case '?':
# 201 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            fprintf(stderr, "Missing argument to option %c\n", optopt);
# 202 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        case 'h':
# 203 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         call_lbl_5: default:
# 204 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            ({ calling_npm("usage", 0); usage_npm(argv); });
# 205 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        }
# 206 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    }
# 207 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "parse_config", &____must_manage_parse_config, ____alias_loc_id_11, ____chimes_did_disable11, false); }

void parse_config(int argc, char **argv, config *conf) { (____chimes_replaying ? parse_config_resumable(argc, argv, conf) : parse_config_quick(argc, argv, conf)); }
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
int main_quick(int argc, char **argv) {const int ____chimes_did_disable12 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(6699244925701602689UL)) ; double f_max;
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rgb *screen;
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
config conf;
# 209 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
 register_stack_vars(3, "main|f_max|0", (int *)0x0, "double", (void *)(&f_max), (size_t)8, 0, 0, 0, "main|screen|0", (int *)0x0, "%struct._rgb*", (void *)(&screen), (size_t)8, 1, 0, 0, "main|conf|0", (int *)0x0, "%struct._config = type { double, double, double, double, double, double, double, double, double, double, double, double, i32, i32, %struct._sphere*, i32, i32 }", (void *)(&conf), (size_t)120, 0, 1, 1, (int)__builtin_offsetof(struct _config, spheres)); ; ;
# 210 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      ;
# 211 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     call_lbl_0: ({ calling_npm("parse_config", 0); parse_config_npm(argc, argv, &conf); });
# 212 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       screen = ((rgb *) ({ void *____chimes_tmp_ptr = malloc((sizeof(rgb) * conf.nx * conf.ny) + sizeof(void *)); malloc_helper(____chimes_tmp_ptr, sizeof(rgb) * conf.nx * conf.ny, 6699244925701602261UL, 0, 1, (int)sizeof(struct _rgb), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); })) ;
# 213 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 214 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
       f_max = (200.0) ;
# 215 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    { lbl_0: int t; register_stack_var("main|t|0", (int *)0x0, "i32", (void *)(&t), (size_t)4, 0, 0, 0); for ( t = (0) ; t < conf.nt; t++) {
# 216 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      int i; ;
# 217 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 218 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
#pragma omp parallel for
# 219 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      for (i = 0; i < conf.nx * conf.ny; i++) {
# 220 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double x; call_lbl_1: x = (({ calling_npm("get_coord", 0); get_coord_npm(0.0, conf.nx, -f_max, f_max, i / conf.ny); })) ;
# 221 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double y; call_lbl_2: y = (({ calling_npm("get_coord", 0); get_coord_npm(0.0, conf.ny, -f_max, f_max, i % conf.ny); })) ;
# 222 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double t; t = (1.0E10) ;
# 223 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double vx; vx = (x - conf.px) ;
# 224 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double vy; vy = (y - conf.py) ;
# 225 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double vz; vz = (-conf.pz) ;
# 226 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 227 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         double mod_v; call_lbl_3: mod_v = (({ calling_npm("modv", 0); modv_npm(vx, vy, vz); })) ;
# 228 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        vx = vx / mod_v;
# 229 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        vy = vy / mod_v;
# 230 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        vz = vz / mod_v;
# 231 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 232 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         bool bShadow; bShadow = (false) ;
# 233 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         sphere *spherehit; spherehit = (__null) ;
# 234 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        { int k; for ( k = (0) ; k < conf.nspheres; k++) {
# 235 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           sphere *sphn; sphn = (conf.spheres + k) ;
# 236 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double taux; call_lbl_4: taux = (({ calling_npm("get_sphere_intersec", 0); get_sphere_intersec_npm(sphn->cx, sphn->cy, sphn->cz, sphn->radius, conf.px, conf.py, conf.pz, vx, vy, vz); })) ;
# 238 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (taux < 0) {continue; };
# 239 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (taux > 0 && taux < t) {
# 240 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            t = taux;
# 241 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            spherehit = sphn;
# 242 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          }
# 243 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        } }
# 244 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 245 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         rgb color; ; color.r = 0.03; color.g = 0.06; color.b = 0.03;
# 246 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        if (spherehit != __null) {
# 247 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double itx; itx = (conf.px + t * vx) ;
# 248 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double ity; ity = (conf.py + t * vy) ;
# 249 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double itz; itz = (conf.pz + t * vz) ;
# 250 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 251 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double tauxla; call_lbl_5: tauxla = (({ calling_npm("get_sphere_intersec", 0); get_sphere_intersec_npm(spherehit->cx, spherehit->cy, spherehit->cz, spherehit->radius, conf.lx, conf.ly, conf.lz, itx - conf.lx, ity - conf.ly, itz - conf.lz); })) ;
# 254 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 255 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          { int k; for ( k = (0) ; k < conf.nspheres; k++) {
# 256 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
             sphere *sphnb; sphnb = (conf.spheres + k) ;
# 257 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            if (sphnb != spherehit) {
# 258 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
               double tauxlb; call_lbl_6: tauxlb = (({ calling_npm("get_sphere_intersec", 0); get_sphere_intersec_npm(sphnb->cx, sphnb->cy, sphnb->cz, sphnb->radius, conf.lx, conf.ly, conf.lz, itx - conf.lx, ity - conf.ly, itz -
# 261 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                  conf.lz); })) ;
# 262 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              if (tauxlb > 0 && tauxla < tauxlb) {
# 263 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                bShadow = true;
# 264 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 265 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              }
# 266 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            }
# 267 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          } }
# 268 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double cost; call_lbl_7: cost = (({ calling_npm("get_cos_angle_v1v2", 0); get_cos_angle_v1v2_npm(conf.dx, conf.dy, conf.dz, itx -
# 269 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              spherehit->cx, ity - spherehit->cy, itz -
# 270 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
              spherehit->cz); })) ;
# 271 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (cost < 0) {cost = 0; };
# 272 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           double fact; fact = (1.0) ;
# 273 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          if (bShadow == true) {fact = 0.5; } else {fact = 1.0; } ;
# 274 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          color.r = spherehit->clR * cost * fact;
# 275 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          color.g = spherehit->clG * cost * fact;
# 276 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
          color.b = spherehit->clB * cost * fact;
# 277 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        }
# 278 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 279 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        screen[i].r = color.r;
# 280 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        screen[i].g = color.g;
# 281 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        screen[i].b = color.b;
# 282 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      }
# 283 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 284 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      { int i; for ( i = (0) ; i < conf.nspheres; i++) {
# 285 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
           call_lbl_8: ({ calling_npm("move", 0); move_npm(conf.spheres + i, conf.svx, conf.svy, conf.svz); });
# 286 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      } }
# 287 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 288 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 289 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
         call_lbl_9: checkpoint_transformed(9, ____alias_loc_id_0);
# 290 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 291 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 292 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      printf("%d/%d\n", (t + 1), conf.nt);
# 293 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    } }
# 294 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 295 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     ({ free_helper((((unsigned char *)screen) - sizeof(void *)), 6699244925701602261UL);free((((unsigned char *)screen) - sizeof(void *))); }) ;
# 296 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     int ____chimes_ret_var_4; ; ____chimes_ret_var_4 = ((0)); rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable12, false); return ____chimes_ret_var_4; ;
# 297 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_12, ____chimes_did_disable12, false); }

int main(int argc, char **argv) { init_chimes(argc, argv); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }
# 33 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void init_npm(sphere *s, double cx, double cy, double cz, double radius, double clR,
# 34 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double clG, double clB) {
# 35 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((s) ? static_cast<void> (0) : __assert_fail ("s", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 35, __PRETTY_FUNCTION__));
# 36 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 37 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cx = cx;
# 38 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cy = cy;
# 39 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->cz = cz;
# 40 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 41 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->radius = radius;
# 42 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 43 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clR = clR;
# 44 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clG = clG;
# 45 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    s->clB = clB;
# 46 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 48 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_coord_npm(double i1, double i2, double w1, double w2, double p) {
# 49 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_0; ____chimes_ret_var_0 = (((p - i1) / (i2 - i1)) * (w2 - w1) + w1); return ____chimes_ret_var_0; ;
# 50 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 52 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double modv_npm(double vx, double vy, double vz) {
# 53 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_1; ____chimes_ret_var_1 = (sqrt(vx * vx + vy * vy + vz * vz)); return ____chimes_ret_var_1; ;
# 54 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 56 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void move_npm(sphere *self, double vx, double vy, double vz) {
# 57 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cx += vx;
# 58 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy += vy;
# 59 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz += vz;
# 60 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 62 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void move_to_npm(sphere *self, double vx, double vy, double vz) {
# 63 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cx = vx;
# 64 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy = vy;
# 65 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz = vz;
# 66 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 68 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void rot_x_npm(sphere *self, double angle) {
# 69 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double y = self->cy * cos(angle) - self->cz * sin(angle);
# 70 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double z = self->cy * sin(angle) + self->cz * cos(angle);
# 71 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cy = y;
# 72 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    self->cz = z;
# 73 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 75 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void rot_y_npm(sphere *self, double angle) {
# 76 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  double x = self->cx * cos(angle) - self->cz * sin(angle);
# 77 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  double z = self->cx * sin(angle) + self->cz * cos(angle);
# 78 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  self->cx = x;
# 79 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
  self->cz = z;
# 80 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 82 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_sphere_intersec_npm(double cx, double cy, double cz, double radius,
# 83 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double px, double py, double pz, double vx, double vy, double vz) {
# 84 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double A = (vx * vx + vy * vy + vz * vz);
# 85 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double B = 2.0 * (px * vx + py * vy + pz * vz - vx * cx - vy *
# 86 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        cy - vz * cz);
# 87 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double C = px * px - 2 * px * cx + cx * cx + py * py - 2 * py *
# 88 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      cy + cy * cy + pz * pz - 2 * pz * cz + cz * cz -
# 89 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      radius * radius;
# 90 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double D = B * B - 4 * A * C;
# 91 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double t = -1.0;
# 92 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    if (D >= 0)
# 93 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    {
# 94 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      double t1 = (-B - sqrt(D)) / (2.0 * A);
# 95 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      double t2 = (-B + sqrt(D)) / (2.0 * A);
# 96 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
      if (t1 > t2) {t = t1; } else {t = t2; } ;
# 97 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    }
# 98 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_2; ____chimes_ret_var_2 = (t); return ____chimes_ret_var_2; ;
# 99 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 101 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
double get_cos_angle_v1v2_npm(double v1x, double v1y, double v1z, double v2x,
# 102 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        double v2y, double v2z) {
# 103 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double a = modv_npm(v1x, v1y, v1z);
# 104 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    double b = modv_npm(v2x, v2y, v2z);
# 105 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
     double ____chimes_ret_var_3; ____chimes_ret_var_3 = ((v1x * v2x + v1y * v2y + v1z * v2z) / (a * b)); return ____chimes_ret_var_3; ;
# 106 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 108 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void usage_npm(char **argv) {
# 109 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    fprintf(stderr, "usage: %s [-x nx] [-y ny] [-s sx,sy,sz,r,clr,clg,clb] "
# 110 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        "[-p px,py,pz]\n", argv[0]);
# 111 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    exit(1);
# 112 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 114 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void parse_three_doubles_npm(char *def, double *a, double *b, double *c) {
# 115 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    char *first_comma = strchr(def, ',');
# 116 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((first_comma) ? static_cast<void> (0) : __assert_fail ("first_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 116, __PRETTY_FUNCTION__));
# 117 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    char *second_comma = strchr(first_comma + 1, ',');
# 118 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    ((second_comma) ? static_cast<void> (0) : __assert_fail ("second_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 118, __PRETTY_FUNCTION__));
# 119 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 120 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *first_comma = '\0';
# 121 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *second_comma = '\0';
# 122 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 123 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *a = atof(def);
# 124 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *b = atof(first_comma + 1);
# 125 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    *c = atof(second_comma + 1);
# 126 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}
# 128 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
void parse_config_npm(int argc, char **argv, config *conf) {
# 129 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    int c;
# 130 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    opterr = 0;
# 131 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 132 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nx = 200;
# 133 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->ny = 200;
# 134 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->px = 0.0;
# 135 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->py = 0.0;
# 136 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->pz = 0.0;
# 137 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svx = 1.0;
# 138 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svy = 1.0;
# 139 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->svz = 1.0;
# 140 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nt = 1000;
# 141 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->spheres = __null;
# 142 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    conf->nspheres = 0;
# 143 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 144 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    while ((c = getopt(argc, argv, "s:x:y:p:l:d:v:t:h")) != -1) {
# 145 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        switch (c) {
# 146 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'x':
# 147 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nx = atoi(optarg);
# 148 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 149 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'y':
# 150 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->ny = atoi(optarg);
# 151 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 152 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 't':
# 153 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nt = atoi(optarg);
# 154 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 155 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'v':
# 156 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                parse_three_doubles_npm(optarg, &conf->svx, &conf->svy, &conf->svz);
# 157 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 158 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'p':
# 159 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                parse_three_doubles_npm(optarg, &conf->px, &conf->py, &conf->pz);
# 160 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 161 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'l':
# 162 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                parse_three_doubles_npm(optarg, &conf->lx, &conf->ly, &conf->lz);
# 163 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 164 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 'd':
# 165 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                parse_three_doubles_npm(optarg, &conf->dx, &conf->dy, &conf->dz);
# 166 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 167 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            case 's': {
# 168 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                char *sphere_def = optarg;
# 169 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 170 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                char *first_comma = strchr(sphere_def, ',');
# 171 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((first_comma) ? static_cast<void> (0) : __assert_fail ("first_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 171, __PRETTY_FUNCTION__));
# 172 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                char *second_comma = strchr(first_comma + 1, ',');
# 173 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((second_comma) ? static_cast<void> (0) : __assert_fail ("second_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 173, __PRETTY_FUNCTION__));
# 174 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                char *third_comma = strchr(second_comma + 1, ',');
# 175 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((third_comma) ? static_cast<void> (0) : __assert_fail ("third_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 175, __PRETTY_FUNCTION__));
# 176 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                char *fourth_comma = strchr(third_comma + 1, ',');
# 177 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((fourth_comma) ? static_cast<void> (0) : __assert_fail ("fourth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 177, __PRETTY_FUNCTION__));
# 178 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                char *fifth_comma = strchr(fourth_comma + 1, ',');
# 179 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((fifth_comma) ? static_cast<void> (0) : __assert_fail ("fifth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 179, __PRETTY_FUNCTION__));
# 180 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                char *sixth_comma = strchr(fifth_comma + 1, ',');
# 181 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                ((sixth_comma) ? static_cast<void> (0) : __assert_fail ("sixth_comma", "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c", 181, __PRETTY_FUNCTION__));
# 182 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 183 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *first_comma = '\0';
# 184 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *second_comma = '\0';
# 185 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *third_comma = '\0';
# 186 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *fourth_comma = '\0';
# 187 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *fifth_comma = '\0';
# 188 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                *sixth_comma = '\0';
# 189 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 190 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->spheres = (sphere *) ({ void *____chimes_tmp_header = conf->spheres; if (____chimes_tmp_header) { ____chimes_tmp_header = *((void **)(((unsigned char *)____chimes_tmp_header) - sizeof(void *))); } void *____chimes_tmp_ptr = realloc((conf->spheres ? (((unsigned char *)conf->spheres) - sizeof(void *)) : (unsigned char *)(conf->spheres)), ((conf->nspheres + 1) * sizeof(sphere)) + sizeof(void *)); realloc_helper(____chimes_tmp_ptr, (conf->spheres ? (((unsigned char *)conf->spheres) - sizeof(void *)) : (unsigned char *)(conf->spheres)), ____chimes_tmp_header, (conf->nspheres + 1) * sizeof(sphere), 6699244925701602497UL, 0, 1, (int)sizeof(struct _sphere), 0); (____chimes_tmp_ptr ? (void *)(((unsigned char *)____chimes_tmp_ptr) + sizeof(void *)) : ____chimes_tmp_ptr); }) ;
# 192 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                init_npm(conf->spheres + conf->nspheres, atof(sphere_def), atof(first_comma + 1), atof(second_comma + 1), atof(third_comma + 1), atof(fourth_comma + 1), atof(fifth_comma + 1), atof(sixth_comma + 1));
# 196 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                conf->nspheres += 1;
# 197 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
# 198 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
                break;
# 199 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            }
# 200 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        case '?':
# 201 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            fprintf(stderr, "Missing argument to option %c\n", optopt);
# 202 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        case 'h':
# 203 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        default:
# 204 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
            usage_npm(argv);
# 205 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
        }
# 206 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
    }
# 207 "/home/mg1/chimes/src/examples/cpp/./ray_tracer.c"
}





static int module_init() {
    init_module(6699244925701601316UL, 31, 13, 1, 13, 12, 0, 12, 17, 0, 3,
                           &____alias_loc_id_0, (unsigned)31, (unsigned)0, (unsigned)0, (6699244925701601316UL + 895UL), (6699244925701601316UL + 896UL), (6699244925701601316UL + 897UL), (6699244925701601316UL + 899UL), (6699244925701601316UL + 900UL), (6699244925701601316UL + 901UL), (6699244925701601316UL + 902UL), (6699244925701601316UL + 903UL), (6699244925701601316UL + 904UL), (6699244925701601316UL + 905UL), (6699244925701601316UL + 906UL), (6699244925701601316UL + 907UL), (6699244925701601316UL + 908UL), (6699244925701601316UL + 909UL), (6699244925701601316UL + 910UL), (6699244925701601316UL + 911UL), (6699244925701601316UL + 912UL), (6699244925701601316UL + 913UL), (6699244925701601316UL + 914UL), (6699244925701601316UL + 915UL), (6699244925701601316UL + 916UL), (6699244925701601316UL + 917UL), (6699244925701601316UL + 918UL), (6699244925701601316UL + 919UL), (6699244925701601316UL + 920UL), (6699244925701601316UL + 921UL), (6699244925701601316UL + 922UL), (6699244925701601316UL + 923UL), (6699244925701601316UL + 924UL), (6699244925701601316UL + 925UL), (6699244925701601316UL + 945UL),
                           &____alias_loc_id_1, (unsigned)9, (unsigned)0, (unsigned)0, (6699244925701601316UL + 1UL), (6699244925701601316UL + 2UL), (6699244925701601316UL + 3UL), (6699244925701601316UL + 4UL), (6699244925701601316UL + 5UL), (6699244925701601316UL + 6UL), (6699244925701601316UL + 7UL), (6699244925701601316UL + 8UL), (6699244925701601316UL + 33UL),
                           &____alias_loc_id_2, (unsigned)6, (unsigned)0, (unsigned)0, (6699244925701601316UL + 75UL), (6699244925701601316UL + 76UL), (6699244925701601316UL + 77UL), (6699244925701601316UL + 78UL), (6699244925701601316UL + 79UL), (6699244925701601316UL + 80UL),
                           &____alias_loc_id_3, (unsigned)4, (unsigned)0, (unsigned)0, (6699244925701601316UL + 113UL), (6699244925701601316UL + 114UL), (6699244925701601316UL + 115UL), (6699244925701601316UL + 116UL),
                           &____alias_loc_id_4, (unsigned)5, (unsigned)0, (unsigned)0, (6699244925701601316UL + 143UL), (6699244925701601316UL + 144UL), (6699244925701601316UL + 145UL), (6699244925701601316UL + 146UL), (6699244925701601316UL + 174UL),
                           &____alias_loc_id_5, (unsigned)5, (unsigned)0, (unsigned)0, (6699244925701601316UL + 178UL), (6699244925701601316UL + 179UL), (6699244925701601316UL + 180UL), (6699244925701601316UL + 181UL), (6699244925701601316UL + 203UL),
                           &____alias_loc_id_6, (unsigned)5, (unsigned)0, (unsigned)0, (6699244925701601316UL + 207UL), (6699244925701601316UL + 208UL), (6699244925701601316UL + 209UL), (6699244925701601316UL + 210UL), (6699244925701601316UL + 254UL),
                           &____alias_loc_id_7, (unsigned)5, (unsigned)0, (unsigned)0, (6699244925701601316UL + 258UL), (6699244925701601316UL + 259UL), (6699244925701601316UL + 260UL), (6699244925701601316UL + 261UL), (6699244925701601316UL + 305UL),
                           &____alias_loc_id_8, (unsigned)18, (unsigned)0, (unsigned)0, (6699244925701601316UL + 307UL), (6699244925701601316UL + 308UL), (6699244925701601316UL + 309UL), (6699244925701601316UL + 310UL), (6699244925701601316UL + 311UL), (6699244925701601316UL + 312UL), (6699244925701601316UL + 313UL), (6699244925701601316UL + 314UL), (6699244925701601316UL + 315UL), (6699244925701601316UL + 316UL), (6699244925701601316UL + 317UL), (6699244925701601316UL + 318UL), (6699244925701601316UL + 319UL), (6699244925701601316UL + 320UL), (6699244925701601316UL + 321UL), (6699244925701601316UL + 322UL), (6699244925701601316UL + 323UL), (6699244925701601316UL + 324UL),
                           &____alias_loc_id_9, (unsigned)9, (unsigned)0, (unsigned)0, (6699244925701601316UL + 489UL), (6699244925701601316UL + 490UL), (6699244925701601316UL + 491UL), (6699244925701601316UL + 492UL), (6699244925701601316UL + 493UL), (6699244925701601316UL + 494UL), (6699244925701601316UL + 495UL), (6699244925701601316UL + 496UL), (6699244925701601316UL + 497UL),
                            &____alias_loc_id_10, (unsigned)11, (unsigned)0, (unsigned)0, (6699244925701601316UL + 562UL), (6699244925701601316UL + 563UL), (6699244925701601316UL + 564UL), (6699244925701601316UL + 565UL), (6699244925701601316UL + 566UL), (6699244925701601316UL + 567UL), (6699244925701601316UL + 588UL), (6699244925701601316UL + 590UL), (6699244925701601316UL + 605UL), (6699244925701601316UL + 610UL), (6699244925701601316UL + 615UL),
                            &____alias_loc_id_11, (unsigned)19, (unsigned)0, (unsigned)0, (6699244925701601316UL + 625UL), (6699244925701601316UL + 626UL), (6699244925701601316UL + 627UL), (6699244925701601316UL + 628UL), (6699244925701601316UL + 629UL), (6699244925701601316UL + 630UL), (6699244925701601316UL + 631UL), (6699244925701601316UL + 632UL), (6699244925701601316UL + 633UL), (6699244925701601316UL + 634UL), (6699244925701601316UL + 635UL), (6699244925701601316UL + 755UL), (6699244925701601316UL + 757UL), (6699244925701601316UL + 769UL), (6699244925701601316UL + 781UL), (6699244925701601316UL + 793UL), (6699244925701601316UL + 805UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 1385UL),
                            &____alias_loc_id_12, (unsigned)7, (unsigned)0, (unsigned)0, (6699244925701601316UL + 895UL), (6699244925701601316UL + 896UL), (6699244925701601316UL + 897UL), (6699244925701601316UL + 899UL), (6699244925701601316UL + 900UL), (6699244925701601316UL + 901UL), (6699244925701601316UL + 926UL),
                            "get_cos_angle_v1v2", 0, "_Z18get_cos_angle_v1v2dddddd", "_Z22get_cos_angle_v1v2_npmdddddd", 0, 6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2, "modv", 3, 0UL, 0UL, 0UL, 0UL, "modv", 3, 0UL, 0UL, 0UL, 0UL,
                            "modv", 0, "_Z4modvddd", "_Z8modv_npmddd", 0, 3, 0UL, 0UL, 0UL, 0UL, 1, "sqrt", 1, 0UL, 0UL,
                            "move", 0, "_Z4moveP7_sphereddd", "_Z8move_npmP7_sphereddd", 0, 4, (6699244925701601316UL + 174UL), 0UL, 0UL, 0UL, 0UL, 0,
                            "get_sphere_intersec", 0, "_Z19get_sphere_intersecdddddddddd", "_Z23get_sphere_intersec_npmdddddddddd", 0, 10, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 2, "sqrt", 1, 0UL, 0UL, "sqrt", 1, 0UL, 0UL,
                            "move_to", 0, "_Z7move_toP7_sphereddd", "_Z11move_to_npmP7_sphereddd", 0, 4, (6699244925701601316UL + 203UL), 0UL, 0UL, 0UL, 0UL, 0,
                            "get_coord", 0, "_Z9get_coordddddd", "_Z13get_coord_npmddddd", 0, 5, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0,
                            "parse_three_doubles", 0, "_Z19parse_three_doublesPcPdS0_S0_", "_Z23parse_three_doubles_npmPcPdS0_S0_", 0, 4, (6699244925701601316UL + 603UL), (6699244925701601316UL + 605UL), (6699244925701601316UL + 610UL), (6699244925701601316UL + 615UL), 0UL, 7, "strchr", 2, (6699244925701601316UL + 603UL), 0UL, (6699244925701601316UL + 588UL), "__assert_fail", 4, (6699244925701601316UL + 1382UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1383UL), 0UL, "strchr", 2, (6699244925701601316UL + 588UL), 0UL, (6699244925701601316UL + 590UL), "__assert_fail", 4, (6699244925701601316UL + 1384UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1383UL), 0UL, "atof", 1, (6699244925701601316UL + 603UL), 0UL, "atof", 1, (6699244925701601316UL + 588UL), 0UL, "atof", 1, (6699244925701601316UL + 590UL), 0UL,
                            "init", 0, "_Z4initP7_sphereddddddd", "_Z8init_npmP7_sphereddddddd", 0, 8, (6699244925701601316UL + 33UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 1, "__assert_fail", 4, (6699244925701601316UL + 1377UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1379UL), 0UL,
                            "parse_config", 0, "_Z12parse_configiPPcP7_config", "_Z16parse_config_npmiPPcP7_config", 0, 3, 0UL, (6699244925701601316UL + 887UL), (6699244925701601316UL + 826UL), 0UL, 31, "getopt", 3, 0UL, (6699244925701601316UL + 887UL), (6699244925701601316UL + 1386UL), 0UL, "atoi", 1, (6699244925701601316UL + 849UL), 0UL, "atoi", 1, (6699244925701601316UL + 849UL), 0UL, "atoi", 1, (6699244925701601316UL + 849UL), 0UL, "parse_three_doubles", 4, (6699244925701601316UL + 849UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), 0UL, "parse_three_doubles", 4, (6699244925701601316UL + 849UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), 0UL, "parse_three_doubles", 4, (6699244925701601316UL + 849UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), 0UL, "parse_three_doubles", 4, (6699244925701601316UL + 849UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), (6699244925701601316UL + 826UL), 0UL, "strchr", 2, (6699244925701601316UL + 849UL), 0UL, (6699244925701601316UL + 755UL), "__assert_fail", 4, (6699244925701601316UL + 1382UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1388UL), 0UL, "strchr", 2, (6699244925701601316UL + 755UL), 0UL, (6699244925701601316UL + 757UL), "__assert_fail", 4, (6699244925701601316UL + 1384UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1388UL), 0UL, "strchr", 2, (6699244925701601316UL + 757UL), 0UL, (6699244925701601316UL + 769UL), "__assert_fail", 4, (6699244925701601316UL + 1382UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1388UL), 0UL, "strchr", 2, (6699244925701601316UL + 769UL), 0UL, (6699244925701601316UL + 781UL), "__assert_fail", 4, (6699244925701601316UL + 1384UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1388UL), 0UL, "strchr", 2, (6699244925701601316UL + 781UL), 0UL, (6699244925701601316UL + 793UL), "__assert_fail", 4, (6699244925701601316UL + 1382UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1388UL), 0UL, "strchr", 2, (6699244925701601316UL + 793UL), 0UL, (6699244925701601316UL + 805UL), "__assert_fail", 4, (6699244925701601316UL + 1382UL), (6699244925701601316UL + 1378UL), 0UL, (6699244925701601316UL + 1388UL), 0UL, "realloc", 2, (6699244925701601316UL + 1181UL), 0UL, (6699244925701601316UL + 1181UL), "atof", 1, (6699244925701601316UL + 849UL), 0UL, "atof", 1, (6699244925701601316UL + 755UL), 0UL, "atof", 1, (6699244925701601316UL + 757UL), 0UL, "atof", 1, (6699244925701601316UL + 769UL), 0UL, "atof", 1, (6699244925701601316UL + 781UL), 0UL, "atof", 1, (6699244925701601316UL + 793UL), 0UL, "atof", 1, (6699244925701601316UL + 805UL), 0UL, "init", 8, (6699244925701601316UL + 1181UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "fprintf", 3, (6699244925701601316UL + 876UL), (6699244925701601316UL + 1393UL), 0UL, 0UL, "usage", 1, (6699244925701601316UL + 887UL), 0UL,
                            "usage", 0, "_Z5usagePPc", "_Z9usage_npmPPc", 0, 1, (6699244925701601316UL + 558UL), 0UL, 2, "fprintf", 3, (6699244925701601316UL + 876UL), (6699244925701601316UL + 1381UL), (6699244925701601316UL + 553UL), 0UL, "exit", 1, 0UL, 0UL,
                            "rot_y", 0, "_Z5rot_yP7_sphered", "_Z9rot_y_npmP7_sphered", 0, 2, (6699244925701601316UL + 305UL), 0UL, 0UL, 4, "cos", 1, 0UL, 0UL, "sin", 1, 0UL, 0UL, "sin", 1, 0UL, 0UL, "cos", 1, 0UL, 0UL,
                            "rot_x", 0, "_Z5rot_xP7_sphered", "_Z9rot_x_npmP7_sphered", 0, 2, (6699244925701601316UL + 254UL), 0UL, 0UL, 4, "cos", 1, 0UL, 0UL, "sin", 1, 0UL, 0UL, "sin", 1, 0UL, 0UL, "cos", 1, 0UL, 0UL,
                           "get_cos_angle_v1v2", &(____chimes_does_checkpoint_get_cos_angle_v1v2_npm),
                           "modv", &(____chimes_does_checkpoint_modv_npm),
                           "move", &(____chimes_does_checkpoint_move_npm),
                           "get_sphere_intersec", &(____chimes_does_checkpoint_get_sphere_intersec_npm),
                           "move_to", &(____chimes_does_checkpoint_move_to_npm),
                           "get_coord", &(____chimes_does_checkpoint_get_coord_npm),
                           "parse_three_doubles", &(____chimes_does_checkpoint_parse_three_doubles_npm),
                           "init", &(____chimes_does_checkpoint_init_npm),
                           "parse_config", &(____chimes_does_checkpoint_parse_config_npm),
                           "usage", &(____chimes_does_checkpoint_usage_npm),
                           "rot_y", &(____chimes_does_checkpoint_rot_y_npm),
                           "rot_x", &(____chimes_does_checkpoint_rot_x_npm),
                             (6699244925701601316UL + 627UL), (6699244925701601316UL + 826UL),
                             (6699244925701601316UL + 626UL), (6699244925701601316UL + 887UL),
                             (6699244925701601316UL + 629UL), (6699244925701601316UL + 849UL),
                             (6699244925701601316UL + 258UL), (6699244925701601316UL + 305UL),
                             (6699244925701601316UL + 178UL), (6699244925701601316UL + 203UL),
                             (6699244925701601316UL + 635UL), (6699244925701601316UL + 805UL),
                             (6699244925701601316UL + 558UL), (6699244925701601316UL + 553UL),
                             (6699244925701601316UL + 1UL), (6699244925701601316UL + 33UL),
                             (6699244925701601316UL + 547UL), (6699244925701601316UL + 558UL),
                             (6699244925701601316UL + 911UL), (6699244925701601316UL + 1181UL),
                             (6699244925701601316UL + 913UL), (6699244925701601316UL + 1181UL),
                             (6699244925701601316UL + 630UL), (6699244925701601316UL + 755UL),
                             (6699244925701601316UL + 631UL), (6699244925701601316UL + 757UL),
                             (6699244925701601316UL + 632UL), (6699244925701601316UL + 769UL),
                             (6699244925701601316UL + 633UL), (6699244925701601316UL + 781UL),
                             (6699244925701601316UL + 634UL), (6699244925701601316UL + 793UL),
                             (6699244925701601316UL + 143UL), (6699244925701601316UL + 174UL),
                             (6699244925701601316UL + 207UL), (6699244925701601316UL + 254UL),
                             (6699244925701601316UL + 897UL), (6699244925701601316UL + 1373UL),
                             (6699244925701601316UL + 898UL), (6699244925701601316UL + 1181UL),
                             (6699244925701601316UL + 899UL), (6699244925701601316UL + 945UL),
                             (6699244925701601316UL + 562UL), (6699244925701601316UL + 603UL),
                             (6699244925701601316UL + 563UL), (6699244925701601316UL + 605UL),
                             (6699244925701601316UL + 564UL), (6699244925701601316UL + 610UL),
                             (6699244925701601316UL + 565UL), (6699244925701601316UL + 615UL),
                             (6699244925701601316UL + 566UL), (6699244925701601316UL + 588UL),
                             (6699244925701601316UL + 567UL), (6699244925701601316UL + 590UL),
                             (6699244925701601316UL + 1387UL), (6699244925701601316UL + 849UL),
                             (6699244925701601316UL + 921UL), (6699244925701601316UL + 1181UL),
                             (6699244925701601316UL + 826UL), (6699244925701601316UL + 1181UL),
                             (6699244925701601316UL + 1380UL), (6699244925701601316UL + 876UL),
                     "_config", 960UL, 17, "double", (int)__builtin_offsetof (struct _config, px), "double", (int)__builtin_offsetof (struct _config, py), "double", (int)__builtin_offsetof (struct _config, pz), "double", (int)__builtin_offsetof (struct _config, lx), "double", (int)__builtin_offsetof (struct _config, ly), "double", (int)__builtin_offsetof (struct _config, lz), "double", (int)__builtin_offsetof (struct _config, dx), "double", (int)__builtin_offsetof (struct _config, dy), "double", (int)__builtin_offsetof (struct _config, dz), "double", (int)__builtin_offsetof (struct _config, svx), "double", (int)__builtin_offsetof (struct _config, svy), "double", (int)__builtin_offsetof (struct _config, svz), "int", (int)__builtin_offsetof (struct _config, nx), "int", (int)__builtin_offsetof (struct _config, ny), "%struct._sphere*", (int)__builtin_offsetof (struct _config, spheres), "int", (int)__builtin_offsetof (struct _config, nspheres), "int", (int)__builtin_offsetof (struct _config, nt),
                     "_rgb", 192UL, 3, "double", (int)__builtin_offsetof (struct _rgb, r), "double", (int)__builtin_offsetof (struct _rgb, g), "double", (int)__builtin_offsetof (struct _rgb, b),
                     "_sphere", 448UL, 7, "double", (int)__builtin_offsetof (struct _sphere, cx), "double", (int)__builtin_offsetof (struct _sphere, cy), "double", (int)__builtin_offsetof (struct _sphere, cz), "double", (int)__builtin_offsetof (struct _sphere, radius), "double", (int)__builtin_offsetof (struct _sphere, clR), "double", (int)__builtin_offsetof (struct _sphere, clG), "double", (int)__builtin_offsetof (struct _sphere, clB),
                             "get_cos_angle_v1v2", "_Z18get_cos_angle_v1v2dddddd", 0, 2, "modv", "modv",
                             "main", "main", 0, 10, "parse_config", "get_coord", "get_coord", "modv", "get_sphere_intersec", "get_sphere_intersec", "get_sphere_intersec", "get_cos_angle_v1v2", "move", "checkpoint",
                             "modv", "_Z4modvddd", 0, 0,
                             "move", "_Z4moveP7_sphereddd", 0, 0,
                             "get_sphere_intersec", "_Z19get_sphere_intersecdddddddddd", 0, 0,
                             "move_to", "_Z7move_toP7_sphereddd", 0, 0,
                             "get_coord", "_Z9get_coordddddd", 0, 0,
                             "parse_three_doubles", "_Z19parse_three_doublesPcPdS0_S0_", 0, 0,
                             "init", "_Z4initP7_sphereddddddd", 0, 0,
                             "parse_config", "_Z12parse_configiPPcP7_config", 0, 6, "parse_three_doubles", "parse_three_doubles", "parse_three_doubles", "parse_three_doubles", "init", "usage",
                             "usage", "_Z5usagePPc", 0, 0,
                             "rot_y", "_Z5rot_yP7_sphered", 0, 0,
                             "rot_x", "_Z5rot_xP7_sphered", 0, 0,
                        "main|conf|0", 1, "main",
        "modv", 0UL, (int)3, 0UL, 0UL, 0UL,
        "modv", 0UL, (int)3, 0UL, 0UL, 0UL,
        "parse_three_doubles", 0UL, (int)4, 6699244925701602165UL, 6699244925701602142UL, 6699244925701602142UL, 6699244925701602142UL,
        "parse_three_doubles", 0UL, (int)4, 6699244925701602165UL, 6699244925701602142UL, 6699244925701602142UL, 6699244925701602142UL,
        "parse_three_doubles", 0UL, (int)4, 6699244925701602165UL, 6699244925701602142UL, 6699244925701602142UL, 6699244925701602142UL,
        "parse_three_doubles", 0UL, (int)4, 6699244925701602165UL, 6699244925701602142UL, 6699244925701602142UL, 6699244925701602142UL,
        "init", 0UL, (int)8, 6699244925701602497UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "usage", 0UL, (int)1, 6699244925701602203UL,
        "parse_config", 0UL, (int)3, 0UL, 6699244925701602689UL, 6699244925701602214UL,
        "get_coord", 0UL, (int)5, 0UL, 0UL, 0UL, 0UL, 0UL,
        "get_coord", 0UL, (int)5, 0UL, 0UL, 0UL, 0UL, 0UL,
        "modv", 0UL, (int)3, 0UL, 0UL, 0UL,
        "get_sphere_intersec", 0UL, (int)10, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "get_sphere_intersec", 0UL, (int)10, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "get_sphere_intersec", 0UL, (int)10, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "get_cos_angle_v1v2", 0UL, (int)6, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL,
        "move", 0UL, (int)4, 6699244925701602497UL, 0UL, 0UL, 0UL);
    return 0;
}

static const int __libchimes_module_init = module_init();