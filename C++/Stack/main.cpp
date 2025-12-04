#include "Stack.h"
#include <iostream>

using namespace std;

int main(){

    Stack stacking;

    int scelta = -1;

    while(scelta!=0){
        cout << "\n---MENU---\n";
        cout << "\n1. Aggiungi un elemento";
        cout << "\n2. Rimuovi l'elemento in cima";
        cout << "\n3. Leggi l'elemento in cima";
        cout << "\n4. Numero di elementi dello stack";
        cout << "\n\n0. Esci" << endl;
        cout << "\nScelta: ";

        cin >> scelta;

        switch(scelta){
            case 1:
                cout << "\nInserisci il numero da inserire: ";
                int num;
                cin >> num;
                stacking.push(num);
                break;
            case 2:
                if(!stacking.isEmpty())
                    cout << "\nElemento " << stacking.pop() << " rimosso.";
                break;
            case 3:
                if(!stacking.isEmpty())
                    cout << "\nElemento in cima: " << stacking.top();
                break;
            case 4:
                cout << "\nNumero di elementi nello stack: " << stacking.size();
                break;
            case 0:
                cout << "\n\n\n\nMenu chiuso";
                break;
        }
    }

    return 0;
}