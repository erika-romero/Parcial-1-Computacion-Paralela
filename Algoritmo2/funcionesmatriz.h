#ifndef FUNCIONESMATRIZ_H_INCLUDED
#define FUNCIONESMATRIZ_H_INCLUDED

void matrizInit(int N, double *matrizA, double *matrizB,double *matrizC);
void sumaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]);
void restaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]);
void multiplicacionMatrices(int N,double *matrizA, double *matrizB,double *matrizC);
void matrizTranspuesta(int N,int matrizA[N][N], int matrizT[N][N]);
void imprimirMatriz(int N,double *matriz);
#endif