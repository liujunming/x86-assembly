#include <stdio.h>
#include "xchg.h"

int main()
{	
	uint32_t test = 1200;
	uint32_t ret;

	ret = swap(&test, 1300);

	printf("After swap:test value is %d, ret value is %d\n", test, ret);

	return 0;
}
