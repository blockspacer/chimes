# 1 "CoMD.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "CoMD.c.pre.transformed.cpp"
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 1 "/tmp/chimes-frontend//"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 1



# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 5 "/Users/jmg3/num-debug/src/libchimes/libchimes.h" 2

extern void init_chimes();
extern void calling(void *func_ptr, int lbl, size_t set_return_alias,
        unsigned naliases, ...);
extern int get_next_call();
extern void new_stack(void *func_ptr, unsigned n_local_arg_aliases,
        unsigned nargs, ...);
extern void init_module(size_t module_id, int n_contains_mappings, int nstructs,
        ...);
extern void rm_stack(bool has_return_alias, size_t returned_alias);
extern void register_stack_var(const char *mangled_name,
        const char *full_type, void *ptr, size_t size, int is_ptr,
        int is_struct, int n_ptr_fields, ...);
extern void register_global_var(const char *mangled_name, const char *full_type,
        void *ptr, size_t size, int is_ptr, int is_struct, int n_ptr_fields,
        ...);
extern int alias_group_changed(int ngroups, ...);
extern void *malloc_wrapper(size_t nbytes, size_t group, int is_ptr,
        int is_struct, ...);
extern void *calloc_wrapper(size_t num, size_t size, size_t group, int is_ptr,
        int is_struct, ...);
extern void *realloc_wrapper(void *ptr, size_t nbytes, size_t group);
extern void free_wrapper(void *ptr, size_t group);

extern unsigned entering_omp_parallel(unsigned lbl, size_t *region_id,
        unsigned nlocals, ...);
extern void register_thread_local_stack_vars(unsigned thread,
        unsigned parent, bool is_parallel_for, bool is_critical,
        unsigned parent_stack_depth, size_t region_id, unsigned nlocals, ...);
extern void leaving_omp_parallel(int expected_parent_stack_depth,
        size_t region_id);
extern unsigned get_parent_vars_stack_depth();
extern unsigned get_thread_stack_depth();

extern void chimes_error();
# 49 "/Users/jmg3/num-debug/src/libchimes/libchimes.h"
extern "C" {
extern int omp_get_thread_num (void) throw ();
}
inline unsigned LIBCHIMES_THREAD_NUM() { return omp_get_thread_num(); }





extern int ____chimes_replaying;
# 1 "<command-line>" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 44 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
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
# 151 "/usr/include/Availability.h" 3 4
# 1 "/usr/include/AvailabilityInternal.h" 1 3 4
# 152 "/usr/include/Availability.h" 2 3 4
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
# 45 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
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
# 46 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/usr/include/string.h" 1 3 4
# 69 "/usr/include/string.h" 3 4
extern "C" {
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int) __asm("_" "strerror" );
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
}
# 103 "/usr/include/string.h" 3 4
extern "C" {
char *strtok_r(char *, const char *, char **);
}
# 115 "/usr/include/string.h" 3 4
extern "C" {
int strerror_r(int, char *, size_t);
char *strdup(const char *);
void *memccpy(void *, const void *, int, size_t);
}
# 129 "/usr/include/string.h" 3 4
extern "C" {
char *stpcpy(char *, const char *);
char *stpncpy(char *, const char *, size_t) ;
char *strndup(const char *, size_t) ;
size_t strnlen(const char *, size_t) ;
char *strsignal(int sig);
}





# 1 "/usr/include/sys/_types/_rsize_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_rsize_t.h" 3 4
typedef __darwin_size_t rsize_t;
# 142 "/usr/include/string.h" 2 3 4
# 1 "/usr/include/sys/_types/_errno_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_errno_t.h" 3 4
typedef int errno_t;
# 143 "/usr/include/string.h" 2 3 4

extern "C" {
errno_t memset_s(void *, rsize_t, int, rsize_t) ;
}







extern "C" {
void *memmem(const void *, size_t, const void *, size_t) ;
void memset_pattern4(void *, const void *, size_t) ;
void memset_pattern8(void *, const void *, size_t) ;
void memset_pattern16(void *, const void *, size_t) ;

char *strcasestr(const char *, const char *);
char *strnstr(const char *, const char *, size_t);
size_t strlcat(char *, const char *, size_t);
size_t strlcpy(char *, const char *, size_t);
void strmode(int, char *);
char *strsep(char **, const char *);


void swab(const void * , void * , ssize_t);
}






# 1 "/usr/include/strings.h" 1 3 4
# 67 "/usr/include/strings.h" 3 4
extern "C" {


int bcmp(const void *, const void *, size_t) ;
void bcopy(const void *, void *, size_t) ;
void bzero(void *, size_t) ;
char *index(const char *, int) ;
char *rindex(const char *, int) ;


int ffs(int);
int strcasecmp(const char *, const char *);
int strncasecmp(const char *, const char *, size_t);
}



extern "C" {
int ffsl(long) ;
int ffsll(long long) ;
int fls(int) ;
int flsl(long) ;
int flsll(long long) ;
}

# 1 "/usr/include/string.h" 1 3 4
# 93 "/usr/include/strings.h" 2 3 4
# 177 "/usr/include/string.h" 2 3 4
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/usr/include/strings.h" 1 3 4
# 48 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/usr/include/unistd.h" 1 3 4
# 72 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/unistd.h" 1 3 4
# 84 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_posix_vdisable.h" 1 3 4
# 85 "/usr/include/sys/unistd.h" 2 3 4
# 122 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_seek_set.h" 1 3 4
# 123 "/usr/include/sys/unistd.h" 2 3 4
# 132 "/usr/include/sys/unistd.h" 3 4
struct accessx_descriptor {
 unsigned int ad_name_offset;
 int ad_flags;
 int ad_pad[2];
};
# 183 "/usr/include/sys/unistd.h" 3 4
extern "C" {

int getattrlistbulk(int, void *, void *, size_t, uint64_t) ;

}
# 198 "/usr/include/sys/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_gid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_gid_t.h" 3 4
typedef __darwin_gid_t gid_t;
# 199 "/usr/include/sys/unistd.h" 2 3 4


extern "C" {

int faccessat(int, const char *, int, int) ;
int fchownat(int, const char *, uid_t, gid_t, int) ;
int linkat(int, const char *, int, const char *, int) ;
ssize_t readlinkat(int, const char *, char *, size_t) ;
int symlinkat(const char *, int, const char *) ;
int unlinkat(int, const char *, int) ;
int getattrlistat(int, const char *, void *, void *, size_t, unsigned long) ;

}
# 73 "/usr/include/unistd.h" 2 3 4
# 83 "/usr/include/unistd.h" 3 4
# 1 "/usr/include/sys/_types/_useconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_useconds_t.h" 3 4
typedef __darwin_useconds_t useconds_t;
# 84 "/usr/include/unistd.h" 2 3 4
# 423 "/usr/include/unistd.h" 3 4
extern "C" {
void _exit(int) __attribute__((noreturn));
int access(const char *, int);
unsigned int
  alarm(unsigned int);
int chdir(const char *);
int chown(const char *, uid_t, gid_t);

int close(int) __asm("_" "close" );

int dup(int);
int dup2(int, int);
int execl(const char *, const char *, ...);
int execle(const char *, const char *, ...);
int execlp(const char *, const char *, ...);
int execv(const char *, char * const *);
int execve(const char *, char * const *, char * const *);
int execvp(const char *, char * const *);
pid_t fork(void);
long fpathconf(int, int);
char *getcwd(char *, size_t);
gid_t getegid(void);
uid_t geteuid(void);
gid_t getgid(void);



int getgroups(int, gid_t []);

char *getlogin(void);
pid_t getpgrp(void);
pid_t getpid(void);
pid_t getppid(void);
uid_t getuid(void);
int isatty(int);
int link(const char *, const char *);
off_t lseek(int, off_t, int);
long pathconf(const char *, int);

int pause(void) __asm("_" "pause" );

int pipe(int [2]);

ssize_t read(int, void *, size_t) __asm("_" "read" );

int rmdir(const char *);
int setgid(gid_t);
int setpgid(pid_t, pid_t);
pid_t setsid(void);
int setuid(uid_t);

unsigned int
  sleep(unsigned int) __asm("_" "sleep" );

long sysconf(int);
pid_t tcgetpgrp(int);
int tcsetpgrp(int, pid_t);
char *ttyname(int);


int ttyname_r(int, char *, size_t) __asm("_" "ttyname_r" );




int unlink(const char *);

ssize_t write(int, const void *, size_t) __asm("_" "write" );
}
# 500 "/usr/include/unistd.h" 3 4
extern "C" {
size_t confstr(int, char *, size_t) __asm("_" "confstr" );

int getopt(int, char * const [], const char *) __asm("_" "getopt" );

extern char *optarg;
extern int optind, opterr, optopt;
}
# 525 "/usr/include/unistd.h" 3 4
 extern "C" {





__attribute__((deprecated))

void *brk(const void *);
int chroot(const char *) ;


char *crypt(const char *, const char *);






void encrypt(char *, int) __asm("_" "encrypt" );



int fchdir(int);
long gethostid(void);
pid_t getpgid(pid_t);
pid_t getsid(pid_t);



int getdtablesize(void) ;
int getpagesize(void) __attribute__((const)) ;
char *getpass(const char *) ;




char *getwd(char *) ;


int lchown(const char *, uid_t, gid_t) __asm("_" "lchown" );

int lockf(int, int, off_t) __asm("_" "lockf" );

int nice(int) __asm("_" "nice" );

ssize_t pread(int, void *, size_t, off_t) __asm("_" "pread" );

ssize_t pwrite(int, const void *, size_t, off_t) __asm("_" "pwrite" );






__attribute__((deprecated))

void *sbrk(int);



pid_t setpgrp(void) __asm("_" "setpgrp" );




int setregid(gid_t, gid_t) __asm("_" "setregid" );

int setreuid(uid_t, uid_t) __asm("_" "setreuid" );

void swab(const void * , void * , ssize_t);
void sync(void);
int truncate(const char *, off_t);
useconds_t ualarm(useconds_t, useconds_t);
int usleep(useconds_t) __asm("_" "usleep" );
pid_t vfork(void);


int fsync(int) __asm("_" "fsync" );

int ftruncate(int, off_t);
int getlogin_r(char *, size_t);
}
# 618 "/usr/include/unistd.h" 3 4
extern "C" {
int fchown(int, uid_t, gid_t);
int gethostname(char *, size_t);
ssize_t readlink(const char * , char * , size_t);
int setegid(gid_t);
int seteuid(uid_t);
int symlink(const char *, const char *);
}







# 1 "/usr/include/sys/select.h" 1 3 4
# 75 "/usr/include/sys/select.h" 3 4
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
# 76 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_timespec.h" 1 3 4
# 30 "/usr/include/sys/_types/_timespec.h" 3 4
struct timespec
{
 __darwin_time_t tv_sec;
 long tv_nsec;
};
# 77 "/usr/include/sys/select.h" 2 3 4







# 1 "/usr/include/sys/_types/_time_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_time_t.h" 3 4
typedef __darwin_time_t time_t;
# 85 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_suseconds_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_suseconds_t.h" 3 4
typedef __darwin_suseconds_t suseconds_t;
# 86 "/usr/include/sys/select.h" 2 3 4
# 100 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/sys/_types/_fd_setsize.h" 1 3 4
# 101 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_set.h" 1 3 4
# 102 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_clr.h" 1 3 4
# 103 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_isset.h" 1 3 4
# 104 "/usr/include/sys/select.h" 2 3 4
# 1 "/usr/include/sys/_types/_fd_zero.h" 1 3 4
# 105 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/sys/_types/_fd_copy.h" 1 3 4
# 108 "/usr/include/sys/select.h" 2 3 4



extern "C" {


int pselect(int, fd_set * , fd_set * ,
  fd_set * , const struct timespec * ,
  const sigset_t * )




  __asm("_" "pselect" "$1050")




  ;


# 1 "/usr/include/sys/_select.h" 1 3 4
# 39 "/usr/include/sys/_select.h" 3 4
int select(int, fd_set * , fd_set * ,
  fd_set * , struct timeval * )




  __asm("_" "select" "$1050")




  ;
# 130 "/usr/include/sys/select.h" 2 3 4

}
# 634 "/usr/include/unistd.h" 2 3 4



# 1 "/usr/include/sys/_types/_uuid_t.h" 1 3 4
# 30 "/usr/include/sys/_types/_uuid_t.h" 3 4
typedef __darwin_uuid_t uuid_t;
# 638 "/usr/include/unistd.h" 2 3 4

extern "C" {
void _Exit(int) __attribute__((noreturn));
int accessx_np(const struct accessx_descriptor *, size_t, int *, uid_t);
int acct(const char *);
int add_profil(char *, size_t, unsigned long, unsigned int);
void endusershell(void);
int execvP(const char *, const char *, char * const *);
char *fflagstostr(unsigned long);
int getdomainname(char *, int);
int getgrouplist(const char *, int, int *, int *);




# 1 "/usr/include/gethostuuid.h" 1 3 4
# 39 "/usr/include/gethostuuid.h" 3 4
int gethostuuid(uuid_t, const struct timespec *) ;
# 654 "/usr/include/unistd.h" 2 3 4




mode_t getmode(const void *, mode_t);
int getpeereid(int, uid_t *, gid_t *);
int getsgroups_np(int *, uuid_t);
char *getusershell(void);
int getwgroups_np(int *, uuid_t);
int initgroups(const char *, int);
int iruserok(unsigned long, int, const char *, const char *);
int iruserok_sa(const void *, int, int, const char *, const char *);
int issetugid(void);
char *mkdtemp(char *);
int mknod(const char *, mode_t, dev_t);
int mkpath_np(const char *path, mode_t omode) ;
int mkstemp(char *);
int mkstemps(char *, int);
char *mktemp(char *);
int nfssvc(int, void *);
int profil(char *, size_t, unsigned long, unsigned int);
int pthread_setugid_np(uid_t, gid_t);
int pthread_getugid_np( uid_t *, gid_t *);
int rcmd(char **, int, const char *, const char *, const char *, int *);
int rcmd_af(char **, int, const char *, const char *, const char *, int *,
  int);
int reboot(int);
int revoke(const char *);
int rresvport(int *);
int rresvport_af(int *, int);
int ruserok(const char *, int, const char *, const char *);
int setdomainname(const char *, int);
int setgroups(int, const gid_t *);
void sethostid(long);
int sethostname(const char *, int);

void setkey(const char *) __asm("_" "setkey" );



int setlogin(const char *);
void *setmode(const char *) __asm("_" "setmode" );
int setrgid(gid_t);
int setruid(uid_t);
int setsgroups_np(int, const uuid_t);
void setusershell(void);
int setwgroups_np(int, const uuid_t);
int strtofflags(char **, unsigned long *, unsigned long *);
int swapon(const char *);
int syscall(int, ...);
int ttyslot(void);
int undelete(const char *);
int unwhiteout(const char *);
void *valloc(size_t);

extern char *suboptarg;
int getsubopt(char **, char * const *, char **);



int fgetattrlist(int,void*,void*,size_t,unsigned int) ;
int fsetattrlist(int,void*,void*,size_t,unsigned int) ;
int getattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "getattrlist" );
int setattrlist(const char*,void*,void*,size_t,unsigned int) __asm("_" "setattrlist" );
int exchangedata(const char*,const char*,unsigned int);
int getdirentriesattr(int,void*,void*,size_t,unsigned int*,unsigned int*,unsigned int*,unsigned int);
# 731 "/usr/include/unistd.h" 3 4
struct fssearchblock;
struct searchstate;

int searchfs(const char *, struct fssearchblock *, unsigned long *, unsigned int, unsigned int, struct searchstate *);
int fsctl(const char *,unsigned long,void*,unsigned int);
int ffsctl(int,unsigned long,void*,unsigned int) ;




int fsync_volume_np(int, int) ;
int sync_volume_np(const char *, int) ;

extern int optreset;

}
# 49 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/usr/include/assert.h" 1 3 4
# 75 "/usr/include/assert.h" 3 4
extern "C" {
void __assert_rtn(const char *, const char *, int, const char *) __attribute__((noreturn));



}
# 50 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 50 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 1







# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h" 1







struct AtomsSt;
struct LinkCellSt;
struct DomainSt;
# 26 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
typedef struct HaloExchangeSt
{


   int nbrRank[6];


   int bufCapacity;
# 47 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   int (*loadBuffer)(void* parms, void* data, int face, char* buf);
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/haloExchange.h"
   void (*unloadBuffer)(void* parms, void* data, int face, int bufSize, char* buf);


   void (*destroy)(void* parms);


   void* parms;
}
HaloExchange;


HaloExchange* initAtomHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


HaloExchange* initForceHaloExchange(struct DomainSt* domain, struct LinkCellSt* boxes);


void destroyHaloExchange(HaloExchange** haloExchange);


void haloExchange(HaloExchange* haloExchange, void* data);


void sortAtomsInCell(struct AtomsSt* atoms, struct LinkCellSt* boxes, int iBox);
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/linkCells.h" 1
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/linkCells.h"
struct DomainSt;
struct AtomsSt;



typedef struct LinkCellSt
{
   int gridSize[3];
   int nLocalBoxes;
   int nHaloBoxes;
   int nTotalBoxes;

   real3 localMin;
   real3 localMax;
   real3 boxSize;
   real3 invBoxSize;

   int* nAtoms;
   int** nbrBoxes;
} LinkCell;

LinkCell* initLinkCells(const struct DomainSt* domain, real_t cutoff);
void destroyLinkCells(LinkCell** boxes);

int getNeighborBoxes(LinkCell* boxes, int iBox, int* nbrBoxes);
void putAtomInBox(LinkCell* boxes, struct AtomsSt* atoms,
                  const int gid, const int iType,
                  const real_t x, const real_t y, const real_t z,
                  const real_t px, const real_t py, const real_t pz);
int getBoxFromTuple(LinkCell* boxes, int x, int y, int z);

void moveAtom(LinkCell* boxes, struct AtomsSt* atoms, int iId, int iBox, int jBox);


void updateLinkCells(LinkCell* boxes, struct AtomsSt* atoms);

int maxOccupancy(LinkCell* boxes);
# 11 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/decomposition.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/decomposition.h"
typedef struct DomainSt
{

   int procGrid[3];
   int procCoord[3];


   real3 globalMin;
   real3 globalMax;
   real3 globalExtent;


   real3 localMin;
   real3 localMax;
   real3 localExtent;
} Domain;

struct DomainSt* initDecomposition(int xproc, int yproc, int zproc,
                                   real3 globalExtent);


int processorNum(Domain* domain, int dix, int diy, int dik);
# 12 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/initAtoms.h"
struct SimFlatSt;
struct LinkCellSt;


typedef struct AtomsSt
{

   int nLocal;
   int nGlobal;

   int* gid;
   int* iSpecies;

   real3* r;
   real3* p;
   real3* f;
   real_t* U;
} Atoms;



Atoms* initAtoms(struct LinkCellSt* boxes);
void destroyAtoms(struct AtomsSt* atoms);

void createFccLattice(int nx, int ny, int nz, real_t lat, struct SimFlatSt* s);

void setVcm(struct SimFlatSt* s, real_t vcm[3]);
void setTemperature(struct SimFlatSt* s, real_t temperature);
void randomDisplacements(struct SimFlatSt* s, real_t delta);
# 13 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h" 2

struct SimFlatSt;
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMDTypes.h"
typedef struct BasePotentialSt
{
   real_t cutoff;
   real_t mass;
   real_t lat;
   char latticeType[8];
   char name[3];
   int atomicNo;
   int (*force)(struct SimFlatSt* s);
   void (*print)(FILE* file, struct BasePotentialSt* pot);
   void (*destroy)(struct BasePotentialSt** pot);
} BasePotential;



typedef struct SpeciesDataSt
{
   char name[3];
   int atomicNo;
   real_t mass;
} SpeciesData;



typedef struct ValidateSt
{
   double eTot0;
   int nAtoms0;
} Validate;





typedef struct SimFlatSt
{
   int nSteps;
   int printRate;
   double dt;

   Domain* domain;

   LinkCell* boxes;

   Atoms* atoms;

   SpeciesData* species;

   real_t ePotential;
   real_t eKinetic;

   BasePotential *pot;

   HaloExchange* atomExchange;

} SimFlat;
# 52 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 52 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 53 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/eam.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/eam.h"
struct BasePotentialSt;
struct LinkCellSt;





typedef struct ForceExchangeDataSt
{
   real_t* dfEmbed;
   struct LinkCellSt* boxes;
}ForceExchangeData;

struct BasePotentialSt* initEamPot(const char* dir, const char* file, const char* type);
# 55 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/ljForce.h" 1






struct BasePotentialSt;
struct BasePotentialSt* initLjPot(void);
# 56 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 56 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/yamlOutput.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/yamlOutput.h"
extern FILE* yamlFile;

void yamlBegin(void);
void yamlEnd(void);

void yamlAppInfo(FILE* file);

void printSeparator(FILE* file);
# 58 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/parallel.h"
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
# 59 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
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
# 57 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 60 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.h" 1
# 11 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/mycommand.h"
typedef struct CommandSt
{
   char potDir[1024];
   char potName[1024];
   char potType[1024];
   int doeam;
   int nx;
   int ny;
   int nz;
   int xproc;
   int yproc;
   int zproc;
   int nSteps;
   int printRate;
   double dt;
   double lat;
   double temperature;
   double initialDelta;
} Command;


Command parseCommandLine(int argc, char** argv);


void printCmdYaml(FILE* file, Command* cmd);
# 61 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.h" 1
# 9 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/timestep.h"
double timestep(SimFlat* s, int n, real_t dt);
void computeForce(SimFlat* s);
void kineticEnergy(SimFlat* s);


void redistributeAtoms(struct SimFlatSt* sim);
# 62 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 1 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/constants.h" 1
# 28 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/constants.h"
static const double amuToInternalMass =
         1.660538921e-27 * 1.0e-10 * 1.0e-10
         / (1.0e-15 * 1.0e-15 * 1.602176565e-19);


static const double kB_eV = 8.6173324e-5;


static const double hartreeToEv = 27.21138505;


static const double bohrToAngs = 0.52917721092;
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 63 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 64 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"

# 1 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h" 1
# 11 "/Users/jmg3/num-debug/src/libchimes/checkpoint.h"
extern void checkpoint();

extern void wait_for_checkpoint();
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c" 2
# 66 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 67 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 68 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 69 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 70 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 71 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static SimFlat* initSimulation(Command cmd);
# 72 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void destroySimulation(SimFlat** ps);
# 73 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 74 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void initSubsystems(void);
# 75 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void finalizeSubsystems(void);
# 76 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 77 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static BasePotential* initPotential(
# 78 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   int doeam, const char* potDir, const char* potName, const char* potType);
# 79 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static SpeciesData* initSpecies(BasePotential* pot);
# 80 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static Validate* initValidate(SimFlat* s);
# 81 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void validateResult(const Validate* val, SimFlat *sim);
# 82 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 83 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void sumAtoms(SimFlat* s);
# 84 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void printThings(SimFlat* s, int iStep, double elapsedTime);
# 85 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void printSimulationDataYaml(FILE* file, SimFlat* s);
# 86 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
static void sanityChecks(Command cmd, double cutoff, double latticeConst, char latticeType[8]);
# 87 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 88 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 89 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
int main(int argc, char** argv)
# 90 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{init_chimes(); new_stack((void *)(&main), 2, 2, (size_t)(0UL), (size_t)(15748557669205416477UL), "main|argc|0", "i32", (void *)(&argc), (size_t)4, 0, 0, 0, "main|argv|0", "i8**", (void *)(&argv), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 91 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 92 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(3, (size_t)(15748557669205416348UL), (size_t)(15748557669205416349UL), (size_t)(15748557669205416350UL)); call_lbl_3: calling((void*)&initParallel, 3, 0UL, 2, (size_t)(15748557669205416349UL), (size_t)(15748557669205416350UL)); initParallel(&argc, &argv);
# 93 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_4: calling((void*)&profileStart, 4, 0UL, 1, (size_t)(0UL)); profileStart(totalTimer);
# 94 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_5: calling((void*)&initSubsystems, 5, 0UL, 0); initSubsystems();
# 95 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_6: calling((void*)&timestampBarrier, 6, 0UL, 1, (size_t)(15748557669205417575UL)); timestampBarrier("Starting Initialization\n");
# 96 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 97 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_7: calling((void*)&yamlAppInfo, 7, 0UL, 1, (size_t)(15748557669205417124UL)); yamlAppInfo(yamlFile);
# 98 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_8: calling((void*)&yamlAppInfo, 8, 0UL, 1, (size_t)(15748557669205417124UL)); yamlAppInfo(__stdoutp);
# 99 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 100 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: Command cmd; register_stack_var("main|cmd|0", "%struct.CommandSt = type { [1024 x i8], [1024 x i8], [1024 x i8], i32, i32, i32, i32, i32, i32, i32, i32, i32, double, double, double, double }", (void *)(&cmd), (size_t)3144, 0, 1, 0); if (____chimes_replaying) { goto lbl_1; } call_lbl_10: calling((void*)&parseCommandLine, 10, 0UL, 3, (size_t)(15748557669205416351UL), (size_t)(0UL), (size_t)(15748557669205416477UL)); cmd = Command(parseCommandLine(argc, argv)) ;
# 101 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_11: calling((void*)&printCmdYaml, 11, 0UL, 2, (size_t)(15748557669205417124UL), (size_t)(15748557669205416351UL)); printCmdYaml(yamlFile, &cmd);
# 102 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_12: calling((void*)&printCmdYaml, 12, 0UL, 2, (size_t)(15748557669205417124UL), (size_t)(15748557669205416351UL)); printCmdYaml(__stdoutp, &cmd);
# 103 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 104 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_1: SimFlat *sim; register_stack_var("main|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_2; } call_lbl_13: calling((void*)&initSimulation, 13, 15748557669205416418UL, 1, (size_t)(15748557669205416353UL)); sim = (initSimulation(cmd)) ;
# 105 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205416352UL)); call_lbl_15: calling((void*)&printSimulationDataYaml, 15, 0UL, 2, (size_t)(15748557669205417124UL), (size_t)(15748557669205416418UL)); printSimulationDataYaml(yamlFile, sim);
# 106 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_16: calling((void*)&printSimulationDataYaml, 16, 0UL, 2, (size_t)(15748557669205417124UL), (size_t)(15748557669205416418UL)); printSimulationDataYaml(__stdoutp, sim);
# 107 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 108 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_2: Validate *validate; register_stack_var("main|validate|0", "%struct.ValidateSt*", (void *)(&validate), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_3; } call_lbl_17: calling((void*)&initValidate, 17, 15748557669205416393UL, 1, (size_t)(15748557669205416418UL)); validate = (initValidate(sim)) ;
# 109 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205416354UL)); call_lbl_19: calling((void*)&timestampBarrier, 19, 0UL, 1, (size_t)(15748557669205417575UL)); timestampBarrier("Initialization Finished\n");
# 110 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 111 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_20: calling((void*)&timestampBarrier, 20, 0UL, 1, (size_t)(15748557669205417579UL)); timestampBarrier("Starting simulation\n");
# 112 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 113 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 114 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_3: int nSteps; register_stack_var("main|nSteps|0", "i32", (void *)(&nSteps), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } nSteps = (sim->nSteps) ;
# 115 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_4: int printRate; register_stack_var("main|printRate|0", "i32", (void *)(&printRate), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } printRate = (sim->printRate) ;
# 116 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_5: int iStep; register_stack_var("main|iStep|0", "i32", (void *)(&iStep), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(11): { goto call_lbl_11; } case(12): { goto call_lbl_12; } case(13): { goto call_lbl_13; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(24): { goto call_lbl_24; } case(25): { goto call_lbl_25; } case(26): { goto call_lbl_26; } case(27): { goto call_lbl_27; } case(28): { goto call_lbl_28; } case(29): { goto call_lbl_29; } case(30): { goto call_lbl_30; } case(32): { goto call_lbl_32; } case(33): { goto call_lbl_33; } case(34): { goto call_lbl_34; } case(35): { goto call_lbl_35; } case(36): { goto call_lbl_36; } case(37): { goto call_lbl_37; } case(38): { goto call_lbl_38; } case(39): { goto call_lbl_39; } case(40): { goto call_lbl_40; } case(41): { goto call_lbl_41; } case(42): { goto call_lbl_42; } case(44): { goto call_lbl_44; } case(45): { goto call_lbl_45; } case(46): { goto call_lbl_46; } default: { chimes_error(); } } } iStep = (0) ;
# 117 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(3, (size_t)(15748557669205416355UL), (size_t)(15748557669205416356UL), (size_t)(15748557669205416357UL)); call_lbl_22: calling((void*)&profileStart, 22, 0UL, 1, (size_t)(0UL)); profileStart(loopTimer);
# 118 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   for (; iStep<nSteps;)
# 119 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 120 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      do { call_lbl_23: calling((void*)&profileStart, 23, 0UL, 1, (size_t)(0UL)); profileStart(commReduceTimer); } while(0);
# 121 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       call_lbl_24: calling((void*)&sumAtoms, 24, 0UL, 1, (size_t)(15748557669205416418UL)); sumAtoms(sim);
# 122 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      do { call_lbl_25: calling((void*)&profileStop, 25, 0UL, 1, (size_t)(0UL)); profileStop(commReduceTimer); } while(0);
# 123 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 124 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       call_lbl_26: calling((void*)&printThings, 26, 0UL, 3, (size_t)(15748557669205416418UL), (size_t)(0UL), (size_t)(0UL)); call_lbl_27: calling((void*)&getElapsedTime, 27, 0UL, 1, (size_t)(0UL)); printThings(sim, iStep, getElapsedTime(timestepTimer));
# 125 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 126 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      do { call_lbl_28: calling((void*)&profileStart, 28, 0UL, 1, (size_t)(0UL)); profileStart(timestepTimer); } while(0);
# 127 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       call_lbl_29: calling((void*)&timestep, 29, 0UL, 3, (size_t)(15748557669205416418UL), (size_t)(0UL), (size_t)(0UL)); timestep(sim, printRate, sim->dt);
# 128 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      do { call_lbl_30: calling((void*)&profileStop, 30, 0UL, 1, (size_t)(0UL)); profileStop(timestepTimer); } while(0);
# 129 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 130 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      iStep += printRate;
# 131 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 132 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 133 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      alias_group_changed(1, (size_t)(15748557669205416357UL)); call_lbl_32: calling((void*)&checkpoint, 32, 0UL, 0); checkpoint();
# 134 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 135 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   }
# 136 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_33: calling((void*)&profileStop, 33, 0UL, 1, (size_t)(0UL)); profileStop(loopTimer);
# 137 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 138 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_34: calling((void*)&sumAtoms, 34, 0UL, 1, (size_t)(15748557669205416418UL)); sumAtoms(sim);
# 139 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_35: calling((void*)&printThings, 35, 0UL, 3, (size_t)(15748557669205416418UL), (size_t)(0UL), (size_t)(0UL)); call_lbl_36: calling((void*)&getElapsedTime, 36, 0UL, 1, (size_t)(0UL)); printThings(sim, iStep, getElapsedTime(timestepTimer));
# 140 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_37: calling((void*)&timestampBarrier, 37, 0UL, 1, (size_t)(15748557669205417580UL)); timestampBarrier("Ending simulation\n");
# 141 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 142 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 143 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_38: calling((void*)&validateResult, 38, 0UL, 2, (size_t)(15748557669205416393UL), (size_t)(15748557669205416418UL)); validateResult(validate, sim);
# 144 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_39: calling((void*)&profileStop, 39, 0UL, 1, (size_t)(0UL)); profileStop(totalTimer);
# 145 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 146 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_40: calling((void*)&printPerformanceResults, 40, 0UL, 2, (size_t)(0UL), (size_t)(0UL)); printPerformanceResults(sim->atoms->nGlobal, sim->printRate);
# 147 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_41: calling((void*)&printPerformanceResultsYaml, 41, 0UL, 1, (size_t)(15748557669205417124UL)); printPerformanceResultsYaml(yamlFile);
# 148 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 149 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_42: calling((void*)&destroySimulation, 42, 0UL, 1, (size_t)(15748557669205416352UL)); destroySimulation(&sim);
# 150 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   free_wrapper(validate, 15748557669205416393UL);
# 151 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_44: calling((void*)&finalizeSubsystems, 44, 0UL, 0); finalizeSubsystems();
# 152 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 153 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_45: calling((void*)&timestampBarrier, 45, 0UL, 1, (size_t)(15748557669205417581UL)); timestampBarrier("CoMD Ending\n");
# 154 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_46: calling((void*)&destroyParallel, 46, 0UL, 0); destroyParallel();
# 155 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 156 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   rm_stack(false, 0UL); return 0;
# 157 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
}
# 170 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 170 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
SimFlat* initSimulation(Command cmd)
# 171 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&initSimulation), 1, 0, (size_t)(15748557669205416682UL)); if (____chimes_replaying) { goto lbl_0; }
# 172 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: SimFlat *sim; register_stack_var("initSimulation|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } sim = ((SimFlat *)malloc_wrapper(sizeof(SimFlat), 15748557669205416665UL, 0, 1, (int)sizeof(struct SimFlatSt), 6, (int)__builtin_offsetof(struct SimFlatSt, domain), (int)__builtin_offsetof(struct SimFlatSt, boxes), (int)__builtin_offsetof(struct SimFlatSt, atoms), (int)__builtin_offsetof(struct SimFlatSt, species), (int)__builtin_offsetof(struct SimFlatSt, pot), (int)__builtin_offsetof(struct SimFlatSt, atomExchange))) ;
# 173 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->nSteps = cmd.nSteps;
# 174 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->printRate = cmd.printRate;
# 175 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->dt = cmd.dt;
# 176 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->domain = __null;
# 177 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->boxes = __null;
# 178 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->atoms = __null;
# 179 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->ePotential = 0.0;
# 180 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->eKinetic = 0.0;
# 181 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   sim->atomExchange = __null;
# 182 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 183 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(2, (size_t)(15748557669205416492UL), (size_t)(15748557669205416665UL)); call_lbl_3: calling((void*)&initPotential, 3, 15748557669205417616UL, 4, (size_t)(0UL), (size_t)(15748557669205416682UL), (size_t)(15748557669205416682UL), (size_t)(15748557669205416682UL)); sim->pot = initPotential(cmd.doeam, cmd.potDir, cmd.potName, cmd.potType);
# 184 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_1: real_t latticeConstant; register_stack_var("initSimulation|latticeConstant|0", "double", (void *)(&latticeConstant), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } latticeConstant = (cmd.lat) ;
# 185 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if (cmd.lat < 0.) {latticeConstant = sim->pot->lat; };
# 187 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 188 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 189 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(2, (size_t)(15748557669205416493UL), (size_t)(15748557669205416665UL)); call_lbl_5: calling((void*)&sanityChecks, 5, 0UL, 4, (size_t)(15748557669205416494UL), (size_t)(0UL), (size_t)(0UL), (size_t)(15748557669205417616UL)); sanityChecks(cmd, sim->pot->cutoff, latticeConstant, sim->pot->latticeType);
# 190 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 191 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_6: calling((void*)&initSpecies, 6, 15748557669205417616UL, 1, (size_t)(15748557669205417616UL)); sim->species = initSpecies(sim->pot);
# 192 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 193 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    lbl_2: real3 globalExtent; register_stack_var("initSimulation|globalExtent|0", "[3 x double]", (void *)(globalExtent), (size_t)24, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(8): { goto call_lbl_8; } case(10): { goto call_lbl_10; } case(12): { goto call_lbl_12; } case(14): { goto call_lbl_14; } case(15): { goto call_lbl_15; } case(16): { goto call_lbl_16; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } case(21): { goto call_lbl_21; } case(22): { goto call_lbl_22; } case(23): { goto call_lbl_23; } case(24): { goto call_lbl_24; } case(25): { goto call_lbl_25; } default: { chimes_error(); } } } ;
# 194 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   globalExtent[0] = cmd.nx * latticeConstant;
# 195 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   globalExtent[1] = cmd.ny * latticeConstant;
# 196 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   globalExtent[2] = cmd.nz * latticeConstant;
# 197 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 198 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(2, (size_t)(15748557669205416495UL), (size_t)(15748557669205416665UL)); call_lbl_8: calling((void*)&initDecomposition, 8, 15748557669205417616UL, 4, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(15748557669205416495UL)); sim->domain = initDecomposition(
# 199 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      cmd.xproc, cmd.yproc, cmd.zproc, globalExtent);
# 200 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 201 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205416665UL)); call_lbl_10: calling((void*)&initLinkCells, 10, 15748557669205417616UL, 2, (size_t)(15748557669205417616UL), (size_t)(0UL)); sim->boxes = initLinkCells(sim->domain, sim->pot->cutoff);
# 202 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205416665UL)); call_lbl_12: calling((void*)&initAtoms, 12, 15748557669205417616UL, 1, (size_t)(15748557669205417616UL)); sim->atoms = initAtoms(sim->boxes);
# 203 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 204 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 205 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205416665UL)); call_lbl_14: calling((void*)&createFccLattice, 14, 0UL, 5, (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(0UL), (size_t)(15748557669205416665UL)); createFccLattice(cmd.nx, cmd.ny, cmd.nz, latticeConstant, sim);
# 206 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_15: calling((void*)&setTemperature, 15, 0UL, 2, (size_t)(15748557669205416665UL), (size_t)(0UL)); setTemperature(sim, cmd.temperature);
# 207 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_16: calling((void*)&randomDisplacements, 16, 0UL, 2, (size_t)(15748557669205416665UL), (size_t)(0UL)); randomDisplacements(sim, cmd.initialDelta);
# 208 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 209 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_17: calling((void*)&initAtomHaloExchange, 17, 15748557669205417616UL, 2, (size_t)(15748557669205417616UL), (size_t)(15748557669205417616UL)); sim->atomExchange = initAtomHaloExchange(sim->domain, sim->boxes);
# 210 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 211 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 212 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   do { alias_group_changed(1, (size_t)(15748557669205416665UL)); call_lbl_19: calling((void*)&profileStart, 19, 0UL, 1, (size_t)(0UL)); profileStart(redistributeTimer); } while(0);
# 213 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_20: calling((void*)&redistributeAtoms, 20, 0UL, 1, (size_t)(15748557669205416665UL)); redistributeAtoms(sim);
# 214 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   do { call_lbl_21: calling((void*)&profileStop, 21, 0UL, 1, (size_t)(0UL)); profileStop(redistributeTimer); } while(0);
# 215 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 216 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   do { call_lbl_22: calling((void*)&profileStart, 22, 0UL, 1, (size_t)(0UL)); profileStart(computeForceTimer); } while(0);
# 217 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_23: calling((void*)&computeForce, 23, 0UL, 1, (size_t)(15748557669205416665UL)); computeForce(sim);
# 218 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   do { call_lbl_24: calling((void*)&profileStop, 24, 0UL, 1, (size_t)(0UL)); profileStop(computeForceTimer); } while(0);
# 219 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 220 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_25: calling((void*)&kineticEnergy, 25, 0UL, 1, (size_t)(15748557669205416665UL)); kineticEnergy(sim);
# 221 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 222 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   rm_stack(true, 15748557669205416665UL); return sim;
# 223 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
}
# 224 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 225 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 226 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void destroySimulation(SimFlat** ps)
# 227 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&destroySimulation), 1, 1, (size_t)(15748557669205417289UL), "destroySimulation|ps|0", "%struct.SimFlatSt**", (void *)(&ps), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 228 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if (!ps) {alias_group_changed(3, (size_t)(15748557669205417232UL), (size_t)(15748557669205417233UL), (size_t)(15748557669205417289UL)); rm_stack(false, 0UL); return;; };
# 229 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 230 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: SimFlat *s; register_stack_var("destroySimulation|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_1; } s = (*ps) ;
# 231 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if (!s) {alias_group_changed(3, (size_t)(15748557669205417232UL), (size_t)(15748557669205417233UL), (size_t)(15748557669205417289UL)); rm_stack(false, 0UL); return;; };
# 232 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 233 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_1: BasePotential *pot; register_stack_var("destroySimulation|pot|0", "%struct.BasePotentialSt*", (void *)(&pot), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(6): { goto call_lbl_6; } case(8): { goto call_lbl_8; } case(9): { goto call_lbl_9; } case(10): { goto call_lbl_10; } default: { chimes_error(); } } } pot = (s->pot) ;
# 234 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if (pot) {alias_group_changed(3, (size_t)(15748557669205417232UL), (size_t)(15748557669205417233UL), (size_t)(15748557669205417234UL)); call_lbl_6: calling((void*)pot->destroy, 6, 0UL, 1, (size_t)(15748557669205417234UL)); pot->destroy(&pot); };
# 235 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(3, (size_t)(15748557669205417232UL), (size_t)(15748557669205417233UL), (size_t)(15748557669205417234UL)); call_lbl_8: calling((void*)&destroyLinkCells, 8, 0UL, 1, (size_t)(15748557669205417243UL)); destroyLinkCells(&(s->boxes));
# 236 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_9: calling((void*)&destroyAtoms, 9, 0UL, 1, (size_t)(15748557669205417252UL)); destroyAtoms(s->atoms);
# 237 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_10: calling((void*)&destroyHaloExchange, 10, 0UL, 1, (size_t)(15748557669205417243UL)); destroyHaloExchange(&(s->atomExchange));
# 238 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   free_wrapper(s->species, 15748557669205417252UL);
# 239 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   free_wrapper(s->domain, 15748557669205417252UL);
# 240 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   free_wrapper(s, 15748557669205417243UL);
# 241 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   *ps = __null;
# 242 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 243 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(3, (size_t)(15748557669205417232UL), (size_t)(15748557669205417233UL), (size_t)(15748557669205417289UL)); rm_stack(false, 0UL); return;
# 244 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
}
# 245 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 246 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void initSubsystems(void)
# 247 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&initSubsystems), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } }
# 248 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 249 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 250 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 251 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 252 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_1: calling((void*)&yamlBegin, 1, 0UL, 0); yamlBegin();
# 253 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
rm_stack(false, 0UL); }
# 254 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 255 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void finalizeSubsystems(void)
# 256 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&finalizeSubsystems), 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } default: { chimes_error(); } } }
# 257 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 258 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 259 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 260 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_1: calling((void*)&yamlEnd, 1, 0UL, 0); yamlEnd();
# 261 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
rm_stack(false, 0UL); }
# 262 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 263 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 264 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
BasePotential* initPotential(
# 265 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   int doeam, const char* potDir, const char* potName, const char* potType)
# 266 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&initPotential), 4, 4, (size_t)(0UL), (size_t)(15748557669205417346UL), (size_t)(15748557669205417347UL), (size_t)(15748557669205417348UL), "initPotential|doeam|0", "i32", (void *)(&doeam), (size_t)4, 0, 0, 0, "initPotential|potDir|0", "i8*", (void *)(&potDir), (size_t)8, 1, 0, 0, "initPotential|potName|0", "i8*", (void *)(&potName), (size_t)8, 1, 0, 0, "initPotential|potType|0", "i8*", (void *)(&potType), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 267 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: BasePotential *pot; register_stack_var("initPotential|pot|0", "%struct.BasePotentialSt*", (void *)(&pot), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } pot = (__null) ;
# 268 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 269 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if (doeam) {alias_group_changed(5, (size_t)(15748557669205417305UL), (size_t)(15748557669205417306UL), (size_t)(15748557669205417307UL), (size_t)(15748557669205417308UL), (size_t)(15748557669205417309UL)); call_lbl_2: calling((void*)&initEamPot, 2, 15748557669205417343UL, 3, (size_t)(15748557669205417346UL), (size_t)(15748557669205417347UL), (size_t)(15748557669205417348UL)); pot = initEamPot(potDir, potName, potType); } else {alias_group_changed(5, (size_t)(15748557669205417305UL), (size_t)(15748557669205417306UL), (size_t)(15748557669205417307UL), (size_t)(15748557669205417308UL), (size_t)(15748557669205417309UL)); call_lbl_4: calling((void*)&initLjPot, 4, 15748557669205417343UL, 0); pot = initLjPot(); } ;
# 273 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205417309UL)); (__builtin_expect(!(pot), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c", 273, "pot") : (void)0);
# 274 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205417309UL)); rm_stack(true, 15748557669205417343UL); return pot;
# 275 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
}
# 276 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 277 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
SpeciesData* initSpecies(BasePotential* pot)
# 278 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&initSpecies), 1, 1, (size_t)(15748557669205417536UL), "initSpecies|pot|0", "%struct.BasePotentialSt*", (void *)(&pot), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 279 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: SpeciesData *species; register_stack_var("initSpecies|species|0", "%struct.SpeciesDataSt*", (void *)(&species), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(3): { goto call_lbl_3; } default: { chimes_error(); } } } species = ((SpeciesData *)malloc_wrapper(sizeof(SpeciesData), 15748557669205417512UL, 0, 1, (int)sizeof(struct SpeciesDataSt), 0)) ;
# 280 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 281 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(2, (size_t)(15748557669205417507UL), (size_t)(15748557669205417508UL)); call_lbl_3: calling((void*)&strcpy, 3, 15748557669205417521UL, 2, (size_t)(15748557669205417512UL), (size_t)(15748557669205417536UL)); strcpy(species->name, pot->name);
# 282 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   species->atomicNo = pot->atomicNo;
# 283 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   species->mass = pot->mass;
# 284 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 285 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205417512UL)); rm_stack(true, 15748557669205417512UL); return species;
# 286 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
}
# 287 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 288 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
Validate* initValidate(SimFlat* sim)
# 289 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&initValidate), 1, 1, (size_t)(15748557669205416954UL), "initValidate|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 290 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205416899UL)); call_lbl_2: calling((void*)&sumAtoms, 2, 0UL, 1, (size_t)(15748557669205416954UL)); sumAtoms(sim);
# 291 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: Validate *val; register_stack_var("initValidate|val|0", "%struct.ValidateSt*", (void *)(&val), (size_t)8, 1, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } val = ((Validate *)malloc_wrapper(sizeof(Validate), 15748557669205416906UL, 0, 1, (int)sizeof(struct ValidateSt), 0)) ;
# 292 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   val->eTot0 = (sim->ePotential + sim->eKinetic) / sim->atoms->nGlobal;
# 293 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   val->nAtoms0 = sim->atoms->nGlobal;
# 294 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 295 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_5: calling((void*)&printRank, 5, 0UL, 0); if (alias_group_changed(2, (size_t)(15748557669205416900UL), (size_t)(15748557669205416906UL)) || printRank())
# 296 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 297 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "\n");
# 298 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       call_lbl_7: calling((void*)&printSeparator, 7, 0UL, 1, (size_t)(15748557669205417124UL)); printSeparator(__stdoutp);
# 299 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "Initial energy : %14.12f, atom count : %d \n",
# 300 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
            val->eTot0, val->nAtoms0);
# 301 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "\n");
# 302 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   }
# 303 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   rm_stack(true, 15748557669205416906UL); return val;
# 304 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
}
# 305 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 306 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void validateResult(const Validate* val, SimFlat* sim)
# 307 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&validateResult), 2, 2, (size_t)(15748557669205417227UL), (size_t)(15748557669205417228UL), "validateResult|val|0", "%struct.ValidateSt*", (void *)(&val), (size_t)8, 1, 0, 0, "validateResult|sim|0", "%struct.SimFlatSt*", (void *)(&sim), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 308 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_2: calling((void*)&printRank, 2, 0UL, 0); if (alias_group_changed(2, (size_t)(15748557669205417147UL), (size_t)(15748557669205417148UL)) || printRank())
# 309 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 310 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
        lbl_0: real_t eFinal; register_stack_var("validateResult|eFinal|0", "double", (void *)(&eFinal), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } eFinal = ((sim->ePotential + sim->eKinetic) / sim->atoms->nGlobal) ;
# 311 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 312 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
        lbl_1: int nAtomsDelta; register_stack_var("validateResult|nAtomsDelta|0", "i32", (void *)(&nAtomsDelta), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } default: { chimes_error(); } } } nAtomsDelta = ((sim->atoms->nGlobal - val->nAtoms0)) ;
# 313 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 314 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "\n");
# 315 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "\n");
# 316 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "Simulation Validation:\n");
# 317 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 318 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "  Initial energy  : %14.12f\n", val->eTot0);
# 319 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "  Final energy    : %14.12f\n", eFinal);
# 320 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp, "  eFinal/eInitial : %f\n", eFinal/val->eTot0);
# 321 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      if ( nAtomsDelta == 0)
# 322 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      {
# 323 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
         fprintf(__stdoutp, "  Final atom count : %d, no atoms lost\n",
# 324 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
               sim->atoms->nGlobal);
# 325 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      }
# 326 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      else
# 327 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      {
# 328 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
         fprintf(__stdoutp, "#############################\n");
# 329 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
         fprintf(__stdoutp, "# WARNING: %6d atoms lost #\n", nAtomsDelta);
# 330 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
         fprintf(__stdoutp, "#############################\n");
# 331 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      }
# 332 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   }
# 333 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
alias_group_changed(2, (size_t)(15748557669205417149UL), (size_t)(15748557669205417150UL)); rm_stack(false, 0UL); }
# 334 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 335 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void sumAtoms(SimFlat* s)
# 336 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&sumAtoms), 1, 1, (size_t)(15748557669205416999UL), "sumAtoms|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 337 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 338 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   s->atoms->nLocal = 0;
# 339 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   { lbl_0: int i; register_stack_var("sumAtoms|i|0", "i32", (void *)(&i), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } default: { chimes_error(); } } } for ( i = (0) ; i < s->boxes->nLocalBoxes; i++)
# 340 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 341 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      s->atoms->nLocal += s->boxes->nAtoms[i];
# 342 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   } }
# 343 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 344 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   do { alias_group_changed(3, (size_t)(15748557669205416955UL), (size_t)(15748557669205416956UL), (size_t)(15748557669205417001UL)); call_lbl_2: calling((void*)&profileStart, 2, 0UL, 1, (size_t)(0UL)); profileStart(commReduceTimer); } while(0);
# 345 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_3: calling((void*)&addIntParallel, 3, 0UL, 3, (size_t)(15748557669205417001UL), (size_t)(15748557669205417001UL), (size_t)(0UL)); addIntParallel(&s->atoms->nLocal, &s->atoms->nGlobal, 1);
# 346 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   do { call_lbl_4: calling((void*)&profileStop, 4, 0UL, 1, (size_t)(0UL)); profileStop(commReduceTimer); } while(0);
# 347 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
rm_stack(false, 0UL); }
# 348 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 349 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 350 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 351 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 352 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 353 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void printThings(SimFlat* s, int iStep, double elapsedTime)
# 354 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&printThings), 3, 3, (size_t)(15748557669205417140UL), (size_t)(0UL), (size_t)(0UL), "printThings|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0, "printThings|iStep|0", "i32", (void *)(&iStep), (size_t)4, 0, 0, 0, "printThings|elapsedTime|0", "double", (void *)(&elapsedTime), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 355 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 356 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    static int iStepPrev; iStepPrev = (-1) ;
# 357 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    static int firstCall; firstCall = (1) ;
# 358 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 359 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: int nEval; register_stack_var("printThings|nEval|0", "i32", (void *)(&nEval), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } nEval = (iStep - iStepPrev) ;
# 360 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   iStepPrev = iStep;
# 361 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 362 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(5, (size_t)(15748557669205417014UL), (size_t)(15748557669205417015UL), (size_t)(15748557669205417016UL), (size_t)(15748557669205417017UL), (size_t)(15748557669205417593UL)); call_lbl_2: calling((void*)&printRank, 2, 0UL, 0); if (!printRank()) {alias_group_changed(6, (size_t)(15748557669205417018UL), (size_t)(15748557669205417019UL), (size_t)(15748557669205417020UL), (size_t)(15748557669205417021UL), (size_t)(15748557669205417022UL), (size_t)(15748557669205417023UL)); rm_stack(false, 0UL); return;; };
# 364 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 365 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if (firstCall)
# 366 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 367 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      firstCall = 0;
# 368 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      fprintf(__stdoutp,
# 369 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       "#                                                                                         Performance\n"
# 370 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       "#  Loop   Time(fs)       Total Energy   Potential Energy     Kinetic Energy  Temperature   (us/atom)     # Atoms\n");
# 371 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      alias_group_changed(1, (size_t)(15748557669205417593UL)); call_lbl_7: calling((void*)&fflush, 7, 0UL, 1, (size_t)(15748557669205417124UL)); fflush(__stdoutp);
# 372 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   }
# 373 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 374 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_1: real_t time; register_stack_var("printThings|time|0", "double", (void *)(&time), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } time = (iStep * s->dt) ;
# 375 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_2: real_t eTotal; register_stack_var("printThings|eTotal|0", "double", (void *)(&eTotal), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } eTotal = ((s->ePotential + s->eKinetic) / s->atoms->nGlobal) ;
# 376 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_3: real_t eK; register_stack_var("printThings|eK|0", "double", (void *)(&eK), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } eK = (s->eKinetic / s->atoms->nGlobal) ;
# 377 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_4: real_t eU; register_stack_var("printThings|eU|0", "double", (void *)(&eU), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } eU = (s->ePotential / s->atoms->nGlobal) ;
# 378 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_5: real_t Temp; register_stack_var("printThings|Temp|0", "double", (void *)(&Temp), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } Temp = ((s->eKinetic / s->atoms->nGlobal) / (kB_eV * 1.5)) ;
# 379 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 380 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_6: double timePerAtom; register_stack_var("printThings|timePerAtom|0", "double", (void *)(&timePerAtom), (size_t)8, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(7): { goto call_lbl_7; } default: { chimes_error(); } } } timePerAtom = (1.0E+6 * elapsedTime / (double)(nEval * s->atoms->nLocal)) ;
# 381 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 382 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(__stdoutp, " %6d %10.2f %18.12f %18.12f %18.12f %12.4f %10.4f %12d\n",
# 383 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           iStep, time, eTotal, eU, eK, Temp, timePerAtom, s->atoms->nGlobal);
# 384 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
alias_group_changed(6, (size_t)(15748557669205417018UL), (size_t)(15748557669205417019UL), (size_t)(15748557669205417020UL), (size_t)(15748557669205417021UL), (size_t)(15748557669205417022UL), (size_t)(15748557669205417023UL)); rm_stack(false, 0UL); }
# 385 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 386 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 387 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 388 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void printSimulationDataYaml(FILE* file, SimFlat* s)
# 389 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&printSimulationDataYaml), 2, 2, (size_t)(15748557669205416897UL), (size_t)(15748557669205416898UL), "printSimulationDataYaml|file|0", "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0, "printSimulationDataYaml|s|0", "%struct.SimFlatSt*", (void *)(&s), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 390 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 391 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(2, (size_t)(15748557669205416688UL), (size_t)(15748557669205416689UL)); lbl_0: int maxOcc; register_stack_var("printSimulationDataYaml|maxOcc|0", "i32", (void *)(&maxOcc), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(10): { goto call_lbl_10; } case(17): { goto call_lbl_17; } case(19): { goto call_lbl_19; } case(20): { goto call_lbl_20; } default: { chimes_error(); } } } call_lbl_2: calling((void*)&maxOccupancy, 2, 0UL, 1, (size_t)(15748557669205416698UL)); maxOcc = (maxOccupancy(s->boxes)) ;
# 392 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 393 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 394 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205416690UL)); call_lbl_4: calling((void*)&printRank, 4, 0UL, 0); if (!printRank()) {rm_stack(false, 0UL); return;; };
# 396 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 397 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"Simulation data: \n");
# 398 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"  Total atoms        : %d\n",
# 399 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->atoms->nGlobal);
# 400 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"  Min global bounds  : [ %14.10f, %14.10f, %14.10f ]\n",
# 401 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->domain->globalMin[0], s->domain->globalMin[1], s->domain->globalMin[2]);
# 402 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"  Max global bounds  : [ %14.10f, %14.10f, %14.10f ]\n",
# 403 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->domain->globalMax[0], s->domain->globalMax[1], s->domain->globalMax[2]);
# 404 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_10: calling((void*)&printSeparator, 10, 0UL, 1, (size_t)(15748557669205416897UL)); printSeparator(file);
# 405 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"Decomposition data: \n");
# 406 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"  Processors         : %6d,%6d,%6d\n",
# 407 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->domain->procGrid[0], s->domain->procGrid[1], s->domain->procGrid[2]);
# 408 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"  Local boxes        : %6d,%6d,%6d = %8d\n",
# 409 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->boxes->gridSize[0], s->boxes->gridSize[1], s->boxes->gridSize[2],
# 410 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->boxes->gridSize[0]*s->boxes->gridSize[1]*s->boxes->gridSize[2]);
# 411 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"  Box size           : [ %14.10f, %14.10f, %14.10f ]\n",
# 412 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->boxes->boxSize[0], s->boxes->boxSize[1], s->boxes->boxSize[2]);
# 413 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"  Box factor         : [ %14.10f, %14.10f, %14.10f ] \n",
# 414 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->boxes->boxSize[0]/s->pot->cutoff,
# 415 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->boxes->boxSize[1]/s->pot->cutoff,
# 416 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           s->boxes->boxSize[2]/s->pot->cutoff);
# 417 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file, "  Max Link Cell Occupancy: %d of %d\n",
# 418 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
           maxOcc, 64);
# 419 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_17: calling((void*)&printSeparator, 17, 0UL, 1, (size_t)(15748557669205416897UL)); printSeparator(file);
# 420 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   fprintf(file,"Potential data: \n");
# 421 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_19: calling((void*)s->pot->print, 19, 0UL, 2, (size_t)(15748557669205416897UL), (size_t)(15748557669205416698UL)); s->pot->print(file, s->pot);
# 422 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 423 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_20: calling((void*)&fflush, 20, 0UL, 1, (size_t)(15748557669205416897UL)); fflush(file);
# 424 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
rm_stack(false, 0UL); }
# 425 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 426 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 427 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
void sanityChecks(Command cmd, double cutoff, double latticeConst, char latticeType[8])
# 428 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
{new_stack((void *)(&sanityChecks), 4, 3, (size_t)(15748557669205417503UL), (size_t)(0UL), (size_t)(0UL), (size_t)(15748557669205417506UL), "sanityChecks|cutoff|0", "double", (void *)(&cutoff), (size_t)8, 0, 0, 0, "sanityChecks|latticeConst|0", "double", (void *)(&latticeConst), (size_t)8, 0, 0, 0, "sanityChecks|latticeType|0", "i8*", (void *)(&latticeType), (size_t)8, 1, 0, 0); if (____chimes_replaying) { goto lbl_0; }
# 429 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_0: int failCode; register_stack_var("sanityChecks|failCode|0", "i32", (void *)(&failCode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_1; } failCode = (0) ;
# 430 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 431 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 432 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_1: int nProcs; register_stack_var("sanityChecks|nProcs|0", "i32", (void *)(&nProcs), (size_t)4, 0, 0, 0); if (____chimes_replaying) { goto lbl_2; } nProcs = (cmd.xproc * cmd.yproc * cmd.zproc) ;
# 433 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(5, (size_t)(15748557669205417349UL), (size_t)(15748557669205417350UL), (size_t)(15748557669205417351UL), (size_t)(15748557669205417352UL), (size_t)(15748557669205417353UL)); call_lbl_2: calling((void*)&getNRanks, 2, 0UL, 0); if (nProcs != getNRanks())
# 434 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 435 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      failCode |= 1;
# 436 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       call_lbl_4: calling((void*)&printRank, 4, 0UL, 0); if (alias_group_changed(1, (size_t)(15748557669205417352UL)) || printRank()) {fprintf(__stdoutp, "\nNumber of MPI ranks must match xproc * yproc * zproc\n"); };
# 439 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   }
# 440 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 441 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 442 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_2: double minx; register_stack_var("sanityChecks|minx|0", "double", (void *)(&minx), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_3; } minx = (2 * cutoff * cmd.xproc) ;
# 443 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_3: double miny; register_stack_var("sanityChecks|miny|0", "double", (void *)(&miny), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_4; } miny = (2 * cutoff * cmd.yproc) ;
# 444 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_4: double minz; register_stack_var("sanityChecks|minz|0", "double", (void *)(&minz), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_5; } minz = (2 * cutoff * cmd.zproc) ;
# 445 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_5: double sizex; register_stack_var("sanityChecks|sizex|0", "double", (void *)(&sizex), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_6; } sizex = (cmd.nx * latticeConst) ;
# 446 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_6: double sizey; register_stack_var("sanityChecks|sizey|0", "double", (void *)(&sizey), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_7; } sizey = (cmd.ny * latticeConst) ;
# 447 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_7: double sizez; register_stack_var("sanityChecks|sizez|0", "double", (void *)(&sizez), (size_t)8, 0, 0, 0); if (____chimes_replaying) { goto lbl_8; } sizez = (cmd.nz * latticeConst) ;
# 448 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 449 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if ( sizex < minx || sizey < miny || sizez < minz)
# 450 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 451 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      failCode |= 2;
# 452 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       call_lbl_7: calling((void*)&printRank, 7, 0UL, 0); if (alias_group_changed(7, (size_t)(15748557669205417352UL), (size_t)(15748557669205417354UL), (size_t)(15748557669205417355UL), (size_t)(15748557669205417356UL), (size_t)(15748557669205417357UL), (size_t)(15748557669205417358UL), (size_t)(15748557669205417359UL)) || printRank()) {fprintf(__stdoutp, "\nSimulation too small.\n  Increase the number of unit cells to make the simulation\n  at least (%3.2f, %3.2f. %3.2f) Ansgstroms in size\n", minx, miny, minz); };
# 457 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   }
# 458 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 459 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 460 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
    call_lbl_10: calling((void*)&strcasecmp, 10, 0UL, 2, (size_t)(15748557669205417506UL), (size_t)(15748557669205417608UL)); if (alias_group_changed(7, (size_t)(15748557669205417352UL), (size_t)(15748557669205417354UL), (size_t)(15748557669205417355UL), (size_t)(15748557669205417356UL), (size_t)(15748557669205417357UL), (size_t)(15748557669205417358UL), (size_t)(15748557669205417359UL)) || strcasecmp(latticeType, "FCC") != 0)
# 461 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   {
# 462 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
      failCode |= 4;
# 463 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
       call_lbl_12: calling((void*)&printRank, 12, 0UL, 0); if (alias_group_changed(1, (size_t)(15748557669205417352UL)) || printRank()) {fprintf(__stdoutp, "\nOnly FCC Lattice type supported, not %s. Fatal Error.\n", latticeType); };
# 467 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   }
# 468 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
     lbl_8: int checkCode; register_stack_var("sanityChecks|checkCode|0", "i32", (void *)(&checkCode), (size_t)4, 0, 0, 0); if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(7): { goto call_lbl_7; } case(10): { goto call_lbl_10; } case(12): { goto call_lbl_12; } case(15): { goto call_lbl_15; } default: { chimes_error(); } } } checkCode = (failCode) ;
# 469 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   alias_group_changed(1, (size_t)(15748557669205417360UL)); call_lbl_15: calling((void*)&bcastParallel, 15, 0UL, 3, (size_t)(15748557669205417360UL), (size_t)(0UL), (size_t)(0UL)); bcastParallel(&checkCode, sizeof(int), 0);
# 470 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 471 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 472 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   (__builtin_expect(!(checkCode == failCode), 0) ? __assert_rtn(__func__, "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c", 472, "checkCode == failCode") : (void)0);
# 473 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
# 474 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
   if (failCode != 0) {exit(failCode); };
# 476 "/Users/jmg3/num-debug/src/examples/openmp/CoMD/src-openmp/CoMD.c"
rm_stack(false, 0UL); }


static int module_init() {
    init_module(15748557669205416347UL, 35, 13, 15748557669205416347UL + 607UL, 15748557669205416347UL + 571UL, 15748557669205416347UL + 318UL, 15748557669205416347UL + 1269UL, 15748557669205416347UL + 887UL, 15748557669205416347UL + 905UL, 15748557669205416347UL + 886UL, 15748557669205416347UL + 896UL, 15748557669205416347UL + 885UL, 15748557669205416347UL + 942UL, 15748557669205416347UL + 667UL, 15748557669205416347UL + 793UL, 15748557669205416347UL + 551UL, 15748557669205416347UL + 351UL, 15748557669205416347UL + 608UL, 15748557669205416347UL + 652UL, 15748557669205416347UL + 553UL, 15748557669205416347UL + 559UL, 15748557669205416347UL + 552UL, 15748557669205416347UL + 607UL, 15748557669205416347UL + 1160UL, 15748557669205416347UL + 1189UL, 15748557669205416347UL + 1161UL, 15748557669205416347UL + 1165UL, 15748557669205416347UL + 959UL, 15748557669205416347UL + 999UL, 15748557669205416347UL + 793UL, 15748557669205416347UL + 721UL, 15748557669205416347UL + 3UL, 15748557669205416347UL + 130UL, 15748557669205416347UL + 654UL, 15748557669205416347UL + 634UL, 15748557669205416347UL + 5UL, 15748557669205416347UL + 71UL, 15748557669205416347UL + 341UL, 15748557669205416347UL + 550UL, 15748557669205416347UL + 7UL, 15748557669205416347UL + 46UL, 15748557669205416347UL + 652UL, 15748557669205416347UL + 654UL, 15748557669205416347UL + 145UL, 15748557669205416347UL + 318UL, 15748557669205416347UL + 342UL, 15748557669205416347UL + 551UL, 15748557669205416347UL + 896UL, 15748557669205416347UL + 905UL, 15748557669205416347UL + 1229UL, 15748557669205416347UL + 777UL, 15748557669205416347UL + 71UL, 15748557669205416347UL + 112UL, 15748557669205416347UL + 881UL, 15748557669205416347UL + 821UL, 15748557669205416347UL + 1004UL, 15748557669205416347UL + 1159UL, 15748557669205416347UL + 960UL, 15748557669205416347UL + 1000UL, 15748557669205416347UL + 961UL, 15748557669205416347UL + 1001UL, 15748557669205416347UL + 962UL, 15748557669205416347UL + 996UL, 15748557669205416347UL + 905UL, 15748557669205416347UL + 912UL, 15748557669205416347UL + 942UL, 15748557669205416347UL + 896UL, 15748557669205416347UL + 351UL, 15748557669205416347UL + 540UL, 15748557669205416347UL + 801UL, 15748557669205416347UL + 881UL, 15748557669205416347UL + 800UL, 15748557669205416347UL + 880UL, "AtomsSt", 8, (int)__builtin_offsetof (struct AtomsSt, nLocal), (int)__builtin_offsetof (struct AtomsSt, nGlobal), (int)__builtin_offsetof (struct AtomsSt, gid), (int)__builtin_offsetof (struct AtomsSt, iSpecies), (int)__builtin_offsetof (struct AtomsSt, r), (int)__builtin_offsetof (struct AtomsSt, p), (int)__builtin_offsetof (struct AtomsSt, f), (int)__builtin_offsetof (struct AtomsSt, U), "BasePotentialSt", 9, (int)__builtin_offsetof (struct BasePotentialSt, cutoff), (int)__builtin_offsetof (struct BasePotentialSt, mass), (int)__builtin_offsetof (struct BasePotentialSt, lat), (int)__builtin_offsetof (struct BasePotentialSt, latticeType), (int)__builtin_offsetof (struct BasePotentialSt, name), (int)__builtin_offsetof (struct BasePotentialSt, atomicNo), (int)__builtin_offsetof (struct BasePotentialSt, force), (int)__builtin_offsetof (struct BasePotentialSt, print), (int)__builtin_offsetof (struct BasePotentialSt, destroy), "CommandSt", 16, (int)__builtin_offsetof (struct CommandSt, potDir), (int)__builtin_offsetof (struct CommandSt, potName), (int)__builtin_offsetof (struct CommandSt, potType), (int)__builtin_offsetof (struct CommandSt, doeam), (int)__builtin_offsetof (struct CommandSt, nx), (int)__builtin_offsetof (struct CommandSt, ny), (int)__builtin_offsetof (struct CommandSt, nz), (int)__builtin_offsetof (struct CommandSt, xproc), (int)__builtin_offsetof (struct CommandSt, yproc), (int)__builtin_offsetof (struct CommandSt, zproc), (int)__builtin_offsetof (struct CommandSt, nSteps), (int)__builtin_offsetof (struct CommandSt, printRate), (int)__builtin_offsetof (struct CommandSt, dt), (int)__builtin_offsetof (struct CommandSt, lat), (int)__builtin_offsetof (struct CommandSt, temperature), (int)__builtin_offsetof (struct CommandSt, initialDelta), "DomainSt", 8, (int)__builtin_offsetof (struct DomainSt, procGrid), (int)__builtin_offsetof (struct DomainSt, procCoord), (int)__builtin_offsetof (struct DomainSt, globalMin), (int)__builtin_offsetof (struct DomainSt, globalMax), (int)__builtin_offsetof (struct DomainSt, globalExtent), (int)__builtin_offsetof (struct DomainSt, localMin), (int)__builtin_offsetof (struct DomainSt, localMax), (int)__builtin_offsetof (struct DomainSt, localExtent), "HaloExchangeSt", 6, (int)__builtin_offsetof (struct HaloExchangeSt, nbrRank), (int)__builtin_offsetof (struct HaloExchangeSt, bufCapacity), (int)__builtin_offsetof (struct HaloExchangeSt, loadBuffer), (int)__builtin_offsetof (struct HaloExchangeSt, unloadBuffer), (int)__builtin_offsetof (struct HaloExchangeSt, destroy), (int)__builtin_offsetof (struct HaloExchangeSt, parms), "LinkCellSt", 10, (int)__builtin_offsetof (struct LinkCellSt, gridSize), (int)__builtin_offsetof (struct LinkCellSt, nLocalBoxes), (int)__builtin_offsetof (struct LinkCellSt, nHaloBoxes), (int)__builtin_offsetof (struct LinkCellSt, nTotalBoxes), (int)__builtin_offsetof (struct LinkCellSt, localMin), (int)__builtin_offsetof (struct LinkCellSt, localMax), (int)__builtin_offsetof (struct LinkCellSt, boxSize), (int)__builtin_offsetof (struct LinkCellSt, invBoxSize), (int)__builtin_offsetof (struct LinkCellSt, nAtoms), (int)__builtin_offsetof (struct LinkCellSt, nbrBoxes), "SimFlatSt", 11, (int)__builtin_offsetof (struct SimFlatSt, nSteps), (int)__builtin_offsetof (struct SimFlatSt, printRate), (int)__builtin_offsetof (struct SimFlatSt, dt), (int)__builtin_offsetof (struct SimFlatSt, domain), (int)__builtin_offsetof (struct SimFlatSt, boxes), (int)__builtin_offsetof (struct SimFlatSt, atoms), (int)__builtin_offsetof (struct SimFlatSt, species), (int)__builtin_offsetof (struct SimFlatSt, ePotential), (int)__builtin_offsetof (struct SimFlatSt, eKinetic), (int)__builtin_offsetof (struct SimFlatSt, pot), (int)__builtin_offsetof (struct SimFlatSt, atomExchange), "SpeciesDataSt", 3, (int)__builtin_offsetof (struct SpeciesDataSt, name), (int)__builtin_offsetof (struct SpeciesDataSt, atomicNo), (int)__builtin_offsetof (struct SpeciesDataSt, mass), "TimerHandle", 0, "ValidateSt", 2, (int)__builtin_offsetof (struct ValidateSt, eTot0), (int)__builtin_offsetof (struct ValidateSt, nAtoms0), "__sFILE", 20, (int)__builtin_offsetof (struct __sFILE, _p), (int)__builtin_offsetof (struct __sFILE, _r), (int)__builtin_offsetof (struct __sFILE, _w), (int)__builtin_offsetof (struct __sFILE, _flags), (int)__builtin_offsetof (struct __sFILE, _file), (int)__builtin_offsetof (struct __sFILE, _bf), (int)__builtin_offsetof (struct __sFILE, _lbfsize), (int)__builtin_offsetof (struct __sFILE, _cookie), (int)__builtin_offsetof (struct __sFILE, _close), (int)__builtin_offsetof (struct __sFILE, _read), (int)__builtin_offsetof (struct __sFILE, _seek), (int)__builtin_offsetof (struct __sFILE, _write), (int)__builtin_offsetof (struct __sFILE, _ub), (int)__builtin_offsetof (struct __sFILE, _extra), (int)__builtin_offsetof (struct __sFILE, _ur), (int)__builtin_offsetof (struct __sFILE, _ubuf), (int)__builtin_offsetof (struct __sFILE, _nbuf), (int)__builtin_offsetof (struct __sFILE, _lb), (int)__builtin_offsetof (struct __sFILE, _blksize), (int)__builtin_offsetof (struct __sFILE, _offset), "__sFILEX", 0, "__sbuf", 2, (int)__builtin_offsetof (struct __sbuf, _base), (int)__builtin_offsetof (struct __sbuf, _size));
    return 0;
}

static int __libchimes_module_init = module_init();
