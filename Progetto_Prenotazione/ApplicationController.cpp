#include "ApplicationController.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <windows.h>

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
		std::cin >> numero;
		if(((ApplicationModel*)model)->getPosto(numero-1, fila-65) == true)
		{
			((ApplicationModel*)model)->prenota(numero-1, fila-65);
		}
		else
		{
			std::cout << "Gia prenotato!";
			Sleep(1500);
			((ApplicationModel*)model)->myNotify();
		}
		break;

	case 2: 
		((ApplicationView*)view)->piantinaPrenotazione();
		((ApplicationView*)view)->inserisciFila();
		std::cin >> fila;
		std::cin >> numero;
		if(((ApplicationModel*)model)->getPosto(numero-1, fila-65) == false)
		{
			((ApplicationModel*)model)->disdici(numero-1, fila-65);
		}
		else
		{
			std::cout << "Posto gia libero!";
			Sleep(1500);
			((ApplicationModel*)model)->myNotify();
		}
		break;

	default:
		std::cout << "Inserisci un valore valido!";
		Sleep(1500);
		((ApplicationModel*)model)->myNotify();
		break;
	}
}
	
void MVC::Controller::handleEvent(MVC::Event * e) {;
}