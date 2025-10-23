#ifndef RETTANGOLI_H
#define RETTANGOLI_H

class Rettangolo {
    private:
        int base;
        int altezza;
    public:
        Rettangolo();

        void setBase(int _base);
        void setAltezza(int _altezza);
        int getArea();
        int getPerimetro();
        int getBase();
        int getAltezza();
};
#endif