#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAMANIO 5
#define M 6
#define N 10

struct compu
{
    int velocidad;
    int anio;
    int cantidad;
    char* tipo_cpu;
}typedef compu;

void mostrar(compu compus[TAMANIO]);
void masVieja(compu compus[TAMANIO]);
void masVeloz(compu compus[TAMANIO]);

int main()
{
    srand(time(NULL));
    char tipos[M][N]={"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    compu computadoras [TAMANIO];

    for (int i=0; i<TAMANIO; i++){
        computadoras[i].velocidad = (rand()%3) + 1;
        computadoras[i].anio = (rand()%8) + 2015;
        computadoras[i].cantidad = (rand()%8) + 1;
        computadoras[i].tipo_cpu = &tipos[rand()%6][0];
    }

    mostrar(computadoras);
    puts("\n");
    masVieja(computadoras);
    puts("\n");
    masVeloz(computadoras);
    return 0;
}

void mostrar(compu computadoras[TAMANIO])
{
    for (int i=0; i<TAMANIO ; i++)
    {
        printf("\nPC %d)\n",i+1);
        char* aux;


        printf("Velocidad de procesamiento : %d GHz\n",computadoras[i].velocidad);
        printf("Fecha de fabricacion: %d\n",computadoras[i].anio);
        printf("Cantidad de nucleos: %d\n",computadoras[i].cantidad);
        printf("Tipo de procesador: ");

        aux = computadoras[i].tipo_cpu;

        while(*(aux)){
            printf("%c",*(aux));
            aux++;
        }
    }
}

void masVieja(compu computadora[TAMANIO])
{
    char* aux;
    compu masVieja = computadora[0];

    for (int i=1; i<TAMANIO; i++){
        if(computadora[i].anio < masVieja.anio){
            masVieja = computadora[i];
        }
    }
    aux=masVieja.tipo_cpu;
    puts("\nLa computadora mas vieja es: ");
    printf("Velocidad de procesamiento : %d GHz\n",masVieja.velocidad);
    printf("Fecha de fabricacion: %d\n",masVieja.anio);
    printf("Cantidad de nucleos: %d\n",masVieja.cantidad);
    printf("Tipo de procesador: " );
    while(*(aux)){
        printf("%c",*(aux));
        aux++;
    }


}

void masVeloz(compu compus[TAMANIO]){
    char* aux;
    compu masVeloz = compus[0];

    for (int i = 1; i < TAMANIO; i++){
        if(compus[i].velocidad > masVeloz.velocidad){
            masVeloz = compus[i];
        }
    }
    aux=masVeloz.tipo_cpu;
    puts("\nLa computadora mas veloz es: ");
    printf("Velocidad de procesamiento : %d GHz\n",masVeloz.velocidad);
    printf("Fecha de fabricacion: %d\n",masVeloz.anio);
    printf("Cantidad de nucleos: %d\n",masVeloz.cantidad);
    printf("Tipo de procesador: ");
    printf("Tipo de procesador: " );
    while(*(aux)){
        printf("%c",*(aux));
        aux++;
    }

    

}