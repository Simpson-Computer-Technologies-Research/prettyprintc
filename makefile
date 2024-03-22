all: out clean

out: main.o
	gcc -o out main.o prettyPrint.o
	./out

main.o: main.c bin/prettyPrint.c
	gcc -c main.c bin/prettyPrint.c

clean:
	rm -f *.o out