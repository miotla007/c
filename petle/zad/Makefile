CFLAGS = -Wall

main: main.c funkcja.c funkcja.h
	gcc -c main.c funkcja.c
	cc main.o funkcja.o

clear: *.out *.o
	rm -rf *.out *.o *.*~

test: a.out
	./a.out paliwo
