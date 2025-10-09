#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Casa {
    int metri_quadri;
    char classe;
    float k_euro;
    float prezzomq;
};

void selectionSort(struct Casa vet[], int n){
    int i, j, pos_min, tmp;
    for(i=0; i<n-1; i++){
        pos_min = i;
        for(j=i+1; j<n; j++){
            if(vet[j].prezzomq<vet[pos_min].prezzomq)
                pos_min = j;
        }
        tmp = vet[i].prezzomq;
        vet[i].prezzomq = vet[pos_min].prezzomq;
        vet[pos_min].prezzomq = tmp;
    }
}

int miglioreClasse(struct Casa a, struct Casa b){
    if(a.classe<b.classe){
        return 1;
    }
    if(a.classe>=b.classe){
        return 0;
    }
    return a.metri_quadri>=b.metri_quadri;
}

int main(){

    int i;
    struct Casa home[3];
    for(i=0; i<3; i++){
        printf("Inserisci i metri quadri casa %d: ", i+1);
        scanf("%d", &home[i].metri_quadri);
        printf("Inserisci la classe: ");
        scanf(" %c", &home[i].classe);
        printf("Inserisci il prezzo in migliaia: ");
        scanf("%f", &home[i].k_euro);
        home[i].prezzomq = home[i].k_euro/home[i].metri_quadri;
    }

    selectionSort(home, 3);
    printf("Il minor costo al metro quadro e: %.2f keuro/mq", home[0].prezzomq);

    int x=0;
    for(i=1;i<3;i++){
        if(miglioreClasse(home[i],home[x])){
            x = i;
        }
    }
    printf("\nCasa con la migliore classe energetica: casa %d, mq: %d", x+1,home[x].metri_quadri);

    return 0;
}