#include "Treno.h"
#include <iostream>

Treno::Treno(){
    vagoni = 1;
    viaggiatori_attuali = 0;
}

void Treno::setVagoni(int _vagoni){
    vagoni = _vagoni;
}

int Treno::getVagoni(){
    return vagoni;
}

void Treno::setViaggiatoriVagone(int _viaggiatori_vagone){
    viaggiatori_vagone = _viaggiatori_vagone;
}

void Treno::sali(int n){
    if(viaggiatori_attuali+n<=vagoni*viaggiatori_vagone)
        viaggiatori_attuali += n;
}

void Treno::scendi(int n){
    if(viaggiatori_attuali-n>=0)
        viaggiatori_attuali -= n;
}

int Treno::getViaggiatoriAttuali(){
    return viaggiatori_attuali;
}

int Treno::getViaggiatoriVagoneMedi(){
    return viaggiatori_attuali / vagoni;
}