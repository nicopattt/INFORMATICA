#include "Rettangoli.h"
#include <iostream>

using namespace std;

Rettangolo::Rettangolo(){
    base = 1;
    altezza = 1;
}
void Rettangolo::setBase(int _base){
    base = _base;
}
void Rettangolo::setAltezza(int _altezza){
    altezza = _altezza;
}
int Rettangolo::getArea(){
    return base * altezza;
}
int Rettangolo::getPerimetro(){
    return (base + altezza) * 2;
}
int Rettangolo::getBase(){
    return base;
}
int Rettangolo::getAltezza(){
    return altezza;
}