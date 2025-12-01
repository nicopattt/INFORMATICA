#include "Veicolo.h"
#include <iostream>

using namespace std;

Veicolo::Veicolo(){
    velocita = 0;
    stato_motore = false;
}

string Veicolo::getMarca(){
    return marca;
}

string Veicolo::getModello(){
    return modello;
}

int Veicolo::getVelocita(){
    return velocita;
}

bool Veicolo::getStato(){
    return stato_motore;
}

void Veicolo::accelera(int d){
    if(velocita + d<=200 && velocita + d >= -50)
        velocita += d;
}

void Veicolo::frena(){
    velocita = 0;
}

void Veicolo::accendi(){
    stato_motore = true;
}

void Veicolo::spegni(){
    stato_motore = false;
}