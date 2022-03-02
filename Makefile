all: hello

hello: main.c
	gcc -Wall -o hello main.c

clean:
	rm -rf *.c hello