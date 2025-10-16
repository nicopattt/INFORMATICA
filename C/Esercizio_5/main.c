#include <stdio.h>

int sommaArray(int *array, int dimensione);

int main(){

    int array[10] = {1,1,1,1,1,1,1,1,1,1};
    int n=10;
    printf("La somma dell'array vale: %d", sommaArray(&*array, n));

    return 0;
}

int sommaArray(int *array, int dimensione){

    int i, som=0;
    for(i=0;i<dimensione;i++){

        som=som+(*array);
        array++;
    }

    return som;
}