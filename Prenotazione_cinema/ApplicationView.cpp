//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>

using namespace std;

ApplicationView::ApplicationView(ApplicationModel *m):
	View(m)
{}

//overriding della funzione MVC::View::draw()
void ApplicationView::draw()
{
	system("cls");
	cout << endl;

	cout << "  ---------------------------------------------------- " << endl;
	cout << " |                Gestione Prenotazioni               |" << endl;
	cout << "  ---------------------------------------------------- " << endl;
	cout << " | COMANDI:   [0]Esci - [1]Incrementa - [2]Decrementa |"<< endl;
	cout << "  ---------------------------------------------------- " << endl;
	cout << "  -------------- " << endl;
	cout << " | VALORE: " <<  ((ApplicationModel*)model)->getValue() <<"\t|" << endl;
	cout << "  -------------- " << endl;
	cout << "  ------------------------------ " << endl;
	cout << " | INSERIRE il comando scelto: ";


}