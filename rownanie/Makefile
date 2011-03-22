CFLAGS = -Wall

comp: main.c funkcja.c funkcja.h
	gcc -c main.c funkcja.c
main: main.o funkcja.o
	cc main.o funkcja.o

clean:
	rm -rf *.o *.out

test:
	echo "2 2">1.in
	echo "2 5">2.in
	echo "3.9 7.8">3.in
	./a.out<1.in 
	./a.out<2.in
	./a.out<3.in
	rm *.in
