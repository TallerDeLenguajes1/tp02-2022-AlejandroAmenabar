#include <stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 20

int main(){
    srand(time(NULL));
    int i;
    double vt[N];
    double *punt=&vt[0];
    for(i=0; i<N; i++)
    {
        *punt = 1+rand()%100;
        printf("\n%.2f", *punt++);
    }

}