#include <iostream>

using namespace std;

class Counter {

    private:
        int value;
    
    public:

        Counter(){
            cout << "istanza dell'oggetto creata\n";
            value = 0;
        }
        ~Counter(){
            cout << "oggetto distrutto! \n";
        }

        int getValue(){
            return value;
        }
        void increase(int n){
            value+=n;
        }
};

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