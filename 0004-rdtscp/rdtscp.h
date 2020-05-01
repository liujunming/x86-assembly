#include"../common/common.h"

uint16_t get_pcpu_id(void)
{
	uint32_t tsl, tsh, cpu_id;

	asm volatile("rdtscp" : "=a"(tsl), "=d"(tsh), "=c"(cpu_id)::);
	return (uint16_t)cpu_id;
}
