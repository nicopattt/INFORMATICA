#ifndef TRENO_H
#define TRENO_H

class Treno {

    private:    
        int vagoni;
        int viaggiatori_vagone;
        int viaggiatori_attuali;
    
    public:
        Treno();
        void setVagoni(int _vagoni);
        int getVagoni();
        void setViaggiatoriVagone(int _viaggiatori_vagone);
        void sali(int n);
        void scendi(int n);
        int getViaggiatoriAttuali();
        int getViaggiatoriVagoneMedi();

};

#endif