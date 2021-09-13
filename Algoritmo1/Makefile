GCC = gcc 

FLAGS = -ansi -pedantic -Wall -std=c99

CFLAGS = -lm 

PROGS = matrizPrin2

matrizPrin2: 

		$(GCC) $(FLAGS) -c $@.c
		$(GCC) $(FLAGS) -c funcionesMatriz2.c 
		$(GCC) $(FLAGS) -c tiempo.c 
		$(GCC) $(FLAGS) -o $@ $@.o funcionesMatriz2.o tiempo.o


clean:

	$(RM) $(PROGS) *.o