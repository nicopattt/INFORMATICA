#include <stdio.h>

void modificaVariabile(int *variabile);

int main(){

    int var;

    var = 10;

    modificaVariabile(&var);

    printf("Variabile modificata: %d", var);

    return 0;
}

void modificaVariabile(int *variabile){

    *variabile = 42;

}