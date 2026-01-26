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
	cout << " |             Gestione Prenotazioni Cinema           |" << endl;
	cout << "  ---------------------------------------------------- " << endl;
	cout << " | COMANDI:    [0]Esci  -  [1]Prenota  -  [2]Disdici  |"<< endl;
	cout << "  ---------------------------------------------------- " << endl;
	cout << "  ---------------------- " << endl;
	cout << " | POSTI LIBERI: " <<  ((ApplicationModel*)model) -> getPostiLiberi() << "\t|" << endl;
	cout << "  ---------------------- " << endl;
	cout << "  ------------------------------ " << endl;
	cout << " | INSERIRE il comando scelto: ";

	
}

void ApplicationView::piantinaPrenotazione()
{
	system("cls");
	cout << endl;

	cout << "   A  B  C  D  E  F  G  H  I  J " << endl;
	for(int i=0; i<10; i++)
	{
		cout << i+1 << " ";
		for(int j=0; j<10; j++)
		{
			if(((ApplicationModel*)model) -> getPosto(i, j) == true)
				cout << " * ";
			else
				cout << " x ";
		}
		cout << endl;
	}
}

void ApplicationView::inserisciFila()
{
	cout << "  ------------------------------ " << endl;
	cout << " | INSERIRE la fila: ";
}

void ApplicationView::inserisciNumero()
{
	cout << "  ------------------------------ " << endl;
	cout << " | INSERIRE il numero: ";
}