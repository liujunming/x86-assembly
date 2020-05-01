all:xchg

CFLAGS=-g -O0 -Wall

xchg:xchg.o test.o

xchg.o:xchg.h xchg.c

test.o:test.c

.PHONY:clean

clean:
	rm *.o xchg
