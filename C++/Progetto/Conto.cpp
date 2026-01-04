#include "Conto.h"
#include "Cliente.h"
#include <iostream>

using namespace std;

Conto::Conto(Cliente c, int _saldo){
    intestatario = c;
    saldo = _saldo;
}

void Conto::deposita(int importo){
    if(importo > 0){
        saldo += importo;
        cout << "Soldi depositati.\n";
    }
    else{
        cout << "Importo non valido.\n";
    }
}

void Conto::preleva(int importo){
    if(importo > 0 && importo <= saldo){
        saldo -= importo;
        cout << "Prelievo effettuato.\n";
    }
    else{
        cout << "Non hai abbastanza soldi.\n";
    }
}

int Conto::getSaldo(){
    return saldo;
}

int Conto::getIntestatario(){
    return intestatario.getId();
}