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
	char tasto;

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
		break;

	case 2: 
		((ApplicationView*)view)->piantinaPrenotazione();
		((ApplicationView*)view)->inserisciFila();
		std::cin >> fila;
		((ApplicationView*)view)->inserisciNumero();
		std::cin >> numero;
		((ApplicationModel*)model)->disdici(fila-65, numero-1);
		break;

	default:
		std::cout << "Inserisci un valore valido!";
		((ApplicationModel*)model)->myNotify();
		break;
	}
}
	
void MVC::Controller::handleEvent(MVC::Event * e) {;
}