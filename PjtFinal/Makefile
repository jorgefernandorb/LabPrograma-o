all: main

main: main.o pj.o
	gcc -o main main. pj.o

main.o: main.c pj.h
	gcc -o main.o main.c -c -W -Wall =ansi -pedantic

pj.o: pgm.c pj.h
	gcc -o pj.o pgm.c -c -W -Wall -ansi -pedantic

pj.o: histograma.c pj.h
  gcc -o pj.o histograma.c -c -W -Wall -ansi -pedantic

pj.o: lbp.c pj.h
  gcc -o pj.o lbp.c -c -W -Wall -ansi -pedantic

clean:
	rm -rf *.o*~ main
