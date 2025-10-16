#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Libri{
    int codice;
    int pagine;
    float costo;
};

void selectionSort(struct Libri vet[], int n){
    int i, j, pos_min, tmp;
    for(i=0; i<n-1; i++){
        pos_min = i;
        for(j=i+1; j<n; j++){
            if(vet[j].costo<vet[pos_min].costo)
                pos_min = j;
        }
        tmp = vet[i].costo;
        vet[i].costo = vet[pos_min].costo;
        vet[pos_min].costo = tmp;
    }
}

int main(){

    struct Libri array[3];
    int i;
    float costo_medio;
    srand(time(NULL));
    for(i=0;i<3;i++){
        array[i].codice = rand()%100+1;
        array[i].pagine = rand()%100+1;
        array[i].costo = rand()%20+1;
    }
    
    for(i=0;i<3;i++){
        costo_medio = array[i].costo / array[i].pagine;
        printf("Costo per pagina libro %d (n pagine %d, costo %.2f): %.2f\n",i+1,array[i].pagine,array[i].costo,costo_medio);
    }

    selectionSort(array, 3);
    for(i=0;i<3;i++){
        printf("Costo libro %d: %f\n", i, array[i].costo);
    }
    return 0;
}