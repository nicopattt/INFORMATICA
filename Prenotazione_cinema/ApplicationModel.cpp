//#include "StdAfx.h"
#include "ApplicationModel.h"

	ApplicationModel::ApplicationModel():
	mValue(0),Model()
	{}

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
