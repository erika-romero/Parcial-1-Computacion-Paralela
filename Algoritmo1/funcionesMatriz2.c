#include <stdio.h>
#include "funcionesMatriz2.h"

/*
Se implementan todas las funciones que
se presentan en el interfaz
*/

void imprimirMatriz(int n, int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            printf("%i\t", matrizC[i][j]);
        }
        printf("\n");
    }
}

void multiplicacionMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            matrizC[i][j]=0;
            for(int k=0; k<n; k++){
                  matrizC[i][j]+= matrizA[i][k] * matrizB[k][j];
            }    
        }
    }
}

void sumaMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            matrizC[i][j]= matrizA[i][j] + matrizB[i][j];
        }
    }
}

void restaMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            matrizC[i][j]= matrizA[i][j] - matrizB[i][j];
        }
    }
}

void matrizInit(int n, int matrizA[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            matrizA[i][j]= 2*(j-i);
        }
    }
}

void MatrizTranspuesta(int n, int matrizA[n][n], int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
            matrizC[i][j] = matrizA[j][i];        
        }
    }
}
