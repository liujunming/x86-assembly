#include <stdio.h>
#include "cpuid.h"

int main()
{	
	uint32_t eax, ebx, ecx, edx;

	eax = 0;

	asm_cpuid(&eax, &ebx, &ecx, &edx);

	printf("eax=0x%08x\n", eax);

	return 0;
}
