#include <stdio.h>
#include "rdtscp.h"

int main()
{	
	uint16_t pcpu_id;

	pcpu_id = get_pcpu_id();

	printf("The current running physical CPU ID is %d\n", pcpu_id);

	return 0;
}

