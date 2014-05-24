all:	and.o

and.o : main.c
	gcc -ansi -pedantic -Wall -g *.c -o and.o
