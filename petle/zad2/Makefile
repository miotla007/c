CFLAGS = -Wall

main: main.c funkcja.c funkcja.h
	gcc -c main.c funkcja.c
	cc main.o funkcja.o

clean: *.o *.out
	rm -rf *.o *.out

test: a.out
	echo "3 3">1.in
	echo "4 8">2.in
	echo "6 4">3.in
	./a.out<1.in
	./a.out<2.in
	./a.out<3.in
	rm *.in
