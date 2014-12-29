#include "fatBinaryCtl.h"
#define __CUDAFATBINSECTION  ".nvFatBinSegment"
#define __CUDAFATBINDATASECTION  ".nv_fatbin"
asm(
".section .nv_fatbin, \"a\"\n"
".align 8\n"
"fatbinData:\n"
".quad 0x00100001ba55ed50,0x0000000000000290,0x0000005801010002,0x0000000000000238\n"
".quad 0x0000000000000000,0x0000001400010007,0x0000001100000040,0x0000000000000011\n"
".quad 0x0000000000000000,0x0000000000000000,0x6f746365762f2e2e,0x75632e6d75735f72\n"
".quad 0x0000000000000020,0x33010102464c457f,0x0000000000000007,0x0000000100be0002\n"
".quad 0x0000000000000000,0x0000000000000190,0x0000000000000090,0x0038004000140514\n"
".quad 0x0001000400400003,0x7472747368732e00,0x747274732e006261,0x746d79732e006261\n"
".quad 0x7368732e00006261,0x732e006261747274,0x732e006261747274,0x0000006261746d79\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000300000001\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000040,0x000000000000001b\n"
".quad 0x0000000000000000,0x0000000000000001,0x0000000000000000,0x000000030000000b\n"
".quad 0x0000000000000000,0x0000000000000000,0x000000000000005b,0x000000000000001b\n"
".quad 0x0000000000000000,0x0000000000000001,0x0000000000000000,0x0000000200000013\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000078,0x0000000000000018\n"
".quad 0x0000000000000002,0x0000000000000008,0x0000000000000018,0x0000000500000006\n"
".quad 0x0000000000000190,0x0000000000000000,0x0000000000000000,0x00000000000000a8\n"
".quad 0x00000000000000a8,0x0000000000000008,0x0000000500000001,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000008,0x0000000600000001,0x0000000000000000,0x0000000000000000\n"
".quad 0x0000000000000000,0x0000000000000000,0x0000000000000000,0x0000000000000008\n"
".text");
#ifdef __cplusplus
extern "C" {
#endif
extern const unsigned long long fatbinData[84];
#ifdef __cplusplus
}
#endif
#ifdef __cplusplus
extern "C" {
#endif
static const __fatBinC_Wrapper_t __fatDeviceText __attribute__ ((aligned (8))) __attribute__ ((section (__CUDAFATBINSECTION)))= 
	{ 0x466243b1, 2, fatbinData, (void**)__cudaPrelinkedFatbins };
#ifdef __cplusplus
}
#endif