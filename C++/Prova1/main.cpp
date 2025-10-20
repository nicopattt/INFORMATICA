#include <iostream>
#include "Counter.h"

using namespace std;

int main(){

    Counter c1, c2;

    cout << "Contatore 1: " << c1.getValue() << "\n";
    cout << "Contatore 2: " << c2.getValue() << "\n";

    c1.increase(10);
    c2.increase(20);

    cout << "Contatore 1: " << c1.getValue() << "\n";
    cout << "Contatore 2: " << c2.getValue() << "\n";

    return 0;
}