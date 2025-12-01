#ifndef TELEVISORE_H
#define TELEVISORE_H

class Televisore {

    private:
        bool stato; // true->acceso
        int volume; // Tra 0 e 60
        int canale; // Tra 0 e 999
        bool modalita; // false->silenzioso
    
    public:
        Televisore();
        void pulsanterosso();
        void canaleSuccessivo();
        void canalePrecedente();
        void aumentaVolume();
        void abbassaVolume();
        void impostaCanale(int c);
        void pulsanteSilenzioso();
        void print();
};
#endif