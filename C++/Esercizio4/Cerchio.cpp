#include "Cerchio.h"
#include <iostream>
#define P 3.14

using namespace std;

Cerchio::Cerchio(){
    raggio = 1;
}

void Cerchio::setRaggio(int _raggio){
    raggio = _raggio;
}
        
int Cerchio::getRaggio(){
    return raggio;
}

float Cerchio::getCirconferenza(){
    return 2*raggio*P;
}

float Cerchio::getArea(){
    return P*raggio*raggio;
}