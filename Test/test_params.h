#define FP_INST 2048
static inline __attribute__((always_inline)) void test_function(int long long num_rep_max){
	__asm__ __volatile__ (
		"movq %0, %%r8\n\t\t"
		"Loop2_%=:\n\t\t"
		"movl $8, %%edi\n\t\t"
		"Loop1_%=:\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"vfmadd132pd %%zmm0, %%zmm0, %%zmm0\n\t\t"
		"vfmadd132pd %%zmm1, %%zmm1, %%zmm1\n\t\t"
		"vfmadd132pd %%zmm2, %%zmm2, %%zmm2\n\t\t"
		"vfmadd132pd %%zmm3, %%zmm3, %%zmm3\n\t\t"
		"vfmadd132pd %%zmm4, %%zmm4, %%zmm4\n\t\t"
		"vfmadd132pd %%zmm5, %%zmm5, %%zmm5\n\t\t"
		"vfmadd132pd %%zmm6, %%zmm6, %%zmm6\n\t\t"
		"vfmadd132pd %%zmm7, %%zmm7, %%zmm7\n\t\t"
		"vfmadd132pd %%zmm8, %%zmm8, %%zmm8\n\t\t"
		"vfmadd132pd %%zmm9, %%zmm9, %%zmm9\n\t\t"
		"vfmadd132pd %%zmm10, %%zmm10, %%zmm10\n\t\t"
		"vfmadd132pd %%zmm11, %%zmm11, %%zmm11\n\t\t"
		"vfmadd132pd %%zmm12, %%zmm12, %%zmm12\n\t\t"
		"vfmadd132pd %%zmm13, %%zmm13, %%zmm13\n\t\t"
		"vfmadd132pd %%zmm14, %%zmm14, %%zmm14\n\t\t"
		"vfmadd132pd %%zmm15, %%zmm15, %%zmm15\n\t\t"
		"vfmadd132pd %%zmm16, %%zmm16, %%zmm16\n\t\t"
		"vfmadd132pd %%zmm17, %%zmm17, %%zmm17\n\t\t"
		"vfmadd132pd %%zmm18, %%zmm18, %%zmm18\n\t\t"
		"vfmadd132pd %%zmm19, %%zmm19, %%zmm19\n\t\t"
		"vfmadd132pd %%zmm20, %%zmm20, %%zmm20\n\t\t"
		"vfmadd132pd %%zmm21, %%zmm21, %%zmm21\n\t\t"
		"vfmadd132pd %%zmm22, %%zmm22, %%zmm22\n\t\t"
		"vfmadd132pd %%zmm23, %%zmm23, %%zmm23\n\t\t"
		"vfmadd132pd %%zmm24, %%zmm24, %%zmm24\n\t\t"
		"vfmadd132pd %%zmm25, %%zmm25, %%zmm25\n\t\t"
		"vfmadd132pd %%zmm26, %%zmm26, %%zmm26\n\t\t"
		"vfmadd132pd %%zmm27, %%zmm27, %%zmm27\n\t\t"
		"vfmadd132pd %%zmm28, %%zmm28, %%zmm28\n\t\t"
		"vfmadd132pd %%zmm29, %%zmm29, %%zmm29\n\t\t"
		"vfmadd132pd %%zmm30, %%zmm30, %%zmm30\n\t\t"
		"vfmadd132pd %%zmm31, %%zmm31, %%zmm31\n\t\t"
		"subl $1, %%edi\n\t\t"
		"jnz Loop1_%=\n\t\t"
		"sub $1, %%r8\n\t\t"
		"jnz Loop2_%=\n\t\t"
		:
		:"r"(num_rep_max)
		:"%rax","%rdi","%zmm0","%zmm1","%zmm2","%zmm3","%zmm4","%zmm5","%zmm6","%zmm7","%zmm8","%zmm9","%zmm10","%zmm11","%zmm12","%zmm13","%zmm14","%zmm15","memory"
	);
}

