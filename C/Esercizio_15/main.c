#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Tavolo {
    int max_persone;
    float altezza;
    float lunghezza;
    float larghezza;
};

int main(){

    struct Tavolo tavolo[4];
    int i, num_posti=0;
    float superficie, sup_media, sup=0;
    srand(time(NULL));
    for(i=0; i<4; i++){
        tavolo[i].max_persone = rand()%10+1;
        tavolo[i].altezza = rand()%200;
        tavolo[i].altezza = tavolo[i].altezza / 100;
        tavolo[i].lunghezza = rand()%300;
        tavolo[i].lunghezza = tavolo[i].lunghezza / 100;
        tavolo[i].larghezza = rand()%300;
        tavolo[i].lunghezza = tavolo[i].lunghezza / 100;
        num_posti = num_posti + tavolo[i].max_persone;
        superficie = tavolo[i].larghezza * tavolo[i].lunghezza;
        sup_media = superficie / tavolo[i].max_persone;
        printf("superficie media a persona tavolo %d: %f\n", i, sup_media);
        sup = sup + superficie;
    }

    printf("Il numero totale di posti tra i 4 tavoli e: %d\n", num_posti);
    printf("La superficie media totale a persona e: %f", sup/num_posti);

    return 0;
}