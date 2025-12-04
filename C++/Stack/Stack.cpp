#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(){
    counter = 0;
    dimensione = 100;
}

void Stack::push(int n){
    if(counter <= dimensione)
        array[counter++] = n;
    else    
        cout << "Lo stack e pieno.\n";
}

int Stack::pop(){
    return array[--counter];
}

int Stack::top(){
    return array[counter-1];
}

bool Stack::isEmpty(){
    return counter == 0;
}

int Stack::size(){
    return counter;
}