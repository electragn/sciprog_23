CC = gcc
CCFLAGS = -o3
LDFLAGS = -lm

matmultc: main.o matmult.o
	$(CC) -o matmultc main.o matmult.o

matmult.o: matmult.c
	$(CC) -c matmult.c

main.o: main.c
	$(CC) -c main.c
