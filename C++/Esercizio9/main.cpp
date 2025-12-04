#include "Veicolo.h"
#include <iostream>

using namespace std;

int main(){

    int scelta = -1;
    int accelera;
    Veicolo pat_mobile;

    while(scelta != 0){
        cout << "MENU' VEICOLO\n";
        cout << "1. Accendi motore\n";
        cout << "2. Spegni motore\n";
        cout << "3. Accelera\n";
        cout << "4. Frena\n";
        cout << "5. Mostra parametri\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch(scelta){
            case 1:
                pat_mobile.accendi();
                cout << "\nVeicolo acceso\n";
                break;
            case 2:
                pat_mobile.spegni();
                cout << "\nVeicolo spento\n";
                break;
            case 3:
                cout << "\nDi quanto vuoi accelerare: ";
                cin >> accelera;
                pat_mobile.accelera(accelera);
                cout << "\nVelocità attuale: " << pat_mobile.getVelocita() << endl;
                break;
            case 4:
                pat_mobile.frena();
                cout << "\nL'auto e ferma\n";
                break;
            case 5:
                if(pat_mobile.getStato())
                    cout << "\n   Macchina accesa\n" << endl;
                else
                    cout << "\n   Macchina spenta\n" << endl;
                cout << "\n   Marca macchina: " << pat_mobile.getMarca() << endl;
                cout << "\n   Modello macchina: " << pat_mobile.getModello() << endl;
                cout << "\n   Velocita macchina: " << pat_mobile.getVelocita() << endl;
                break;
            case 0:
                cout << "Menu chiuso";
        }
    }

    return 0;
}