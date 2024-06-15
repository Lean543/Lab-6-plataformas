SRCS = stack.c main.c

OBJS = $(SRCS:.c=.o)

ProgramaLD: stack.o main.o

	gcc -Wall main.c stack.c -o main

clean:

	rm -f main $(OBJS)

run:

	./main
