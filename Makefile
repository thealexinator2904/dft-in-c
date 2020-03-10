CFGLAGS=-std=c11 -g -Wall
CC=gcc

all: main

init:
	mkdir -p build

complex.o: src/complex.c include/complex.h
	$(CC) $(CFLAGS) -I include -c src/complex.c -o build/complex.o -lm
	
dft.o: src/dft.c
	$(CC) $(CFLAGS) -I include -c src/dft.c -o build/dft.o -lm
	
main.o: src/main.c
	$(CC) $(CFLAGS) -I include -c src/main.c -o build/main.o -lm
	
main: init complex.o dft.o main.o
	$(CC) $(CFLAGS) build/complex.o build/dft.o build/main.o -o build/dft_in_C -lm
	
clean:
	rm -rf build/
