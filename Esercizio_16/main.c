#include <stdio.h>

struct Casa{
    int metri_quadri;
    char classe;
    float k_euro;
    float prezzo_mq;
};

int indiceMinPrezzoMq(struct Casa vet[], int n){
    int min=0;
    for(int i=1; i<n; i++){
        if(vet[i].prezzo_mq<vet[min].prezzo_mq){
            min=i;
        }
    }
    return min;
}

int miglioreClasse(struct Casa a, struct Casa b) {
    if(a.classe<b.classe){
        return 1;
    } 
    else if (a.classe>b.classe){
        return 0;
    } 
    else{
        return a.metri_quadri>b.metri_quadri;
    }
}

int main() {
    struct Casa case_vet[3];
    for(int i=0; i<3; i++){
        printf("Inserisci i metri quadri della casa %d: ", i+1);
        scanf("%d", &case_vet[i].metri_quadri);
        printf("Inserisci la classe energetica (A-F): ");
        scanf(" %c", &case_vet[i].classe);
        printf("Inserisci il costo in migliaia di euro: ");
        scanf("%f", &case_vet[i].k_euro);
        case_vet[i].prezzo_mq=(case_vet[i].k_euro * 1000)/case_vet[i].metri_quadri;
    }

    int minPrezzo = indiceMinPrezzoMq(case_vet, 3);
    printf("\nLa casa col minor costo al metro quadro è la casa %d: %.2f euro/mq\n", minPrezzo+1, case_vet[minPrezzo].prezzo_mq);

    int migliore = 0;
    for (int i = 1; i < 3; i++) {
        if (miglioreClasse(case_vet[i], case_vet[migliore])) {
            migliore = i;
        }
    }
    printf("La casa con la migliore classe energetica è la casa %d (classe %c, %d mq, %.2f keuro)\n", migliore+1, case_vet[migliore].classe, case_vet[migliore].metri_quadri, case_vet[migliore].k_euro);

    return 0;
}