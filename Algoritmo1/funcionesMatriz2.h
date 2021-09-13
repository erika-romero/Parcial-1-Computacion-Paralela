#ifndef FUNCIONESMATRIZ_H_INCLUDED
#define FUNCIONESMATRIZ_H_INCLUDED

/*
Se presentan como menu, todas las funciones que se van a presentar en el modulo de biblioteca
*/

void imprimirMatriz(int n, int matrizC[n][n]); 
void multiplicacionMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]); 
void sumaMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]); 
void restaMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]); 
void matrizTranspuesta(int n, int matrizA[n][n], int matrizC[n][n]); 
void matrizInit(int n, int matrizA[n][n]); 

#endif