#include "Giacca.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#define N 2

using namespace std;

int main(){

    Giacca giacca[N];
    int taglia;

    for(int i=0; i<N; i++){
        cout << "Inserisci la taglia della giacca (compresa tra 30 e 60) " << i+1 << ": ";
        cin >> taglia;
        giacca[i].setTaglia(taglia);
    }

    srand(time(NULL));
    for(int i=0; i<N; i++){
        for(int j=0; j<4; j++){
            giacca[i].apri(rand()%41+10);
            giacca[i].chiudi(rand()%41+10);
        }
    }

    cout << "Chiusura giacca 1: " << giacca[0].getPercentuale() << endl;
    cout << "Chiusura giacca 2: " << giacca[1].getPercentuale() << endl;
    if(giacca[0].getPercentuale() > giacca[1].getPercentuale()){
        cout << "La giacca piu chiusa e la prima";
    }
    else{cout << "La giacca piu chiusa e la seconda";}

    return 0;
}