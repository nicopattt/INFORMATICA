#include "Counter.h"
#include <iostream>

using namespace std;

Counter::Counter(){
    cout << "istanza dell'oggetto creata\n";
    value = 0;
}
Counter::~Counter(){
    cout << "oggetto distrutto! \n";
}

int Counter::getValue(){
    return value;
}
void Counter::increase(int n){
    value+=n;
}