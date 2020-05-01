#include"../common/common.h"

uint32_t swap(uint32_t *ptr, uint32_t v)
{
	asm volatile("xchgl %1,%0": "+m"(*ptr), "+r"(v) : : "cc", "memory");
	return v;
}
