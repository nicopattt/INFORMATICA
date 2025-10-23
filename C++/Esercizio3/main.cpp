#include "Rettangoli.h"
#include <iostream>

using namespace std;

int main(){

    Rettangolo rett[10];
    for(int i=0; i<10; i++){
        rett[i].setBase(i+1);
        rett[i].setAltezza(i+2);
    }

    for(int i=0; i<10; i++){
        cout << "Rettangolo con base: " << rett[i].getBase();
        cout << " e altezza: " << rett[i].getAltezza();
        cout << "\nArea: " << rett[i].getArea();
        cout << " e perimetro: " << rett[i].getPerimetro() << endl;
    }

    return 0;
}