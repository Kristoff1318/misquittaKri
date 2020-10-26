all: var.o
	gcc -o var var.o

proj_euler.o: var.c
	gcc -c var.c

run:
	./var
