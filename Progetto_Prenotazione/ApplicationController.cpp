//#include "StdAfx.h"
#include "ApplicationController.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

ApplicationController::ApplicationController(ApplicationView *v):
	Controller(v)
{
	
}


void ApplicationController::logic(){

	int scelta=3;
	int numero;
	char fila;

	std::cin >> scelta;

	switch(scelta)
	{
	case 0: 
		exit(0);
		break;

	case 1: 
		((ApplicationView*)view)->piantinaPrenotazione();
		((ApplicationView*)view)->inserisciFila();
		std::cin >> fila;
		((ApplicationView*)view)->inserisciNumero();
		std::cin >> numero;
		((ApplicationModel*)model)->prenota(fila-65, numero-1);
		((ApplicationView*)view)->piantinaPrenotazione();
		break;

	case 2: 
		((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue()-1);
		break;

	default:
		((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue());//non cambia nulla! Si potrebbe segnale un errore dal view
		break;
	}
}
	
	void MVC::Controller::handleEvent(MVC::Event * e) {;
	}