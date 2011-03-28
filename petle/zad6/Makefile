CFLAGS = -Wall

main: main.c funkcja.c funkcja.h
	gcc -c main.c funkcja.c
	cc main.o funkcja.o

clean: *.o *.out
	rm -rf *.o *.out

test: a.out
	echo "1 2 3 4 5 6">1.in
	echo "-1 2 8 100 1000 9999">2.in
	echo "-1 -2 -3 -4 -5 -6">3.in
	./a.out<1.in
	./a.out<2.in
	./a.out<3.in
	rm *.in
