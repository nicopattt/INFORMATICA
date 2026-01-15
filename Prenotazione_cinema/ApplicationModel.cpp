#include "ApplicationModel.h"

	ApplicationModel::ApplicationModel():
	mValue(0),Model()
	{
		for(int i=0; i<15; i++)
		{
			for(int j=0; j<15; j++)
			{
				posti[i][j] = true;
			}
		}
	}

	void ApplicationModel::setPrenotazione(int x, int y)
	{
		posti[x][y] = false;		//imposta il posto selezionato a prenotato
		notify();					//"quando cambia lo stato dell'applicazione", si invoca notify() per aggiornare il View e il Controller
	}