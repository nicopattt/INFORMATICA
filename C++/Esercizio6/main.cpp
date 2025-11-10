#include "Scarpe.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

    Scarpe paia[2];
    srand(time(NULL));

    for(int i=0; i<10; i++){
        paia[rand()%2].apriChiudi(rand()%6);
    }

    for(int i=0; i<2; i++){
        cout << "Paio numero " << i+1 << endl;
        cout << "   Scarpa sinistra" << endl;
        for(int j=0; j<6; j++){
            if(j==3)
                cout << "   Scarpa destra" << endl;
            if(paia[i].getStretch(j) == 1)
                cout << "       Stretch " << j+1 << " e aperto" << endl;
            else
                cout << "       Stretch " << j+1 << " e chiuso" << endl;
        }
    }

    return 0;
}