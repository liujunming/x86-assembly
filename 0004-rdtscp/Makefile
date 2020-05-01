all:rdtscp

CFLAGS=-g -O0 -Wall

rdtscp:rdtscp.o test.o

rdtscp.o:rdtscp.h rdtscp.c

test.o:test.c

.PHONY:clean

clean:
	rm *.o rdtscp
