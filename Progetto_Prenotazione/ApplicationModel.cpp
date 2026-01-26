#include "ApplicationModel.h"

ApplicationModel::ApplicationModel():
mValue(0),Model()
{
	posti_liberi = 100;
	for(int i=0; i<10; i++)
	{
		for(int j=0; j<10; j++)
		{
			cinema[i][j] = true;
		}
	}
}

//quando cambia lo stato dell'applicazione, il View va aggiornato
void ApplicationModel::loadValue(int value)
{
	mValue=value;
	notify();//""quando cambia lo stato dell'applicazione"", il View e il Controller vanno aggiornati!!!
				//per invocare update() del View e e del Controller
}

//semplice funzione che restituisce il valore
int ApplicationModel::getValue()
{
	return mValue;
}

int ApplicationModel::getPostiLiberi()
{
	return posti_liberi;
}

void ApplicationModel::prenota(int x, int y)
{
	cinema[y][x] = false;
	posti_liberi--;
	notify();
}

bool ApplicationModel::getPosto(int x, int y)
{
	return cinema[x][y];
}