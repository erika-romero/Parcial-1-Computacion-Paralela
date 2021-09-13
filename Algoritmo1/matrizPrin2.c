#include <stdio.h>
#include <stdlib.h>
#include "funcionesMatriz2.h"
#include "tiempo.h"

int main(int argc, char **argv){
    int N = (int) atof (argv[1]); 
    int matrizA[N][N], matrizB[N][N],matrizC[N][N]; 

    matrizInit(N, matrizA); 

    matrizInit(N, matrizB); 
    funcionInicio(); 
    multiplicacionMatrices(N, matrizA, matrizB, matrizC); 
    funcionFinal(); 
    impresionTiempo(); 
}
