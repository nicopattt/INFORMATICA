#ifndef GIACCA_H
#define GIACCA_H

class Giacca {
    private:
        int taglia;
        int percentuale;
    public:
        Giacca();
        void setPercentuale(int _percentuale);
        void setTaglia(int _taglia);
        int getPercentuale();
        int getTaglia();
        void apri_completo();
        void chiudi_completo();
        void apri(int percentuale);
        void chiudi(int percentuale);
        void if_chiuso();
};
#endif