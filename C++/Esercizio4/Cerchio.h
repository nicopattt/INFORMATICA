#ifndef CERCHIO_H
#define CERCHIO_H

class Cerchio {

    private:
        int raggio;
    
    public:
        Cerchio();

        void setRaggio(int _raggio);
        int getRaggio();
        float getCirconferenza();
        float getArea();
};

#endif