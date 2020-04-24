all:cpuid

CFLAGS=-g -O0 -Wall

cpuid:cpuid.o test.o

cpuid.o:cpuid.h cpuid.c

test.o:test.c

.PHONY:clean

clean:
	rm *.o cpuid
