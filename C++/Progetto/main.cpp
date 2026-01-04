#include "Cliente.h"
#include "Conto.h"
#include <iostream>

using namespace std;

int main(){

    Cliente c(1);
    Conto conto(c, 0);

    int scelta;
    int importo;

    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Deposita\n";
        cout << "2. Preleva\n";
        cout << "3. Visualizza saldo\n";
        cout << "0. Esci\n";
        cout << "Scelta: ";
        cin >> scelta;

        switch (scelta) {
            case 1:
                cout << "Importo da depositare: ";
                cin >> importo;
                conto.deposita(importo);
                break;

            case 2:
                cout << "Importo da prelevare: ";
                cin >> importo;
                conto.preleva(importo);
                break;

            case 3:
                cout << "Identificativo: " << conto.getIntestatario();
                cout << "\nSaldo: " << conto.getSaldo();
                break;

            case 0:
                cout << "Uscita dal programma.\n";
                break;

            default:
                cout << "Scelta non valida.\n";
        }

    } while (scelta != 0);

    return 0;
}