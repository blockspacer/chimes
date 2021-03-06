# 1 "smith_waterman_omp.cpp.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "smith_waterman_omp.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_GUID_DIAG_npm = 1;
static int ____chimes_does_checkpoint_GUID_RCOL_npm = 1;
static int ____chimes_does_checkpoint_GUID_BROW_npm = 1;
static int ____chimes_does_checkpoint_TILE_ROW_npm = 1;
static int ____chimes_does_checkpoint_TILE_COL_npm = 1;
static int ____chimes_does_checkpoint_GUID_KIND_npm = 1;
static int ____chimes_does_checkpoint_PUT_npm = 1;
static int ____chimes_does_checkpoint_PUT_DIAG_npm = 1;
static int ____chimes_does_checkpoint_PUT_RCOL_npm = 1;
static int ____chimes_does_checkpoint_PUT_BROW_npm = 1;
static int ____chimes_does_checkpoint_char_mapping_npm = 1;
static int ____chimes_does_checkpoint_print_matrix_npm = 1;
static int ____chimes_does_checkpoint_random_init_npm = 1;
static int ____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm = 1;
static int ____chimes_does_checkpoint_read_file_npm = 1;
static int ____chimes_does_checkpoint_add_tile_to_run_npm = 1;
static int ____chimes_does_checkpoint_pop_next_tile_npm = 1;
static int ____chimes_does_checkpoint_task_func_npm = 1;


static int ____must_manage_GUID_BROW = 2;
static int ____must_manage_task_func = 2;
static int ____must_manage_clear_whitespaces_do_mapping = 2;
static int ____must_manage_GUID_KIND = 2;
static int ____must_manage_GUID_DIAG = 2;
static int ____must_manage_print_matrix = 2;
static int ____must_manage_PUT_BROW = 2;
static int ____must_manage_pop_next_tile = 2;
static int ____must_manage_PUT_RCOL = 2;
static int ____must_manage_char_mapping = 2;
static int ____must_manage_GUID_RCOL = 2;
static int ____must_manage_read_file = 2;
static int ____must_manage_random_init = 2;
static int ____must_manage_PUT_DIAG = 2;
static int ____must_manage_PUT = 2;
static int ____must_manage_add_tile_to_run = 2;
static int ____must_manage_TILE_ROW = 2;
static int ____must_manage_TILE_COL = 2;

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
# 1 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/jmg3/chimes/src/libchimes/libchimes.h" 1



# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/Users/jmg3/chimes/src/libchimes/libchimes.h" 2


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
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
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
# 67 "/Users/jmg3/chimes/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
extern int omp_get_num_threads(void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }
inline unsigned LIBCHIMES_NUM_THREADS() { return omp_get_num_threads(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 1 "/usr/include/stdio.h" 1 3 4
# 64 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 506 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_symbol_aliasing.h" 1 3 4
# 507 "/usr/include/sys/cdefs.h" 2 3 4
# 572 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/sys/_posix_availability.h" 1 3 4
# 573 "/usr/include/sys/cdefs.h" 2 3 4
# 65 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/Availability.h" 1 3 4
# 153 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 154 "/usr/include/Availability.h" 2 3 4
# 66 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/_types.h" 1 3 4
# 27 "/usr/include/_types.h" 3 4
# 1 "/usr/include/sys/_types.h" 1 3 4
# 33 "/usr/include/sys/_types.h" 3 4
# 1 "/usr/include/machine/_types.h" 1 3 4
# 32 "/usr/include/machine/_types.h" 3 4
# 1 "/usr/include/i386/_types.h" 1 3 4
# 37 "/usr/include/i386/_types.h" 3 4
typedef signed char __int8_t;



typedef unsigned char __uint8_t;
typedef short __int16_t;
typedef unsigned short __uint16_t;
typedef int __int32_t;
typedef unsigned int __uint32_t;
typedef long long __int64_t;
typedef unsigned long long __uint64_t;

typedef long __darwin_intptr_t;
typedef unsigned int __darwin_natural_t;
# 70 "/usr/include/i386/_types.h" 3 4
typedef int __darwin_ct_rune_t;





typedef union {
 char __mbstate8[128];
 long long _mbstateL;
} __mbstate_t;

typedef __mbstate_t __darwin_mbstate_t;


typedef long int __darwin_ptrdiff_t;







typedef long unsigned int __darwin_size_t;





typedef __builtin_va_list __darwin_va_list;





typedef int __darwin_wchar_t;




typedef __darwin_wchar_t __darwin_rune_t;


typedef int __darwin_wint_t;




typedef unsigned long __darwin_clock_t;
typedef __uint32_t __darwin_socklen_t;
typedef long __darwin_ssize_t;
typedef long __darwin_time_t;
# 33 "/usr/include/machine/_types.h" 2 3 4
# 34 "/usr/include/sys/_types.h" 2 3 4
# 55 "/usr/include/sys/_types.h" 3 4
typedef __int64_t __darwin_blkcnt_t;
typedef __int32_t __darwin_blksize_t;
typedef __int32_t __darwin_dev_t;
typedef unsigned int __darwin_fsblkcnt_t;
typedef unsigned int __darwin_fsfilcnt_t;
typedef __uint32_t __darwin_gid_t;
typedef __uint32_t __darwin_id_t;
typedef __uint64_t __darwin_ino64_t;

typedef __darwin_ino64_t __darwin_ino_t;



typedef __darwin_natural_t __darwin_mach_port_name_t;
typedef __darwin_mach_port_name_t __darwin_mach_port_t;
typedef __uint16_t __darwin_mode_t;
typedef __int64_t __darwin_off_t;
typedef __int32_t __darwin_pid_t;
typedef __uint32_t __darwin_sigset_t;
typedef __int32_t __darwin_suseconds_t;
typedef __uint32_t __darwin_uid_t;
typedef __uint32_t __darwin_useconds_t;
typedef unsigned char __darwin_uuid_t[16];
typedef char __darwin_uuid_string_t[37];

# 1 "/usr/include/sys/_pthread/_pthread_types.h" 1 3 4
# 57 "/usr/include/sys/_pthread/_pthread_types.h" 3 4
struct __darwin_pthread_handler_rec {
 void (*__routine)(void *);
 void *__arg;
 struct __darwin_pthread_handler_rec *__next;
};

struct _opaque_pthread_attr_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_cond_t {
 long __sig;
 char __opaque[40];
};

struct _opaque_pthread_condattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_mutex_t {
 long __sig;
 char __opaque[56];
};

struct _opaque_pthread_mutexattr_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_once_t {
 long __sig;
 char __opaque[8];
};

struct _opaque_pthread_rwlock_t {
 long __sig;
 char __opaque[192];
};

struct _opaque_pthread_rwlockattr_t {
 long __sig;
 char __opaque[16];
};

struct _opaque_pthread_t {
 long __sig;
 struct __darwin_pthread_handler_rec *__cleanup_stack;
 char __opaque[8176];
};

typedef struct _opaque_pthread_attr_t __darwin_pthread_attr_t;
typedef struct _opaque_pthread_cond_t __darwin_pthread_cond_t;
typedef struct _opaque_pthread_condattr_t __darwin_pthread_condattr_t;
typedef unsigned long __darwin_pthread_key_t;
typedef struct _opaque_pthread_mutex_t __darwin_pthread_mutex_t;
typedef struct _opaque_pthread_mutexattr_t __darwin_pthread_mutexattr_t;
typedef struct _opaque_pthread_once_t __darwin_pthread_once_t;
typedef struct _opaque_pthread_rwlock_t __darwin_pthread_rwlock_t;
typedef struct _opaque_pthread_rwlockattr_t __darwin_pthread_rwlockattr_t;
typedef struct _opaque_pthread_t *__darwin_pthread_t;
# 81 "/usr/include/sys/_types.h" 2 3 4
# 28 "/usr/include/_types.h" 2 3 4
# 39 "/usr/include/_types.h" 3 4
typedef int __darwin_nl_item;
typedef int __darwin_wctrans_t;

typedef __uint32_t __darwin_wctype_t;
# 68 "/usr/include/stdio.h" 2 3 4



# 1 "/usr/include/sys/_types/_va_list.h" 1 3 4
# 31 "/usr/include/sys/_types/_va_list.h" 3 4
typedef __darwin_va_list va_list;
# 72 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_size_t.h" 1 3 4
# 73 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/sys/_types/_null.h" 1 3 4
# 74 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/sys/stdio.h" 1 3 4
# 37 "/usr/include/sys/stdio.h" 3 4
extern "C" {

int renameat(int, const char *, int, const char *) ;

}
# 76 "/usr/include/stdio.h" 2 3 4

typedef __darwin_off_t fpos_t;
# 88 "/usr/include/stdio.h" 3 4
struct __sbuf {
 unsigned char *_base;
 int _size;
};


struct __sFILEX;
# 122 "/usr/include/stdio.h" 3 4
typedef struct __sFILE {
 unsigned char *_p;
 int _r;
 int _w;
 short _flags;
 short _file;
 struct __sbuf _bf;
 int _lbfsize;


 void *_cookie;
 int (*_close)(void *);
 int (*_read) (void *, char *, int);
 fpos_t (*_seek) (void *, fpos_t, int);
 int (*_write)(void *, const char *, int);


 struct __sbuf _ub;
 struct __sFILEX *_extra;
 int _ur;


 unsigned char _ubuf[3];
 unsigned char _nbuf[1];


 struct __sbuf _lb;


 int _blksize;
 fpos_t _offset;
} FILE;

extern "C" {
extern FILE *__stdinp;
extern FILE *__stdoutp;
extern FILE *__stderrp;
}
# 230 "/usr/include/stdio.h" 3 4
extern "C" {
void clearerr(FILE *);
int fclose(FILE *);
int feof(FILE *);
int ferror(FILE *);
int fflush(FILE *);
int fgetc(FILE *);
int fgetpos(FILE * , fpos_t *);
char *fgets(char * , int, FILE *);



FILE *fopen(const char * , const char * ) __asm("_" "fopen" );

int fprintf(FILE * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int fputc(int, FILE *);
int fputs(const char * , FILE * ) __asm("_" "fputs" );
size_t fread(void * , size_t, size_t, FILE * );
FILE *freopen(const char * , const char * ,
                 FILE * ) __asm("_" "freopen" );
int fscanf(FILE * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
int fseek(FILE *, long, int);
int fsetpos(FILE *, const fpos_t *);
long ftell(FILE *);
size_t fwrite(const void * , size_t, size_t, FILE * ) __asm("_" "fwrite" );
int getc(FILE *);
int getchar(void);
char *gets(char *);
void perror(const char *);
int printf(const char * , ...) __attribute__((__format__ (__printf__, 1, 2)));
int putc(int, FILE *);
int putchar(int);
int puts(const char *);
int remove(const char *);
int rename (const char *, const char *);
void rewind(FILE *);
int scanf(const char * , ...) __attribute__((__format__ (__scanf__, 1, 2)));
void setbuf(FILE * , char * );
int setvbuf(FILE * , char * , int, size_t);
int sprintf(char * , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
int sscanf(const char * , const char * , ...) __attribute__((__format__ (__scanf__, 2, 3)));
FILE *tmpfile(void);


__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tmpnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tmpnam(char *);
int ungetc(int, FILE *);
int vfprintf(FILE * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
int vprintf(const char * , va_list) __attribute__((__format__ (__printf__, 1, 0)));
int vsprintf(char * , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
}
# 292 "/usr/include/stdio.h" 3 4
extern "C" {



char *ctermid(char *);





FILE *fdopen(int, const char *) __asm("_" "fdopen" );

int fileno(FILE *);
}
# 314 "/usr/include/stdio.h" 3 4
extern "C" {
int pclose(FILE *);



FILE *popen(const char *, const char *) __asm("_" "popen" );

}
# 336 "/usr/include/stdio.h" 3 4
extern "C" {
int __srget(FILE *);
int __svfscanf(FILE *, const char *, va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int __swbuf(int, FILE *);
}







inline __attribute__ ((__always_inline__)) int __sputc(int _c, FILE *_p) {
 if (--_p->_w >= 0 || (_p->_w >= _p->_lbfsize && (char)_c != '\n'))
  return (*_p->_p++ = _c);
 else
  return (__swbuf(_c, _p));
}
# 373 "/usr/include/stdio.h" 3 4
extern "C" {
void flockfile(FILE *);
int ftrylockfile(FILE *);
void funlockfile(FILE *);
int getc_unlocked(FILE *);
int getchar_unlocked(void);
int putc_unlocked(int, FILE *);
int putchar_unlocked(int);



int getw(FILE *);
int putw(int, FILE *);



__attribute__((deprecated("This function is provided for compatibility reasons only.  Due to security concerns inherent in the design of tempnam(3), it is highly recommended that you use mkstemp(3) instead.")))

char *tempnam(const char *, const char *) __asm("_" "tempnam" );
}
# 411 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_off_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_off_t.h" 3 4
typedef __darwin_off_t off_t;
# 412 "/usr/include/stdio.h" 2 3 4

extern "C" {
int fseeko(FILE *, off_t, int);
off_t ftello(FILE *);
}



extern "C" {
int snprintf(char * , size_t, const char * , ...) __attribute__((__format__ (__printf__, 3, 4)));
int vfscanf(FILE * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
int vscanf(const char * , va_list) __attribute__((__format__ (__scanf__, 1, 0)));
int vsnprintf(char * , size_t, const char * , va_list) __attribute__((__format__ (__printf__, 3, 0)));
int vsscanf(const char * , const char * , va_list) __attribute__((__format__ (__scanf__, 2, 0)));
}
# 436 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/sys/_types/_ssize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_ssize_t.h" 3 4
typedef __darwin_ssize_t ssize_t;
# 437 "/usr/include/stdio.h" 2 3 4

extern "C" {
int dprintf(int, const char * , ...) __attribute__((__format__ (__printf__, 2, 3))) ;
int vdprintf(int, const char * , va_list) __attribute__((__format__ (__printf__, 2, 0))) ;
ssize_t getdelim(char ** , size_t * , int, FILE * ) ;
ssize_t getline(char ** , size_t * , FILE * ) ;
}







extern "C" {
extern const int sys_nerr;
extern const char *const sys_errlist[];

int asprintf(char ** , const char * , ...) __attribute__((__format__ (__printf__, 2, 3)));
char *ctermid_r(char *);
char *fgetln(FILE *, size_t *);
const char *fmtcheck(const char *, const char *);
int fpurge(FILE *);
void setbuffer(FILE *, char *, int);
int setlinebuf(FILE *);
int vasprintf(char ** , const char * , va_list) __attribute__((__format__ (__printf__, 2, 0)));
FILE *zopen(const char *, const char *, int);





FILE *funopen(const void *,
                 int (*)(void *, char *, int),
                 int (*)(void *, const char *, int),
                 fpos_t (*)(void *, fpos_t, int),
                 int (*)(void *));
}
# 2 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 65 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/wait.h" 1 3 4
# 79 "/usr/include/sys/wait.h" 3 4
typedef enum {
 P_ALL,
 P_PID,
 P_PGID
} idtype_t;





# 1 "/usr/include/sys/_types/_pid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_pid_t.h" 3 4
typedef __darwin_pid_t pid_t;
# 90 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/_types/_id_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_id_t.h" 3 4
typedef __darwin_id_t id_t;
# 91 "/usr/include/sys/wait.h" 2 3 4
# 109 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/sys/signal.h" 1 3 4
# 73 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/sys/appleapiopts.h" 1 3 4
# 74 "/usr/include/sys/signal.h" 2 3 4







# 1 "/usr/include/machine/signal.h" 1 3 4
# 32 "/usr/include/machine/signal.h" 3 4
# 1 "/usr/include/i386/signal.h" 1 3 4
# 39 "/usr/include/i386/signal.h" 3 4
typedef int sig_atomic_t;
# 33 "/usr/include/machine/signal.h" 2 3 4
# 82 "/usr/include/sys/signal.h" 2 3 4
# 145 "/usr/include/sys/signal.h" 3 4
# 1 "/usr/include/machine/_mcontext.h" 1 3 4
# 29 "/usr/include/machine/_mcontext.h" 3 4
# 1 "/usr/include/i386/_mcontext.h" 1 3 4
# 33 "/usr/include/i386/_mcontext.h" 3 4
# 1 "/usr/include/mach/i386/_structs.h" 1 3 4
# 43 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_thread_state
{
    unsigned int __eax;
    unsigned int __ebx;
    unsigned int __ecx;
    unsigned int __edx;
    unsigned int __edi;
    unsigned int __esi;
    unsigned int __ebp;
    unsigned int __esp;
    unsigned int __ss;
    unsigned int __eflags;
    unsigned int __eip;
    unsigned int __cs;
    unsigned int __ds;
    unsigned int __es;
    unsigned int __fs;
    unsigned int __gs;
};
# 89 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_control
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
      :2,
    __pc :2,





    __rc :2,






             :1,
      :3;
};
typedef struct __darwin_fp_control __darwin_fp_control_t;
# 147 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_fp_status
{
    unsigned short __invalid :1,
        __denorm :1,
    __zdiv :1,
    __ovrfl :1,
    __undfl :1,
    __precis :1,
    __stkflt :1,
    __errsumm :1,
    __c0 :1,
    __c1 :1,
    __c2 :1,
    __tos :3,
    __c3 :1,
    __busy :1;
};
typedef struct __darwin_fp_status __darwin_fp_status_t;
# 191 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_mmst_reg
{
 char __mmst_reg[10];
 char __mmst_rsrv[6];
};
# 210 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_xmm_reg
{
 char __xmm_reg[16];
};
# 232 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_float_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
};


struct __darwin_i386_avx_state
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;
 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;
 __uint16_t __fpu_rsrv2;
 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;
 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 char __fpu_rsrv4[14*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
};
# 402 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_i386_exception_state
{
 __uint16_t __trapno;
 __uint16_t __cpu;
 __uint32_t __err;
 __uint32_t __faultvaddr;
};
# 422 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state32
{
 unsigned int __dr0;
 unsigned int __dr1;
 unsigned int __dr2;
 unsigned int __dr3;
 unsigned int __dr4;
 unsigned int __dr5;
 unsigned int __dr6;
 unsigned int __dr7;
};
# 454 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_thread_state64
{
 __uint64_t __rax;
 __uint64_t __rbx;
 __uint64_t __rcx;
 __uint64_t __rdx;
 __uint64_t __rdi;
 __uint64_t __rsi;
 __uint64_t __rbp;
 __uint64_t __rsp;
 __uint64_t __r8;
 __uint64_t __r9;
 __uint64_t __r10;
 __uint64_t __r11;
 __uint64_t __r12;
 __uint64_t __r13;
 __uint64_t __r14;
 __uint64_t __r15;
 __uint64_t __rip;
 __uint64_t __rflags;
 __uint64_t __cs;
 __uint64_t __fs;
 __uint64_t __gs;
};
# 509 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_float_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
};


struct __darwin_x86_avx_state64
{
 int __fpu_reserved[2];
 struct __darwin_fp_control __fpu_fcw;
 struct __darwin_fp_status __fpu_fsw;
 __uint8_t __fpu_ftw;
 __uint8_t __fpu_rsrv1;
 __uint16_t __fpu_fop;


 __uint32_t __fpu_ip;
 __uint16_t __fpu_cs;

 __uint16_t __fpu_rsrv2;


 __uint32_t __fpu_dp;
 __uint16_t __fpu_ds;

 __uint16_t __fpu_rsrv3;
 __uint32_t __fpu_mxcsr;
 __uint32_t __fpu_mxcsrmask;
 struct __darwin_mmst_reg __fpu_stmm0;
 struct __darwin_mmst_reg __fpu_stmm1;
 struct __darwin_mmst_reg __fpu_stmm2;
 struct __darwin_mmst_reg __fpu_stmm3;
 struct __darwin_mmst_reg __fpu_stmm4;
 struct __darwin_mmst_reg __fpu_stmm5;
 struct __darwin_mmst_reg __fpu_stmm6;
 struct __darwin_mmst_reg __fpu_stmm7;
 struct __darwin_xmm_reg __fpu_xmm0;
 struct __darwin_xmm_reg __fpu_xmm1;
 struct __darwin_xmm_reg __fpu_xmm2;
 struct __darwin_xmm_reg __fpu_xmm3;
 struct __darwin_xmm_reg __fpu_xmm4;
 struct __darwin_xmm_reg __fpu_xmm5;
 struct __darwin_xmm_reg __fpu_xmm6;
 struct __darwin_xmm_reg __fpu_xmm7;
 struct __darwin_xmm_reg __fpu_xmm8;
 struct __darwin_xmm_reg __fpu_xmm9;
 struct __darwin_xmm_reg __fpu_xmm10;
 struct __darwin_xmm_reg __fpu_xmm11;
 struct __darwin_xmm_reg __fpu_xmm12;
 struct __darwin_xmm_reg __fpu_xmm13;
 struct __darwin_xmm_reg __fpu_xmm14;
 struct __darwin_xmm_reg __fpu_xmm15;
 char __fpu_rsrv4[6*16];
 int __fpu_reserved1;
 char __avx_reserved1[64];
 struct __darwin_xmm_reg __fpu_ymmh0;
 struct __darwin_xmm_reg __fpu_ymmh1;
 struct __darwin_xmm_reg __fpu_ymmh2;
 struct __darwin_xmm_reg __fpu_ymmh3;
 struct __darwin_xmm_reg __fpu_ymmh4;
 struct __darwin_xmm_reg __fpu_ymmh5;
 struct __darwin_xmm_reg __fpu_ymmh6;
 struct __darwin_xmm_reg __fpu_ymmh7;
 struct __darwin_xmm_reg __fpu_ymmh8;
 struct __darwin_xmm_reg __fpu_ymmh9;
 struct __darwin_xmm_reg __fpu_ymmh10;
 struct __darwin_xmm_reg __fpu_ymmh11;
 struct __darwin_xmm_reg __fpu_ymmh12;
 struct __darwin_xmm_reg __fpu_ymmh13;
 struct __darwin_xmm_reg __fpu_ymmh14;
 struct __darwin_xmm_reg __fpu_ymmh15;
};
# 751 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_exception_state64
{
    __uint16_t __trapno;
    __uint16_t __cpu;
    __uint32_t __err;
    __uint64_t __faultvaddr;
};
# 771 "/usr/include/mach/i386/_structs.h" 3 4
struct __darwin_x86_debug_state64
{
 __uint64_t __dr0;
 __uint64_t __dr1;
 __uint64_t __dr2;
 __uint64_t __dr3;
 __uint64_t __dr4;
 __uint64_t __dr5;
 __uint64_t __dr6;
 __uint64_t __dr7;
};
# 34 "/usr/include/i386/_mcontext.h" 2 3 4




struct __darwin_mcontext32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_float_state __fs;
};


struct __darwin_mcontext_avx32
{
 struct __darwin_i386_exception_state __es;
 struct __darwin_i386_thread_state __ss;
 struct __darwin_i386_avx_state __fs;
};
# 76 "/usr/include/i386/_mcontext.h" 3 4
struct __darwin_mcontext64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_float_state64 __fs;
};


struct __darwin_mcontext_avx64
{
 struct __darwin_x86_exception_state64 __es;
 struct __darwin_x86_thread_state64 __ss;
 struct __darwin_x86_avx_state64 __fs;
};
# 115 "/usr/include/i386/_mcontext.h" 3 4
typedef struct __darwin_mcontext64 *mcontext_t;
# 30 "/usr/include/machine/_mcontext.h" 2 3 4
# 146 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_pthread/_pthread_attr_t.h" 1 3 4
# 30 "/usr/include/sys/_pthread/_pthread_attr_t.h" 3 4
typedef __darwin_pthread_attr_t pthread_attr_t;
# 148 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_sigaltstack.h" 1 3 4
# 36 "/usr/include/sys/_types/_sigaltstack.h" 3 4
struct __darwin_sigaltstack
{
 void *ss_sp;
 __darwin_size_t ss_size;
 int ss_flags;
};
typedef struct __darwin_sigaltstack stack_t;
# 150 "/usr/include/sys/signal.h" 2 3 4
# 1 "/usr/include/sys/_types/_ucontext.h" 1 3 4
# 34 "/usr/include/sys/_types/_ucontext.h" 3 4
struct __darwin_ucontext
{
 int uc_onstack;
 __darwin_sigset_t uc_sigmask;
 struct __darwin_sigaltstack uc_stack;
 struct __darwin_ucontext *uc_link;
 __darwin_size_t uc_mcsize;
 struct __darwin_mcontext64 *uc_mcontext;



};


typedef struct __darwin_ucontext ucontext_t;
# 151 "/usr/include/sys/signal.h" 2 3 4


# 1 "/usr/include/sys/_types/_sigset_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_sigset_t.h" 3 4
typedef __darwin_sigset_t sigset_t;
# 154 "/usr/include/sys/signal.h" 2 3 4

# 1 "/usr/include/sys/_types/_uid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uid_t.h" 3 4
typedef __darwin_uid_t uid_t;
# 156 "/usr/include/sys/signal.h" 2 3 4

union sigval {

 int sival_int;
 void *sival_ptr;
};





struct sigevent {
 int sigev_notify;
 int sigev_signo;
 union sigval sigev_value;
 void (*sigev_notify_function)(union sigval);
 pthread_attr_t *sigev_notify_attributes;
};


typedef struct __siginfo {
 int si_signo;
 int si_errno;
 int si_code;
 pid_t si_pid;
 uid_t si_uid;
 int si_status;
 void *si_addr;
 union sigval si_value;
 long si_band;
 unsigned long __pad[7];
} siginfo_t;
# 268 "/usr/include/sys/signal.h" 3 4
union __sigaction_u {
 void (*__sa_handler)(int);
 void (*__sa_sigaction)(int, struct __siginfo *,
         void *);
};


struct __sigaction {
 union __sigaction_u __sigaction_u;
 void (*sa_tramp)(void *, int, int, siginfo_t *, void *);
 sigset_t sa_mask;
 int sa_flags;
};




struct sigaction {
 union __sigaction_u __sigaction_u;
 sigset_t sa_mask;
 int sa_flags;
};
# 330 "/usr/include/sys/signal.h" 3 4
typedef void (*sig_t)(int);
# 347 "/usr/include/sys/signal.h" 3 4
struct sigvec {
 void (*sv_handler)(int);
 int sv_mask;
 int sv_flags;
};
# 366 "/usr/include/sys/signal.h" 3 4
struct sigstack {
 char *ss_sp;
 int ss_onstack;
};
# 388 "/usr/include/sys/signal.h" 3 4
extern "C" {
void (*signal(int, void (*)(int)))(int);
}
# 110 "/usr/include/sys/wait.h" 2 3 4
# 1 "/usr/include/sys/resource.h" 1 3 4
# 72 "/usr/include/sys/resource.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 1 3 4
# 9 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 3 4
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 1 3 4
# 27 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 3 4
# 1 "/usr/include/sys/_types/_int8_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int8_t.h" 3 4
typedef signed char int8_t;
# 28 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int16_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int16_t.h" 3 4
typedef short int16_t;
# 29 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int32_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int32_t.h" 3 4
typedef int int32_t;
# 30 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_int64_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_int64_t.h" 3 4
typedef long long int64_t;
# 31 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4

# 1 "/usr/include/_types/_uint8_t.h" 1 3 4
# 31 "/usr/include/_types/_uint8_t.h" 3 4
typedef unsigned char uint8_t;
# 33 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint16_t.h" 1 3 4
# 31 "/usr/include/_types/_uint16_t.h" 3 4
typedef unsigned short uint16_t;
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint32_t.h" 1 3 4
# 31 "/usr/include/_types/_uint32_t.h" 3 4
typedef unsigned int uint32_t;
# 35 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uint64_t.h" 1 3 4
# 31 "/usr/include/_types/_uint64_t.h" 3 4
typedef unsigned long long uint64_t;
# 36 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4


typedef int8_t int_least8_t;
typedef int16_t int_least16_t;
typedef int32_t int_least32_t;
typedef int64_t int_least64_t;
typedef uint8_t uint_least8_t;
typedef uint16_t uint_least16_t;
typedef uint32_t uint_least32_t;
typedef uint64_t uint_least64_t;



typedef int8_t int_fast8_t;
typedef int16_t int_fast16_t;
typedef int32_t int_fast32_t;
typedef int64_t int_fast64_t;
typedef uint8_t uint_fast8_t;
typedef uint16_t uint_fast16_t;
typedef uint32_t uint_fast32_t;
typedef uint64_t uint_fast64_t;





# 1 "/usr/include/sys/_types/_intptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_intptr_t.h" 3 4
typedef __darwin_intptr_t intptr_t;
# 63 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/sys/_types/_uintptr_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uintptr_t.h" 3 4
typedef unsigned long uintptr_t;
# 64 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4



# 1 "/usr/include/_types/_intmax_t.h" 1 3 4
# 32 "/usr/include/_types/_intmax_t.h" 3 4
typedef long int intmax_t;
# 68 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 1 "/usr/include/_types/_uintmax_t.h" 1 3 4
# 32 "/usr/include/_types/_uintmax_t.h" 3 4
typedef long unsigned int uintmax_t;
# 69 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/stdint.h" 2 3 4
# 10 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stdint.h" 2 3 4
# 73 "/usr/include/sys/resource.h" 2 3 4







# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 81 "/usr/include/sys/resource.h" 2 3 4
# 89 "/usr/include/sys/resource.h" 3 4
typedef __uint64_t rlim_t;
# 152 "/usr/include/sys/resource.h" 3 4
struct rusage {
 struct timeval ru_utime;
 struct timeval ru_stime;
# 163 "/usr/include/sys/resource.h" 3 4
 long ru_maxrss;

 long ru_ixrss;
 long ru_idrss;
 long ru_isrss;
 long ru_minflt;
 long ru_majflt;
 long ru_nswap;
 long ru_inblock;
 long ru_oublock;
 long ru_msgsnd;
 long ru_msgrcv;
 long ru_nsignals;
 long ru_nvcsw;
 long ru_nivcsw;


};
# 192 "/usr/include/sys/resource.h" 3 4
typedef void *rusage_info_t;

struct rusage_info_v0 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
};

struct rusage_info_v1 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
};

struct rusage_info_v2 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
};

struct rusage_info_v3 {
 uint8_t ri_uuid[16];
 uint64_t ri_user_time;
 uint64_t ri_system_time;
 uint64_t ri_pkg_idle_wkups;
 uint64_t ri_interrupt_wkups;
 uint64_t ri_pageins;
 uint64_t ri_wired_size;
 uint64_t ri_resident_size;
 uint64_t ri_phys_footprint;
 uint64_t ri_proc_start_abstime;
 uint64_t ri_proc_exit_abstime;
 uint64_t ri_child_user_time;
 uint64_t ri_child_system_time;
 uint64_t ri_child_pkg_idle_wkups;
 uint64_t ri_child_interrupt_wkups;
 uint64_t ri_child_pageins;
 uint64_t ri_child_elapsed_abstime;
 uint64_t ri_diskio_bytesread;
 uint64_t ri_diskio_byteswritten;
 uint64_t ri_cpu_time_qos_default;
 uint64_t ri_cpu_time_qos_maintenance;
 uint64_t ri_cpu_time_qos_background;
 uint64_t ri_cpu_time_qos_utility;
 uint64_t ri_cpu_time_qos_legacy;
 uint64_t ri_cpu_time_qos_user_initiated;
 uint64_t ri_cpu_time_qos_user_interactive;
 uint64_t ri_billed_system_time;
 uint64_t ri_serviced_system_time;
};

typedef struct rusage_info_v3 rusage_info_current;
# 325 "/usr/include/sys/resource.h" 3 4
struct rlimit {
 rlim_t rlim_cur;
 rlim_t rlim_max;
};
# 353 "/usr/include/sys/resource.h" 3 4
struct proc_rlimit_control_wakeupmon {
 uint32_t wm_flags;
 int32_t wm_rate;
};
# 382 "/usr/include/sys/resource.h" 3 4
extern "C" {
int getpriority(int, id_t);

int getiopolicy_np(int, int) ;

int getrlimit(int, struct rlimit *) __asm("_" "getrlimit" );
int getrusage(int, struct rusage *);
int setpriority(int, id_t, int);

int setiopolicy_np(int, int, int) ;

int setrlimit(int, const struct rlimit *) __asm("_" "setrlimit" );
}
# 111 "/usr/include/sys/wait.h" 2 3 4
# 186 "/usr/include/sys/wait.h" 3 4
# 1 "/usr/include/machine/endian.h" 1 3 4
# 35 "/usr/include/machine/endian.h" 3 4
# 1 "/usr/include/i386/endian.h" 1 3 4
# 99 "/usr/include/i386/endian.h" 3 4
# 1 "/usr/include/sys/_endian.h" 1 3 4
# 130 "/usr/include/sys/_endian.h" 3 4
# 1 "/usr/include/libkern/_OSByteOrder.h" 1 3 4
# 66 "/usr/include/libkern/_OSByteOrder.h" 3 4
# 1 "/usr/include/libkern/i386/_OSByteOrder.h" 1 3 4
# 44 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint16_t
_OSSwapInt16(
    __uint16_t _data
)
{
    return ((__uint16_t)((_data << 8) | (_data >> 8)));
}

static inline
__uint32_t
_OSSwapInt32(
    __uint32_t _data
)
{



    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;

}
# 91 "/usr/include/libkern/i386/_OSByteOrder.h" 3 4
static inline
__uint64_t
_OSSwapInt64(
    __uint64_t _data
)
{
    __asm__ ("bswap   %0" : "+r" (_data));
    return _data;
}
# 67 "/usr/include/libkern/_OSByteOrder.h" 2 3 4
# 131 "/usr/include/sys/_endian.h" 2 3 4
# 100 "/usr/include/i386/endian.h" 2 3 4
# 36 "/usr/include/machine/endian.h" 2 3 4
# 187 "/usr/include/sys/wait.h" 2 3 4







union wait {
 int w_status;



 struct {

  unsigned int w_Termsig:7,
    w_Coredump:1,
    w_Retcode:8,
    w_Filler:16;







 } w_T;





 struct {

  unsigned int w_Stopval:8,
    w_Stopsig:8,
    w_Filler:16;






 } w_S;
};
# 247 "/usr/include/sys/wait.h" 3 4
extern "C" {
pid_t wait(int *) __asm("_" "wait" );
pid_t waitpid(pid_t, int *, int) __asm("_" "waitpid" );

int waitid(idtype_t, id_t, siginfo_t *, int) __asm("_" "waitid" );


pid_t wait3(int *, int, struct rusage *);
pid_t wait4(pid_t, int *, int, struct rusage *);

}
# 66 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/alloca.h" 1 3 4
# 31 "/usr/include/alloca.h" 3 4
extern "C" {
void *alloca(size_t);
}
# 68 "/usr/include/stdlib.h" 2 3 4
# 76 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/sys/_types/_ct_rune_t.h" 1 3 4
# 31 "/usr/include/sys/_types/_ct_rune_t.h" 3 4
typedef __darwin_ct_rune_t ct_rune_t;
# 77 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_rune_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rune_t.h" 3 4
typedef __darwin_rune_t rune_t;
# 78 "/usr/include/stdlib.h" 2 3 4


# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 81 "/usr/include/stdlib.h" 2 3 4

typedef struct {
 int quot;
 int rem;
} div_t;

typedef struct {
 long quot;
 long rem;
} ldiv_t;


typedef struct {
 long long quot;
 long long rem;
} lldiv_t;
# 117 "/usr/include/stdlib.h" 3 4
extern int __mb_cur_max;
# 127 "/usr/include/stdlib.h" 3 4
extern "C" {
void abort(void) __attribute__((noreturn));
int abs(int) __attribute__((const));
int atexit(void (*)(void));
double atof(const char *);
int atoi(const char *);
long atol(const char *);

long long
  atoll(const char *);

void *bsearch(const void *, const void *, size_t,
     size_t, int (*)(const void *, const void *));
void *calloc(size_t, size_t);
div_t div(int, int) __attribute__((const));
void exit(int) __attribute__((noreturn));
void free(void *);
char *getenv(const char *);
long labs(long) __attribute__((const));
ldiv_t ldiv(long, long) __attribute__((const));

long long
  llabs(long long);
lldiv_t lldiv(long long, long long);

void *malloc(size_t);
int mblen(const char *, size_t);
size_t mbstowcs(wchar_t * , const char * , size_t);
int mbtowc(wchar_t * , const char * , size_t);
int posix_memalign(void **, size_t, size_t) ;
void qsort(void *, size_t, size_t,
     int (*)(const void *, const void *));
int rand(void);
void *realloc(void *, size_t);
void srand(unsigned);
double strtod(const char *, char **) __asm("_" "strtod" );
float strtof(const char *, char **) __asm("_" "strtof" );
long strtol(const char *, char **, int);
long double
  strtold(const char *, char **);

long long
  strtoll(const char *, char **, int);

unsigned long
  strtoul(const char *, char **, int);

unsigned long long
  strtoull(const char *, char **, int);

int system(const char *) __asm("_" "system" ) ;
size_t wcstombs(char * , const wchar_t * , size_t);
int wctomb(char *, wchar_t);


void _Exit(int) __attribute__((noreturn));
long a64l(const char *);
double drand48(void);
char *ecvt(double, int, int *, int *);
double erand48(unsigned short[3]);
char *fcvt(double, int, int *, int *);
char *gcvt(double, int, char *);
int getsubopt(char **, char * const *, char **);
int grantpt(int);

char *initstate(unsigned, char *, size_t);



long jrand48(unsigned short[3]);
char *l64a(long);
void lcong48(unsigned short[7]);
long lrand48(void);
char *mktemp(char *);
int mkstemp(char *);
long mrand48(void);
long nrand48(unsigned short[3]);
int posix_openpt(int);
char *ptsname(int);
int putenv(char *) __asm("_" "putenv" );
long random(void);
int rand_r(unsigned *);

char *realpath(const char * , char * ) __asm("_" "realpath" "$DARWIN_EXTSN");



unsigned short
 *seed48(unsigned short[3]);
int setenv(const char *, const char *, int) __asm("_" "setenv" );

void setkey(const char *) __asm("_" "setkey" );



char *setstate(const char *);
void srand48(long);

void srandom(unsigned);



int unlockpt(int);

int unsetenv(const char *) __asm("_" "unsetenv" );






# 1 "/usr/include/machine/types.h" 1 3 4
# 35 "/usr/include/machine/types.h" 3 4
# 1 "/usr/include/i386/types.h" 1 3 4
# 81 "/usr/include/i386/types.h" 3 4
typedef unsigned char u_int8_t;
typedef unsigned short u_int16_t;
typedef unsigned int u_int32_t;
typedef unsigned long long u_int64_t;


typedef int64_t register_t;
# 97 "/usr/include/i386/types.h" 3 4
typedef u_int64_t user_addr_t;
typedef u_int64_t user_size_t;
typedef int64_t user_ssize_t;
typedef int64_t user_long_t;
typedef u_int64_t user_ulong_t;
typedef int64_t user_time_t;
typedef int64_t user_off_t;







typedef u_int64_t syscall_arg_t;
# 36 "/usr/include/machine/types.h" 2 3 4
# 239 "/usr/include/stdlib.h" 2 3 4

# 1 "/usr/include/sys/_types/_dev_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_dev_t.h" 3 4
typedef __darwin_dev_t dev_t;
# 241 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/sys/_types/_mode_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_mode_t.h" 3 4
typedef __darwin_mode_t mode_t;
# 242 "/usr/include/stdlib.h" 2 3 4

u_int32_t arc4random(void);
void arc4random_addrandom(unsigned char * , int );
void arc4random_buf(void * , size_t ) ;
void arc4random_stir(void);
u_int32_t
  arc4random_uniform(u_int32_t ) ;







char *cgetcap(char *, const char *, int);
int cgetclose(void);
int cgetent(char **, char **, const char *);
int cgetfirst(char **, char **);
int cgetmatch(const char *, const char *);
int cgetnext(char **, char **);
int cgetnum(char *, const char *, long *);
int cgetset(const char *);
int cgetstr(char *, const char *, char **);
int cgetustr(char *, const char *, char **);

int daemon(int, int) __asm("_" "daemon" "$1050") __attribute__((deprecated));
char *devname(dev_t, mode_t);
char *devname_r(dev_t, mode_t, char *buf, int len);
char *getbsize(int *, long *);
int getloadavg(double [], int);
const char
 *getprogname(void);

int heapsort(void *, size_t, size_t,
     int (*)(const void *, const void *));




int mergesort(void *, size_t, size_t,
     int (*)(const void *, const void *));




void psort(void *, size_t, size_t,
     int (*)(const void *, const void *)) ;




void psort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *)) ;




void qsort_r(void *, size_t, size_t, void *,
     int (*)(void *, const void *, const void *));
int radixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void setprogname(const char *);
int sradixsort(const unsigned char **, int, const unsigned char *,
     unsigned);
void sranddev(void);
void srandomdev(void);
void *reallocf(void *, size_t);

long long
  strtoq(const char *, char **, int);
unsigned long long
  strtouq(const char *, char **, int);

extern char *suboptarg;
void *valloc(size_t);






}
# 3 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/usr/include/sys/time.h" 1 3 4
# 75 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_fd_def.h" 1 3 4
# 45 "/usr/include/sys/_types/_fd_def.h" 3 4
extern "C" {
typedef struct fd_set {
 __int32_t fds_bits[((((1024) % ((sizeof(__int32_t) * 8))) == 0) ? ((1024) / ((sizeof(__int32_t) * 8))) : (((1024) / ((sizeof(__int32_t) * 8))) + 1))];
} fd_set;
}


static inline int
__darwin_fd_isset(int _n, const struct fd_set *_p)
{
 return (_p->fds_bits[(unsigned long)_n/(sizeof(__int32_t) * 8)] & ((__int32_t)(1<<((unsigned long)_n % (sizeof(__int32_t) * 8)))));
}
# 76 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/time.h" 2 3 4


# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 80 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 81 "/usr/include/sys/time.h" 2 3 4





struct itimerval {
 struct timeval it_interval;
 struct timeval it_value;
};
# 105 "/usr/include/sys/time.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 106 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 107 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 108 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 109 "/usr/include/sys/time.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 110 "/usr/include/sys/time.h" 2 3 4



# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 114 "/usr/include/sys/time.h" 2 3 4
# 124 "/usr/include/sys/time.h" 3 4
struct timezone {
 int tz_minuteswest;
 int tz_dsttime;
};
# 167 "/usr/include/sys/time.h" 3 4
struct clockinfo {
 int hz;
 int tick;
 int tickadj;
 int stathz;
 int profhz;
};




# 1 "/usr/include/time.h" 1 3 4
# 67 "/usr/include/time.h" 3 4
# 1 "/usr/include/sys/_types/_clock_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_clock_t.h" 3 4
typedef __darwin_clock_t clock_t;
# 68 "/usr/include/time.h" 2 3 4





struct tm {
 int tm_sec;
 int tm_min;
 int tm_hour;
 int tm_mday;
 int tm_mon;
 int tm_year;
 int tm_wday;
 int tm_yday;
 int tm_isdst;
 long tm_gmtoff;
 char *tm_zone;
};
# 96 "/usr/include/time.h" 3 4
extern char *tzname[];


extern int getdate_err;

extern long timezone __asm("_" "timezone" );

extern int daylight;

extern "C" {
char *asctime(const struct tm *);
clock_t clock(void) __asm("_" "clock" );
char *ctime(const time_t *);
double difftime(time_t, time_t);
struct tm *getdate(const char *);
struct tm *gmtime(const time_t *);
struct tm *localtime(const time_t *);
time_t mktime(struct tm *) __asm("_" "mktime" );
size_t strftime(char * , size_t, const char * , const struct tm * ) __asm("_" "strftime" );
char *strptime(const char * , const char * , struct tm * ) __asm("_" "strptime" );
time_t time(time_t *);


void tzset(void);



char *asctime_r(const struct tm * , char * );
char *ctime_r(const time_t *, char *);
struct tm *gmtime_r(const time_t * , struct tm * );
struct tm *localtime_r(const time_t * , struct tm * );


time_t posix2time(time_t);



void tzsetwall(void);
time_t time2posix(time_t);
time_t timelocal(struct tm * const);
time_t timegm(struct tm * const);



int nanosleep(const struct timespec *, struct timespec *) __asm("_" "nanosleep" );

}
# 179 "/usr/include/sys/time.h" 2 3 4


extern "C" {


int adjtime(const struct timeval *, struct timeval *);
int futimes(int, const struct timeval *);
int lutimes(const char *, const struct timeval *) ;
int settimeofday(const struct timeval *, const struct timezone *);


int getitimer(int, struct itimerval *);
int gettimeofday(struct timeval * , void * );

# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )




  __asm("_" "select" "$1050")




  ;
# 194 "/usr/include/sys/time.h" 2 3 4

int setitimer(int, const struct itimerval * ,
  struct itimerval * );
int utimes(const char *, const struct timeval *);

}
# 4 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 4 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"

# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 6 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/omp.h" 1 3 4
# 34 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/omp.h" 3 4
typedef struct
{
  unsigned char _x[64]
    __attribute__((__aligned__(8)));
} omp_lock_t;

typedef struct
{
  unsigned char _x[80]
    __attribute__((__aligned__(8)));
} omp_nest_lock_t;


typedef enum omp_sched_t
{
  omp_sched_static = 1,
  omp_sched_dynamic = 2,
  omp_sched_guided = 3,
  omp_sched_auto = 4
} omp_sched_t;

typedef enum omp_proc_bind_t
{
  omp_proc_bind_false = 0,
  omp_proc_bind_true = 1,
  omp_proc_bind_master = 2,
  omp_proc_bind_close = 3,
  omp_proc_bind_spread = 4
} omp_proc_bind_t;


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

extern void omp_set_schedule (omp_sched_t, int) throw ();
extern void omp_get_schedule (omp_sched_t *, int *) throw ();
extern int omp_get_thread_limit (void) throw ();
extern void omp_set_max_active_levels (int) throw ();
extern int omp_get_max_active_levels (void) throw ();
extern int omp_get_level (void) throw ();
extern int omp_get_ancestor_thread_num (int) throw ();
extern int omp_get_team_size (int) throw ();
extern int omp_get_active_level (void) throw ();

extern int omp_in_final (void) throw ();

extern int omp_get_cancellation (void) throw ();
extern omp_proc_bind_t omp_get_proc_bind (void) throw ();

extern void omp_set_default_device (int) throw ();
extern int omp_get_default_device (void) throw ();
extern int omp_get_num_devices (void) throw ();
extern int omp_get_num_teams (void) throw ();
extern int omp_get_team_num (void) throw ();

extern int omp_is_initial_device (void) throw ();


}
# 7 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 7 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 8 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"

# 1 "/Users/jmg3/chimes/src/libchimes/checkpoint.h" 1
# 11 "/Users/jmg3/chimes/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*fp)(void *));
# 10 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp" 2
# 25 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 25 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
typedef struct _tile {
# 26 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int row;
# 27 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int col;
# 28 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
} tile;
# 29 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 30 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
typedef struct _tiles_to_run {
# 31 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile *q;
# 32 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile *base;
# 33 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int capacity;
# 34 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int length;
# 35 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
} tiles_to_run;
# 36 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 37 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
typedef enum {
# 38 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 DIAG_KIND,
# 39 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 RCOL_KIND,
# 40 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 BROW_KIND,
# 41 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 NUM_DEPS
# 42 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
} TILE_DEPS;
# 43 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 44 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* string_1;
# 45 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* string_2;
# 46 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 47 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int strlen_1;
# 48 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int strlen_2;
# 49 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 50 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int tile_width;
# 51 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int tile_height;
# 52 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 53 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int n_tiles_x;
# 54 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int n_tiles_y;
# 55 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 56 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int ** tile_edges_x;
# 57 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int ** tile_edges_y;
# 58 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * tile_diag;
# 59 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * put_counts;
# 60 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int *** worker_tiles;
# 61 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * max_buffer;
# 62 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int * temp_buffer;
# 63 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int max_size;
# 64 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
volatile int done;
# 65 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 66 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int nthreads;
# 67 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
struct timeval begin,end;
# 68 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 69 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int dsizes[NUM_DEPS];
# 70 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 71 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_DIAG_npm(int r, int c);
int GUID_DIAG_quick(int r, int c); int GUID_DIAG(int r, int c);
int GUID_RCOL_npm(int r, int c);
int GUID_DIAG_resumable(int r, int c) {const int ____chimes_did_disable0 = new_stack((void *)(&GUID_DIAG), "GUID_DIAG", &____must_manage_GUID_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0); return (0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
# 72 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_RCOL_quick(int r, int c); int GUID_RCOL(int r, int c);
int GUID_BROW_npm(int r, int c);
int GUID_RCOL_resumable(int r, int c) {const int ____chimes_did_disable1 = new_stack((void *)(&GUID_RCOL), "GUID_RCOL", &____must_manage_GUID_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1); return (1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
# 73 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_BROW_quick(int r, int c); int GUID_BROW(int r, int c);
int GUID_BROW_resumable(int r, int c) {const int ____chimes_did_disable2 = new_stack((void *)(&GUID_BROW), "GUID_BROW", &____must_manage_GUID_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2); return (2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }
# 74 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 75 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_ROW_npm(int guid);
int TILE_ROW_quick(int guid); int TILE_ROW(int guid);
int TILE_COL_npm(int guid);
int TILE_ROW_resumable(int guid) {const int ____chimes_did_disable3 = new_stack((void *)(&TILE_ROW), "TILE_ROW", &____must_manage_TILE_ROW, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3); return (guid % (n_tiles_x * n_tiles_y)) / n_tiles_x; }
# 76 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int TILE_COL_quick(int guid); int TILE_COL(int guid);
int TILE_COL_resumable(int guid) {const int ____chimes_did_disable4 = new_stack((void *)(&TILE_COL), "TILE_COL", &____must_manage_TILE_COL, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4); return (guid % (n_tiles_x * n_tiles_y)) % n_tiles_x; }
# 77 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 78 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int GUID_KIND_npm(int guid);
int GUID_KIND_quick(int guid); int GUID_KIND(int guid);
int GUID_KIND_resumable(int guid) {const int ____chimes_did_disable5 = new_stack((void *)(&GUID_KIND), "GUID_KIND", &____must_manage_GUID_KIND, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5); return guid / (n_tiles_x * n_tiles_y); }
# 225 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 225 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_npm(int row, int col);
int PUT_quick(int row, int col); int PUT(int row, int col);
int PUT_resumable(int row, int col) {const int ____chimes_did_disable6 = new_stack((void *)(&PUT), "PUT", &____must_manage_PUT, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 226 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y-1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0; };
# 227 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x-1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0; };
# 228 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 229 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int success; success = (0) ;
# 230 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int await_tile; await_tile = (({ calling_npm("GUID_DIAG", 0); GUID_DIAG_npm(row, col); })) ;
# 231 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 232 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  (__builtin_expect(!(put_counts[await_tile] < NUM_DEPS), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 233, "put_counts[await_tile] < NUM_DEPS") : (void)0);
# 234 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return success;
# 240 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 241 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 242 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_DIAG_npm(int row, int col);
int PUT_DIAG_quick(int row, int col); int PUT_DIAG(int row, int col);
int PUT_RCOL_npm(int row, int col);
int PUT_DIAG_resumable(int row, int col) {const int ____chimes_did_disable7 = new_stack((void *)(&PUT_DIAG), "PUT_DIAG", &____must_manage_PUT_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7); return ({ calling_npm("PUT", 0); PUT_npm(row+1, col+1); }); }
# 243 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_RCOL_quick(int row, int col); int PUT_RCOL(int row, int col);
int PUT_BROW_npm(int row, int col);
int PUT_RCOL_resumable(int row, int col) {const int ____chimes_did_disable8 = new_stack((void *)(&PUT_RCOL), "PUT_RCOL", &____must_manage_PUT_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8); return ({ calling_npm("PUT", 0); PUT_npm(row, col+1); }); }
# 244 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int PUT_BROW_quick(int row, int col); int PUT_BROW(int row, int col);
int PUT_BROW_resumable(int row, int col) {const int ____chimes_did_disable9 = new_stack((void *)(&PUT_BROW), "PUT_BROW", &____must_manage_PUT_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ; rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9); return ({ calling_npm("PUT", 0); PUT_npm(row+1, col); }); }
# 245 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 246 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
enum Nucleotide {GAP=0, ADENINE, CYTOSINE, GUANINE, THYMINE};
# 247 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 248 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char char_mapping_npm ( char c );
signed char char_mapping_quick ( char c ); signed char char_mapping ( char c );
signed char char_mapping_resumable ( char c ) {const int ____chimes_did_disable10 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 249 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 250 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10); return to_be_returned;
# 258 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 259 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 260 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void print_matrix_npm ( int** matrix, int n_rows, int n_columns );
void print_matrix_quick ( int** matrix, int n_rows, int n_columns ); void print_matrix ( int** matrix, int n_rows, int n_columns );
void print_matrix_resumable ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable11 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(8151418678253031942UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 261 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int i; int j; ;
# 262 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            fprintf(__stdoutp, "%d ", matrix[i][j]);
# 265 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(__stdoutp, "\n");
# 267 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp,"--------------------------------\n");
# 269 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_12, ____chimes_did_disable11); }
# 270 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 271 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
static char alignment_score_matrix[5][5] =
# 272 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
{
# 273 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-1,-1,-1,-1},
# 274 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,2,-4,-2,-4},
# 275 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-4, 2,-4,-2},
# 276 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-2,-4, 2,-4},
# 277 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    {-1,-4,-2,-4, 2}
# 278 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
};
# 279 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 280 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
static void random_init_npm(signed char *s, unsigned long long len);
static void random_init_quick(signed char *s, unsigned long long len); static void random_init(signed char *s, unsigned long long len);
static void random_init_resumable(signed char *s, unsigned long long len) {const int ____chimes_did_disable12 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(8151418678253033330UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 281 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 282 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         int r; r = (rand() % 5) ;
# 283 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        (__builtin_expect(!(r >= 0 && r < 5), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 283, "r >= 0 && r < 5") : (void)0);
# 284 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        s[i] = r;
# 285 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } }
# 286 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_19, ____chimes_did_disable12); }
# 287 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 288 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ); size_t clear_whitespaces_do_mapping ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_resumable ( signed char* buffer, long size ) {const int ____chimes_did_disable13 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(8151418678253031989UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 289 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 290 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 291 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 292 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 293 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 294 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 295 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 296 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 297 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                break;
# 298 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 299 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 300 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 301 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13); return non_ws_index;
# 302 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 303 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 304 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
signed char* read_file_npm( FILE* file, size_t* n_chars );
signed char* read_file_quick( FILE* file, size_t* n_chars ); signed char* read_file( FILE* file, size_t* n_chars );
signed char* read_file_resumable( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable14 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(8151418678253032031UL), (size_t)(8151418678253032032UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 305 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 306 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     long file_size; file_size = (ftell(file)) ;
# 307 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 308 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 309 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 8151418678253032012UL, 0, 0)) ;
# 310 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 311 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 312 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 313 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 314 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 315 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 316 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(true, 8151418678253032012UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14); return file_buffer;
# 317 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
# 318 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 319 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void add_tile_to_run_npm(int row, int col, tiles_to_run *q);
void add_tile_to_run_quick(int row, int col, tiles_to_run *q); void add_tile_to_run(int row, int col, tiles_to_run *q);
void add_tile_to_run_resumable(int row, int col, tiles_to_run *q) {const int ____chimes_did_disable15 = new_stack((void *)(&add_tile_to_run), "add_tile_to_run", &____must_manage_add_tile_to_run, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(8151418678253032068UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 320 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (__builtin_expect(!(q->length < q->capacity), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 320, "q->length < q->capacity") : (void)0);
# 321 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 322 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 323 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 324 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "add_tile_to_run", &____must_manage_add_tile_to_run, ____alias_loc_id_15, ____chimes_did_disable15); }
# 325 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 326 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
tile* pop_next_tile_npm(tiles_to_run *q);
tile* pop_next_tile_quick(tiles_to_run *q); tile* pop_next_tile(tiles_to_run *q);
tile* pop_next_tile_resumable(tiles_to_run *q) {const int ____chimes_did_disable16 = new_stack((void *)(&pop_next_tile), "pop_next_tile", &____must_manage_pop_next_tile, 1, 0, (size_t)(8151418678253032118UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 327 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (__builtin_expect(!(q->length >= 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 327, "q->length >= 0") : (void)0);
# 328 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 329 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 8151418678253033133UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return __null;
# 330 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } else {
# 331 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *next; next = (q->q) ;
# 332 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 333 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 334 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 8151418678253033133UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return next;
# 335 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 336 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 8151418678253033133UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); }
# 337 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 338 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
void task_func_npm(int i, int j, tiles_to_run *next);
void task_func_quick(int i, int j, tiles_to_run *next); void task_func(int i, int j, tiles_to_run *next);
void task_func_resumable(int i, int j, tiles_to_run *next) {const int ____chimes_did_disable17 = new_stack((void *)(&task_func), "task_func", &____must_manage_task_func, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(8151418678253032580UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 339 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ii; int jj; ;
# 340 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int threadId; threadId = (omp_get_thread_num()) ;
# 341 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int **local_matrix; local_matrix = (worker_tiles[threadId]) ;
# 342 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 343 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int diag_index; diag_index = (((n_tiles_y - 1) + (j - i))) ;
# 344 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *diag; diag = (&tile_diag[diag_index]) ;
# 345 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_y; tile_edge_y = (tile_edges_y[i]) ;
# 346 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_x; tile_edge_x = (tile_edges_x[j]) ;
# 347 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 348 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 349 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 350 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii-1]; };
# 352 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 353 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii-1]; };
# 355 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 356 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 357 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 358 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_1; char_from_1 = (string_1[(j - 1) * tile_width + jj - 1]) ;
# 359 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_2; char_from_2 = (string_2[(i - 1) * tile_height + ii - 1]) ;
# 360 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 361 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int diag_score; diag_score = (local_matrix[ii - 1][jj - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 362 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int left_score; left_score = (local_matrix[ii][jj - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 363 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int top_score; top_score = (local_matrix[ii - 1][jj] + alignment_score_matrix[GAP][char_from_2]) ;
# 364 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 365 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 366 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 367 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  }
# 368 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 369 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 370 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 371 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { tile_edge_y[ii-1] = local_matrix[ii][tile_width]; };
# 373 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { tile_edge_x[ii-1] = local_matrix[tile_height][ii]; };
# 375 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 376 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {; bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread();
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 378 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        {
# 379 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 380 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, j); })) ;
# 381 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 382 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 383 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 384 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 385 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 386 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 387 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 388 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 389 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, j); })) ;
# 390 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 391 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i) ;
# 392 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 393 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 394 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 395 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 396 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 397 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 398 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(i, j); })) ;
# 399 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 400 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 401 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j) ;
# 402 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 403 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 404 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 405 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        } reenable_current_thread(____chimes_disable0);
# 406 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 407 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 408 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 409 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 410 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 411 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "task_func", &____must_manage_task_func, ____alias_loc_id_17, ____chimes_did_disable17); }
# 412 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 413 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
int main_quick ( int argc, char* argv[] ); int main ( int argc, char* argv[] );
int main_resumable ( int argc, char* argv[] ) {const int ____chimes_did_disable18 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(8151418678253033286UL)) ; tiles_to_run *tmp;
bool done;
tile *mine;
tiles_to_run *next;
tiles_to_run *curr;
int result_col;
int result_row;
int j;
int i;
 register_stack_vars(9, "main|tmp|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|done|0", (int *)0x0, "i8", (void *)(&done), (size_t)1, 0, 0, 0, "main|mine|0", (int *)0x0, "%struct._tile*", (void *)(&mine), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|result_col|0", (int *)0x0, "i32", (void *)(&result_col), (size_t)4, 0, 0, 0, "main|result_row|0", (int *)0x0, "i32", (void *)(&result_row), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(49): { goto call_lbl_49; } case(50): { goto call_lbl_50; } case(34): { goto call_lbl_34; } default: { chimes_error(); } } } ; ;
# 414 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
      int level; ;; { call_lbl_49: void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(49, &____chimes_region_id0, 1, &done);
# 415 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 417 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &done); ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 418 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  nthreads = omp_get_num_threads();
# 419 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  thread_leaving(); } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 0); }
# 420 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 421 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if ( argc != 5 ) {
# 422 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(__stderrp, "Usage: %s length1 length2 tileWidth tileHeight\n", argv[0]);
# 423 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        exit(1);
# 424 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 425 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 426 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Running SmithWaterman (OpenMP) with %d threads\n", nthreads);
# 427 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 428 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length1; length1 = (strtoull(argv[1], __null, 10)) ;
# 429 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length2; length2 = (strtoull(argv[2], __null, 10)) ;
# 430 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 431 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_width = (int) atoi (argv[3]);
# 432 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_height = (int) atoi (argv[4]);
# 433 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 434 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_1; n_char_in_file_1 = (length1) ;
# 435 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_2; n_char_in_file_2 = (length2) ;
# 436 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 437 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 8151418678253032302UL, 0, 0);
# 438 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 8151418678253032302UL, 0, 0);
# 439 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 440 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 441 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 442 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 443 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Tile width  %d\n", tile_width);
# 444 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Tile height %d\n", tile_height);
# 445 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 446 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_1 % tile_width) { fprintf(__stderrp, "String1 length should be multiple of tile width\n"); exit(1); }
# 447 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_2 % tile_height) { fprintf(__stderrp, "String2 length should be multiple of tile height\n"); exit(1); }
# 448 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 449 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_x = n_char_in_file_1/tile_width;
# 450 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_y = n_char_in_file_2/tile_height;
# 451 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 452 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Computing %d x %d intra-node tiles\n", n_tiles_x, n_tiles_y);
# 453 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 454 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_1 = n_char_in_file_1;
# 455 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_2 = n_char_in_file_2;
# 456 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 457 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 458 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 459 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 460 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_x++;
# 461 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_y++;
# 462 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 463 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_tiles; num_tiles = (n_tiles_x * n_tiles_y) ;
# 464 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 put_counts = (int*)malloc_wrapper(sizeof(int)*num_tiles, 8151418678253031802UL, 0, 0);
# 465 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i=0; i<num_tiles; i++) {
# 466 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[i] = 0;
# 467 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 468 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 469 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 470 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_diags; num_diags = (n_tiles_x + n_tiles_y - 1) ;
# 471 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag = (int*)malloc_wrapper(sizeof(int)*num_diags, 8151418678253031802UL, 0, 0);
# 472 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag[((n_tiles_y - 1) + (0 - 0))] = 0;
# 473 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, 0); });
# 474 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 475 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 476 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (i - 0))] = -1*(i*tile_width);
# 477 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, i); });
# 478 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 479 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 480 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (0 - i))] = -1*(i*tile_height);
# 481 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, 0); });
# 482 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 483 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 484 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 485 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_y = (int**)malloc_wrapper(sizeof(int*)*n_tiles_y, 8151418678253032211UL, 1, 0);
# 486 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 487 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_y[i] = (int*)malloc_wrapper(sizeof(int)*(tile_height), 8151418678253032213UL, 0, 0);
# 488 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height; j++) { tile_edges_y[i][j] = -1*((i-1)*tile_height+j); };
# 490 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, 0); });
# 491 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 492 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 493 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 494 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_x = (int**)malloc_wrapper(sizeof(int*)*n_tiles_x, 8151418678253032211UL, 1, 0);
# 495 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 496 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_x[i] = (int*)malloc_wrapper(sizeof(int)*(tile_width), 8151418678253032213UL, 0, 0);
# 497 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_width; j++) { tile_edges_x[i][j] = -1*((i-1)*tile_width+j); };
# 499 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(0, i); });
# 500 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 501 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 502 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 503 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 worker_tiles = (int***)malloc_wrapper(sizeof(int**)*nthreads, 8151418678253032190UL, 1, 0);
# 504 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 505 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  worker_tiles[i] = (int**)malloc_wrapper(sizeof(int*)*(tile_height+1), 8151418678253032402UL, 1, 0);
# 506 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { worker_tiles[i][j] = (int*)malloc_wrapper(sizeof(int)*(tile_width+1), 8151418678253032404UL, 0, 0); };
# 508 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 509 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 510 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 511 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[DIAG_KIND] = 1;
# 512 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[RCOL_KIND] = tile_height;
# 513 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[BROW_KIND] = tile_width;
# 514 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 515 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_size = dsizes[0];
# 516 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < NUM_DEPS; i++) { if (max_size < dsizes[i]) {max_size = dsizes[i]; }; };
# 518 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 8151418678253031802UL, 0, 0);
# 519 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 temp_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 8151418678253031802UL, 0, 0);
# 549 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 549 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_row = (n_tiles_y - 1) ;
# 550 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_col = (n_tiles_x - 1) ;
# 551 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 done = 0;
# 552 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 553 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&begin,0);
# 554 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 555 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       curr = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 8151418678253033037UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 556 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 8151418678253033046UL, 0, 1, (int)sizeof(struct _tile), 0);
# 557 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->q = curr->base;
# 558 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->capacity = n_tiles_y * n_tiles_x;
# 559 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->length = 1;
# 560 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].row = 1;
# 561 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].col = 1;
# 562 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 563 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       next = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 8151418678253033037UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 564 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 8151418678253033046UL, 0, 1, (int)sizeof(struct _tile), 0);
# 565 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->q = next->base;
# 566 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->capacity = n_tiles_y * n_tiles_x;
# 567 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->length = 0;
# 568 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 569 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while (curr->length > 0) {
# 570 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           mine = (__null); { call_lbl_50: void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(50, &____chimes_region_id1, 2, &done, &mine); ;
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel firstprivate(mine) firstprivate(done)
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 572 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &done, &mine); ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } }
# 573 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
               done = (false) ;
# 574 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 575 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            while (!done) {; bool ____chimes_disable3; ____chimes_disable3 = disable_current_thread();
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 577 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                {
# 578 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    mine = ({ calling_npm("pop_next_tile", 0); pop_next_tile_npm(curr); });
# 579 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                } reenable_current_thread(____chimes_disable3);
# 580 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                done = (mine == __null);
# 581 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 582 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (!done) {
# 583 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("task_func", 0); task_func_npm(mine->row, mine->col, next); });
# 584 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 585 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 586 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         thread_leaving(); } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 0); }
# 587 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 588 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           tmp = (curr) ;
# 589 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr = next;
# 590 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next = tmp;
# 591 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 592 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr->q = curr->base;
# 593 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 594 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next->length = 0;
# 595 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 596 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 597 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         call_lbl_34: checkpoint_transformed(34, ____alias_loc_id_0);
# 598 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 599 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 600 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 601 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&end,0);
# 602 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     int score; score = (tile_diag[((n_tiles_y - 1) + (result_col - result_row))]) ;
# 603 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "score: %d\n", score);
# 604 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 605 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 606 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 607 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { free_wrapper(worker_tiles[i][j], 8151418678253032404UL); };
# 609 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  free_wrapper(worker_tiles[i], 8151418678253032402UL);
# 610 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 611 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(worker_tiles, 8151418678253032190UL);
# 612 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 613 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) { free_wrapper(tile_edges_y[i], 8151418678253032213UL); };
# 615 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_y, 8151418678253032211UL);
# 616 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 617 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) { free_wrapper(tile_edges_x[i], 8151418678253032213UL); };
# 619 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_x, 8151418678253032211UL);
# 620 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 621 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_diag, 8151418678253031802UL);
# 622 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 623 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_1, 8151418678253032302UL);
# 624 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_2, 8151418678253032302UL);
# 625 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 626 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18); return 0;
# 627 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}
int GUID_DIAG_quick(int r, int c) {const int ____chimes_did_disable0 = new_stack((void *)(&GUID_DIAG), "GUID_DIAG", &____must_manage_GUID_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_DIAG", &____must_manage_GUID_DIAG, ____alias_loc_id_1, ____chimes_did_disable0); return (0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_DIAG(int r, int c) { return (____chimes_replaying ? GUID_DIAG_resumable(r, c) : GUID_DIAG_quick(r, c)); }

int GUID_RCOL_quick(int r, int c) {const int ____chimes_did_disable1 = new_stack((void *)(&GUID_RCOL), "GUID_RCOL", &____must_manage_GUID_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_RCOL", &____must_manage_GUID_RCOL, ____alias_loc_id_2, ____chimes_did_disable1); return (1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_RCOL(int r, int c) { return (____chimes_replaying ? GUID_RCOL_resumable(r, c) : GUID_RCOL_quick(r, c)); }

int GUID_BROW_quick(int r, int c) {const int ____chimes_did_disable2 = new_stack((void *)(&GUID_BROW), "GUID_BROW", &____must_manage_GUID_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_BROW", &____must_manage_GUID_BROW, ____alias_loc_id_3, ____chimes_did_disable2); return (2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_BROW(int r, int c) { return (____chimes_replaying ? GUID_BROW_resumable(r, c) : GUID_BROW_quick(r, c)); }

int TILE_ROW_quick(int guid) {const int ____chimes_did_disable3 = new_stack((void *)(&TILE_ROW), "TILE_ROW", &____must_manage_TILE_ROW, 1, 0, (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "TILE_ROW", &____must_manage_TILE_ROW, ____alias_loc_id_4, ____chimes_did_disable3); return (guid % (n_tiles_x * n_tiles_y)) / n_tiles_x; }

int TILE_ROW(int guid) { return (____chimes_replaying ? TILE_ROW_resumable(guid) : TILE_ROW_quick(guid)); }

int TILE_COL_quick(int guid) {const int ____chimes_did_disable4 = new_stack((void *)(&TILE_COL), "TILE_COL", &____must_manage_TILE_COL, 1, 0, (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "TILE_COL", &____must_manage_TILE_COL, ____alias_loc_id_5, ____chimes_did_disable4); return (guid % (n_tiles_x * n_tiles_y)) % n_tiles_x; }

int TILE_COL(int guid) { return (____chimes_replaying ? TILE_COL_resumable(guid) : TILE_COL_quick(guid)); }

int GUID_KIND_quick(int guid) {const int ____chimes_did_disable5 = new_stack((void *)(&GUID_KIND), "GUID_KIND", &____must_manage_GUID_KIND, 1, 0, (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "GUID_KIND", &____must_manage_GUID_KIND, ____alias_loc_id_6, ____chimes_did_disable5); return guid / (n_tiles_x * n_tiles_y); }

int GUID_KIND(int guid) { return (____chimes_replaying ? GUID_KIND_resumable(guid) : GUID_KIND_quick(guid)); }

int PUT_quick(int row, int col) {const int ____chimes_did_disable6 = new_stack((void *)(&PUT), "PUT", &____must_manage_PUT, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 226 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y-1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0; };
# 227 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x-1)) {rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return 0; };
# 228 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 229 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int success; success = (0) ;
# 230 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int await_tile; await_tile = (({ calling_npm("GUID_DIAG", 0); GUID_DIAG_npm(row, col); })) ;
# 231 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 232 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  (__builtin_expect(!(put_counts[await_tile] < NUM_DEPS), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 233, "put_counts[await_tile] < NUM_DEPS") : (void)0);
# 234 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 rm_stack(false, 0UL, "PUT", &____must_manage_PUT, ____alias_loc_id_7, ____chimes_did_disable6); return success;
# 240 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

int PUT(int row, int col) { return (____chimes_replaying ? PUT_resumable(row, col) : PUT_quick(row, col)); }

int PUT_DIAG_quick(int row, int col) {const int ____chimes_did_disable7 = new_stack((void *)(&PUT_DIAG), "PUT_DIAG", &____must_manage_PUT_DIAG, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "PUT_DIAG", &____must_manage_PUT_DIAG, ____alias_loc_id_8, ____chimes_did_disable7); return ({ calling_npm("PUT", 0); PUT_npm(row+1, col+1); }); }

int PUT_DIAG(int row, int col) { return (____chimes_replaying ? PUT_DIAG_resumable(row, col) : PUT_DIAG_quick(row, col)); }

int PUT_RCOL_quick(int row, int col) {const int ____chimes_did_disable8 = new_stack((void *)(&PUT_RCOL), "PUT_RCOL", &____must_manage_PUT_RCOL, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "PUT_RCOL", &____must_manage_PUT_RCOL, ____alias_loc_id_9, ____chimes_did_disable8); return ({ calling_npm("PUT", 0); PUT_npm(row, col+1); }); }

int PUT_RCOL(int row, int col) { return (____chimes_replaying ? PUT_RCOL_resumable(row, col) : PUT_RCOL_quick(row, col)); }

int PUT_BROW_quick(int row, int col) {const int ____chimes_did_disable9 = new_stack((void *)(&PUT_BROW), "PUT_BROW", &____must_manage_PUT_BROW, 2, 0, (size_t)(0UL), (size_t)(0UL)) ; ; ; rm_stack(false, 0UL, "PUT_BROW", &____must_manage_PUT_BROW, ____alias_loc_id_10, ____chimes_did_disable9); return ({ calling_npm("PUT", 0); PUT_npm(row+1, col); }); }

int PUT_BROW(int row, int col) { return (____chimes_replaying ? PUT_BROW_resumable(row, col) : PUT_BROW_quick(row, col)); }

signed char char_mapping_quick ( char c ) {const int ____chimes_did_disable10 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; ; ;
# 249 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 250 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_11, ____chimes_did_disable10); return to_be_returned;
# 258 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

signed char char_mapping ( char c ) { return (____chimes_replaying ? char_mapping_resumable(c) : char_mapping_quick(c)); }

void print_matrix_quick ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable11 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(8151418678253031942UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 261 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int i; int j; ;
# 262 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            fprintf(__stdoutp, "%d ", matrix[i][j]);
# 265 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(__stdoutp, "\n");
# 267 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp,"--------------------------------\n");
# 269 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_12, ____chimes_did_disable11); }

void print_matrix ( int** matrix, int n_rows, int n_columns ) { (____chimes_replaying ? print_matrix_resumable(matrix, n_rows, n_columns) : print_matrix_quick(matrix, n_rows, n_columns)); }

static void random_init_quick(signed char *s, unsigned long long len) {const int ____chimes_did_disable12 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(8151418678253033330UL), (size_t)(0UL)) ; ; ;
# 281 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 282 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         int r; r = (rand() % 5) ;
# 283 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        (__builtin_expect(!(r >= 0 && r < 5), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 283, "r >= 0 && r < 5") : (void)0);
# 284 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        s[i] = r;
# 285 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } }
# 286 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_19, ____chimes_did_disable12); }

static void random_init(signed char *s, unsigned long long len) { (____chimes_replaying ? random_init_resumable(s, len) : random_init_quick(s, len)); }

size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ) {const int ____chimes_did_disable13 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(8151418678253031989UL), (size_t)(0UL)) ; ; ;
# 289 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 290 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 291 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 292 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 293 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 294 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 295 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 296 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 297 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                break;
# 298 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 299 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 300 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 301 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_13, ____chimes_did_disable13); return non_ws_index;
# 302 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

size_t clear_whitespaces_do_mapping ( signed char* buffer, long size ) { return (____chimes_replaying ? clear_whitespaces_do_mapping_resumable(buffer, size) : clear_whitespaces_do_mapping_quick(buffer, size)); }

signed char* read_file_quick( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable14 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(8151418678253032031UL), (size_t)(8151418678253032032UL)) ; ; ;
# 305 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 306 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     long file_size; file_size = (ftell(file)) ;
# 307 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 308 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 309 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 8151418678253032012UL, 0, 0)) ;
# 310 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 311 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 312 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 313 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 314 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 315 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 316 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(true, 8151418678253032012UL, "read_file", &____must_manage_read_file, ____alias_loc_id_14, ____chimes_did_disable14); return file_buffer;
# 317 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

signed char* read_file( FILE* file, size_t* n_chars ) { return (____chimes_replaying ? read_file_resumable(file, n_chars) : read_file_quick(file, n_chars)); }

void add_tile_to_run_quick(int row, int col, tiles_to_run *q) {const int ____chimes_did_disable15 = new_stack((void *)(&add_tile_to_run), "add_tile_to_run", &____must_manage_add_tile_to_run, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(8151418678253032068UL)) ; ; ;
# 320 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (__builtin_expect(!(q->length < q->capacity), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 320, "q->length < q->capacity") : (void)0);
# 321 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 322 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 323 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 324 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "add_tile_to_run", &____must_manage_add_tile_to_run, ____alias_loc_id_15, ____chimes_did_disable15); }

void add_tile_to_run(int row, int col, tiles_to_run *q) { (____chimes_replaying ? add_tile_to_run_resumable(row, col, q) : add_tile_to_run_quick(row, col, q)); }

tile* pop_next_tile_quick(tiles_to_run *q) {const int ____chimes_did_disable16 = new_stack((void *)(&pop_next_tile), "pop_next_tile", &____must_manage_pop_next_tile, 1, 0, (size_t)(8151418678253032118UL)) ; ; ;
# 327 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (__builtin_expect(!(q->length >= 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 327, "q->length >= 0") : (void)0);
# 328 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 329 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 8151418678253033133UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return __null;
# 330 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } else {
# 331 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         tile *next; next = (q->q) ;
# 332 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 333 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 334 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        rm_stack(true, 8151418678253033133UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); return next;
# 335 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 336 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(true, 8151418678253033133UL, "pop_next_tile", &____must_manage_pop_next_tile, ____alias_loc_id_16, ____chimes_did_disable16); }

tile* pop_next_tile(tiles_to_run *q) { return (____chimes_replaying ? pop_next_tile_resumable(q) : pop_next_tile_quick(q)); }

void task_func_quick(int i, int j, tiles_to_run *next) {const int ____chimes_did_disable17 = new_stack((void *)(&task_func), "task_func", &____must_manage_task_func, 3, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(8151418678253032580UL)) ; ; ;
# 339 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ii; int jj; ;
# 340 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int threadId; threadId = (omp_get_thread_num()) ;
# 341 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int **local_matrix; local_matrix = (worker_tiles[threadId]) ;
# 342 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 343 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int diag_index; diag_index = (((n_tiles_y - 1) + (j - i))) ;
# 344 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *diag; diag = (&tile_diag[diag_index]) ;
# 345 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_y; tile_edge_y = (tile_edges_y[i]) ;
# 346 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int *tile_edge_x; tile_edge_x = (tile_edges_x[j]) ;
# 347 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 348 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 349 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 350 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii-1]; };
# 352 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 353 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii-1]; };
# 355 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 356 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 357 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 358 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_1; char_from_1 = (string_1[(j - 1) * tile_width + jj - 1]) ;
# 359 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char char_from_2; char_from_2 = (string_2[(i - 1) * tile_height + ii - 1]) ;
# 360 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 361 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int diag_score; diag_score = (local_matrix[ii - 1][jj - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 362 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int left_score; left_score = (local_matrix[ii][jj - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 363 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int top_score; top_score = (local_matrix[ii - 1][jj] + alignment_score_matrix[GAP][char_from_2]) ;
# 364 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 365 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 366 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 367 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  }
# 368 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 369 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 370 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 371 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { tile_edge_y[ii-1] = local_matrix[ii][tile_width]; };
# 373 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { tile_edge_x[ii-1] = local_matrix[tile_height][ii]; };
# 375 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 376 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {; bool ____chimes_disable0; ____chimes_disable0 = disable_current_thread();
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 378 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        {
# 379 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 380 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, j); })) ;
# 381 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 382 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 383 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 384 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 385 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 386 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 387 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 388 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 389 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, j); })) ;
# 390 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 391 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i) ;
# 392 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j + 1) ;
# 393 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 394 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 395 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 396 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 397 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 398 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                 int success; success = (({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(i, j); })) ;
# 399 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 400 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int row; row = (i + 1) ;
# 401 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                     int col; col = (j) ;
# 402 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("add_tile_to_run", 0); add_tile_to_run_npm(row, col, next); });
# 403 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 404 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 405 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        } reenable_current_thread(____chimes_disable0);
# 406 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 407 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 408 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 409 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 410 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 411 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
rm_stack(false, 0UL, "task_func", &____must_manage_task_func, ____alias_loc_id_17, ____chimes_did_disable17); }

void task_func(int i, int j, tiles_to_run *next) { (____chimes_replaying ? task_func_resumable(i, j, next) : task_func_quick(i, j, next)); }

int main_quick ( int argc, char* argv[] ) {const int ____chimes_did_disable18 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(8151418678253033286UL)) ; tiles_to_run *tmp;
bool done;
tile *mine;
tiles_to_run *next;
tiles_to_run *curr;
int result_col;
int result_row;
int j;
int i;
 register_stack_vars(9, "main|tmp|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&tmp), (size_t)8, 1, 0, 0, "main|done|0", (int *)0x0, "i8", (void *)(&done), (size_t)1, 0, 0, 0, "main|mine|0", (int *)0x0, "%struct._tile*", (void *)(&mine), (size_t)8, 1, 0, 0, "main|next|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&next), (size_t)8, 1, 0, 0, "main|curr|0", (int *)0x0, "%struct._tiles_to_run*", (void *)(&curr), (size_t)8, 1, 0, 0, "main|result_col|0", (int *)0x0, "i32", (void *)(&result_col), (size_t)4, 0, 0, 0, "main|result_row|0", (int *)0x0, "i32", (void *)(&result_row), (size_t)4, 0, 0, 0, "main|j|0", (int *)0x0, "i32", (void *)(&j), (size_t)4, 0, 0, 0, "main|i|0", (int *)0x0, "i32", (void *)(&i), (size_t)4, 0, 0, 0); ; ;
# 414 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
      int level; ;; { call_lbl_49: void *____chimes_parent_ctx1 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth0 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth0 = get_thread_stack_depth(); size_t ____chimes_region_id0; unsigned ____chimes_parent_thread0 = entering_omp_parallel(49, &____chimes_region_id0, 1, &done);
# 415 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 416 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 417 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread0, ____chimes_parent_ctx1, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth0, ____chimes_region_id0, 1, &done); ;
# 418 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  nthreads = omp_get_num_threads();
# 419 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  thread_leaving(); } leaving_omp_parallel(____chimes_call_stack_depth0, ____chimes_region_id0, 0); }
# 420 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 421 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if ( argc != 5 ) {
# 422 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(__stderrp, "Usage: %s length1 length2 tileWidth tileHeight\n", argv[0]);
# 423 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        exit(1);
# 424 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 425 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 426 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Running SmithWaterman (OpenMP) with %d threads\n", nthreads);
# 427 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 428 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length1; length1 = (strtoull(argv[1], __null, 10)) ;
# 429 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long length2; length2 = (strtoull(argv[2], __null, 10)) ;
# 430 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 431 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_width = (int) atoi (argv[3]);
# 432 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    tile_height = (int) atoi (argv[4]);
# 433 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 434 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_1; n_char_in_file_1 = (length1) ;
# 435 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     unsigned long long n_char_in_file_2; n_char_in_file_2 = (length2) ;
# 436 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 437 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 8151418678253032302UL, 0, 0);
# 438 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 8151418678253032302UL, 0, 0);
# 439 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 440 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 441 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 442 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 443 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Tile width  %d\n", tile_width);
# 444 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Tile height %d\n", tile_height);
# 445 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 446 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_1 % tile_width) { fprintf(__stderrp, "String1 length should be multiple of tile width\n"); exit(1); }
# 447 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (n_char_in_file_2 % tile_height) { fprintf(__stderrp, "String2 length should be multiple of tile height\n"); exit(1); }
# 448 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 449 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_x = n_char_in_file_1/tile_width;
# 450 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    n_tiles_y = n_char_in_file_2/tile_height;
# 451 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 452 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "Computing %d x %d intra-node tiles\n", n_tiles_x, n_tiles_y);
# 453 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 454 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_1 = n_char_in_file_1;
# 455 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    strlen_2 = n_char_in_file_2;
# 456 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 457 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 458 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 459 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 460 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_x++;
# 461 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 n_tiles_y++;
# 462 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 463 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_tiles; num_tiles = (n_tiles_x * n_tiles_y) ;
# 464 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 put_counts = (int*)malloc_wrapper(sizeof(int)*num_tiles, 8151418678253031802UL, 0, 0);
# 465 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i=0; i<num_tiles; i++) {
# 466 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[i] = 0;
# 467 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 468 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 469 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 470 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  int num_diags; num_diags = (n_tiles_x + n_tiles_y - 1) ;
# 471 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag = (int*)malloc_wrapper(sizeof(int)*num_diags, 8151418678253031802UL, 0, 0);
# 472 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_diag[((n_tiles_y - 1) + (0 - 0))] = 0;
# 473 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, 0); });
# 474 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 475 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 476 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (i - 0))] = -1*(i*tile_width);
# 477 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(0, i); });
# 478 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 479 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 480 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_diag[((n_tiles_y - 1) + (0 - i))] = -1*(i*tile_height);
# 481 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_DIAG", 0); PUT_DIAG_npm(i, 0); });
# 482 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 483 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 484 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 485 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_y = (int**)malloc_wrapper(sizeof(int*)*n_tiles_y, 8151418678253032211UL, 1, 0);
# 486 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) {
# 487 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_y[i] = (int*)malloc_wrapper(sizeof(int)*(tile_height), 8151418678253032213UL, 0, 0);
# 488 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height; j++) { tile_edges_y[i][j] = -1*((i-1)*tile_height+j); };
# 490 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_RCOL", 0); PUT_RCOL_npm(i, 0); });
# 491 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 492 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 493 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 494 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 tile_edges_x = (int**)malloc_wrapper(sizeof(int*)*n_tiles_x, 8151418678253032211UL, 1, 0);
# 495 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) {
# 496 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  tile_edges_x[i] = (int*)malloc_wrapper(sizeof(int)*(tile_width), 8151418678253032213UL, 0, 0);
# 497 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_width; j++) { tile_edges_x[i][j] = -1*((i-1)*tile_width+j); };
# 499 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  ({ calling_npm("PUT_BROW", 0); PUT_BROW_npm(0, i); });
# 500 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 501 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 502 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 503 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 worker_tiles = (int***)malloc_wrapper(sizeof(int**)*nthreads, 8151418678253032190UL, 1, 0);
# 504 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 505 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  worker_tiles[i] = (int**)malloc_wrapper(sizeof(int*)*(tile_height+1), 8151418678253032402UL, 1, 0);
# 506 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { worker_tiles[i][j] = (int*)malloc_wrapper(sizeof(int)*(tile_width+1), 8151418678253032404UL, 0, 0); };
# 508 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 509 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 510 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 511 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[DIAG_KIND] = 1;
# 512 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[RCOL_KIND] = tile_height;
# 513 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 dsizes[BROW_KIND] = tile_width;
# 514 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 515 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_size = dsizes[0];
# 516 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < NUM_DEPS; i++) { if (max_size < dsizes[i]) {max_size = dsizes[i]; }; };
# 518 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 max_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 8151418678253031802UL, 0, 0);
# 519 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 temp_buffer = (int*)malloc_wrapper(sizeof(int)*max_size, 8151418678253031802UL, 0, 0);
# 549 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 549 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_row = (n_tiles_y - 1) ;
# 550 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    result_col = (n_tiles_x - 1) ;
# 551 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 done = 0;
# 552 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 553 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&begin,0);
# 554 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 555 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       curr = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 8151418678253033037UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 556 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 8151418678253033046UL, 0, 1, (int)sizeof(struct _tile), 0);
# 557 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->q = curr->base;
# 558 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->capacity = n_tiles_y * n_tiles_x;
# 559 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    curr->length = 1;
# 560 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].row = 1;
# 561 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (curr->base)[0].col = 1;
# 562 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 563 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
       next = ((tiles_to_run *)malloc_wrapper(sizeof(tiles_to_run), 8151418678253033037UL, 0, 1, (int)sizeof(struct _tiles_to_run), 2, (int)__builtin_offsetof(struct _tiles_to_run, q), (int)__builtin_offsetof(struct _tiles_to_run, base))) ;
# 564 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->base = (tile *)malloc_wrapper(sizeof(tile) * n_tiles_y * n_tiles_x, 8151418678253033046UL, 0, 1, (int)sizeof(struct _tile), 0);
# 565 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->q = next->base;
# 566 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->capacity = n_tiles_y * n_tiles_x;
# 567 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    next->length = 0;
# 568 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 569 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while (curr->length > 0) {
# 570 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           mine = (__null); { call_lbl_50: void *____chimes_parent_ctx2 = get_thread_ctx(); unsigned ____chimes_parent_stack_depth1 = get_parent_vars_stack_depth(); unsigned ____chimes_call_stack_depth1 = get_thread_stack_depth(); size_t ____chimes_region_id1; unsigned ____chimes_parent_thread1 = entering_omp_parallel(50, &____chimes_region_id1, 2, &done, &mine); ;
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp parallel firstprivate(mine) firstprivate(done)
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 571 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 572 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        { register_thread_local_stack_vars(LIBCHIMES_THREAD_NUM(), ____chimes_parent_thread1, ____chimes_parent_ctx2, LIBCHIMES_NUM_THREADS(), ____chimes_parent_stack_depth1, ____chimes_region_id1, 2, &done, &mine); ;
# 573 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
               done = (false) ;
# 574 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 575 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            while (!done) {; bool ____chimes_disable3; ____chimes_disable3 = disable_current_thread();
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 576 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 577 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                {
# 578 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    mine = ({ calling_npm("pop_next_tile", 0); pop_next_tile_npm(curr); });
# 579 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                } reenable_current_thread(____chimes_disable3);
# 580 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                done = (mine == __null);
# 581 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 582 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (!done) {
# 583 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    ({ calling_npm("task_func", 0); task_func_npm(mine->row, mine->col, next); });
# 584 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 585 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 586 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         thread_leaving(); } leaving_omp_parallel(____chimes_call_stack_depth1, ____chimes_region_id1, 0); }
# 587 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 588 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
           tmp = (curr) ;
# 589 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr = next;
# 590 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next = tmp;
# 591 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 592 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        curr->q = curr->base;
# 593 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 594 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        next->length = 0;
# 595 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 596 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 597 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
         call_lbl_34: checkpoint_transformed(34, ____alias_loc_id_0);
# 598 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 599 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 600 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 601 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    gettimeofday(&end,0);
# 602 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
     int score; score = (tile_diag[((n_tiles_y - 1) + (result_col - result_row))]) ;
# 603 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "score: %d\n", score);
# 604 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp, "The computation took %f seconds\n",((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 605 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 606 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 0; i < nthreads; i++) {
# 607 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for (j = 0; j < tile_height+1; j++) { free_wrapper(worker_tiles[i][j], 8151418678253032404UL); };
# 609 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  free_wrapper(worker_tiles[i], 8151418678253032402UL);
# 610 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 611 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(worker_tiles, 8151418678253032190UL);
# 612 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 613 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_y; i++) { free_wrapper(tile_edges_y[i], 8151418678253032213UL); };
# 615 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_y, 8151418678253032211UL);
# 616 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 617 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (i = 1; i < n_tiles_x; i++) { free_wrapper(tile_edges_x[i], 8151418678253032213UL); };
# 619 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_edges_x, 8151418678253032211UL);
# 620 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 621 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(tile_diag, 8151418678253031802UL);
# 622 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 623 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_1, 8151418678253032302UL);
# 624 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 free_wrapper(string_2, 8151418678253032302UL);
# 625 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 626 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_18, ____chimes_did_disable18); return 0;
# 627 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

int main ( int argc, char* argv[] ) { init_chimes(); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }



int GUID_DIAG_npm(int r, int c) { return (0*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_RCOL_npm(int r, int c) { return (1*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int GUID_BROW_npm(int r, int c) { return (2*(n_tiles_x * n_tiles_y) + (r * n_tiles_x + c)); }

int TILE_ROW_npm(int guid) { return (guid % (n_tiles_x * n_tiles_y)) / n_tiles_x; }

int TILE_COL_npm(int guid) { return (guid % (n_tiles_x * n_tiles_y)) % n_tiles_x; }

int GUID_KIND_npm(int guid) { return guid / (n_tiles_x * n_tiles_y); }

int PUT_npm(int row, int col) {
# 226 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (row > (n_tiles_y-1)) {return 0; };
# 227 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (col > (n_tiles_x-1)) {return 0; };
# 228 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 229 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int success = 0;
# 230 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int await_tile = GUID_DIAG_npm(row, col);
# 231 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 232 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 {
# 233 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  (__builtin_expect(!(put_counts[await_tile] < NUM_DEPS), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 233, "put_counts[await_tile] < NUM_DEPS") : (void)0);
# 234 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  put_counts[await_tile]++;
# 235 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  if (put_counts[await_tile] == NUM_DEPS) {
# 236 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   success = 1;
# 237 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 238 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 239 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 return success;
# 240 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

int PUT_DIAG_npm(int row, int col) { return PUT_npm(row+1, col+1); }

int PUT_RCOL_npm(int row, int col) { return PUT_npm(row, col+1); }

int PUT_BROW_npm(int row, int col) { return PUT_npm(row+1, col); }

signed char char_mapping_npm ( char c ) {
# 249 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char to_be_returned = -1;
# 250 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    switch(c) {
# 251 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case '_': to_be_returned = GAP; break;
# 252 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 253 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 254 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 255 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 256 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 257 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    return to_be_returned;
# 258 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

void print_matrix_npm ( int** matrix, int n_rows, int n_columns ) {
# 261 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    int i, j;
# 262 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 263 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 264 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            fprintf(__stdoutp, "%d ", matrix[i][j]);
# 265 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 266 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        fprintf(__stdoutp, "\n");
# 267 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 268 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fprintf(__stdoutp,"--------------------------------\n");
# 269 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

static void random_init_npm(signed char *s, unsigned long long len) {
# 281 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    for (unsigned long long i = 0; i < len; i++) {
# 282 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        int r = rand() % 5;
# 283 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        (__builtin_expect(!(r >= 0 && r < 5), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 283, "r >= 0 && r < 5") : (void)0);
# 284 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        s[i] = r;
# 285 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 286 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size ) {
# 289 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    size_t non_ws_index = 0, traverse_index = 0;
# 290 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 291 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    while ( traverse_index < size ) {
# 292 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        char curr_char = buffer[traverse_index];
# 293 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        switch ( curr_char ) {
# 294 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 295 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 296 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                buffer[non_ws_index++] = char_mapping_npm(curr_char);
# 297 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                break;
# 298 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 299 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        ++traverse_index;
# 300 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 301 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    return non_ws_index;
# 302 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

signed char* read_file_npm( FILE* file, size_t* n_chars ) {
# 305 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 2);
# 306 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    long file_size = ftell (file);
# 307 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    fseek (file, 0L, 0);
# 308 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 309 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    signed char *file_buffer = (signed char *)malloc_wrapper((1+file_size)*sizeof(signed char), 8151418678253032012UL, 0, 0);
# 310 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 311 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    size_t n_read_from_file = fread(file_buffer, sizeof(signed char), file_size, file);
# 312 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    file_buffer[file_size] = '\n';
# 313 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 314 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 315 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    *n_chars = clear_whitespaces_do_mapping_npm(file_buffer, file_size);
# 316 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    return file_buffer;
# 317 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

void add_tile_to_run_npm(int row, int col, tiles_to_run *q) {
# 320 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (__builtin_expect(!(q->length < q->capacity), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 320, "q->length < q->capacity") : (void)0);
# 321 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].row = row;
# 322 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->base[q->length].col = col;
# 323 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    q->length = q->length + 1;
# 324 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

tile* pop_next_tile_npm(tiles_to_run *q) {
# 327 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    (__builtin_expect(!(q->length >= 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp", 327, "q->length >= 0") : (void)0);
# 328 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    if (q->length == 0) {
# 329 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        return __null;
# 330 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    } else {
# 331 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        tile *next = q->q;
# 332 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->q = q->q + 1;
# 333 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        q->length = q->length - 1;
# 334 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        return next;
# 335 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
    }
# 336 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}

void task_func_npm(int i, int j, tiles_to_run *next) {
# 339 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ii, jj;
# 340 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int threadId = omp_get_thread_num();
# 341 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int ** local_matrix = worker_tiles[threadId];
# 342 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 343 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int diag_index = ((n_tiles_y - 1) + (j - i));
# 344 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int * diag = &tile_diag[diag_index];
# 345 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int * tile_edge_y = tile_edges_y[i];
# 346 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 int * tile_edge_x = tile_edges_x[j];
# 347 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 348 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 local_matrix[0][0] = *diag;
# 349 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 350 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { local_matrix[0][ii] = tile_edge_x[ii-1]; };
# 352 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 353 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { local_matrix[ii][0] = tile_edge_y[ii-1]; };
# 355 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 356 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for ( ii = 1; ii < tile_height+1; ++ii ) {
# 357 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  for ( jj = 1; jj < tile_width+1; ++jj ) {
# 358 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   signed char char_from_1 = string_1[(j-1)*tile_width+jj-1];
# 359 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   signed char char_from_2 = string_2[(i-1)*tile_height+ii-1];
# 360 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 361 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int diag_score = local_matrix[ii-1][jj-1] + alignment_score_matrix[char_from_2][char_from_1];
# 362 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int left_score = local_matrix[ii ][jj-1] + alignment_score_matrix[char_from_1][GAP];
# 363 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int top_score = local_matrix[ii-1][jj ] + alignment_score_matrix[GAP][char_from_2];
# 364 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 365 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
# 366 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
   local_matrix[ii][jj] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 367 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
  }
# 368 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 369 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 370 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 *diag = local_matrix[tile_height][tile_width];
# 371 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_height+1; ++ii) { tile_edge_y[ii-1] = local_matrix[ii][tile_width]; };
# 373 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 for (ii = 1; ii < tile_width+1; ++ii) { tile_edge_x[ii-1] = local_matrix[tile_height][ii]; };
# 375 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 376 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 if (i != (n_tiles_y - 1) || j != (n_tiles_x - 1)) {
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
#pragma omp critical
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 377 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 378 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        {
# 379 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if (((i+1) < n_tiles_y) && ((j+1) < n_tiles_x)) {
# 380 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_DIAG_npm(i, j);
# 381 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 382 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int row = i + 1;
# 383 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int col = j + 1;
# 384 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 385 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 386 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 387 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 388 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((j+1) < n_tiles_x) {
# 389 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_RCOL_npm(i, j);
# 390 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 391 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int row = i;
# 392 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int col = j + 1;
# 393 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 394 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 395 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 396 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 397 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            if ((i+1) < n_tiles_y) {
# 398 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                int success = PUT_BROW_npm(i, j);
# 399 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                if (success) {
# 400 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int row = i + 1;
# 401 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    int col = j;
# 402 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                    add_tile_to_run_npm(row, col, next);
# 403 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
                }
# 404 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
            }
# 405 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
        }
# 406 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
 }
# 407 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 408 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 409 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 410 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
# 411 "/Users/jmg3/chimes/src/examples/openmp/./smithWaterman/smith_waterman_omp.cpp"
}





static int module_init() {
    init_module(8151418678253031661UL, 33, 19, 0, 20, 18, 0, 18, 21, 0, 8,
                           &____alias_loc_id_0, (unsigned)32, (unsigned)3, (8151418678253031661UL + 141UL), (8151418678253031661UL + 529UL), (8151418678253031661UL + 550UL), (8151418678253031661UL + 552UL), (8151418678253031661UL + 741UL), (8151418678253031661UL + 920UL), (8151418678253031661UL + 921UL), (8151418678253031661UL + 922UL), (8151418678253031661UL + 923UL), (8151418678253031661UL + 924UL), (8151418678253031661UL + 926UL), (8151418678253031661UL + 927UL), (8151418678253031661UL + 928UL), (8151418678253031661UL + 929UL), (8151418678253031661UL + 930UL), (8151418678253031661UL + 931UL), (8151418678253031661UL + 932UL), (8151418678253031661UL + 933UL), (8151418678253031661UL + 934UL), (8151418678253031661UL + 935UL), (8151418678253031661UL + 936UL), (8151418678253031661UL + 937UL), (8151418678253031661UL + 938UL), (8151418678253031661UL + 1376UL), (8151418678253031661UL + 1385UL), (8151418678253031661UL + 1683UL), (8151418678253031661UL + 1685UL), (8151418678253031661UL + 1691UL), (8151418678253031661UL + 1693UL), (8151418678253031661UL + 1695UL), (8151418678253031661UL + 1701UL), (8151418678253031661UL + 1703UL), "task_func", (unsigned)1, (8151418678253031661UL + 1376UL), "random_init", (unsigned)1, (8151418678253031661UL + 641UL), "pop_next_tile", (unsigned)1, (8151418678253031661UL + 1376UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (8151418678253031661UL + 1UL), (8151418678253031661UL + 2UL),
                           &____alias_loc_id_2, (unsigned)2, (unsigned)0, (8151418678253031661UL + 22UL), (8151418678253031661UL + 23UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (8151418678253031661UL + 41UL), (8151418678253031661UL + 42UL),
                           &____alias_loc_id_4, (unsigned)1, (unsigned)0, (8151418678253031661UL + 60UL),
                           &____alias_loc_id_5, (unsigned)1, (unsigned)0, (8151418678253031661UL + 72UL),
                           &____alias_loc_id_6, (unsigned)1, (unsigned)0, (8151418678253031661UL + 84UL),
                           &____alias_loc_id_7, (unsigned)6, (unsigned)0, (8151418678253031661UL + 94UL), (8151418678253031661UL + 95UL), (8151418678253031661UL + 96UL), (8151418678253031661UL + 97UL), (8151418678253031661UL + 98UL), (8151418678253031661UL + 141UL),
                           &____alias_loc_id_8, (unsigned)2, (unsigned)0, (8151418678253031661UL + 168UL), (8151418678253031661UL + 169UL),
                           &____alias_loc_id_9, (unsigned)2, (unsigned)0, (8151418678253031661UL + 182UL), (8151418678253031661UL + 183UL),
                            &____alias_loc_id_10, (unsigned)2, (unsigned)0, (8151418678253031661UL + 195UL), (8151418678253031661UL + 196UL),
                            &____alias_loc_id_11, (unsigned)2, (unsigned)0, (8151418678253031661UL + 208UL), (8151418678253031661UL + 209UL),
                            &____alias_loc_id_12, (unsigned)5, (unsigned)0, (8151418678253031661UL + 230UL), (8151418678253031661UL + 231UL), (8151418678253031661UL + 232UL), (8151418678253031661UL + 233UL), (8151418678253031661UL + 234UL),
                            &____alias_loc_id_13, (unsigned)6, (unsigned)0, (8151418678253031661UL + 286UL), (8151418678253031661UL + 287UL), (8151418678253031661UL + 288UL), (8151418678253031661UL + 289UL), (8151418678253031661UL + 290UL), (8151418678253031661UL + 328UL),
                            &____alias_loc_id_14, (unsigned)7, (unsigned)1, (8151418678253031661UL + 330UL), (8151418678253031661UL + 331UL), (8151418678253031661UL + 332UL), (8151418678253031661UL + 333UL), (8151418678253031661UL + 334UL), (8151418678253031661UL + 351UL), (8151418678253031661UL + 371UL), "clear_whitespaces_do_mapping", (unsigned)1, (8151418678253031661UL + 351UL),
                            &____alias_loc_id_15, (unsigned)5, (unsigned)0, (8151418678253031661UL + 381UL), (8151418678253031661UL + 382UL), (8151418678253031661UL + 383UL), (8151418678253031661UL + 407UL), (8151418678253031661UL + 413UL),
                            &____alias_loc_id_16, (unsigned)4, (unsigned)0, (8151418678253031661UL + 439UL), (8151418678253031661UL + 440UL), (8151418678253031661UL + 441UL), (8151418678253031661UL + 457UL),
                            &____alias_loc_id_17, (unsigned)29, (unsigned)1, (8151418678253031661UL + 141UL), (8151418678253031661UL + 489UL), (8151418678253031661UL + 490UL), (8151418678253031661UL + 491UL), (8151418678253031661UL + 492UL), (8151418678253031661UL + 493UL), (8151418678253031661UL + 494UL), (8151418678253031661UL + 495UL), (8151418678253031661UL + 496UL), (8151418678253031661UL + 497UL), (8151418678253031661UL + 498UL), (8151418678253031661UL + 499UL), (8151418678253031661UL + 500UL), (8151418678253031661UL + 501UL), (8151418678253031661UL + 502UL), (8151418678253031661UL + 503UL), (8151418678253031661UL + 504UL), (8151418678253031661UL + 505UL), (8151418678253031661UL + 506UL), (8151418678253031661UL + 507UL), (8151418678253031661UL + 508UL), (8151418678253031661UL + 509UL), (8151418678253031661UL + 510UL), (8151418678253031661UL + 511UL), (8151418678253031661UL + 512UL), (8151418678253031661UL + 513UL), (8151418678253031661UL + 514UL), (8151418678253031661UL + 552UL), (8151418678253031661UL + 743UL), "add_tile_to_run", (unsigned)1, (8151418678253031661UL + 919UL),
                            &____alias_loc_id_18, (unsigned)30, (unsigned)3, (8151418678253031661UL + 141UL), (8151418678253031661UL + 529UL), (8151418678253031661UL + 550UL), (8151418678253031661UL + 552UL), (8151418678253031661UL + 741UL), (8151418678253031661UL + 920UL), (8151418678253031661UL + 921UL), (8151418678253031661UL + 922UL), (8151418678253031661UL + 923UL), (8151418678253031661UL + 924UL), (8151418678253031661UL + 926UL), (8151418678253031661UL + 927UL), (8151418678253031661UL + 928UL), (8151418678253031661UL + 929UL), (8151418678253031661UL + 930UL), (8151418678253031661UL + 931UL), (8151418678253031661UL + 932UL), (8151418678253031661UL + 933UL), (8151418678253031661UL + 934UL), (8151418678253031661UL + 935UL), (8151418678253031661UL + 939UL), (8151418678253031661UL + 1376UL), (8151418678253031661UL + 1385UL), (8151418678253031661UL + 1683UL), (8151418678253031661UL + 1685UL), (8151418678253031661UL + 1691UL), (8151418678253031661UL + 1693UL), (8151418678253031661UL + 1695UL), (8151418678253031661UL + 1701UL), (8151418678253031661UL + 1703UL), "task_func", (unsigned)1, (8151418678253031661UL + 1376UL), "random_init", (unsigned)1, (8151418678253031661UL + 641UL), "pop_next_tile", (unsigned)1, (8151418678253031661UL + 1376UL),
                            &____alias_loc_id_19, (unsigned)5, (unsigned)0, (8151418678253031661UL + 1631UL), (8151418678253031661UL + 1632UL), (8151418678253031661UL + 1633UL), (8151418678253031661UL + 1634UL), (8151418678253031661UL + 1669UL),
                            "GUID_DIAG", (void *)(&GUID_DIAG_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 0,
                            "GUID_RCOL", (void *)(&GUID_RCOL_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 0,
                            "GUID_BROW", (void *)(&GUID_BROW_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 0,
                            "TILE_ROW", (void *)(&TILE_ROW_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "TILE_COL", (void *)(&TILE_COL_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "GUID_KIND", (void *)(&GUID_KIND_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "PUT", (void *)(&PUT_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 2, "GUID_DIAG", 2, 0UL, 0UL, 0UL, "__assert_rtn", 4, (8151418678253031661UL + 1704UL), (8151418678253031661UL + 1705UL), 0UL, (8151418678253031661UL + 1706UL), 0UL,
                            "PUT_DIAG", (void *)(&PUT_DIAG_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "PUT_RCOL", (void *)(&PUT_RCOL_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "PUT_BROW", (void *)(&PUT_BROW_npm), (void *)__null, 0, 2, 0UL, 0UL, 0UL, 1, "PUT", 2, 0UL, 0UL, 0UL,
                            "char_mapping", (void *)(&char_mapping_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "print_matrix", (void *)(&print_matrix_npm), (void *)__null, 0, 3, (8151418678253031661UL + 281UL), 0UL, 0UL, 0UL, 3, "fprintf", 3, (8151418678253031661UL + 255UL), (8151418678253031661UL + 1704UL), 0UL, 0UL, "fprintf", 2, (8151418678253031661UL + 255UL), (8151418678253031661UL + 1709UL), 0UL, "fprintf", 2, (8151418678253031661UL + 255UL), (8151418678253031661UL + 1706UL), 0UL,
                            "random_init", (void *)(&random_init_npm), (void *)__null, 0, 2, (8151418678253031661UL + 1669UL), 0UL, 0UL, 2, "rand", 0, 0UL, "__assert_rtn", 4, (8151418678253031661UL + 1726UL), (8151418678253031661UL + 1705UL), 0UL, (8151418678253031661UL + 1711UL), 0UL,
                            "clear_whitespaces_do_mapping", (void *)(&clear_whitespaces_do_mapping_npm), (void *)__null, 0, 2, (8151418678253031661UL + 328UL), 0UL, 0UL, 1, "char_mapping", 1, 0UL, 0UL,
                            "read_file", (void *)(&read_file_npm), (void *)__null, 0, 2, (8151418678253031661UL + 370UL), (8151418678253031661UL + 371UL), (8151418678253031661UL + 351UL), 6, "fseek", 3, (8151418678253031661UL + 370UL), 0UL, 0UL, 0UL, "ftell", 1, (8151418678253031661UL + 370UL), 0UL, "fseek", 3, (8151418678253031661UL + 370UL), 0UL, 0UL, 0UL, "malloc", 1, 0UL, (8151418678253031661UL + 351UL), "fread", 4, (8151418678253031661UL + 351UL), 0UL, 0UL, (8151418678253031661UL + 370UL), 0UL, "clear_whitespaces_do_mapping", 2, (8151418678253031661UL + 351UL), 0UL, 0UL,
                            "add_tile_to_run", (void *)(&add_tile_to_run_npm), (void *)__null, 0, 3, 0UL, 0UL, (8151418678253031661UL + 407UL), 0UL, 1, "__assert_rtn", 4, (8151418678253031661UL + 1711UL), (8151418678253031661UL + 1705UL), 0UL, (8151418678253031661UL + 1712UL), 0UL,
                            "pop_next_tile", (void *)(&pop_next_tile_npm), (void *)__null, 0, 1, (8151418678253031661UL + 457UL), (8151418678253031661UL + 1472UL), 1, "__assert_rtn", 4, (8151418678253031661UL + 1713UL), (8151418678253031661UL + 1705UL), 0UL, (8151418678253031661UL + 1714UL), 0UL,
                            "task_func", (void *)(&task_func_npm), (void *)__null, 0, 3, 0UL, 0UL, (8151418678253031661UL + 919UL), 0UL, 7, "omp_get_thread_num", 0, 0UL, "PUT_DIAG", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (8151418678253031661UL + 919UL), 0UL, "PUT_RCOL", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (8151418678253031661UL + 919UL), 0UL, "PUT_BROW", 2, 0UL, 0UL, 0UL, "add_tile_to_run", 3, 0UL, 0UL, (8151418678253031661UL + 919UL), 0UL,
                           "GUID_DIAG", &(____chimes_does_checkpoint_GUID_DIAG_npm),
                           "GUID_RCOL", &(____chimes_does_checkpoint_GUID_RCOL_npm),
                           "GUID_BROW", &(____chimes_does_checkpoint_GUID_BROW_npm),
                           "TILE_ROW", &(____chimes_does_checkpoint_TILE_ROW_npm),
                           "TILE_COL", &(____chimes_does_checkpoint_TILE_COL_npm),
                           "GUID_KIND", &(____chimes_does_checkpoint_GUID_KIND_npm),
                           "PUT", &(____chimes_does_checkpoint_PUT_npm),
                           "PUT_DIAG", &(____chimes_does_checkpoint_PUT_DIAG_npm),
                           "PUT_RCOL", &(____chimes_does_checkpoint_PUT_RCOL_npm),
                           "PUT_BROW", &(____chimes_does_checkpoint_PUT_BROW_npm),
                           "char_mapping", &(____chimes_does_checkpoint_char_mapping_npm),
                           "print_matrix", &(____chimes_does_checkpoint_print_matrix_npm),
                           "random_init", &(____chimes_does_checkpoint_random_init_npm),
                           "clear_whitespaces_do_mapping", &(____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm),
                           "read_file", &(____chimes_does_checkpoint_read_file_npm),
                           "add_tile_to_run", &(____chimes_does_checkpoint_add_tile_to_run_npm),
                           "pop_next_tile", &(____chimes_does_checkpoint_pop_next_tile_npm),
                           "task_func", &(____chimes_does_checkpoint_task_func_npm),
                             (8151418678253031661UL + 741UL), (8151418678253031661UL + 743UL),
                             (8151418678253031661UL + 1691UL), (8151418678253031661UL + 550UL),
                             (8151418678253031661UL + 331UL), (8151418678253031661UL + 371UL),
                             (8151418678253031661UL + 550UL), (8151418678253031661UL + 552UL),
                             (8151418678253031661UL + 333UL), (8151418678253031661UL + 351UL),
                             (8151418678253031661UL + 457UL), (8151418678253031661UL + 1472UL),
                             (8151418678253031661UL + 498UL), (8151418678253031661UL + 552UL),
                             (8151418678253031661UL + 499UL), (8151418678253031661UL + 552UL),
                             (8151418678253031661UL + 495UL), (8151418678253031661UL + 741UL),
                             (8151418678253031661UL + 497UL), (8151418678253031661UL + 141UL),
                             (8151418678253031661UL + 230UL), (8151418678253031661UL + 281UL),
                             (8151418678253031661UL + 491UL), (8151418678253031661UL + 919UL),
                             (8151418678253031661UL + 1631UL), (8151418678253031661UL + 1669UL),
                             (8151418678253031661UL + 407UL), (8151418678253031661UL + 413UL),
                             (8151418678253031661UL + 938UL), (8151418678253031661UL + 1376UL),
                             (8151418678253031661UL + 1693UL), (8151418678253031661UL + 141UL),
                             (8151418678253031661UL + 1376UL), (8151418678253031661UL + 1385UL),
                             (8151418678253031661UL + 281UL), (8151418678253031661UL + 262UL),
                             (8151418678253031661UL + 529UL), (8151418678253031661UL + 741UL),
                             (8151418678253031661UL + 935UL), (8151418678253031661UL + 1376UL),
                             (8151418678253031661UL + 934UL), (8151418678253031661UL + 1376UL),
                             (8151418678253031661UL + 441UL), (8151418678253031661UL + 1472UL),
                             (8151418678253031661UL + 440UL), (8151418678253031661UL + 457UL),
                             (8151418678253031661UL + 330UL), (8151418678253031661UL + 370UL),
                             (8151418678253031661UL + 383UL), (8151418678253031661UL + 407UL),
                             (8151418678253031661UL + 1625UL), (8151418678253031661UL + 966UL),
                             (8151418678253031661UL + 1707UL), (8151418678253031661UL + 255UL),
                             (8151418678253031661UL + 936UL), (8151418678253031661UL + 1472UL),
                             (8151418678253031661UL + 1683UL), (8151418678253031661UL + 641UL),
                             (8151418678253031661UL + 1695UL), (8151418678253031661UL + 529UL),
                             (8151418678253031661UL + 439UL), (8151418678253031661UL + 1472UL),
                             (8151418678253031661UL + 922UL), (8151418678253031661UL + 1625UL),
                             (8151418678253031661UL + 286UL), (8151418678253031661UL + 328UL),
                     "Nucleotide", 0,
                     "TILE_DEPS", 0,
                     "__sFILE", 20, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "void*", (int)__builtin_offsetof (struct __sFILE, _cookie), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset),
                     "__sFILEX", 0,
                     "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size),
                     "_tile", 2, "int", (int)__builtin_offsetof (struct _tile, row), "int", (int)__builtin_offsetof (struct _tile, col),
                     "_tiles_to_run", 4, "%struct._tile*", (int)__builtin_offsetof (struct _tiles_to_run, q), "%struct._tile*", (int)__builtin_offsetof (struct _tiles_to_run, base), "int", (int)__builtin_offsetof (struct _tiles_to_run, capacity), "int", (int)__builtin_offsetof (struct _tiles_to_run, length),
                     "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "GUID_BROW", "_Z9GUID_BROWii", 0,
                             "task_func", "_Z9task_funciiP13_tiles_to_run", 6, "PUT_DIAG", "add_tile_to_run", "PUT_RCOL", "add_tile_to_run", "PUT_BROW", "add_tile_to_run",
                             "clear_whitespaces_do_mapping", "_Z28clear_whitespaces_do_mappingPal", 1, "char_mapping",
                             "GUID_KIND", "_Z9GUID_KINDi", 0,
                             "main", "main", 10, "random_init", "random_init", "PUT_DIAG", "PUT_DIAG", "PUT_DIAG", "PUT_RCOL", "PUT_BROW", "pop_next_tile", "task_func", "checkpoint",
                             "GUID_DIAG", "_Z9GUID_DIAGii", 0,
                             "print_matrix", "_Z12print_matrixPPiii", 0,
                             "PUT_BROW", "_Z8PUT_BROWii", 1, "PUT",
                             "pop_next_tile", "_Z13pop_next_tileP13_tiles_to_run", 0,
                             "PUT_RCOL", "_Z8PUT_RCOLii", 1, "PUT",
                             "char_mapping", "_Z12char_mappingc", 0,
                             "GUID_RCOL", "_Z9GUID_RCOLii", 0,
                             "read_file", "_Z9read_fileP7__sFILEPm", 1, "clear_whitespaces_do_mapping",
                             "random_init", "_ZL11random_initPay", 0,
                             "PUT_DIAG", "_Z8PUT_DIAGii", 1, "PUT",
                             "PUT", "_Z3PUTii", 1, "GUID_DIAG",
                             "add_tile_to_run", "_Z15add_tile_to_runiiP13_tiles_to_run", 0,
                             "TILE_ROW", "_Z8TILE_ROWi", 0,
                             "TILE_COL", "_Z8TILE_COLi", 0,
        "GUID_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT", 0UL, (int)2, 0UL, 0UL,
        "PUT", 0UL, (int)2, 0UL, 0UL,
        "PUT", 0UL, (int)2, 0UL, 0UL,
        "char_mapping", 0UL, (int)1, 0UL,
        "clear_whitespaces_do_mapping", 0UL, (int)2, 8151418678253032012UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "add_tile_to_run", 0UL, (int)3, 0UL, 0UL, 8151418678253032580UL,
        "PUT_RCOL", 0UL, (int)2, 0UL, 0UL,
        "add_tile_to_run", 0UL, (int)3, 0UL, 0UL, 8151418678253032580UL,
        "PUT_BROW", 0UL, (int)2, 0UL, 0UL,
        "add_tile_to_run", 0UL, (int)3, 0UL, 0UL, 8151418678253032580UL,
        "random_init", 0UL, (int)2, 8151418678253032302UL, 0UL,
        "random_init", 0UL, (int)2, 8151418678253032302UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT_DIAG", 0UL, (int)2, 0UL, 0UL,
        "PUT_RCOL", 0UL, (int)2, 0UL, 0UL,
        "PUT_BROW", 0UL, (int)2, 0UL, 0UL,
        "pop_next_tile", 8151418678253033133UL, (int)1, 8151418678253033037UL,
        "task_func", 0UL, (int)3, 0UL, 0UL, 8151418678253033037UL);
    register_global_var("global|string_1", "i8*", (void *)(&string_1), 8, 1, 0, 0);
    register_global_var("global|string_2", "i8*", (void *)(&string_2), 8, 1, 0, 0);
    register_global_var("global|strlen_1", "i32", (void *)(&strlen_1), 4, 0, 0, 0);
    register_global_var("global|strlen_2", "i32", (void *)(&strlen_2), 4, 0, 0, 0);
    register_global_var("global|tile_width", "i32", (void *)(&tile_width), 4, 0, 0, 0);
    register_global_var("global|tile_height", "i32", (void *)(&tile_height), 4, 0, 0, 0);
    register_global_var("global|n_tiles_x", "i32", (void *)(&n_tiles_x), 4, 0, 0, 0);
    register_global_var("global|n_tiles_y", "i32", (void *)(&n_tiles_y), 4, 0, 0, 0);
    register_global_var("global|tile_edges_x", "i32**", (void *)(&tile_edges_x), 8, 1, 0, 0);
    register_global_var("global|tile_edges_y", "i32**", (void *)(&tile_edges_y), 8, 1, 0, 0);
    register_global_var("global|tile_diag", "i32*", (void *)(&tile_diag), 8, 1, 0, 0);
    register_global_var("global|put_counts", "i32*", (void *)(&put_counts), 8, 1, 0, 0);
    register_global_var("global|worker_tiles", "i32***", (void *)(&worker_tiles), 8, 1, 0, 0);
    register_global_var("global|max_buffer", "i32*", (void *)(&max_buffer), 8, 1, 0, 0);
    register_global_var("global|temp_buffer", "i32*", (void *)(&temp_buffer), 8, 1, 0, 0);
    register_global_var("global|max_size", "i32", (void *)(&max_size), 4, 0, 0, 0);
    register_global_var("global|done", "i32", (void *)(&done), 4, 0, 0, 0);
    register_global_var("global|nthreads", "i32", (void *)(&nthreads), 4, 0, 0, 0);
    register_global_var("global|begin", "%struct.timeval = type { i64, i32 }", (void *)(&begin), 16, 0, 1, 0);
    register_global_var("global|end", "%struct.timeval = type { i64, i32 }", (void *)(&end), 16, 0, 1, 0);
    register_global_var("global|dsizes", "[3 x i32]", (void *)(&dsizes), 12, 0, 0, 0);
    register_global_var("global|alignment_score_matrix", "[5 x [5 x i8]]", (void *)(&alignment_score_matrix), 25, 0, 0, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
