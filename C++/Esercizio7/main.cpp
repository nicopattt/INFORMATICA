#include "Treno.h"
#include <iostream>

using namespace std;

int main(){

    Treno thomas;
    int n;
    
    cout << "Inserisci il numero di vagoni: ";
    cin >> n;
    thomas.setVagoni(n);
    cout << "Inserisci il numero max di passeggeri per vagone: ";
    cin >> n;
    thomas.setViaggiatoriVagone(n);

    for (int i=0; i<5; i++){
        cout << "Scegli se far salire [1] o scendere [2]: ";
        cin >> n;
        if(n==1){
            cout << "Quanti passeggeri: ";
            cin >> n;
            thomas.sali(n);
        }
        else{
            cout << "Quanti passeggeri: ";
            cin >> n;
            thomas.scendi(n);
        }
    }

    cout << "Numero totale passeggeri sul trenino thomas: " << thomas.getViaggiatoriAttuali() << endl;
    cout << "Numero passeggeri medi per vagone: " << thomas.getViaggiatoriVagoneMedi() << endl;

    return 0;
}