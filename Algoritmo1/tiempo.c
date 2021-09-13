#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include "tiempo.h"

struct timeval inicio; 
struct timeval final;

void funcionInicio(){
    gettimeofday(&inicio, NULL); 
}

void funcionFinal(){
    gettimeofday(&final, NULL); 
}

void impresionTiempo(){

    final.tv_sec -= inicio.tv_sec;
    printf("%f", (double)(final.tv_sec*1000000 + final.tv_usec));
    printf("\n"); 
}