CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=c99 -lcriterion
CFLAGSEX1 = -Wall -Wextra -Werror -pedantic -std=c99

all: clean
	$(CC) $(CFLAGS) *.c -o tests

exercise1: clean
	$(CC) $(CFLAGSEX1) exercise1.c
	./a.out

exercise2: clean
	$(CC) $(CFLAGS) exercise2.c Tests/test2.c
	./a.out

exercise3: clean
	$(CC) $(CFLAGS) exercise3.c Tests/test3.c
	./a.out

clean:
	rm -f *.o *.a *.out tests
