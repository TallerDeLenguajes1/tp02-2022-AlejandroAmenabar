#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 20

int main(){
    srand(time(NULL));
    int i;
    double *vt;
    vt=malloc(N*sizeof(double));

    for(i=0; i<N; i++)
    {
        vt[i] = 1+rand()%100;
        printf("\n%.2f", vt[i]);
    }

}