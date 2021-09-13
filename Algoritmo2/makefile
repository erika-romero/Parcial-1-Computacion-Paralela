GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99
C_FLAGS = -lm
PROGRAMAS = matrices

matrices:
	$(GCC) $(FLAGS) funcionesmatriz.c -c
	$(GCC) $(FLAGS) ctime.c -c 
	$(GCC) $(FLAGS) $@.c -c 
	$(GCC) $(FLAGS) -o $@ $@.o funcionesmatriz.o ctime.o
 
clean: 
	$(RM) $(PROGRAMAS) *.o
