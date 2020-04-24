
typedef unsigned int uint32_t;

void asm_cpuid(uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx)
{
	/* Execute CPUID instruction and save results */
	asm volatile("cpuid" : "=a"(*eax), "=b"(*ebx), "=c"(*ecx), "=d"(*edx) : "0"(*eax), "2"(*ecx) : "memory");
}

void cpuid_subleaf(
	uint32_t leaf, uint32_t subleaf, uint32_t *eax, uint32_t *ebx, uint32_t *ecx, uint32_t *edx)
{
	*eax = leaf;
	*ecx = subleaf;

	asm_cpuid(eax, ebx, ecx, edx);
}