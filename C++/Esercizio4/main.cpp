#include "Cerchio.h"
#include <iostream>

using namespace std;

int main(){

    Cerchio cer[5];
    for(int i=0; i<5; i++){
        cer[i].setRaggio(i+1);
    }

    for(int i=0; i<5; i++){
        cout << "\nCerchio con raggio: " << cer[i].getRaggio();
        cout << "\nArea: " << cer[i].getArea();
        cout << " e circonferenza: " << cer[i].getCirconferenza() << endl;
    }

    return 0;
}