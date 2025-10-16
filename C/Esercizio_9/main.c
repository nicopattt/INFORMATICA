#include <stdio.h>

void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media);

int main(){

    int array[10] = {4,2,4,2,2,4,2,4,2,4};
    int dimensione=10, somma=0;
    float media = 0.0f;
    calcolaSommaEMedia(array, dimensione, &somma, &media);
    printf("La somma dell'array vale: %d\n", somma);
    printf("La media dell'array vale: %.2f", media);

    return 0;
}

void calcolaSommaEMedia(int *array, int dimensione, int *somma, float *media){

    int i;
    for(i=0;i<dimensione;i++){

        *somma = *somma + (*array);
        array++;
    }

    *media = *somma / dimensione;

}