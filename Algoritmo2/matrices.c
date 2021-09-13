#include <stdio.h>
#include <stdlib.h>
#include "funcionesmatriz.h"
#include "ctime.h"

#define SIZE_DATA (1024*1024*64*3)

static double MEM_CHUNK[SIZE_DATA];
int main(int argc, char **argv){
    //** -->doble puntero

    int N;
    N = (int) atof(argv[1]);
    double *matrizA;
    double *matrizB;
    double *matrizC;
    //atof ingresar por consola 

    matrizA= MEM_CHUNK;
    matrizB= matrizA+N*N;
    matrizC=matrizB+N*N;

    matrizInit(N,matrizA,matrizB,matrizC);

    

    /*printf("Presentacion de la matriz A: \n");
    imprimirMatriz(N,matrizA);
    printf("\n");

    printf("Presentacion de la matriz B: \n");
    imprimirMatriz(N,matrizB);*/

    sampleStart();

    /*printf("Multiplicacion de matriz A y matriz B: \n");*/
    multiplicacionMatrices(N,matrizA,matrizB,matrizC);
    /*imprimirMatriz(N,matrizC);*/
    printf("\n");


    sampleStop();
    printTime();
   
    return 0;
}
