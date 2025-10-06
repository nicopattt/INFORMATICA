#include <stdio.h>
#include <stdlib.h>

int main(){

    int dimensione;
    printf("Inserisci la dimensione dell'array: ");
    scanf("%d",&dimensione);

    float *ptr;
    ptr = (float*)malloc(dimensione * sizeof(float));

    return 0;
}