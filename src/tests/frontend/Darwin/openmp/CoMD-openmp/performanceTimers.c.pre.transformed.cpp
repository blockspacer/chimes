# 1 "performanceTimers.c.pre.transformed.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 1 3 4
# 147 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long int ptrdiff_t;
# 212 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 1 "<command-line>" 2
# 1 "performanceTimers.c.pre.transformed.cpp"
static int ____chimes_does_checkpoint_profileStart_npm = 1;
static int ____chimes_does_checkpoint_profileStop_npm = 1;
static int ____chimes_does_checkpoint_getElapsedTime_npm = 1;
static int ____chimes_does_checkpoint_printPerformanceResults_npm = 1;
static int ____chimes_does_checkpoint_printPerformanceResultsYaml_npm = 1;
static int ____chimes_does_checkpoint_getTime_npm = 1;
static int ____chimes_does_checkpoint_getTick_npm = 1;
static int ____chimes_does_checkpoint_timerStats_npm = 1;
static int ____chimes_does_checkpoint_addDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_getMyRank_npm = 1;
static int ____chimes_does_checkpoint_getNRanks_npm = 1;
static int ____chimes_does_checkpoint_maxRankDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_minRankDoubleParallel_npm = 1;
static int ____chimes_does_checkpoint_printRank_npm = 1;

static int ____must_checkpoint_getTime_ptime_0 = 2;
static int ____must_checkpoint_printPerformanceResults_nGlobalAtoms_0 = 2;
static int ____must_checkpoint_printPerformanceResults_printRate_0 = 2;
static int ____must_checkpoint_printPerformanceResults_tick_0 = 2;
static int ____must_checkpoint_printPerformanceResults_loopTime_0 = 2;
static int ____must_checkpoint_printPerformanceResults_____chimes_unroll_var_0_0 = 2;
static int ____must_checkpoint_printPerformanceResults_ii_0 = 2;
static int ____must_checkpoint_printPerformanceResults_totalTime_0 = 2;
static int ____must_checkpoint_printPerformanceResults_____chimes_unroll_var_1_0 = 2;
static int ____must_checkpoint_printPerformanceResults_ii_1 = 2;
static int ____must_checkpoint_timerStats_sendBuf_0 = 2;
static int ____must_checkpoint_timerStats_ii_1 = 2;
static int ____must_checkpoint_timerStats_reduceSendBuf_0 = 2;
static int ____must_checkpoint_timerStats_ii_2 = 2;
static int ____must_checkpoint_timerStats_ii_3 = 2;
static int ____must_checkpoint_timerStats_ii_4 = 2;
static int ____must_checkpoint_timerStats_ii_5 = 2;
static int ____must_checkpoint_timerStats_temp_0 = 2;
static int ____must_checkpoint_timerStats_ii_6 = 2;
static int ____must_checkpoint_timerStats_____chimes_unroll_var_4_0 = 2;
static int ____must_checkpoint_printPerformanceResultsYaml_file_0 = 2;
static int ____must_checkpoint_printPerformanceResultsYaml_tick_0 = 2;
static int ____must_checkpoint_printPerformanceResultsYaml_loopTime_0 = 2;
static int ____must_checkpoint_printPerformanceResultsYaml_____chimes_unroll_var_2_0 = 2;

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
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
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
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 29 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 1





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
# 7 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h" 2


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
# 57 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.h"
void profileStart(const enum TimerHandle handle);
void profileStop(const enum TimerHandle handle);


double getElapsedTime(const enum TimerHandle handle);


void printPerformanceResults(int nGlobalAtoms, int printRate);


void printPerformanceResultsYaml(FILE* file);
# 30 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 30 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 31 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"

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
# 1 "/usr/include/sys/_types/_timeval.h" 1 3 4
# 30 "/usr/include/sys/_types/_timeval.h" 3 4
struct timeval
{
 __darwin_time_t tv_sec;
 __darwin_suseconds_t tv_usec;
};
# 78 "/usr/include/sys/time.h" 2 3 4

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
# 33 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
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
# 34 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
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
# 35 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/usr/include/inttypes.h" 1 3 4
# 227 "/usr/include/inttypes.h" 3 4
# 1 "/usr/include/sys/_types/_wchar_t.h" 1 3 4
# 228 "/usr/include/inttypes.h" 2 3 4



extern "C" {



extern intmax_t
imaxabs(intmax_t j);


typedef struct {
 intmax_t quot;
 intmax_t rem;
} imaxdiv_t;


extern imaxdiv_t
imaxdiv(intmax_t __numer, intmax_t __denom);



extern intmax_t
strtoimax(const char * __nptr,
   char ** __endptr,
   int __base);


extern uintmax_t
strtoumax(const char * __nptr,
   char ** __endptr,
   int __base);



extern intmax_t
wcstoimax(const wchar_t * __nptr,
   wchar_t ** __endptr,
   int __base);


extern uintmax_t
wcstoumax(const wchar_t * __nptr,
   wchar_t ** __endptr,
   int __base);






}
# 36 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 1 3 4
# 48 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern "C" {
# 59 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
    typedef float float_t;
    typedef double double_t;
# 126 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern int __math_errhandling(void);
# 159 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern int __fpclassifyf(float);
extern int __fpclassifyd(double);
extern int __fpclassifyl(long double);
# 203 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float);
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double);
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double);
inline __attribute__ ((__always_inline__)) int __inline_isinff(float);
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double);
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnand(double);
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double);
inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float);
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double);
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double);
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float);
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double);
inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double);

inline __attribute__ ((__always_inline__)) int __inline_isfinitef(float __x) {
    return __x == __x && __builtin_fabsf(__x) != __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinited(double __x) {
    return __x == __x && __builtin_fabs(__x) != __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isfinitel(long double __x) {
    return __x == __x && __builtin_fabsl(__x) != __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isinff(float __x) {
    return __builtin_fabsf(__x) == __builtin_inff();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfd(double __x) {
    return __builtin_fabs(__x) == __builtin_inf();
}
inline __attribute__ ((__always_inline__)) int __inline_isinfl(long double __x) {
    return __builtin_fabsl(__x) == __builtin_infl();
}
inline __attribute__ ((__always_inline__)) int __inline_isnanf(float __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnand(double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_isnanl(long double __x) {
    return __x != __x;
}
inline __attribute__ ((__always_inline__)) int __inline_signbitf(float __x) {
    union { float __f; unsigned int __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 31);
}
inline __attribute__ ((__always_inline__)) int __inline_signbitd(double __x) {
    union { double __f; unsigned long long __u; } __u;
    __u.__f = __x;
    return (int)(__u.__u >> 63);
}

inline __attribute__ ((__always_inline__)) int __inline_signbitl(long double __x) {
    union {
        long double __ld;
        struct{ unsigned long long __m; unsigned short __sexp; } __p;
    } __u;
    __u.__ld = __x;
    return (int)(__u.__p.__sexp >> 15);
}







inline __attribute__ ((__always_inline__)) int __inline_isnormalf(float __x) {
    return __inline_isfinitef(__x) && __builtin_fabsf(__x) >= 1.17549435082228750797e-38F;
}
inline __attribute__ ((__always_inline__)) int __inline_isnormald(double __x) {
    return __inline_isfinited(__x) && __builtin_fabs(__x) >= double(2.22507385850720138309e-308L);
}
inline __attribute__ ((__always_inline__)) int __inline_isnormall(long double __x) {
    return __inline_isfinitel(__x) && __builtin_fabsl(__x) >= 3.36210314311209350626e-4932L;
}
# 337 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float acosf(float);
extern double acos(double);
extern long double acosl(long double);

extern float asinf(float);
extern double asin(double);
extern long double asinl(long double);

extern float atanf(float);
extern double atan(double);
extern long double atanl(long double);

extern float atan2f(float, float);
extern double atan2(double, double);
extern long double atan2l(long double, long double);

extern float cosf(float);
extern double cos(double);
extern long double cosl(long double);

extern float sinf(float);
extern double sin(double);
extern long double sinl(long double);

extern float tanf(float);
extern double tan(double);
extern long double tanl(long double);

extern float acoshf(float);
extern double acosh(double);
extern long double acoshl(long double);

extern float asinhf(float);
extern double asinh(double);
extern long double asinhl(long double);

extern float atanhf(float);
extern double atanh(double);
extern long double atanhl(long double);

extern float coshf(float);
extern double cosh(double);
extern long double coshl(long double);

extern float sinhf(float);
extern double sinh(double);
extern long double sinhl(long double);

extern float tanhf(float);
extern double tanh(double);
extern long double tanhl(long double);

extern float expf(float);
extern double exp(double);
extern long double expl(long double);

extern float exp2f(float);
extern double exp2(double);
extern long double exp2l(long double);

extern float expm1f(float);
extern double expm1(double);
extern long double expm1l(long double);

extern float logf(float);
extern double log(double);
extern long double logl(long double);

extern float log10f(float);
extern double log10(double);
extern long double log10l(long double);

extern float log2f(float);
extern double log2(double);
extern long double log2l(long double);

extern float log1pf(float);
extern double log1p(double);
extern long double log1pl(long double);

extern float logbf(float);
extern double logb(double);
extern long double logbl(long double);

extern float modff(float, float *);
extern double modf(double, double *);
extern long double modfl(long double, long double *);

extern float ldexpf(float, int);
extern double ldexp(double, int);
extern long double ldexpl(long double, int);

extern float frexpf(float, int *);
extern double frexp(double, int *);
extern long double frexpl(long double, int *);

extern int ilogbf(float);
extern int ilogb(double);
extern int ilogbl(long double);

extern float scalbnf(float, int);
extern double scalbn(double, int);
extern long double scalbnl(long double, int);

extern float scalblnf(float, long int);
extern double scalbln(double, long int);
extern long double scalblnl(long double, long int);

extern float fabsf(float);
extern double fabs(double);
extern long double fabsl(long double);

extern float cbrtf(float);
extern double cbrt(double);
extern long double cbrtl(long double);

extern float hypotf(float, float);
extern double hypot(double, double);
extern long double hypotl(long double, long double);

extern float powf(float, float);
extern double pow(double, double);
extern long double powl(long double, long double);

extern float sqrtf(float);
extern double sqrt(double);
extern long double sqrtl(long double);

extern float erff(float);
extern double erf(double);
extern long double erfl(long double);

extern float erfcf(float);
extern double erfc(double);
extern long double erfcl(long double);




extern float lgammaf(float);
extern double lgamma(double);
extern long double lgammal(long double);

extern float tgammaf(float);
extern double tgamma(double);
extern long double tgammal(long double);

extern float ceilf(float);
extern double ceil(double);
extern long double ceill(long double);

extern float floorf(float);
extern double floor(double);
extern long double floorl(long double);

extern float nearbyintf(float);
extern double nearbyint(double);
extern long double nearbyintl(long double);

extern float rintf(float);
extern double rint(double);
extern long double rintl(long double);

extern long int lrintf(float);
extern long int lrint(double);
extern long int lrintl(long double);

extern float roundf(float);
extern double round(double);
extern long double roundl(long double);

extern long int lroundf(float);
extern long int lround(double);
extern long int lroundl(long double);




extern long long int llrintf(float);
extern long long int llrint(double);
extern long long int llrintl(long double);

extern long long int llroundf(float);
extern long long int llround(double);
extern long long int llroundl(long double);


extern float truncf(float);
extern double trunc(double);
extern long double truncl(long double);

extern float fmodf(float, float);
extern double fmod(double, double);
extern long double fmodl(long double, long double);

extern float remainderf(float, float);
extern double remainder(double, double);
extern long double remainderl(long double, long double);

extern float remquof(float, float, int *);
extern double remquo(double, double, int *);
extern long double remquol(long double, long double, int *);

extern float copysignf(float, float);
extern double copysign(double, double);
extern long double copysignl(long double, long double);

extern float nanf(const char *);
extern double nan(const char *);
extern long double nanl(const char *);

extern float nextafterf(float, float);
extern double nextafter(double, double);
extern long double nextafterl(long double, long double);

extern double nexttoward(double, long double);
extern float nexttowardf(float, long double);
extern long double nexttowardl(long double, long double);

extern float fdimf(float, float);
extern double fdim(double, double);
extern long double fdiml(long double, long double);

extern float fmaxf(float, float);
extern double fmax(double, double);
extern long double fmaxl(long double, long double);

extern float fminf(float, float);
extern double fmin(double, double);
extern long double fminl(long double, long double);

extern float fmaf(float, float, float);
extern double fma(double, double, double);
extern long double fmal(long double, long double, long double);
# 580 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __inff(void) __attribute__((deprecated));
extern double __inf(void) __attribute__((deprecated));
extern long double __infl(void) __attribute__((deprecated));

extern float __nan(void) ;
# 612 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __exp10f(float) ;
extern double __exp10(double) ;





inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) ;
inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) ;
# 629 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern float __cospif(float) ;
extern double __cospi(double) ;
extern float __sinpif(float) ;
extern double __sinpi(double) ;
extern float __tanpif(float) ;
extern double __tanpi(double) ;






inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) ;
inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) ;






struct __float2 { float __sinval; float __cosval; };
struct __double2 { double __sinval; double __cosval; };

extern struct __float2 __sincosf_stret(float);
extern struct __double2 __sincos_stret(double);
extern struct __float2 __sincospif_stret(float);
extern struct __double2 __sincospi_stret(double);

inline __attribute__ ((__always_inline__)) void __sincosf(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincosf_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincos(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincos_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospif(float __x, float *__sinp, float *__cosp) {
    const struct __float2 __stret = __sincospif_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}

inline __attribute__ ((__always_inline__)) void __sincospi(double __x, double *__sinp, double *__cosp) {
    const struct __double2 __stret = __sincospi_stret(__x);
    *__sinp = __stret.__sinval; *__cosp = __stret.__cosval;
}






extern double j0(double) ;
extern double j1(double) ;
extern double jn(int, double) ;
extern double y0(double) ;
extern double y1(double) ;
extern double yn(int, double) ;
extern double scalb(double, double);
extern int signgam;
# 727 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
extern long int rinttol(double) __attribute__((deprecated));

extern long int roundtol(double) __attribute__((deprecated));

extern double drem(double, double) __attribute__((deprecated));

extern int finite(double) __attribute__((deprecated));

extern double gamma(double) __attribute__((deprecated));

extern double significand(double) __attribute__((deprecated));
# 752 "/usr/local/lib/gcc/x86_64-apple-darwin14.0.0/4.9.2/include-fixed/math.h" 3 4
}
# 37 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 37 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 38 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"

# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h" 1
# 13 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/mytype.h"
typedef double real_t;




typedef real_t real3[3];

static void zeroReal3(real3 a)
{
   a[0] = 0.0;
   a[1] = 0.0;
   a[2] = 0.0;
}
# 40 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h" 1
# 10 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/parallel.h"
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
# 41 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 1 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/yamlOutput.h" 1
# 12 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/yamlOutput.h"
void yamlBegin(void);
void yamlEnd(void);

void yamlAppInfo(FILE* file);

void printSeparator(FILE* file);
# 42 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c" 2
# 42 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 43 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime(void);
# 44 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick(void);
# 45 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static void timerStats(void);
# 46 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 47 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 48 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 49 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
char* timerName[numberOfTimers] = {
# 50 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "total",
# 51 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "loop",
# 52 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "timestep",
# 53 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  position",
# 54 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  velocity",
# 55 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  redistribute",
# 56 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "    atomHalo",
# 57 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "  force",
# 58 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "    eamHalo",
# 59 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "commHalo",
# 60 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   "commReduce"
# 61 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
};
# 62 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 63 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 64 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 65 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
typedef struct TimersSt
# 66 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 67 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t start;
# 68 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t total;
# 69 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t count;
# 70 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t elapsed;
# 71 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 72 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   int minRank;
# 73 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   int maxRank;
# 74 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 75 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double minValue;
# 76 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double maxValue;
# 77 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double average;
# 78 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double stdev;
# 79 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
} Timers;
# 80 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 81 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 82 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
typedef struct TimerGlobalSt
# 83 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 84 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomRate;
# 85 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomAllRate;
# 86 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomsPerUSec;
# 87 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
} TimerGlobal;
# 88 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 89 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static Timers perfTimer[numberOfTimers];
# 90 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static TimerGlobal perfGlobal;
# 91 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 92 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStart_npm(const enum TimerHandle handle);static uint64_t getTime_npm(void);
void profileStart_quick(const enum TimerHandle handle); void profileStart(const enum TimerHandle handle);static uint64_t getTime_quick(void); static uint64_t getTime(void);
void profileStart_resumable(const enum TimerHandle handle)
# 93 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&profileStart), "profileStart", &____must_manage_profileStart, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 94 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].start = ({ calling_npm("getTime", 0); getTime_npm(); });
# 95 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStart", &____must_manage_profileStart, ____alias_loc_id_14, ____chimes_did_disable0); }
# 96 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 97 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void profileStop_npm(const enum TimerHandle handle);
void profileStop_quick(const enum TimerHandle handle); void profileStop(const enum TimerHandle handle);
void profileStop_resumable(const enum TimerHandle handle)
# 98 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&profileStop), "profileStop", &____must_manage_profileStop, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 99 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].count += 1;
# 100 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t delta; delta = (({ calling_npm("getTime", 0); getTime_npm(); }) - perfTimer[handle].start) ;
# 101 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].total += delta;
# 102 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed += delta;
# 103 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStop", &____must_manage_profileStop, ____alias_loc_id_16, ____chimes_did_disable1); }
# 104 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 105 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 106 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 107 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 108 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
double getElapsedTime_npm(const enum TimerHandle handle);static double getTick_npm(void);
double getElapsedTime_quick(const enum TimerHandle handle); double getElapsedTime(const enum TimerHandle handle);static double getTick_quick(void); static double getTick(void);
double getElapsedTime_resumable(const enum TimerHandle handle)
# 109 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getElapsedTime), "getElapsedTime", &____must_manage_getElapsedTime, 1, 0, (size_t)(0UL)) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 110 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double etime; etime = (({ calling_npm("getTick", 0); getTick_npm(); }) * (double)perfTimer[handle].elapsed) ;
# 111 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed = 0;
# 112 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 113 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   rm_stack(false, 0UL, "getElapsedTime", &____must_manage_getElapsedTime, ____alias_loc_id_17, ____chimes_did_disable2); return etime;
# 114 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 115 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 116 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 117 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 118 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 119 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 120 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResults_npm(int nGlobalAtoms, int printRate);void timerStats_npm(void);static int (*____chimes_extern_func_getMyRank)(void) = getMyRank;static int (*____chimes_extern_func_getNRanks)(void) = getNRanks;static int (*____chimes_extern_func_printRank)(void) = printRank;
void printPerformanceResults_quick(int nGlobalAtoms, int printRate); void printPerformanceResults(int nGlobalAtoms, int printRate);void timerStats_quick(void); void timerStats(void);
void printPerformanceResults_resumable(int nGlobalAtoms, int printRate)
# 121 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&printPerformanceResults), "printPerformanceResults", &____must_manage_printPerformanceResults, 2, 2, (size_t)(0UL), (size_t)(0UL), "printPerformanceResults|nGlobalAtoms|0", &____must_checkpoint_printPerformanceResults_nGlobalAtoms_0, "i32", (void *)(&nGlobalAtoms), (size_t)4, 0, 0, 0, "printPerformanceResults|printRate|0", &____must_checkpoint_printPerformanceResults_printRate_0, "i32", (void *)(&printRate), (size_t)4, 0, 0, 0) ; int ____chimes_unroll_var_1;
double totalTime;
int ____chimes_unroll_var_0;
double loopTime;
double tick;
 if (____must_checkpoint_printPerformanceResults_____chimes_unroll_var_1_0 || ____must_checkpoint_printPerformanceResults_totalTime_0 || ____must_checkpoint_printPerformanceResults_____chimes_unroll_var_0_0 || ____must_checkpoint_printPerformanceResults_loopTime_0 || ____must_checkpoint_printPerformanceResults_tick_0) { register_stack_vars(5, "printPerformanceResults|____chimes_unroll_var_1|0", &____must_checkpoint_printPerformanceResults_____chimes_unroll_var_1_0, "i32", (void *)(&____chimes_unroll_var_1), (size_t)4, 0, 0, 0, "printPerformanceResults|totalTime|0", &____must_checkpoint_printPerformanceResults_totalTime_0, "double", (void *)(&totalTime), (size_t)8, 0, 0, 0, "printPerformanceResults|____chimes_unroll_var_0|0", &____must_checkpoint_printPerformanceResults_____chimes_unroll_var_0_0, "i32", (void *)(&____chimes_unroll_var_0), (size_t)4, 0, 0, 0, "printPerformanceResults|loopTime|0", &____must_checkpoint_printPerformanceResults_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResults|tick|0", &____must_checkpoint_printPerformanceResults_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { goto lbl_0; } ; ;
# 122 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 123 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_1: ({ calling((void*)timerStats, 1, ____alias_loc_id_0, 0UL, 0); (timerStats)(); }) ;
# 124 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 125 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_2: if (! ({ calling((void*)printRank, 2, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3); return; };
# 127 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 128 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 129 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 130 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total * tick) ;
# 131 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 132 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        call_lbl_4: ____chimes_unroll_var_0 = ( ({ calling((void*)getMyRank, 4, ____alias_loc_id_1, 0UL, 0); (getMyRank)(); }) ) ; fprintf(__stdoutp, "\n\nTimings for Rank %d\n", ____chimes_unroll_var_0);
# 133 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        # Calls    Avg/Call (s)   Total (s)    %% Loop\n");
# 134 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "___________________________________________________________________\n");
# 135 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_0: int ii; if (____must_checkpoint_printPerformanceResults_ii_0 != 0) { register_stack_var("printPerformanceResults|ii|0", &____must_checkpoint_printPerformanceResults_ii_0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_1; } for ( ii = (0) ; ii<numberOfTimers; ++ii)
# 136 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 137 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         totalTime = (perfTimer[ii].total * tick) ;
# 138 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%12%lu     %8.4f      %8.4f    %8.2f\n",
# 140 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 timerName[ii],
# 141 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 perfTimer[ii].count,
# 142 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/(double)perfTimer[ii].count,
# 143 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime,
# 144 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/loopTime*100.0); };
# 145 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 146 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 147 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        call_lbl_9: ____chimes_unroll_var_1 = ( ({ calling((void*)getNRanks, 9, ____alias_loc_id_2, 0UL, 0); (getNRanks)(); }) ) ; fprintf(__stdoutp, "\nTiming Statistics Across %d Ranks:\n", ____chimes_unroll_var_1);
# 148 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        Rank: Min(s)       Rank: Max(s)      Avg(s)    Stdev(s)\n");
# 149 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "_____________________________________________________________________________\n");
# 150 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 151 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_1: int ii; if (____must_checkpoint_printPerformanceResults_ii_1 != 0) { register_stack_var("printPerformanceResults|ii|1", &____must_checkpoint_printPerformanceResults_ii_1, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(2): { goto call_lbl_2; } case(4): { goto call_lbl_4; } case(9): { goto call_lbl_9; } case(15): { goto call_lbl_15; } default: { chimes_error(); } } } for ( ii = (0) ; ii < numberOfTimers; ++ii)
# 152 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 153 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%6d:%10.4f  %6d:%10.4f  %10.4f  %10.4f\n",
# 155 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            timerName[ii],
# 156 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].minRank, perfTimer[ii].minValue*tick,
# 157 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].maxRank, perfTimer[ii].maxValue*tick,
# 158 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].average*tick, perfTimer[ii].stdev*tick); };
# 159 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 160 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_3); double atomsPerTask; call_lbl_15: atomsPerTask = (nGlobalAtoms / (real_t) ({ calling((void*)getNRanks, 15, ____alias_loc_id_3, 0UL, 0); (getNRanks)(); }) ) ;
# 161 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 162 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (atomsPerTask * perfTimer[timestepTimer].count * printRate);
# 163 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomAllRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 164 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (nGlobalAtoms * perfTimer[timestepTimer].count * printRate);
# 165 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomsPerUSec = 1.0 / perfGlobal.atomAllRate;
# 166 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 167 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 168 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom update rate:     %6.2f us/atom/task\n", perfGlobal.atomRate);
# 169 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 170 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 171 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 172 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average all atom update rate: %6.2f us/atom\n", perfGlobal.atomAllRate);
# 173 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 174 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 175 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 176 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom rate:            %6.2f atoms/us\n", perfGlobal.atomsPerUSec);
# 177 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 178 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3); }
# 179 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 180 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
void printPerformanceResultsYaml_npm(FILE* file);
void printPerformanceResultsYaml_quick(FILE* file); void printPerformanceResultsYaml(FILE* file);
void printPerformanceResultsYaml_resumable(FILE* file)
# 181 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&printPerformanceResultsYaml), "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, 1, 1, (size_t)(10568076854246273744UL), "printPerformanceResultsYaml|file|0", &____must_checkpoint_printPerformanceResultsYaml_file_0, "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0) ; int ____chimes_unroll_var_2;
double loopTime;
double tick;
 if (____must_checkpoint_printPerformanceResultsYaml_____chimes_unroll_var_2_0 || ____must_checkpoint_printPerformanceResultsYaml_loopTime_0 || ____must_checkpoint_printPerformanceResultsYaml_tick_0) { register_stack_vars(3, "printPerformanceResultsYaml|____chimes_unroll_var_2|0", &____must_checkpoint_printPerformanceResultsYaml_____chimes_unroll_var_2_0, "i32", (void *)(&____chimes_unroll_var_2), (size_t)4, 0, 0, 0, "printPerformanceResultsYaml|loopTime|0", &____must_checkpoint_printPerformanceResultsYaml_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResultsYaml|tick|0", &____must_checkpoint_printPerformanceResultsYaml_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(2): { goto call_lbl_2; } case(5): { goto call_lbl_5; } case(8): { goto call_lbl_8; } default: { chimes_error(); } } } ; ;
# 182 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_11); call_lbl_2: if (! ({ calling((void*)printRank, 2, ____alias_loc_id_11, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4); return; };
# 184 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 185 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 186 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total * tick) ;
# 187 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 188 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"\nPerformance Results:\n");
# 189 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        call_lbl_5: ____chimes_unroll_var_2 = ( ({ calling((void*)getNRanks, 5, ____alias_loc_id_12, 0UL, 0); (getNRanks)(); }) ) ; fprintf(file, "  TotalRanks: %d\n", ____chimes_unroll_var_2);
# 190 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  ReportingTimeUnits: seconds\n");
# 191 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_3; call_lbl_8: ____chimes_unroll_var_3 = ( ({ calling((void*)getMyRank, 8, ____alias_loc_id_13, 0UL, 0); (getMyRank)(); }) ) ; fprintf(file, "Performance Results For Rank %d:\n", ____chimes_unroll_var_3);
# 192 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 193 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 194 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 195 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 196 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
          double totalTime; totalTime = (perfTimer[ii].total * tick) ;
# 197 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 198 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    CallCount:  %lu\n", perfTimer[ii].count);
# 199 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgPerCall: %8.4f\n", totalTime/(double)perfTimer[ii].count);
# 200 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    Total:      %8.4f\n", totalTime);
# 201 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    PercentLoop: %8.2f\n", totalTime/loopTime*100);
# 202 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 203 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 204 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 205 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "Performance Results Across Ranks:\n");
# 206 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 207 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 208 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 209 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 210 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 211 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinRank: %d\n", perfTimer[ii].minRank);
# 212 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinTime: %8.4f\n", perfTimer[ii].minValue*tick);
# 213 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxRank: %d\n", perfTimer[ii].maxRank);
# 214 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxTime: %8.4f\n", perfTimer[ii].maxValue*tick);
# 215 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgTime: %8.4f\n", perfTimer[ii].average*tick);
# 216 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    StdevTime: %8.4f\n", perfTimer[ii].stdev*tick);
# 217 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 218 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 219 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 220 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"Performance Global Update Rates:\n");
# 221 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomUpdateRate:\n");
# 222 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomRate);
# 223 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom/task\n");
# 224 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AllAtomUpdateRate:\n");
# 225 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomAllRate);
# 226 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom\n");
# 227 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomRate:\n");
# 228 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomsPerUSec);
# 229 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: atoms/us\n");
# 230 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 231 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "\n");
# 232 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4); }
# 243 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 243 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static uint64_t getTime_resumable(void)
# 244 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&getTime), "getTime", &____must_manage_getTime, 0, 0) ; struct timeval ptime;
 if (____must_checkpoint_getTime_ptime_0) { register_stack_vars(1, "getTime|ptime|0", &____must_checkpoint_getTime_ptime_0, "%struct.timeval = type { i64, i32 }", (void *)(&ptime), (size_t)16, 0, 1, 0); } if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 245 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     ;
# 246 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t t; t = (0) ;
# 247 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   gettimeofday(&ptime, (struct timezone *)__null);
# 248 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   t = ((uint64_t)1000000)*(uint64_t)ptime.tv_sec + (uint64_t)ptime.tv_usec;
# 249 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 250 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   rm_stack(false, 0UL, "getTime", &____must_manage_getTime, ____alias_loc_id_15, ____chimes_did_disable5); return t;
# 251 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 252 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 253 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 254 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 255 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 256 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 257 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static double getTick_resumable(void)
# 258 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&getTick), "getTick", &____must_manage_getTick, 0, 0) ; if (____chimes_replaying) { switch(get_next_call()) { default: { chimes_error(); } } } ; ;
# 259 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double seconds_per_cycle; seconds_per_cycle = (9.9999999999999995E-7) ;
# 260 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   rm_stack(false, 0UL, "getTick", &____must_manage_getTick, ____alias_loc_id_18, ____chimes_did_disable6); return seconds_per_cycle;
# 261 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}
# 262 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 263 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 264 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
static void (*____chimes_extern_func_addDoubleParallel)(double *, double *, int) = addDoubleParallel;static void (*____chimes_extern_func_maxRankDoubleParallel)(struct RankReduceDataSt *, struct RankReduceDataSt *, int) = maxRankDoubleParallel;static void (*____chimes_extern_func_minRankDoubleParallel)(struct RankReduceDataSt *, struct RankReduceDataSt *, int) = minRankDoubleParallel;
void timerStats_resumable(void)
# 265 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&timerStats), "timerStats", &____must_manage_timerStats, 0, 0) ; int ____chimes_unroll_var_4;
double temp;
RankReduceData reduceRecvBuf[11];
RankReduceData reduceSendBuf[11];
double recvBuf[11];
double sendBuf[11];
 if (____must_checkpoint_timerStats_____chimes_unroll_var_4_0 || ____must_checkpoint_timerStats_temp_0 || ____must_checkpoint_timerStats_reduceSendBuf_0 || ____must_checkpoint_timerStats_sendBuf_0) { register_stack_vars(4, "timerStats|____chimes_unroll_var_4|0", &____must_checkpoint_timerStats_____chimes_unroll_var_4_0, "i32", (void *)(&____chimes_unroll_var_4), (size_t)4, 0, 0, 0, "timerStats|temp|0", &____must_checkpoint_timerStats_temp_0, "double", (void *)(&temp), (size_t)8, 0, 0, 0, "timerStats|reduceSendBuf|0", &____must_checkpoint_timerStats_reduceSendBuf_0, "[11 x %struct.RankReduceDataSt]", (void *)(reduceSendBuf), (size_t)176, 0, 0, 0, "timerStats|sendBuf|0", &____must_checkpoint_timerStats_sendBuf_0, "[11 x double]", (void *)(sendBuf), (size_t)88, 0, 0, 0); } if (____chimes_replaying) { goto lbl_0; } ; ;
# 266 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     ;
# 267 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 268 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 269 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ;ii < numberOfTimers; ii++) { sendBuf[ii] = (double)perfTimer[ii].total; } };
# 271 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_1: ({ calling((void*)addDoubleParallel, 1, ____alias_loc_id_4, 0UL, 3, (size_t)(10568076854246273315UL), (size_t)(10568076854246273316UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 272 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 273 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_0: int ii; if (____must_checkpoint_timerStats_ii_1 != 0) { register_stack_var("timerStats|ii|1", &____must_checkpoint_timerStats_ii_1, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_1; } for ( ii = (0) ;ii < numberOfTimers; ii++) { alias_group_changed(____alias_loc_id_5); call_lbl_3: perfTimer[ii].average = recvBuf[ii] / (double) ({ calling((void*)getNRanks, 3, ____alias_loc_id_5, 0UL, 0); (getNRanks)(); }) ; } };
# 275 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 276 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 277 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 278 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       ;
# 279 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_1: int ii; if (____must_checkpoint_timerStats_ii_2 != 0) { register_stack_var("timerStats|ii|2", &____must_checkpoint_timerStats_ii_2, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_2; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 280 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 281 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].val = (double)perfTimer[ii].total;
# 282 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_4: reduceSendBuf[ii].rank = ({ calling((void*)getMyRank, 4, ____alias_loc_id_6, 0UL, 0); (getMyRank)(); }) ;
# 283 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 284 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_5: ({ calling((void*)minRankDoubleParallel, 5, ____alias_loc_id_7, 0UL, 3, (size_t)(10568076854246273319UL), (size_t)(10568076854246273320UL), (size_t)(0UL)); (minRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 285 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_2: int ii; if (____must_checkpoint_timerStats_ii_3 != 0) { register_stack_var("timerStats|ii|3", &____must_checkpoint_timerStats_ii_3, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_3; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 286 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 287 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minValue = reduceRecvBuf[ii].val;
# 288 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minRank = reduceRecvBuf[ii].rank;
# 289 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 290 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_6: ({ calling((void*)maxRankDoubleParallel, 6, ____alias_loc_id_8, 0UL, 3, (size_t)(10568076854246273319UL), (size_t)(10568076854246273320UL), (size_t)(0UL)); (maxRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 291 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_3: int ii; if (____must_checkpoint_timerStats_ii_4 != 0) { register_stack_var("timerStats|ii|4", &____must_checkpoint_timerStats_ii_4, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_4; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 292 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 293 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxValue = reduceRecvBuf[ii].val;
# 294 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxRank = reduceRecvBuf[ii].rank;
# 295 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 296 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 297 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 298 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_4: int ii; if (____must_checkpoint_timerStats_ii_5 != 0) { register_stack_var("timerStats|ii|5", &____must_checkpoint_timerStats_ii_5, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { goto lbl_5; } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 299 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 300 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         temp = ((double)perfTimer[ii].total - perfTimer[ii].average) ;
# 301 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      sendBuf[ii] = temp * temp;
# 302 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 303 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_7: ({ calling((void*)addDoubleParallel, 7, ____alias_loc_id_9, 0UL, 3, (size_t)(10568076854246273315UL), (size_t)(10568076854246273316UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 304 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_5: int ii; if (____must_checkpoint_timerStats_ii_6 != 0) { register_stack_var("timerStats|ii|6", &____must_checkpoint_timerStats_ii_6, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } if (____chimes_replaying) { switch(get_next_call()) { case(1): { goto call_lbl_1; } case(3): { goto call_lbl_3; } case(4): { goto call_lbl_4; } case(5): { goto call_lbl_5; } case(6): { goto call_lbl_6; } case(7): { goto call_lbl_7; } case(8): { goto call_lbl_8; } default: { chimes_error(); } } } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 305 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 306 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
           call_lbl_8: ____chimes_unroll_var_4 = ( ({ calling((void*)getNRanks, 8, ____alias_loc_id_10, 0UL, 0); (getNRanks)(); }) ) ; perfTimer[ii].stdev = sqrt(recvBuf[ii] / (double) ____chimes_unroll_var_4);
# 307 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 308 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "timerStats", &____must_manage_timerStats, ____alias_loc_id_20, ____chimes_did_disable7); }
void profileStart_quick(const enum TimerHandle handle)
# 93 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable0 = new_stack((void *)(&profileStart), "profileStart", &____must_manage_profileStart, 1, 0, (size_t)(0UL)) ; ; ;
# 94 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].start = ({ calling_npm("getTime", 0); getTime_npm(); });
# 95 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStart", &____must_manage_profileStart, ____alias_loc_id_14, ____chimes_did_disable0); }

void profileStart(const enum TimerHandle handle) { (____chimes_replaying ? profileStart_resumable(handle) : profileStart_quick(handle)); }

void profileStop_quick(const enum TimerHandle handle)
# 98 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable1 = new_stack((void *)(&profileStop), "profileStop", &____must_manage_profileStop, 1, 0, (size_t)(0UL)) ; ; ;
# 99 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].count += 1;
# 100 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t delta; delta = (({ calling_npm("getTime", 0); getTime_npm(); }) - perfTimer[handle].start) ;
# 101 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].total += delta;
# 102 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed += delta;
# 103 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "profileStop", &____must_manage_profileStop, ____alias_loc_id_16, ____chimes_did_disable1); }

void profileStop(const enum TimerHandle handle) { (____chimes_replaying ? profileStop_resumable(handle) : profileStop_quick(handle)); }

double getElapsedTime_quick(const enum TimerHandle handle)
# 109 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable2 = new_stack((void *)(&getElapsedTime), "getElapsedTime", &____must_manage_getElapsedTime, 1, 0, (size_t)(0UL)) ; ; ;
# 110 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double etime; etime = (({ calling_npm("getTick", 0); getTick_npm(); }) * (double)perfTimer[handle].elapsed) ;
# 111 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed = 0;
# 112 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 113 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   rm_stack(false, 0UL, "getElapsedTime", &____must_manage_getElapsedTime, ____alias_loc_id_17, ____chimes_did_disable2); return etime;
# 114 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

double getElapsedTime(const enum TimerHandle handle) { return (____chimes_replaying ? getElapsedTime_resumable(handle) : getElapsedTime_quick(handle)); }

void printPerformanceResults_quick(int nGlobalAtoms, int printRate)
# 121 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable3 = new_stack((void *)(&printPerformanceResults), "printPerformanceResults", &____must_manage_printPerformanceResults, 2, 2, (size_t)(0UL), (size_t)(0UL), "printPerformanceResults|nGlobalAtoms|0", &____must_checkpoint_printPerformanceResults_nGlobalAtoms_0, "i32", (void *)(&nGlobalAtoms), (size_t)4, 0, 0, 0, "printPerformanceResults|printRate|0", &____must_checkpoint_printPerformanceResults_printRate_0, "i32", (void *)(&printRate), (size_t)4, 0, 0, 0) ; int ____chimes_unroll_var_1;
double totalTime;
int ____chimes_unroll_var_0;
double loopTime;
double tick;
 if (____must_checkpoint_printPerformanceResults_____chimes_unroll_var_1_0 || ____must_checkpoint_printPerformanceResults_totalTime_0 || ____must_checkpoint_printPerformanceResults_____chimes_unroll_var_0_0 || ____must_checkpoint_printPerformanceResults_loopTime_0 || ____must_checkpoint_printPerformanceResults_tick_0) { register_stack_vars(5, "printPerformanceResults|____chimes_unroll_var_1|0", &____must_checkpoint_printPerformanceResults_____chimes_unroll_var_1_0, "i32", (void *)(&____chimes_unroll_var_1), (size_t)4, 0, 0, 0, "printPerformanceResults|totalTime|0", &____must_checkpoint_printPerformanceResults_totalTime_0, "double", (void *)(&totalTime), (size_t)8, 0, 0, 0, "printPerformanceResults|____chimes_unroll_var_0|0", &____must_checkpoint_printPerformanceResults_____chimes_unroll_var_0_0, "i32", (void *)(&____chimes_unroll_var_0), (size_t)4, 0, 0, 0, "printPerformanceResults|loopTime|0", &____must_checkpoint_printPerformanceResults_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResults|tick|0", &____must_checkpoint_printPerformanceResults_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } ; ;
# 122 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 123 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_1: ({ calling((void*)timerStats, 1, ____alias_loc_id_0, 0UL, 0); timerStats_quick(); }) ;
# 124 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 125 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_2: if (! ({ calling((void*)printRank, 2, 0, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3); return; };
# 127 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 128 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 129 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 130 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total * tick) ;
# 131 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 132 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        call_lbl_4: ____chimes_unroll_var_0 = ( ({ calling((void*)getMyRank, 4, ____alias_loc_id_1, 0UL, 0); (getMyRank)(); }) ) ; fprintf(__stdoutp, "\n\nTimings for Rank %d\n", ____chimes_unroll_var_0);
# 133 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        # Calls    Avg/Call (s)   Total (s)    %% Loop\n");
# 134 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "___________________________________________________________________\n");
# 135 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_0: int ii; if (____must_checkpoint_printPerformanceResults_ii_0 != 0) { register_stack_var("printPerformanceResults|ii|0", &____must_checkpoint_printPerformanceResults_ii_0, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii<numberOfTimers; ++ii)
# 136 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 137 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         totalTime = (perfTimer[ii].total * tick) ;
# 138 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%12%lu     %8.4f      %8.4f    %8.2f\n",
# 140 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 timerName[ii],
# 141 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 perfTimer[ii].count,
# 142 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/(double)perfTimer[ii].count,
# 143 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime,
# 144 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/loopTime*100.0); };
# 145 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 146 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 147 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        call_lbl_9: ____chimes_unroll_var_1 = ( ({ calling((void*)getNRanks, 9, ____alias_loc_id_2, 0UL, 0); (getNRanks)(); }) ) ; fprintf(__stdoutp, "\nTiming Statistics Across %d Ranks:\n", ____chimes_unroll_var_1);
# 148 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        Rank: Min(s)       Rank: Max(s)      Avg(s)    Stdev(s)\n");
# 149 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "_____________________________________________________________________________\n");
# 150 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 151 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_1: int ii; if (____must_checkpoint_printPerformanceResults_ii_1 != 0) { register_stack_var("printPerformanceResults|ii|1", &____must_checkpoint_printPerformanceResults_ii_1, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ++ii)
# 152 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 153 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%6d:%10.4f  %6d:%10.4f  %10.4f  %10.4f\n",
# 155 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            timerName[ii],
# 156 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].minRank, perfTimer[ii].minValue*tick,
# 157 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].maxRank, perfTimer[ii].maxValue*tick,
# 158 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].average*tick, perfTimer[ii].stdev*tick); };
# 159 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 160 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_3); double atomsPerTask; call_lbl_15: atomsPerTask = (nGlobalAtoms / (real_t) ({ calling((void*)getNRanks, 15, ____alias_loc_id_3, 0UL, 0); (getNRanks)(); }) ) ;
# 161 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 162 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (atomsPerTask * perfTimer[timestepTimer].count * printRate);
# 163 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomAllRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 164 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (nGlobalAtoms * perfTimer[timestepTimer].count * printRate);
# 165 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomsPerUSec = 1.0 / perfGlobal.atomAllRate;
# 166 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 167 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 168 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom update rate:     %6.2f us/atom/task\n", perfGlobal.atomRate);
# 169 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 170 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 171 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 172 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average all atom update rate: %6.2f us/atom\n", perfGlobal.atomAllRate);
# 173 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 174 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 175 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 176 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom rate:            %6.2f atoms/us\n", perfGlobal.atomsPerUSec);
# 177 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 178 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResults", &____must_manage_printPerformanceResults, ____alias_loc_id_19, ____chimes_did_disable3); }

void printPerformanceResults(int nGlobalAtoms, int printRate) { (____chimes_replaying ? printPerformanceResults_resumable(nGlobalAtoms, printRate) : printPerformanceResults_quick(nGlobalAtoms, printRate)); }

void printPerformanceResultsYaml_quick(FILE* file)
# 181 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable4 = new_stack((void *)(&printPerformanceResultsYaml), "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, 1, 1, (size_t)(10568076854246273744UL), "printPerformanceResultsYaml|file|0", &____must_checkpoint_printPerformanceResultsYaml_file_0, "%struct.__sFILE*", (void *)(&file), (size_t)8, 1, 0, 0) ; int ____chimes_unroll_var_2;
double loopTime;
double tick;
 if (____must_checkpoint_printPerformanceResultsYaml_____chimes_unroll_var_2_0 || ____must_checkpoint_printPerformanceResultsYaml_loopTime_0 || ____must_checkpoint_printPerformanceResultsYaml_tick_0) { register_stack_vars(3, "printPerformanceResultsYaml|____chimes_unroll_var_2|0", &____must_checkpoint_printPerformanceResultsYaml_____chimes_unroll_var_2_0, "i32", (void *)(&____chimes_unroll_var_2), (size_t)4, 0, 0, 0, "printPerformanceResultsYaml|loopTime|0", &____must_checkpoint_printPerformanceResultsYaml_loopTime_0, "double", (void *)(&loopTime), (size_t)8, 0, 0, 0, "printPerformanceResultsYaml|tick|0", &____must_checkpoint_printPerformanceResultsYaml_tick_0, "double", (void *)(&tick), (size_t)8, 0, 0, 0); } ; ;
# 182 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   alias_group_changed(____alias_loc_id_11); call_lbl_2: if (! ({ calling((void*)printRank, 2, ____alias_loc_id_11, 0UL, 0); (printRank)(); }) ) {rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4); return; };
# 184 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 185 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      tick = (({ calling_npm("getTick", 0); getTick_npm(); })) ;
# 186 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      loopTime = (perfTimer[loopTimer].total * tick) ;
# 187 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 188 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"\nPerformance Results:\n");
# 189 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
        call_lbl_5: ____chimes_unroll_var_2 = ( ({ calling((void*)getNRanks, 5, ____alias_loc_id_12, 0UL, 0); (getNRanks)(); }) ) ; fprintf(file, "  TotalRanks: %d\n", ____chimes_unroll_var_2);
# 190 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  ReportingTimeUnits: seconds\n");
# 191 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     int ____chimes_unroll_var_3; call_lbl_8: ____chimes_unroll_var_3 = ( ({ calling((void*)getMyRank, 8, ____alias_loc_id_13, 0UL, 0); (getMyRank)(); }) ) ; fprintf(file, "Performance Results For Rank %d:\n", ____chimes_unroll_var_3);
# 192 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 193 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 194 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 195 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 196 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
          double totalTime; totalTime = (perfTimer[ii].total * tick) ;
# 197 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 198 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    CallCount:  %lu\n", perfTimer[ii].count);
# 199 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgPerCall: %8.4f\n", totalTime/(double)perfTimer[ii].count);
# 200 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    Total:      %8.4f\n", totalTime);
# 201 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    PercentLoop: %8.2f\n", totalTime/loopTime*100);
# 202 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 203 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 204 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 205 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "Performance Results Across Ranks:\n");
# 206 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ; ii < numberOfTimers; ii++)
# 207 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 208 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 209 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 210 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 211 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinRank: %d\n", perfTimer[ii].minRank);
# 212 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinTime: %8.4f\n", perfTimer[ii].minValue*tick);
# 213 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxRank: %d\n", perfTimer[ii].maxRank);
# 214 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxTime: %8.4f\n", perfTimer[ii].maxValue*tick);
# 215 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgTime: %8.4f\n", perfTimer[ii].average*tick);
# 216 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    StdevTime: %8.4f\n", perfTimer[ii].stdev*tick);
# 217 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 218 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 219 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 220 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"Performance Global Update Rates:\n");
# 221 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomUpdateRate:\n");
# 222 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomRate);
# 223 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom/task\n");
# 224 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AllAtomUpdateRate:\n");
# 225 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomAllRate);
# 226 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom\n");
# 227 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomRate:\n");
# 228 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomsPerUSec);
# 229 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: atoms/us\n");
# 230 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 231 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "\n");
# 232 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "printPerformanceResultsYaml", &____must_manage_printPerformanceResultsYaml, ____alias_loc_id_21, ____chimes_did_disable4); }

void printPerformanceResultsYaml(FILE* file) { (____chimes_replaying ? printPerformanceResultsYaml_resumable(file) : printPerformanceResultsYaml_quick(file)); }

static uint64_t getTime_quick(void)
# 244 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable5 = new_stack((void *)(&getTime), "getTime", &____must_manage_getTime, 0, 0) ; struct timeval ptime;
 if (____must_checkpoint_getTime_ptime_0) { register_stack_vars(1, "getTime|ptime|0", &____must_checkpoint_getTime_ptime_0, "%struct.timeval = type { i64, i32 }", (void *)(&ptime), (size_t)16, 0, 1, 0); } ; ;
# 245 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     ;
# 246 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    uint64_t t; t = (0) ;
# 247 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   gettimeofday(&ptime, (struct timezone *)__null);
# 248 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   t = ((uint64_t)1000000)*(uint64_t)ptime.tv_sec + (uint64_t)ptime.tv_usec;
# 249 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 250 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   rm_stack(false, 0UL, "getTime", &____must_manage_getTime, ____alias_loc_id_15, ____chimes_did_disable5); return t;
# 251 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

static uint64_t getTime(void) { return (____chimes_replaying ? getTime_resumable() : getTime_quick()); }

static double getTick_quick(void)
# 258 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable6 = new_stack((void *)(&getTick), "getTick", &____must_manage_getTick, 0, 0) ; ; ;
# 259 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    double seconds_per_cycle; seconds_per_cycle = (9.9999999999999995E-7) ;
# 260 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   rm_stack(false, 0UL, "getTick", &____must_manage_getTick, ____alias_loc_id_18, ____chimes_did_disable6); return seconds_per_cycle;
# 261 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

static double getTick(void) { return (____chimes_replaying ? getTick_resumable() : getTick_quick()); }

void timerStats_quick(void)
# 265 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{const int ____chimes_did_disable7 = new_stack((void *)(&timerStats), "timerStats", &____must_manage_timerStats, 0, 0) ; int ____chimes_unroll_var_4;
double temp;
RankReduceData reduceRecvBuf[11];
RankReduceData reduceSendBuf[11];
double recvBuf[11];
double sendBuf[11];
 if (____must_checkpoint_timerStats_____chimes_unroll_var_4_0 || ____must_checkpoint_timerStats_temp_0 || ____must_checkpoint_timerStats_reduceSendBuf_0 || ____must_checkpoint_timerStats_sendBuf_0) { register_stack_vars(4, "timerStats|____chimes_unroll_var_4|0", &____must_checkpoint_timerStats_____chimes_unroll_var_4_0, "i32", (void *)(&____chimes_unroll_var_4), (size_t)4, 0, 0, 0, "timerStats|temp|0", &____must_checkpoint_timerStats_temp_0, "double", (void *)(&temp), (size_t)8, 0, 0, 0, "timerStats|reduceSendBuf|0", &____must_checkpoint_timerStats_reduceSendBuf_0, "[11 x %struct.RankReduceDataSt]", (void *)(reduceSendBuf), (size_t)176, 0, 0, 0, "timerStats|sendBuf|0", &____must_checkpoint_timerStats_sendBuf_0, "[11 x double]", (void *)(sendBuf), (size_t)88, 0, 0, 0); } ; ;
# 266 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
     ;
# 267 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 268 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 269 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { int ii; for ( ii = (0) ;ii < numberOfTimers; ii++) { sendBuf[ii] = (double)perfTimer[ii].total; } };
# 271 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_1: ({ calling((void*)addDoubleParallel, 1, ____alias_loc_id_4, 0UL, 3, (size_t)(10568076854246273315UL), (size_t)(10568076854246273316UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 272 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 273 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_0: int ii; if (____must_checkpoint_timerStats_ii_1 != 0) { register_stack_var("timerStats|ii|1", &____must_checkpoint_timerStats_ii_1, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ;ii < numberOfTimers; ii++) { alias_group_changed(____alias_loc_id_5); call_lbl_3: perfTimer[ii].average = recvBuf[ii] / (double) ({ calling((void*)getNRanks, 3, ____alias_loc_id_5, 0UL, 0); (getNRanks)(); }) ; } };
# 275 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 276 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 277 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 278 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       ;
# 279 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_1: int ii; if (____must_checkpoint_timerStats_ii_2 != 0) { register_stack_var("timerStats|ii|2", &____must_checkpoint_timerStats_ii_2, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 280 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 281 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].val = (double)perfTimer[ii].total;
# 282 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       call_lbl_4: reduceSendBuf[ii].rank = ({ calling((void*)getMyRank, 4, ____alias_loc_id_6, 0UL, 0); (getMyRank)(); }) ;
# 283 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 284 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_5: ({ calling((void*)minRankDoubleParallel, 5, ____alias_loc_id_7, 0UL, 3, (size_t)(10568076854246273319UL), (size_t)(10568076854246273320UL), (size_t)(0UL)); (minRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 285 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_2: int ii; if (____must_checkpoint_timerStats_ii_3 != 0) { register_stack_var("timerStats|ii|3", &____must_checkpoint_timerStats_ii_3, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 286 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 287 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minValue = reduceRecvBuf[ii].val;
# 288 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minRank = reduceRecvBuf[ii].rank;
# 289 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 290 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_6: ({ calling((void*)maxRankDoubleParallel, 6, ____alias_loc_id_8, 0UL, 3, (size_t)(10568076854246273319UL), (size_t)(10568076854246273320UL), (size_t)(0UL)); (maxRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers); }) ;
# 291 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_3: int ii; if (____must_checkpoint_timerStats_ii_4 != 0) { register_stack_var("timerStats|ii|4", &____must_checkpoint_timerStats_ii_4, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 292 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 293 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxValue = reduceRecvBuf[ii].val;
# 294 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxRank = reduceRecvBuf[ii].rank;
# 295 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 296 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 297 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 298 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_4: int ii; if (____must_checkpoint_timerStats_ii_5 != 0) { register_stack_var("timerStats|ii|5", &____must_checkpoint_timerStats_ii_5, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 299 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 300 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         temp = ((double)perfTimer[ii].total - perfTimer[ii].average) ;
# 301 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      sendBuf[ii] = temp * temp;
# 302 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 303 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    call_lbl_7: ({ calling((void*)addDoubleParallel, 7, ____alias_loc_id_9, 0UL, 3, (size_t)(10568076854246273315UL), (size_t)(10568076854246273316UL), (size_t)(0UL)); (addDoubleParallel)(sendBuf, recvBuf, numberOfTimers); }) ;
# 304 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   { lbl_5: int ii; if (____must_checkpoint_timerStats_ii_6 != 0) { register_stack_var("timerStats|ii|6", &____must_checkpoint_timerStats_ii_6, "i32", (void *)(&ii), (size_t)4, 0, 0, 0); } for ( ii = (0) ; ii < numberOfTimers; ii++)
# 305 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 306 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
           call_lbl_8: ____chimes_unroll_var_4 = ( ({ calling((void*)getNRanks, 8, ____alias_loc_id_10, 0UL, 0); (getNRanks)(); }) ) ; perfTimer[ii].stdev = sqrt(recvBuf[ii] / (double) ____chimes_unroll_var_4);
# 307 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   } }
# 308 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
rm_stack(false, 0UL, "timerStats", &____must_manage_timerStats, ____alias_loc_id_20, ____chimes_did_disable7); }

void timerStats(void) { (____chimes_replaying ? timerStats_resumable() : timerStats_quick()); }



void profileStart_npm(const enum TimerHandle handle)
# 93 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 94 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].start = getTime_npm();
# 95 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

void profileStop_npm(const enum TimerHandle handle)
# 98 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 99 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].count += 1;
# 100 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t delta = getTime_npm() - perfTimer[handle].start;
# 101 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].total += delta;
# 102 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed += delta;
# 103 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

double getElapsedTime_npm(const enum TimerHandle handle)
# 109 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 110 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double etime = getTick_npm() * (double)perfTimer[handle].elapsed;
# 111 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfTimer[handle].elapsed = 0;
# 112 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 113 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   return etime;
# 114 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

void printPerformanceResults_npm(int nGlobalAtoms, int printRate)
# 121 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 122 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 123 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   timerStats_npm();
# 124 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 125 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   if (!(*____chimes_extern_func_printRank)()) {return; };
# 127 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 128 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 129 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double tick = getTick_npm();
# 130 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double loopTime = perfTimer[loopTimer].total*tick;
# 131 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 132 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_0 = (*____chimes_extern_func_getMyRank)(); fprintf(__stdoutp, "\n\nTimings for Rank %d\n", ____chimes_unroll_var_0);
# 133 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        # Calls    Avg/Call (s)   Total (s)    %% Loop\n");
# 134 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "___________________________________________________________________\n");
# 135 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii=0; ii<numberOfTimers; ++ii)
# 136 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 137 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      double totalTime = perfTimer[ii].total*tick;
# 138 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%12%lu     %8.4f      %8.4f    %8.2f\n",
# 140 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 timerName[ii],
# 141 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 perfTimer[ii].count,
# 142 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/(double)perfTimer[ii].count,
# 143 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime,
# 144 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
                 totalTime/loopTime*100.0); };
# 145 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 146 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 147 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_1 = (*____chimes_extern_func_getNRanks)(); fprintf(__stdoutp, "\nTiming Statistics Across %d Ranks:\n", ____chimes_unroll_var_1);
# 148 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "        Timer        Rank: Min(s)       Rank: Max(s)      Avg(s)    Stdev(s)\n");
# 149 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "_____________________________________________________________________________\n");
# 150 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 151 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ++ii)
# 152 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 153 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0) {fprintf(__stdoutp, "%-16s%6d:%10.4f  %6d:%10.4f  %10.4f  %10.4f\n",
# 155 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            timerName[ii],
# 156 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].minRank, perfTimer[ii].minValue*tick,
# 157 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].maxRank, perfTimer[ii].maxValue*tick,
# 158 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
            perfTimer[ii].average*tick, perfTimer[ii].stdev*tick); };
# 159 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 160 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double atomsPerTask = nGlobalAtoms/(real_t)(*____chimes_extern_func_getNRanks)();
# 161 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 162 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (atomsPerTask * perfTimer[timestepTimer].count * printRate);
# 163 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomAllRate = perfTimer[timestepTimer].average * tick * 1e6 /
# 164 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      (nGlobalAtoms * perfTimer[timestepTimer].count * printRate);
# 165 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   perfGlobal.atomsPerUSec = 1.0 / perfGlobal.atomAllRate;
# 166 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 167 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 168 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom update rate:     %6.2f us/atom/task\n", perfGlobal.atomRate);
# 169 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 170 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 171 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 172 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average all atom update rate: %6.2f us/atom\n", perfGlobal.atomAllRate);
# 173 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 174 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 175 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "\n---------------------------------------------------\n");
# 176 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, " Average atom rate:            %6.2f atoms/us\n", perfGlobal.atomsPerUSec);
# 177 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(__stdoutp, "---------------------------------------------------\n\n");
# 178 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

void printPerformanceResultsYaml_npm(FILE* file)
# 181 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 182 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   if (! (*____chimes_extern_func_printRank)()) {return; };
# 184 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 185 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double tick = getTick_npm();
# 186 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double loopTime = perfTimer[loopTimer].total*tick;
# 187 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 188 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"\nPerformance Results:\n");
# 189 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_2 = (*____chimes_extern_func_getNRanks)(); fprintf(file, "  TotalRanks: %d\n", ____chimes_unroll_var_2);
# 190 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  ReportingTimeUnits: seconds\n");
# 191 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
    int ____chimes_unroll_var_3 = (*____chimes_extern_func_getMyRank)(); fprintf(file, "Performance Results For Rank %d:\n", ____chimes_unroll_var_3);
# 192 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 193 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 194 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 195 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 196 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         double totalTime = perfTimer[ii].total*tick;
# 197 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 198 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    CallCount:  %lu\n", perfTimer[ii].count);
# 199 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgPerCall: %8.4f\n", totalTime/(double)perfTimer[ii].count);
# 200 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    Total:      %8.4f\n", totalTime);
# 201 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    PercentLoop: %8.2f\n", totalTime/loopTime*100);
# 202 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 203 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 204 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 205 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "Performance Results Across Ranks:\n");
# 206 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 207 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 208 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      if (perfTimer[ii].count > 0)
# 209 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      {
# 210 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "  Timer: %s\n", timerName[ii]);
# 211 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinRank: %d\n", perfTimer[ii].minRank);
# 212 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MinTime: %8.4f\n", perfTimer[ii].minValue*tick);
# 213 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxRank: %d\n", perfTimer[ii].maxRank);
# 214 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    MaxTime: %8.4f\n", perfTimer[ii].maxValue*tick);
# 215 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    AvgTime: %8.4f\n", perfTimer[ii].average*tick);
# 216 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
         fprintf(file, "    StdevTime: %8.4f\n", perfTimer[ii].stdev*tick);
# 217 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      }
# 218 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 219 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 220 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file,"Performance Global Update Rates:\n");
# 221 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomUpdateRate:\n");
# 222 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomRate);
# 223 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom/task\n");
# 224 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AllAtomUpdateRate:\n");
# 225 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomAllRate);
# 226 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: us/atom\n");
# 227 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "  AtomRate:\n");
# 228 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    AverageRate: %6.2f\n", perfGlobal.atomsPerUSec);
# 229 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "    Units: atoms/us\n");
# 230 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 231 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   fprintf(file, "\n");
# 232 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

static uint64_t getTime_npm(void)
# 244 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 245 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   struct timeval ptime;
# 246 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   uint64_t t = 0;
# 247 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   gettimeofday(&ptime, (struct timezone *)__null);
# 248 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   t = ((uint64_t)1000000)*(uint64_t)ptime.tv_sec + (uint64_t)ptime.tv_usec;
# 249 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 250 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   return t;
# 251 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

static double getTick_npm(void)
# 258 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 259 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double seconds_per_cycle = 1.0e-6;
# 260 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   return seconds_per_cycle;
# 261 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}

void timerStats_npm(void)
# 265 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
{
# 266 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   double sendBuf[numberOfTimers], recvBuf[numberOfTimers];
# 267 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 268 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 269 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0;ii < numberOfTimers; ii++) { sendBuf[ii] = (double)perfTimer[ii].total; };
# 271 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_addDoubleParallel)(sendBuf, recvBuf, numberOfTimers);
# 272 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 273 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0;ii < numberOfTimers; ii++) { perfTimer[ii].average = recvBuf[ii] / (double)(*____chimes_extern_func_getNRanks)(); };
# 275 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 276 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 277 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 278 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   RankReduceData reduceSendBuf[numberOfTimers], reduceRecvBuf[numberOfTimers];
# 279 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 280 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 281 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].val = (double)perfTimer[ii].total;
# 282 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      reduceSendBuf[ii].rank = (*____chimes_extern_func_getMyRank)();
# 283 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 284 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_minRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers);
# 285 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 286 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 287 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minValue = reduceRecvBuf[ii].val;
# 288 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].minRank = reduceRecvBuf[ii].rank;
# 289 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 290 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_maxRankDoubleParallel)(reduceSendBuf, reduceRecvBuf, numberOfTimers);
# 291 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 292 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 293 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxValue = reduceRecvBuf[ii].val;
# 294 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      perfTimer[ii].maxRank = reduceRecvBuf[ii].rank;
# 295 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 296 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 297 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
# 298 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 299 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 300 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      double temp = (double)perfTimer[ii].total - perfTimer[ii].average;
# 301 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
      sendBuf[ii] = temp * temp;
# 302 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 303 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   (*____chimes_extern_func_addDoubleParallel)(sendBuf, recvBuf, numberOfTimers);
# 304 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   for (int ii = 0; ii < numberOfTimers; ii++)
# 305 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   {
# 306 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
       int ____chimes_unroll_var_4 = (*____chimes_extern_func_getNRanks)(); perfTimer[ii].stdev = sqrt(recvBuf[ii] / (double) ____chimes_unroll_var_4);
# 307 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
   }
# 308 "/Users/jmg3/chimes/src/examples/openmp/CoMD/src-openmp/performanceTimers.c"
}





static int module_init() {
    init_module(10568076854246272994UL, 3, 8, 24, 22, 8, 6, 14, 5, 0, 8,
                           &____alias_loc_id_0, (unsigned)2, (unsigned)0, (10568076854246272994UL + 95UL), (10568076854246272994UL + 96UL),
                           &____alias_loc_id_1, (unsigned)2, (unsigned)0, (10568076854246272994UL + 97UL), (10568076854246272994UL + 98UL),
                           &____alias_loc_id_2, (unsigned)3, (unsigned)0, (10568076854246272994UL + 99UL), (10568076854246272994UL + 100UL), (10568076854246272994UL + 101UL),
                           &____alias_loc_id_3, (unsigned)2, (unsigned)0, (10568076854246272994UL + 102UL), (10568076854246272994UL + 103UL),
                           &____alias_loc_id_4, (unsigned)2, (unsigned)1, (10568076854246272994UL + 321UL), (10568076854246272994UL + 323UL), "addDoubleParallel", (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL),
                           &____alias_loc_id_5, (unsigned)4, (unsigned)2, (10568076854246272994UL + 324UL), (10568076854246272994UL + 325UL), (10568076854246272994UL + 327UL), (10568076854246272994UL + 775UL), "addDoubleParallel", (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL), "minRankDoubleParallel", (unsigned)2, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL),
                           &____alias_loc_id_6, (unsigned)4, (unsigned)2, (10568076854246272994UL + 324UL), (10568076854246272994UL + 325UL), (10568076854246272994UL + 327UL), (10568076854246272994UL + 775UL), "addDoubleParallel", (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL), "minRankDoubleParallel", (unsigned)2, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL),
                           &____alias_loc_id_7, (unsigned)4, (unsigned)2, (10568076854246272994UL + 324UL), (10568076854246272994UL + 325UL), (10568076854246272994UL + 327UL), (10568076854246272994UL + 775UL), "addDoubleParallel", (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL), "minRankDoubleParallel", (unsigned)2, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL),
                           &____alias_loc_id_8, (unsigned)2, (unsigned)2, (10568076854246272994UL + 328UL), (10568076854246272994UL + 775UL), "maxRankDoubleParallel", (unsigned)2, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL), "minRankDoubleParallel", (unsigned)2, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL),
                           &____alias_loc_id_9, (unsigned)5, (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 329UL), (10568076854246272994UL + 330UL), (10568076854246272994UL + 331UL), (10568076854246272994UL + 775UL), "addDoubleParallel", (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL), "maxRankDoubleParallel", (unsigned)2, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL),
                            &____alias_loc_id_10, (unsigned)3, (unsigned)1, (10568076854246272994UL + 332UL), (10568076854246272994UL + 333UL), (10568076854246272994UL + 775UL), "addDoubleParallel", (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL),
                            &____alias_loc_id_11, (unsigned)1, (unsigned)0, (10568076854246272994UL + 546UL),
                            &____alias_loc_id_12, (unsigned)2, (unsigned)0, (10568076854246272994UL + 547UL), (10568076854246272994UL + 548UL),
                            &____alias_loc_id_13, (unsigned)1, (unsigned)0, (10568076854246272994UL + 549UL),
                            &____alias_loc_id_14, (unsigned)2, (unsigned)0, (10568076854246272994UL + 1UL), (10568076854246272994UL + 775UL),
                            &____alias_loc_id_15, (unsigned)2, (unsigned)0, (10568076854246272994UL + 14UL), (10568076854246272994UL + 15UL),
                            &____alias_loc_id_16, (unsigned)3, (unsigned)0, (10568076854246272994UL + 30UL), (10568076854246272994UL + 31UL), (10568076854246272994UL + 775UL),
                            &____alias_loc_id_17, (unsigned)3, (unsigned)0, (10568076854246272994UL + 68UL), (10568076854246272994UL + 69UL), (10568076854246272994UL + 775UL),
                            &____alias_loc_id_18, (unsigned)1, (unsigned)0, (10568076854246272994UL + 90UL),
                            &____alias_loc_id_19, (unsigned)2, (unsigned)0, (10568076854246272994UL + 104UL), (10568076854246272994UL + 785UL),
                            &____alias_loc_id_20, (unsigned)3, (unsigned)1, (10568076854246272994UL + 332UL), (10568076854246272994UL + 333UL), (10568076854246272994UL + 775UL), "addDoubleParallel", (unsigned)2, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL),
                            &____alias_loc_id_21, (unsigned)4, (unsigned)0, (10568076854246272994UL + 550UL), (10568076854246272994UL + 551UL), (10568076854246272994UL + 552UL), (10568076854246272994UL + 553UL),
                            "profileStart", (void *)(&profileStart_npm), (void *)__null, 0, 1, 0UL, 0UL, 1, "getTime", 0, 0UL,
                            "profileStop", (void *)(&profileStop_npm), (void *)__null, 0, 1, 0UL, 0UL, 1, "getTime", 0, 0UL,
                            "getElapsedTime", (void *)(&getElapsedTime_npm), (void *)__null, 0, 1, 0UL, 0UL, 1, "getTick", 0, 0UL,
                            "printPerformanceResults", (void *)(&printPerformanceResults_npm), (void *)__null, 4, &____alias_loc_id_0, &____alias_loc_id_1, &____alias_loc_id_2, &____alias_loc_id_3, 2, 0UL, 0UL, 0UL, 23, "timerStats", 0, 0UL, "printRank", 0, 0UL, "getTick", 0, 0UL, "getMyRank", 0, 0UL, "fprintf", 3, (10568076854246272994UL + 189UL), (10568076854246272994UL + 777UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 778UL), 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 778UL), 0UL, "fprintf", 7, (10568076854246272994UL + 189UL), (10568076854246272994UL + 780UL), (10568076854246272994UL + 160UL), 0UL, 0UL, 0UL, 0UL, 0UL, "getNRanks", 0, 0UL, "fprintf", 3, (10568076854246272994UL + 189UL), (10568076854246272994UL + 781UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 782UL), 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 783UL), 0UL, "fprintf", 9, (10568076854246272994UL + 189UL), (10568076854246272994UL + 784UL), (10568076854246272994UL + 160UL), 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, 0UL, "getNRanks", 0, 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 786UL), 0UL, "fprintf", 3, (10568076854246272994UL + 189UL), (10568076854246272994UL + 787UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 786UL), 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 786UL), 0UL, "fprintf", 3, (10568076854246272994UL + 189UL), (10568076854246272994UL + 789UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 786UL), 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 786UL), 0UL, "fprintf", 3, (10568076854246272994UL + 189UL), (10568076854246272994UL + 790UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 189UL), (10568076854246272994UL + 786UL), 0UL,
                            "printPerformanceResultsYaml", (void *)(&printPerformanceResultsYaml_npm), (void *)__null, 3, &____alias_loc_id_11, &____alias_loc_id_12, &____alias_loc_id_13, 1, (10568076854246272994UL + 750UL), 0UL, 32, "printRank", 0, 0UL, "getTick", 0, 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 777UL), 0UL, "getNRanks", 0, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 792UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 793UL), 0UL, "getMyRank", 0, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 794UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 769UL), (10568076854246272994UL + 160UL), 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 796UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 777UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 777UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 799UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 800UL), 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 769UL), (10568076854246272994UL + 160UL), 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 801UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 802UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 801UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 802UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 802UL), 0UL, 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 806UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 794UL), 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 808UL), 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 799UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 810UL), 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 806UL), 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 799UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 802UL), 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 769UL), 0UL, "fprintf", 3, (10568076854246272994UL + 750UL), (10568076854246272994UL + 799UL), 0UL, 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 796UL), 0UL, "fprintf", 2, (10568076854246272994UL + 750UL), (10568076854246272994UL + 815UL), 0UL,
                            "getTime", (void *)(&getTime_npm), (void *)__null, 0, 0, 0UL, 1, "gettimeofday", 2, (10568076854246272994UL + 14UL), (10568076854246272994UL + 816UL), 0UL,
                            "getTick", (void *)(&getTick_npm), (void *)__null, 0, 0, 0UL, 0,
                            "timerStats", (void *)(&timerStats_npm), (void *)__null, 7, &____alias_loc_id_10, &____alias_loc_id_4, &____alias_loc_id_5, &____alias_loc_id_6, &____alias_loc_id_7, &____alias_loc_id_8, &____alias_loc_id_9, 0, 0UL, 8, "addDoubleParallel", 3, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL), 0UL, 0UL, "getNRanks", 0, 0UL, "getMyRank", 0, 0UL, "minRankDoubleParallel", 3, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL), 0UL, 0UL, "maxRankDoubleParallel", 3, (10568076854246272994UL + 325UL), (10568076854246272994UL + 326UL), 0UL, 0UL, "addDoubleParallel", 3, (10568076854246272994UL + 321UL), (10568076854246272994UL + 322UL), 0UL, 0UL, "getNRanks", 0, 0UL, "sqrt", 1, 0UL, 0UL,
                               "addDoubleParallel", (void **)&(____chimes_extern_func_addDoubleParallel),
                               "getMyRank", (void **)&(____chimes_extern_func_getMyRank),
                               "getNRanks", (void **)&(____chimes_extern_func_getNRanks),
                               "maxRankDoubleParallel", (void **)&(____chimes_extern_func_maxRankDoubleParallel),
                               "minRankDoubleParallel", (void **)&(____chimes_extern_func_minRankDoubleParallel),
                               "printRank", (void **)&(____chimes_extern_func_printRank),
                           "profileStart", &(____chimes_does_checkpoint_profileStart_npm),
                           "profileStop", &(____chimes_does_checkpoint_profileStop_npm),
                           "getElapsedTime", &(____chimes_does_checkpoint_getElapsedTime_npm),
                           "printPerformanceResults", &(____chimes_does_checkpoint_printPerformanceResults_npm),
                           "printPerformanceResultsYaml", &(____chimes_does_checkpoint_printPerformanceResultsYaml_npm),
                           "getTime", &(____chimes_does_checkpoint_getTime_npm),
                           "getTick", &(____chimes_does_checkpoint_getTick_npm),
                           "timerStats", &(____chimes_does_checkpoint_timerStats_npm),
                           "addDoubleParallel", &(____chimes_does_checkpoint_addDoubleParallel_npm),
                           "getMyRank", &(____chimes_does_checkpoint_getMyRank_npm),
                           "getNRanks", &(____chimes_does_checkpoint_getNRanks_npm),
                           "maxRankDoubleParallel", &(____chimes_does_checkpoint_maxRankDoubleParallel_npm),
                           "minRankDoubleParallel", &(____chimes_does_checkpoint_minRankDoubleParallel_npm),
                           "printRank", &(____chimes_does_checkpoint_printRank_npm),
                             (10568076854246272994UL + 774UL), (10568076854246272994UL + 160UL),
                             (10568076854246272994UL + 776UL), (10568076854246272994UL + 189UL),
                             (10568076854246272994UL + 546UL), (10568076854246272994UL + 750UL),
                     "RankReduceDataSt", 2, "double", (int)__builtin_offsetof (struct RankReduceDataSt, val), "int", (int)__builtin_offsetof (struct RankReduceDataSt, rank),
                     "TimerGlobalSt", 3, "double", (int)__builtin_offsetof (struct TimerGlobalSt, atomRate), "double", (int)__builtin_offsetof (struct TimerGlobalSt, atomAllRate), "double", (int)__builtin_offsetof (struct TimerGlobalSt, atomsPerUSec),
                     "TimerHandle", 0,
                     "TimersSt", 10, "long long unsigned int", (int)__builtin_offsetof (struct TimersSt, start), "long long unsigned int", (int)__builtin_offsetof (struct TimersSt, total), "long long unsigned int", (int)__builtin_offsetof (struct TimersSt, count), "long long unsigned int", (int)__builtin_offsetof (struct TimersSt, elapsed), "int", (int)__builtin_offsetof (struct TimersSt, minRank), "int", (int)__builtin_offsetof (struct TimersSt, maxRank), "double", (int)__builtin_offsetof (struct TimersSt, minValue), "double", (int)__builtin_offsetof (struct TimersSt, maxValue), "double", (int)__builtin_offsetof (struct TimersSt, average), "double", (int)__builtin_offsetof (struct TimersSt, stdev),
                     "__sFILE", 20, "unsigned char*", (int)__builtin_offsetof (struct __sFILE, _p), "int", (int)__builtin_offsetof (struct __sFILE, _r), "int", (int)__builtin_offsetof (struct __sFILE, _w), "short", (int)__builtin_offsetof (struct __sFILE, _flags), "short", (int)__builtin_offsetof (struct __sFILE, _file), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _bf), "int", (int)__builtin_offsetof (struct __sFILE, _lbfsize), "void*", (int)__builtin_offsetof (struct __sFILE, _cookie), "*", (int)__builtin_offsetof (struct __sFILE, _close), "*", (int)__builtin_offsetof (struct __sFILE, _read), "*", (int)__builtin_offsetof (struct __sFILE, _seek), "*", (int)__builtin_offsetof (struct __sFILE, _write), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _ub), "%struct.__sFILEX*", (int)__builtin_offsetof (struct __sFILE, _extra), "int", (int)__builtin_offsetof (struct __sFILE, _ur), "[ 3 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _ubuf), "[ 1 x unsigned char ]", (int)__builtin_offsetof (struct __sFILE, _nbuf), "%struct.__sbuf", (int)__builtin_offsetof (struct __sFILE, _lb), "int", (int)__builtin_offsetof (struct __sFILE, _blksize), "long long int", (int)__builtin_offsetof (struct __sFILE, _offset),
                     "__sFILEX", 0,
                     "__sbuf", 2, "unsigned char*", (int)__builtin_offsetof (struct __sbuf, _base), "int", (int)__builtin_offsetof (struct __sbuf, _size),
                     "timeval", 2, "long int", (int)__builtin_offsetof (struct timeval, tv_sec), "int", (int)__builtin_offsetof (struct timeval, tv_usec),
                             "printPerformanceResults", "_Z23printPerformanceResultsii", 6, "timerStats", "printRank", "getTick", "getMyRank", "getNRanks", "getNRanks",
                             "printPerformanceResultsYaml", "_Z27printPerformanceResultsYamlP7__sFILE", 4, "printRank", "getTick", "getNRanks", "getMyRank",
                             "getTime", "_ZL7getTimev", 0,
                             "profileStop", "_Z11profileStop11TimerHandle", 1, "getTime",
                             "getTick", "_ZL7getTickv", 0,
                             "getElapsedTime", "_Z14getElapsedTime11TimerHandle", 1, "getTick",
                             "profileStart", "_Z12profileStart11TimerHandle", 1, "getTime",
                             "timerStats", "_ZL10timerStatsv", 7, "addDoubleParallel", "getNRanks", "getMyRank", "minRankDoubleParallel", "maxRankDoubleParallel", "addDoubleParallel", "getNRanks",
                        "getTime|ptime|0", 1, "getTime",
                        "printPerformanceResults|nGlobalAtoms|0", 4, "timerStats", "printRank", "getNRanks", "getMyRank",
                        "printPerformanceResults|printRate|0", 4, "timerStats", "printRank", "getNRanks", "getMyRank",
                        "printPerformanceResults|tick|0", 2, "getNRanks", "getMyRank",
                        "printPerformanceResults|loopTime|0", 2, "getNRanks", "getMyRank",
                        "printPerformanceResults|____chimes_unroll_var_0|0", 1, "getNRanks",
                        "printPerformanceResults|ii|0", 1, "getNRanks",
                        "printPerformanceResults|totalTime|0", 1, "getNRanks",
                        "printPerformanceResults|____chimes_unroll_var_1|0", 1, "getNRanks",
                        "printPerformanceResults|ii|1", 1, "getNRanks",
                        "timerStats|sendBuf|0", 1, "timerStats",
                        "timerStats|ii|1", 5, "minRankDoubleParallel", "maxRankDoubleParallel", "getNRanks", "getMyRank", "addDoubleParallel",
                        "timerStats|reduceSendBuf|0", 1, "timerStats",
                        "timerStats|ii|2", 5, "minRankDoubleParallel", "maxRankDoubleParallel", "getNRanks", "getMyRank", "addDoubleParallel",
                        "timerStats|ii|3", 3, "maxRankDoubleParallel", "getNRanks", "addDoubleParallel",
                        "timerStats|ii|4", 2, "getNRanks", "addDoubleParallel",
                        "timerStats|ii|5", 2, "getNRanks", "addDoubleParallel",
                        "timerStats|temp|0", 2, "getNRanks", "addDoubleParallel",
                        "timerStats|ii|6", 1, "getNRanks",
                        "timerStats|____chimes_unroll_var_4|0", 1, "getNRanks",
                        "printPerformanceResultsYaml|file|0", 3, "printRank", "getNRanks", "getMyRank",
                        "printPerformanceResultsYaml|tick|0", 2, "getNRanks", "getMyRank",
                        "printPerformanceResultsYaml|loopTime|0", 2, "getNRanks", "getMyRank",
                        "printPerformanceResultsYaml|____chimes_unroll_var_2|0", 1, "getMyRank",
        "getTime", 0UL, (int)0,
        "getTime", 0UL, (int)0,
        "getTick", 0UL, (int)0,
        "getTick", 0UL, (int)0,
        "getTick", 0UL, (int)0);
    register_global_var("global|timerName", "[11 x i8*]", (void *)(&timerName), 88, 0, 0, 0);
    register_global_var("global|perfTimer", "[11 x %struct.TimersSt]", (void *)(&perfTimer), 792, 0, 0, 0);
    register_global_var("global|perfGlobal", "%struct.TimerGlobalSt = type { double, double, double }", (void *)(&perfGlobal), 24, 0, 1, 0);
    register_constant(10568076854246272994UL + 0UL, (void *)((timerName)[0]), 6);
    register_constant(10568076854246272994UL + 1UL, (void *)((timerName)[1]), 5);
    register_constant(10568076854246272994UL + 2UL, (void *)((timerName)[2]), 9);
    register_constant(10568076854246272994UL + 3UL, (void *)((timerName)[3]), 11);
    register_constant(10568076854246272994UL + 4UL, (void *)((timerName)[4]), 11);
    register_constant(10568076854246272994UL + 5UL, (void *)((timerName)[5]), 15);
    register_constant(10568076854246272994UL + 6UL, (void *)((timerName)[6]), 13);
    register_constant(10568076854246272994UL + 7UL, (void *)((timerName)[7]), 8);
    register_constant(10568076854246272994UL + 8UL, (void *)((timerName)[8]), 12);
    register_constant(10568076854246272994UL + 9UL, (void *)((timerName)[9]), 9);
    register_constant(10568076854246272994UL + 10UL, (void *)((timerName)[10]), 11);
    return 0;
}

static const int __libchimes_module_init = module_init();
