all: board

board: main.c
	gcc -Wall -o board main.c

clean:
	rm -rf *.c board