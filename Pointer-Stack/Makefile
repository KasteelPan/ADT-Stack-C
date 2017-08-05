objects = main.o stack.o

main.out:$(objects)
	gcc $(objects) -o main.out
main.o:main.c stack.h
	gcc -c main.c -o main.o
stack.o:stack.c stack.h
	gcc -c stack.c -o stack.o
clean:
	rm -rf $(objects)