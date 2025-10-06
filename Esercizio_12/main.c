#include <stdio.h>
#include <stdlib.h>

char* allocaStringa(int dimensione);

int main(){

    int dimensione;
    char *stringa;
    printf("Inserisci la dimensione: ");
    scanf("%d", &dimensione);

    stringa = allocaStringa(dimensione);

    return 0;
}

char* allocaStringa(int dimensione){

    char *stringa;
    stringa = (char*)malloc((dimensione+1) * sizeof(char));

    return stringa;

}