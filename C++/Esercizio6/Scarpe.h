#ifndef SCARPE_H
#define SCARPE_H

class Scarpe {
    private:
        int dimensione;
        int stretch[6]; //1 = aperto, 0 = chiuso
    public:
        Scarpe();
        void setDimensione(int _dimensione);
        int getDimensione();
        void apriChiudi(int i);
        int getStretch(int i);
};

#endif