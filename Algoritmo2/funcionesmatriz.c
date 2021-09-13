#include <stdio.h>
#include "funcionesmatriz.h"

void matrizInit(int N, double *matrizA, double *matrizB,double *matrizC){
    for (int i = 0; i < N; i++)
    {
         for (int j = 0; j < N; j++)
         {
             matrizA[j+i*N]=2.0*(i+j);
             matrizB[j+i*N]=3.2*(i+j);
             matrizC[j+i*N]=1.0;

         }
         
    }
    
}
void sumaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
    int N=3;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            matrizC[i][j]= matrizA[i][j]+matrizB[i][j];
        }  
    }
}

void restaMatrices(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizC[i][j]= matrizA[i][j]- matrizB[i][j];
        }  
    }
}

void multiplicacionMatrices(int N,double *matrizA, double *matrizB,double *matrizC){
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            double *pA, *pB;
            double suma=0.0;
            pA=matrizA+(i*N);
            pB=matrizB+j;
            for (int k = 0; k < N; k++,pA++,pB+=N)
            {
                suma+=(*pA * *pB);
            }
            matrizC[i*N+j]=suma;
        }  
    }
}


void matrizTranspuesta(int N,int matrizA[3][3], int matrizT[3][3]){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrizT[i][j]= matrizA[j][i];
        }  
    }
}

void imprimirMatriz(int N,double *matriz){
    for (int i = 0; i <N; i++)
    {
        for (int j = 0; j <N; j++)
        {
            printf("%f\t", matriz[j+i*N]);
        }
        printf("\n");
    }
}