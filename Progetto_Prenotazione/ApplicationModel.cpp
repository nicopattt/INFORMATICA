#include "ApplicationModel.h"

ApplicationModel::ApplicationModel():
Model()
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

void ApplicationModel::disdici(int x, int y)
{
	cinema[y][x] = true;
	posti_liberi++;
	notify();
}

bool ApplicationModel::getPosto(int x, int y)
{
	return cinema[x][y];
}

void ApplicationModel::myNotify()
{
	notify();
}