# 1 "smith_waterman.cpp.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "smith_waterman.cpp.pre.transformed.cpp"
static int ____chimes_does_checkpoint_char_mapping_npm = 1;
static int ____chimes_does_checkpoint_print_matrix_npm = 1;
static int ____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm = 1;
static int ____chimes_does_checkpoint_read_file_npm = 1;
static int ____chimes_does_checkpoint_random_init_npm = 1;
static int ____chimes_does_checkpoint_kernel_npm = 1;

static int ____must_checkpoint_main_begin_0 = 2;
static int ____must_checkpoint_main_end_0 = 2;
static int ____must_checkpoint_main_intermediate_0 = 2;

static int ____must_manage_kernel = 2;
static int ____must_manage_clear_whitespaces_do_mapping = 2;
static int ____must_manage_char_mapping = 2;
static int ____must_manage_read_file = 2;
static int ____must_manage_random_init = 2;
static int ____must_manage_print_matrix = 2;

static unsigned ____alias_loc_id_0;
static unsigned ____alias_loc_id_1;
static unsigned ____alias_loc_id_2;
static unsigned ____alias_loc_id_3;
static unsigned ____alias_loc_id_4;
static unsigned ____alias_loc_id_5;
static unsigned ____alias_loc_id_6;
static unsigned ____alias_loc_id_7;
# 1 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
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
# 74 "/Users/jmg3/chimes/src/libchimes/libchimes.h"
inline unsigned LIBCHIMES_THREAD_NUM() { return 0; }
inline unsigned LIBCHIMES_NUM_THREADS() { return 1; }


extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
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
# 2 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
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
# 3 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
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
# 4 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 5 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
# 5 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 6 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"

# 1 "/Users/jmg3/chimes/src/libchimes/checkpoint.h" 1
# 11 "/Users/jmg3/chimes/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
extern void register_custom_init_handler(const char *obj_name,
        void (*fp)(void *));
# 8 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp" 2
# 8 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 9 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 10 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 11 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 12 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 13 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 14 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 15 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* string_1;
# 16 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* string_2;
# 17 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 18 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
enum Nucleotide {GAP=0, ADENINE, CYTOSINE, GUANINE, THYMINE};
# 19 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 20 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char char_mapping_npm ( char c );
signed char char_mapping_quick ( char c ); signed char char_mapping ( char c );
signed char char_mapping_resumable ( char c ) {const int ____chimes_did_disable0 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 21 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 22 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    switch(c) {
# 23 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case '_': to_be_returned = GAP; break;
# 24 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 25 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 26 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 27 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 28 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 29 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_1, ____chimes_did_disable0); return to_be_returned;
# 30 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 31 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 32 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void print_matrix_npm ( int** matrix, int n_rows, int n_columns );
void print_matrix_quick ( int** matrix, int n_rows, int n_columns ); void print_matrix ( int** matrix, int n_rows, int n_columns );
void print_matrix_resumable ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable1 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(1402129255373297726UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 33 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 34 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 35 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 36 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            fprintf(__stdoutp, "%d ", matrix[i][j]);
# 37 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 38 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(__stdoutp, "\n");
# 39 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 40 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(__stdoutp,"--------------------------------\n");
# 41 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_2, ____chimes_did_disable1); }
# 42 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 43 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
static char alignment_score_matrix[5][5] =
# 44 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
{
# 45 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-1,-1,-1,-1},
# 46 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,2,-4,-2,-4},
# 47 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-4, 2,-4,-2},
# 48 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-2,-4, 2,-4},
# 49 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    {-1,-4,-2,-4, 2}
# 50 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
};
# 51 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 52 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ); size_t clear_whitespaces_do_mapping ( signed char* buffer, long size );
size_t clear_whitespaces_do_mapping_resumable ( signed char* buffer, long size ) {const int ____chimes_did_disable2 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(1402129255373297773UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 53 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 54 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 55 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    while ( traverse_index < size ) {
# 56 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 57 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        switch ( curr_char ) {
# 58 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 59 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 60 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 61 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                break;
# 62 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 63 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ++traverse_index;
# 64 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 65 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_3, ____chimes_did_disable2); return non_ws_index;
# 66 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 67 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 68 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
signed char* read_file_npm( FILE* file, size_t* n_chars );
signed char* read_file_quick( FILE* file, size_t* n_chars ); signed char* read_file( FILE* file, size_t* n_chars );
signed char* read_file_resumable( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable3 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(1402129255373297815UL), (size_t)(1402129255373297816UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 69 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 2);
# 70 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     long file_size; file_size = (ftell(file)) ;
# 71 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 0);
# 72 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 73 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 1402129255373297796UL, 0, 0)) ;
# 74 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 75 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 76 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    file_buffer[file_size] = '\n';
# 77 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 78 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 79 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 80 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(true, 1402129255373297796UL, "read_file", &____must_manage_read_file, ____alias_loc_id_4, ____chimes_did_disable3); return file_buffer;
# 81 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
# 82 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 83 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
static void random_init_npm(signed char *s, unsigned long long len);
static void random_init_quick(signed char *s, unsigned long long len); static void random_init(signed char *s, unsigned long long len);
static void random_init_resumable(signed char *s, unsigned long long len) {const int ____chimes_did_disable4 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(1402129255373298273UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 84 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 85 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int r; r = (rand() % 5) ;
# 86 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        (__builtin_expect(!(r >= 0 && r < 5), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 86, "r >= 0 && r < 5") : (void)0);
# 87 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        s[i] = r;
# 88 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 89 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_7, ____chimes_did_disable4); }
# 90 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 91 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
void kernel_npm(const unsigned long long c, const unsigned long long chunking, int *current, int *prev, unsigned long long n_char_in_file_1, unsigned long long n_char_in_file_2);
void kernel_quick(const unsigned long long c, const unsigned long long chunking, int *current, int *prev, unsigned long long n_char_in_file_1, unsigned long long n_char_in_file_2); void kernel(const unsigned long long c, const unsigned long long chunking, int *current, int *prev, unsigned long long n_char_in_file_1, unsigned long long n_char_in_file_2);
void kernel_resumable(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) {const int ____chimes_did_disable5 = new_stack((void *)(&kernel), "kernel", &____must_manage_kernel, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(1402129255373297983UL), (size_t)(1402129255373297983UL), (size_t)(0UL), (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 94 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    unsigned long long i; unsigned long long j; ;
# 95 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (i = 1 + (c * chunking); i < 1 + ((c + 1) * chunking); i++) {
# 96 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current[0] = -1*i;
# 97 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 1; j < n_char_in_file_1+1; ++j ) {
# 98 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_1; char_from_1 = (string_1[j - 1]) ;
# 99 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_2; char_from_2 = (string_2[i - 1]) ;
# 100 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 101 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int diag_score; diag_score = (prev[j - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 102 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int left_score; left_score = (current[j - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 103 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int top_score; top_score = (prev[j] + alignment_score_matrix[GAP][char_from_2]) ;
# 104 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 105 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 106 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            current[j] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 107 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 108 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 109 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int *temp; temp = (prev) ;
# 110 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        prev = current;
# 111 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current = temp;
# 112 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 113 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "kernel", &____must_manage_kernel, ____alias_loc_id_5, ____chimes_did_disable5); }
# 114 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 115 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
int main_quick ( int argc, char* argv[] ); int main ( int argc, char* argv[] );
int main_resumable ( int argc, char* argv[] ) {const int ____chimes_did_disable6 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(1402129255373298222UL)) ; unsigned long long estimate;
unsigned long long elapsed;
unsigned long long c;
struct timeval intermediate;
struct timeval end;
struct timeval begin;
int current;
int prev;
unsigned long long nchunks;
unsigned long long chunking;
unsigned long long n_char_in_file_2;
unsigned long long n_char_in_file_1;
int *result_array[2];
 register_stack_vars(13, "main|estimate|0", (int *)0x0, "i64", (void *)(&estimate), (size_t)8, 0, 0, 0, "main|elapsed|0", (int *)0x0, "i64", (void *)(&elapsed), (size_t)8, 0, 0, 0, "main|c|0", (int *)0x0, "i64", (void *)(&c), (size_t)8, 0, 0, 0, "main|intermediate|0", (int *)0x0, "%struct.timeval = type { i64, i32 }", (void *)(&intermediate), (size_t)16, 0, 1, 0, "main|end|0", (int *)0x0, "%struct.timeval = type { i64, i32 }", (void *)(&end), (size_t)16, 0, 1, 0, "main|begin|0", (int *)0x0, "%struct.timeval = type { i64, i32 }", (void *)(&begin), (size_t)16, 0, 1, 0, "main|current|0", (int *)0x0, "i32", (void *)(&current), (size_t)4, 0, 0, 0, "main|prev|0", (int *)0x0, "i32", (void *)(&prev), (size_t)4, 0, 0, 0, "main|nchunks|0", (int *)0x0, "i64", (void *)(&nchunks), (size_t)8, 0, 0, 0, "main|chunking|0", (int *)0x0, "i64", (void *)(&chunking), (size_t)8, 0, 0, 0, "main|n_char_in_file_2|0", (int *)0x0, "i64", (void *)(&n_char_in_file_2), (size_t)8, 0, 0, 0, "main|n_char_in_file_1|0", (int *)0x0, "i64", (void *)(&n_char_in_file_1), (size_t)8, 0, 0, 0, "main|result_array|0", (int *)0x0, "[2 x i32*]", (void *)(result_array), (size_t)16, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(20): { goto call_lbl_20; } default: { chimes_error(); } } } ; ;
# 116 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 117 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  ;
# 118 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 119 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 if ( argc != 4 ) {
# 120 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  fprintf(__stderrp, "Usage: %s length1 length2 chunking\n", argv[0]);
# 121 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  exit(1);
# 122 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 }
# 123 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 124 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_1 = (strtoull(argv[1], __null, 10)) ;
# 125 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_2 = (strtoull(argv[2], __null, 10)) ;
# 126 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       chunking = (strtoull(argv[3], __null, 10)) ;
# 127 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    (__builtin_expect(!(chunking % 2 == 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 127, "chunking % 2 == 0") : (void)0);
# 128 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 129 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    if (n_char_in_file_2 % chunking != 0) {
# 130 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(__stderrp, "length2 (%llu) must be evenly divisible by chunking "
# 131 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                "(%llu)\n", n_char_in_file_2, chunking);
# 132 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6); return 1;
# 133 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 134 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    printf("Processing length1=%llu length2=%llu\n", n_char_in_file_1,
# 135 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            n_char_in_file_2);
# 136 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 137 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       nchunks = (n_char_in_file_2 / chunking) ;
# 138 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    srand(123);
# 139 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 140 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 1402129255373297885UL, 0, 0);
# 141 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 1402129255373297885UL, 0, 0);
# 142 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 143 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 144 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 145 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[0] = (int *)malloc_wrapper(sizeof(int)*(n_char_in_file_1+1), 1402129255373298123UL, 0, 0);
# 146 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[1] = (int *)malloc_wrapper(sizeof(int)*(n_char_in_file_1+1), 1402129255373298123UL, 0, 0);
# 147 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 148 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    prev = (0) ;
# 149 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    current = (1) ;
# 150 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 151 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(__stderrp, "Starting...\n");
# 152 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
          ;
# 153 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&begin,0);
# 154 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 155 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_char_in_file_1+1; ++i ) {
# 156 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  result_array[prev][i] = -1*i;
# 157 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 158 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 159 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { for ( c = (0) ; c < nchunks; c++) {
# 160 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ({ calling_npm("kernel", 0); kernel_npm(c, chunking, result_array[current], result_array[prev], n_char_in_file_1, n_char_in_file_2); });
# 162 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 163 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        gettimeofday(&intermediate, 0);
# 164 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
           elapsed = (((intermediate.tv_sec - begin.tv_sec) * 1000) + ((intermediate.tv_usec - begin.tv_usec) / 1000)) ;
# 166 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
           estimate = (elapsed / (c + 1)) ;
# 167 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(__stderrp, "%llu / %llu: %llu ms elapsed, %llu estimated total\n",
# 168 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                c + 1, nchunks, elapsed, estimate * nchunks);
# 169 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 170 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 171 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         call_lbl_20: checkpoint_transformed(20, ____alias_loc_id_0);
# 172 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 173 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 174 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 175 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&end,0);
# 176 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(__stdoutp, "The computation took %f seconds\n",
# 177 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            ((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 178 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "score: %d\n", result_array[prev][n_char_in_file_1]);
# 179 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6); return 0;
# 180 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}
signed char char_mapping_quick ( char c ) {const int ____chimes_did_disable0 = new_stack((void *)(&char_mapping), "char_mapping", &____must_manage_char_mapping, 1, 0, (size_t)(0UL)) ; ; ;
# 21 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char to_be_returned; to_be_returned = (-1) ;
# 22 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    switch(c) {
# 23 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case '_': to_be_returned = GAP; break;
# 24 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 25 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 26 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 27 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 28 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 29 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(false, 0UL, "char_mapping", &____must_manage_char_mapping, ____alias_loc_id_1, ____chimes_did_disable0); return to_be_returned;
# 30 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

signed char char_mapping ( char c ) { return (____chimes_replaying ? char_mapping_resumable(c) : char_mapping_quick(c)); }

void print_matrix_quick ( int** matrix, int n_rows, int n_columns ) {const int ____chimes_did_disable1 = new_stack((void *)(&print_matrix), "print_matrix", &____must_manage_print_matrix, 3, 0, (size_t)(1402129255373297726UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 33 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 34 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 35 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 36 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            fprintf(__stdoutp, "%d ", matrix[i][j]);
# 37 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 38 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(__stdoutp, "\n");
# 39 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 40 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(__stdoutp,"--------------------------------\n");
# 41 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "print_matrix", &____must_manage_print_matrix, ____alias_loc_id_2, ____chimes_did_disable1); }

void print_matrix ( int** matrix, int n_rows, int n_columns ) { (____chimes_replaying ? print_matrix_resumable(matrix, n_rows, n_columns) : print_matrix_quick(matrix, n_rows, n_columns)); }

size_t clear_whitespaces_do_mapping_quick ( signed char* buffer, long size ) {const int ____chimes_did_disable2 = new_stack((void *)(&clear_whitespaces_do_mapping), "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, 2, 0, (size_t)(1402129255373297773UL), (size_t)(0UL)) ; ; ;
# 53 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t non_ws_index; size_t traverse_index; non_ws_index = (0) ; traverse_index = (0) ;
# 54 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 55 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    while ( traverse_index < size ) {
# 56 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         char curr_char; curr_char = (buffer[traverse_index]) ;
# 57 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        switch ( curr_char ) {
# 58 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 59 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 60 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                buffer[non_ws_index++] = ({ calling_npm("char_mapping", 0); char_mapping_npm(curr_char); });
# 61 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                break;
# 62 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 63 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ++traverse_index;
# 64 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 65 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(false, 0UL, "clear_whitespaces_do_mapping", &____must_manage_clear_whitespaces_do_mapping, ____alias_loc_id_3, ____chimes_did_disable2); return non_ws_index;
# 66 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

size_t clear_whitespaces_do_mapping ( signed char* buffer, long size ) { return (____chimes_replaying ? clear_whitespaces_do_mapping_resumable(buffer, size) : clear_whitespaces_do_mapping_quick(buffer, size)); }

signed char* read_file_quick( FILE* file, size_t* n_chars ) {const int ____chimes_did_disable3 = new_stack((void *)(&read_file), "read_file", &____must_manage_read_file, 2, 0, (size_t)(1402129255373297815UL), (size_t)(1402129255373297816UL)) ; ; ;
# 69 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 2);
# 70 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     long file_size; file_size = (ftell(file)) ;
# 71 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 0);
# 72 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 73 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     signed char *file_buffer; file_buffer = ((signed char *)malloc_wrapper((1 + file_size) * sizeof(signed char), 1402129255373297796UL, 0, 0)) ;
# 74 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 75 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
     size_t n_read_from_file; n_read_from_file = (fread(file_buffer, sizeof(signed char), file_size, file)) ;
# 76 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    file_buffer[file_size] = '\n';
# 77 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 78 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 79 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    *n_chars = ({ calling_npm("clear_whitespaces_do_mapping", 0); clear_whitespaces_do_mapping_npm(file_buffer, file_size); });
# 80 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(true, 1402129255373297796UL, "read_file", &____must_manage_read_file, ____alias_loc_id_4, ____chimes_did_disable3); return file_buffer;
# 81 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

signed char* read_file( FILE* file, size_t* n_chars ) { return (____chimes_replaying ? read_file_resumable(file, n_chars) : read_file_quick(file, n_chars)); }

static void random_init_quick(signed char *s, unsigned long long len) {const int ____chimes_did_disable4 = new_stack((void *)(&random_init), "random_init", &____must_manage_random_init, 2, 0, (size_t)(1402129255373298273UL), (size_t)(0UL)) ; ; ;
# 84 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { unsigned long long i; for ( i = (0) ; i < len; i++) {
# 85 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int r; r = (rand() % 5) ;
# 86 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        (__builtin_expect(!(r >= 0 && r < 5), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 86, "r >= 0 && r < 5") : (void)0);
# 87 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        s[i] = r;
# 88 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 89 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "random_init", &____must_manage_random_init, ____alias_loc_id_7, ____chimes_did_disable4); }

static void random_init(signed char *s, unsigned long long len) { (____chimes_replaying ? random_init_resumable(s, len) : random_init_quick(s, len)); }

void kernel_quick(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) {const int ____chimes_did_disable5 = new_stack((void *)(&kernel), "kernel", &____must_manage_kernel, 6, 0, (size_t)(0UL), (size_t)(0UL), (size_t)(1402129255373297983UL), (size_t)(1402129255373297983UL), (size_t)(0UL), (size_t)(0UL)) ; ; ;
# 94 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    unsigned long long i; unsigned long long j; ;
# 95 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (i = 1 + (c * chunking); i < 1 + ((c + 1) * chunking); i++) {
# 96 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current[0] = -1*i;
# 97 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 1; j < n_char_in_file_1+1; ++j ) {
# 98 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_1; char_from_1 = (string_1[j - 1]) ;
# 99 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             signed char char_from_2; char_from_2 = (string_2[i - 1]) ;
# 100 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 101 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int diag_score; diag_score = (prev[j - 1] + alignment_score_matrix[char_from_2][char_from_1]) ;
# 102 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int left_score; left_score = (current[j - 1] + alignment_score_matrix[char_from_1][GAP]) ;
# 103 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int top_score; top_score = (prev[j] + alignment_score_matrix[GAP][char_from_2]) ;
# 104 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 105 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
             int bigger_of_left_top; bigger_of_left_top = ((left_score > top_score) ? left_score : top_score) ;
# 106 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            current[j] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 107 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 108 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 109 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         int *temp; temp = (prev) ;
# 110 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        prev = current;
# 111 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current = temp;
# 112 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 113 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
rm_stack(false, 0UL, "kernel", &____must_manage_kernel, ____alias_loc_id_5, ____chimes_did_disable5); }

void kernel(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) { (____chimes_replaying ? kernel_resumable(c, chunking, current, prev, n_char_in_file_1, n_char_in_file_2) : kernel_quick(c, chunking, current, prev, n_char_in_file_1, n_char_in_file_2)); }

int main_quick ( int argc, char* argv[] ) {const int ____chimes_did_disable6 = new_stack((void *)(&main), "main", (int *)0, 2, 0, (size_t)(0UL), (size_t)(1402129255373298222UL)) ; unsigned long long estimate;
unsigned long long elapsed;
unsigned long long c;
struct timeval intermediate;
struct timeval end;
struct timeval begin;
int current;
int prev;
unsigned long long nchunks;
unsigned long long chunking;
unsigned long long n_char_in_file_2;
unsigned long long n_char_in_file_1;
int *result_array[2];
 register_stack_vars(13, "main|estimate|0", (int *)0x0, "i64", (void *)(&estimate), (size_t)8, 0, 0, 0, "main|elapsed|0", (int *)0x0, "i64", (void *)(&elapsed), (size_t)8, 0, 0, 0, "main|c|0", (int *)0x0, "i64", (void *)(&c), (size_t)8, 0, 0, 0, "main|intermediate|0", (int *)0x0, "%struct.timeval = type { i64, i32 }", (void *)(&intermediate), (size_t)16, 0, 1, 0, "main|end|0", (int *)0x0, "%struct.timeval = type { i64, i32 }", (void *)(&end), (size_t)16, 0, 1, 0, "main|begin|0", (int *)0x0, "%struct.timeval = type { i64, i32 }", (void *)(&begin), (size_t)16, 0, 1, 0, "main|current|0", (int *)0x0, "i32", (void *)(&current), (size_t)4, 0, 0, 0, "main|prev|0", (int *)0x0, "i32", (void *)(&prev), (size_t)4, 0, 0, 0, "main|nchunks|0", (int *)0x0, "i64", (void *)(&nchunks), (size_t)8, 0, 0, 0, "main|chunking|0", (int *)0x0, "i64", (void *)(&chunking), (size_t)8, 0, 0, 0, "main|n_char_in_file_2|0", (int *)0x0, "i64", (void *)(&n_char_in_file_2), (size_t)8, 0, 0, 0, "main|n_char_in_file_1|0", (int *)0x0, "i64", (void *)(&n_char_in_file_1), (size_t)8, 0, 0, 0, "main|result_array|0", (int *)0x0, "[2 x i32*]", (void *)(result_array), (size_t)16, 0, 0, 0); ; ;
# 116 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i; int j; ;
# 117 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  ;
# 118 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 119 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 if ( argc != 4 ) {
# 120 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  fprintf(__stderrp, "Usage: %s length1 length2 chunking\n", argv[0]);
# 121 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  exit(1);
# 122 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 }
# 123 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 124 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_1 = (strtoull(argv[1], __null, 10)) ;
# 125 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       n_char_in_file_2 = (strtoull(argv[2], __null, 10)) ;
# 126 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       chunking = (strtoull(argv[3], __null, 10)) ;
# 127 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    (__builtin_expect(!(chunking % 2 == 0), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 127, "chunking % 2 == 0") : (void)0);
# 128 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 129 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    if (n_char_in_file_2 % chunking != 0) {
# 130 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(__stderrp, "length2 (%llu) must be evenly divisible by chunking "
# 131 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                "(%llu)\n", n_char_in_file_2, chunking);
# 132 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6); return 1;
# 133 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 134 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    printf("Processing length1=%llu length2=%llu\n", n_char_in_file_1,
# 135 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            n_char_in_file_2);
# 136 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 137 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
       nchunks = (n_char_in_file_2 / chunking) ;
# 138 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    srand(123);
# 139 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 140 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_1 = (signed char *)malloc_wrapper(n_char_in_file_1, 1402129255373297885UL, 0, 0);
# 141 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    string_2 = (signed char *)malloc_wrapper(n_char_in_file_2, 1402129255373297885UL, 0, 0);
# 142 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_1, n_char_in_file_1); });
# 143 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    ({ calling_npm("random_init", 0); random_init_npm(string_2, n_char_in_file_2); });
# 144 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 145 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[0] = (int *)malloc_wrapper(sizeof(int)*(n_char_in_file_1+1), 1402129255373298123UL, 0, 0);
# 146 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 result_array[1] = (int *)malloc_wrapper(sizeof(int)*(n_char_in_file_1+1), 1402129255373298123UL, 0, 0);
# 147 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 148 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    prev = (0) ;
# 149 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    current = (1) ;
# 150 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 151 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(__stderrp, "Starting...\n");
# 152 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
          ;
# 153 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&begin,0);
# 154 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 155 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_char_in_file_1+1; ++i ) {
# 156 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
  result_array[prev][i] = -1*i;
# 157 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 158 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 159 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    { for ( c = (0) ; c < nchunks; c++) {
# 160 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ({ calling_npm("kernel", 0); kernel_npm(c, chunking, result_array[current], result_array[prev], n_char_in_file_1, n_char_in_file_2); });
# 162 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 163 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        gettimeofday(&intermediate, 0);
# 164 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
           elapsed = (((intermediate.tv_sec - begin.tv_sec) * 1000) + ((intermediate.tv_usec - begin.tv_usec) / 1000)) ;
# 166 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
           estimate = (elapsed / (c + 1)) ;
# 167 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(__stderrp, "%llu / %llu: %llu ms elapsed, %llu estimated total\n",
# 168 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                c + 1, nchunks, elapsed, estimate * nchunks);
# 169 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 170 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 171 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
         call_lbl_20: checkpoint_transformed(20, ____alias_loc_id_0);
# 172 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 173 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    } }
# 174 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 175 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    gettimeofday(&end,0);
# 176 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(__stdoutp, "The computation took %f seconds\n",
# 177 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            ((end.tv_sec - begin.tv_sec)*1000000+(end.tv_usec - begin.tv_usec))*1.0/1000000);
# 178 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
 fprintf(__stdoutp, "score: %d\n", result_array[prev][n_char_in_file_1]);
# 179 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    rm_stack(false, 0UL, "main", (int *)0x0, ____alias_loc_id_6, ____chimes_did_disable6); return 0;
# 180 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

int main ( int argc, char* argv[] ) { init_chimes(); return (____chimes_replaying ? main_resumable(argc, argv) : main_quick(argc, argv)); }



signed char char_mapping_npm ( char c ) {
# 21 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    signed char to_be_returned = -1;
# 22 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    switch(c) {
# 23 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case '_': to_be_returned = GAP; break;
# 24 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'A': to_be_returned = ADENINE; break;
# 25 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'C': to_be_returned = CYTOSINE; break;
# 26 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'G': to_be_returned = GUANINE; break;
# 27 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        case 'T': to_be_returned = THYMINE; break;
# 28 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 29 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    return to_be_returned;
# 30 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

void print_matrix_npm ( int** matrix, int n_rows, int n_columns ) {
# 33 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    int i, j;
# 34 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for ( i = 0; i < n_rows; ++i ) {
# 35 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 0; j < n_columns; ++j ) {
# 36 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            fprintf(__stdoutp, "%d ", matrix[i][j]);
# 37 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 38 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        fprintf(__stdoutp, "\n");
# 39 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 40 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fprintf(__stdoutp,"--------------------------------\n");
# 41 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

size_t clear_whitespaces_do_mapping_npm ( signed char* buffer, long size ) {
# 53 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    size_t non_ws_index = 0, traverse_index = 0;
# 54 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 55 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    while ( traverse_index < size ) {
# 56 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        char curr_char = buffer[traverse_index];
# 57 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        switch ( curr_char ) {
# 58 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            case 'A': case 'C': case 'G': case 'T':
# 59 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 60 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                buffer[non_ws_index++] = char_mapping_npm(curr_char);
# 61 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
                break;
# 62 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 63 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        ++traverse_index;
# 64 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 65 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    return non_ws_index;
# 66 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

signed char* read_file_npm( FILE* file, size_t* n_chars ) {
# 69 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 2);
# 70 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    long file_size = ftell (file);
# 71 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    fseek (file, 0L, 0);
# 72 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 73 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    signed char *file_buffer = (signed char *)malloc_wrapper((1+file_size)*sizeof(signed char), 1402129255373297796UL, 0, 0);
# 74 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 75 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    size_t n_read_from_file = fread(file_buffer, sizeof(signed char), file_size, file);
# 76 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    file_buffer[file_size] = '\n';
# 77 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 78 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 79 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    *n_chars = clear_whitespaces_do_mapping_npm(file_buffer, file_size);
# 80 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    return file_buffer;
# 81 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

static void random_init_npm(signed char *s, unsigned long long len) {
# 84 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (unsigned long long i = 0; i < len; i++) {
# 85 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int r = rand() % 5;
# 86 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        (__builtin_expect(!(r >= 0 && r < 5), 0) ? __assert_rtn(__func__, "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp", 86, "r >= 0 && r < 5") : (void)0);
# 87 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        s[i] = r;
# 88 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 89 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}

void kernel_npm(const unsigned long long c, const unsigned long long chunking, int *current,
# 92 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *prev, unsigned long long n_char_in_file_1,
# 93 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        unsigned long long n_char_in_file_2) {
# 94 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    unsigned long long i, j;
# 95 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    for (i = 1 + (c * chunking); i < 1 + ((c + 1) * chunking); i++) {
# 96 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current[0] = -1*i;
# 97 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        for ( j = 1; j < n_char_in_file_1+1; ++j ) {
# 98 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            signed char char_from_1 = string_1[j-1];
# 99 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            signed char char_from_2 = string_2[i-1];
# 100 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 101 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int diag_score = prev[j-1] + alignment_score_matrix[char_from_2][char_from_1];
# 102 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int left_score = current[j-1] + alignment_score_matrix[char_from_1][GAP];
# 103 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int top_score = prev[j ] + alignment_score_matrix[GAP][char_from_2];
# 104 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 105 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            int bigger_of_left_top = (left_score > top_score) ? left_score : top_score;
# 106 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
            current[j] = (bigger_of_left_top > diag_score) ? bigger_of_left_top : diag_score;
# 107 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        }
# 108 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
# 109 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        int *temp = prev;
# 110 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        prev = current;
# 111 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
        current = temp;
# 112 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
    }
# 113 "/Users/jmg3/chimes/src/examples/cpp/./smithWaterman/smith_waterman.cpp"
}





static int module_init() {
    init_module(1402129255373297650UL, 15, 7, 3, 8, 6, 0, 6, 5, 0, 5,
                           &____alias_loc_id_0, (unsigned)19, (unsigned)2, (1402129255373297650UL + 336UL), (1402129255373297650UL + 337UL), (1402129255373297650UL + 338UL), (1402129255373297650UL + 339UL), (1402129255373297650UL + 341UL), (1402129255373297650UL + 342UL), (1402129255373297650UL + 343UL), (1402129255373297650UL + 344UL), (1402129255373297650UL + 345UL), (1402129255373297650UL + 346UL), (1402129255373297650UL + 347UL), (1402129255373297650UL + 348UL), (1402129255373297650UL + 349UL), (1402129255373297650UL + 350UL), (1402129255373297650UL + 351UL), (1402129255373297650UL + 352UL), (1402129255373297650UL + 353UL), (1402129255373297650UL + 473UL), (1402129255373297650UL + 636UL), "kernel", (unsigned)1, (1402129255373297650UL + 473UL), "random_init", (unsigned)1, (1402129255373297650UL + 235UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (1402129255373297650UL + 1UL), (1402129255373297650UL + 2UL),
                           &____alias_loc_id_2, (unsigned)5, (unsigned)0, (1402129255373297650UL + 25UL), (1402129255373297650UL + 26UL), (1402129255373297650UL + 27UL), (1402129255373297650UL + 28UL), (1402129255373297650UL + 29UL),
                           &____alias_loc_id_3, (unsigned)6, (unsigned)0, (1402129255373297650UL + 81UL), (1402129255373297650UL + 82UL), (1402129255373297650UL + 83UL), (1402129255373297650UL + 84UL), (1402129255373297650UL + 85UL), (1402129255373297650UL + 123UL),
                           &____alias_loc_id_4, (unsigned)7, (unsigned)1, (1402129255373297650UL + 125UL), (1402129255373297650UL + 126UL), (1402129255373297650UL + 127UL), (1402129255373297650UL + 128UL), (1402129255373297650UL + 129UL), (1402129255373297650UL + 146UL), (1402129255373297650UL + 166UL), "clear_whitespaces_do_mapping", (unsigned)1, (1402129255373297650UL + 146UL),
                           &____alias_loc_id_5, (unsigned)16, (unsigned)0, (1402129255373297650UL + 176UL), (1402129255373297650UL + 177UL), (1402129255373297650UL + 178UL), (1402129255373297650UL + 179UL), (1402129255373297650UL + 180UL), (1402129255373297650UL + 181UL), (1402129255373297650UL + 182UL), (1402129255373297650UL + 183UL), (1402129255373297650UL + 184UL), (1402129255373297650UL + 185UL), (1402129255373297650UL + 186UL), (1402129255373297650UL + 187UL), (1402129255373297650UL + 188UL), (1402129255373297650UL + 189UL), (1402129255373297650UL + 190UL), (1402129255373297650UL + 333UL),
                           &____alias_loc_id_6, (unsigned)17, (unsigned)2, (1402129255373297650UL + 336UL), (1402129255373297650UL + 337UL), (1402129255373297650UL + 338UL), (1402129255373297650UL + 339UL), (1402129255373297650UL + 341UL), (1402129255373297650UL + 342UL), (1402129255373297650UL + 343UL), (1402129255373297650UL + 344UL), (1402129255373297650UL + 345UL), (1402129255373297650UL + 346UL), (1402129255373297650UL + 347UL), (1402129255373297650UL + 348UL), (1402129255373297650UL + 349UL), (1402129255373297650UL + 350UL), (1402129255373297650UL + 351UL), (1402129255373297650UL + 473UL), (1402129255373297650UL + 636UL), "kernel", (unsigned)1, (1402129255373297650UL + 473UL), "random_init", (unsigned)1, (1402129255373297650UL + 235UL),
                           &____alias_loc_id_7, (unsigned)5, (unsigned)0, (1402129255373297650UL + 585UL), (1402129255373297650UL + 586UL), (1402129255373297650UL + 587UL), (1402129255373297650UL + 588UL), (1402129255373297650UL + 623UL),
                            "char_mapping", (void *)(&char_mapping_npm), (void *)__null, 0, 1, 0UL, 0UL, 0,
                            "print_matrix", (void *)(&print_matrix_npm), (void *)__null, 0, 3, (1402129255373297650UL + 76UL), 0UL, 0UL, 0UL, 3, "fprintf", 3, (1402129255373297650UL + 50UL), (1402129255373297650UL + 639UL), 0UL, 0UL, "fprintf", 2, (1402129255373297650UL + 50UL), (1402129255373297650UL + 640UL), 0UL, "fprintf", 2, (1402129255373297650UL + 50UL), (1402129255373297650UL + 641UL), 0UL,
                            "clear_whitespaces_do_mapping", (void *)(&clear_whitespaces_do_mapping_npm), (void *)__null, 0, 2, (1402129255373297650UL + 123UL), 0UL, 0UL, 1, "char_mapping", 1, 0UL, 0UL,
                            "read_file", (void *)(&read_file_npm), (void *)__null, 0, 2, (1402129255373297650UL + 165UL), (1402129255373297650UL + 166UL), (1402129255373297650UL + 146UL), 6, "fseek", 3, (1402129255373297650UL + 165UL), 0UL, 0UL, 0UL, "ftell", 1, (1402129255373297650UL + 165UL), 0UL, "fseek", 3, (1402129255373297650UL + 165UL), 0UL, 0UL, 0UL, "malloc", 1, 0UL, (1402129255373297650UL + 146UL), "fread", 4, (1402129255373297650UL + 146UL), 0UL, 0UL, (1402129255373297650UL + 165UL), 0UL, "clear_whitespaces_do_mapping", 2, (1402129255373297650UL + 146UL), 0UL, 0UL,
                            "random_init", (void *)(&random_init_npm), (void *)__null, 0, 2, (1402129255373297650UL + 623UL), 0UL, 0UL, 2, "rand", 0, 0UL, "__assert_rtn", 4, (1402129255373297650UL + 654UL), (1402129255373297650UL + 646UL), 0UL, (1402129255373297650UL + 655UL), 0UL,
                            "kernel", (void *)(&kernel_npm), (void *)__null, 0, 6, 0UL, 0UL, (1402129255373297650UL + 333UL), (1402129255373297650UL + 333UL), 0UL, 0UL, 0UL, 0,
                           "char_mapping", &(____chimes_does_checkpoint_char_mapping_npm),
                           "print_matrix", &(____chimes_does_checkpoint_print_matrix_npm),
                           "clear_whitespaces_do_mapping", &(____chimes_does_checkpoint_clear_whitespaces_do_mapping_npm),
                           "read_file", &(____chimes_does_checkpoint_read_file_npm),
                           "random_init", &(____chimes_does_checkpoint_random_init_npm),
                           "kernel", &(____chimes_does_checkpoint_kernel_npm),
                             (1402129255373297650UL + 25UL), (1402129255373297650UL + 76UL),
                             (1402129255373297650UL + 585UL), (1402129255373297650UL + 623UL),
                             (1402129255373297650UL + 179UL), (1402129255373297650UL + 333UL),
                             (1402129255373297650UL + 636UL), (1402129255373297650UL + 235UL),
                             (1402129255373297650UL + 638UL), (1402129255373297650UL + 50UL),
                             (1402129255373297650UL + 572UL), (1402129255373297650UL + 375UL),
                             (1402129255373297650UL + 190UL), (1402129255373297650UL + 333UL),
                             (1402129255373297650UL + 76UL), (1402129255373297650UL + 57UL),
                             (1402129255373297650UL + 125UL), (1402129255373297650UL + 165UL),
                             (1402129255373297650UL + 126UL), (1402129255373297650UL + 166UL),
                             (1402129255373297650UL + 178UL), (1402129255373297650UL + 333UL),
                             (1402129255373297650UL + 128UL), (1402129255373297650UL + 146UL),
                             (1402129255373297650UL + 81UL), (1402129255373297650UL + 123UL),
                             (1402129255373297650UL + 341UL), (1402129255373297650UL + 473UL),
                             (1402129255373297650UL + 338UL), (1402129255373297650UL + 572UL),
                     "Nucleotide", 0,
                     "__sFILE", 20, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "void*", (int)__builtin_offsetof (struct __sFILE, _cookie), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset),
                     "__sFILEX", 0,
                     "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size),
                     "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "kernel", "_Z6kernelyyPiS_yy", 0,
                             "clear_whitespaces_do_mapping", "_Z28clear_whitespaces_do_mappingPal", 1, "char_mapping",
                             "char_mapping", "_Z12char_mappingc", 0,
                             "read_file", "_Z9read_fileP7__sFILEPm", 1, "clear_whitespaces_do_mapping",
                             "random_init", "_ZL11random_initPay", 0,
                             "print_matrix", "_Z12print_matrixPPiii", 0,
                             "main", "main", 4, "random_init", "random_init", "kernel", "checkpoint",
                        "main|begin|0", 1, "main",
                        "main|end|0", 1, "main",
                        "main|intermediate|0", 1, "main",
        "char_mapping", 0UL, (int)1, 0UL,
        "clear_whitespaces_do_mapping", 0UL, (int)2, 1402129255373297796UL, 0UL,
        "random_init", 0UL, (int)2, 1402129255373297885UL, 0UL,
        "random_init", 0UL, (int)2, 1402129255373297885UL, 0UL,
        "kernel", 0UL, (int)6, 0UL, 0UL, 1402129255373298123UL, 1402129255373298123UL, 0UL, 0UL);
    register_global_var("global|string_1", "i8*", (void *)(&string_1), 8, 1, 0, 0);
    register_global_var("global|string_2", "i8*", (void *)(&string_2), 8, 1, 0, 0);
    register_global_var("global|alignment_score_matrix", "[5 x [5 x i8]]", (void *)(&alignment_score_matrix), 25, 0, 0, 0);
    return 0;
}

static const int __libchimes_module_init = module_init();
