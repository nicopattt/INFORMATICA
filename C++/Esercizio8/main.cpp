#include "Televisore.h"
#include <iostream>

using namespace std;

int main(){

    Televisore TV;
    int num;

    TV.pulsanterosso();

    cout << "Inserisci il canale da guardare: ";
    cin >> num;
    TV.impostaCanale(num);

    TV.print();

    return 0;
}