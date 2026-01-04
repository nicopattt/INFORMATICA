#ifndef CONTO_H
#define CONTO_H
#include "Cliente.h"

class Conto {

    private:
        int saldo;
        Cliente intestatario;
    public:
        Conto(Cliente c, int _saldo);
        void deposita(int importo);
        void preleva(int importo);
        int getSaldo();
        int getIntestatario();
};
#endif