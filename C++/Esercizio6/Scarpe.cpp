#include "Scarpe.h"
#include <iostream>

Scarpe::Scarpe(){
    for(int i=0; i<6; i++)
        stretch[i] = 1;

    dimensione = 40;
}

void Scarpe::setDimensione(int _dimensione){
    dimensione = _dimensione;
}

int Scarpe::getDimensione(){
    return dimensione;
}

void Scarpe::apriChiudi(int i){
    if(stretch[i] = 1)
        stretch[i] = 0;
    else
        stretch[i] = 1;
}

int Scarpe::getStretch(int i){
    return stretch[i];
}