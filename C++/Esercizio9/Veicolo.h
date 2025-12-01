#ifndef VEICOLO_H
#define VEICOLO_H
#include <iostream>

using namespace std;

class Veicolo {
    private:
        string marca;
        string modello;
        int velocita;
        bool stato_motore;
    
    public:
        Veicolo();
        string getMarca();
        string getModello();
        int getVelocita();
        bool getStato();

        void accelera(int d);
        void frena();
        void accendi();
        void spegni();
};
#endif