
#include <stdio.h>

void copiaStringa(const char *sorgente, char *destinazione);

int main(){

    char sorgente[5] = "Ciao";
    char destinazione[5];

    printf("%s\n", sorgente);
    copiaStringa(sorgente, destinazione);
    printf("%s\n", destinazione);

    return 0;
}

void copiaStringa(const char *sorgente, char *destinazione){
    int i;
    for(i=0;i<5;i++){
        *destinazione = *sorgente;
        sorgente++;
        destinazione++;
    }
    

}