#include <iostream>

using namespace std;

class PowerDevice {
    public:
        PowerDevice(int n){
            cout << "PowerDevice: " << n << endl;
        }
};

class Scanner: virtual public PowerDevice {
    public:
        Scanner(int n, int x)
        :PowerDevice(n)
        {
            cout << "Scanner: " << x << endl;
        }
};

class Printer: virtual public PowerDevice {
    public:
        Printer(int n, int y)
        :PowerDevice(n)
        {
            cout << "Printer: " << y << endl;
        }
};

class Copier: public Scanner, public Printer {
    public:
        Copier(int n, int x, int y)
        :Scanner(n, x), Printer(n, y), PowerDevice(n)
        {  
        }
};

int main(){

    Copier c(3, 1, 2);

    return 0;
}