//#include "StdAfx.h"
#include "ApplicationView.h"
#include <iostream>
#include <cstdlib>
ApplicationView::ApplicationView(ApplicationModel *m):
	View(m)
{}

//overriding della funzione MVC::View::draw()
void ApplicationView::draw()
{
	system("cls");
	std::cout << std::endl;

/*	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << "  ID VIEW:"<< this << std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
*/
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << " |                   MVC Application                  |" <<std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << " | COMANDI:   [0]Esci - [1]Incrementa - [2]Decrementa |"<<std::endl;
	std::cout << "  ---------------------------------------------------- " << std::endl;
	std::cout << "  -------------- " << std::endl;
	std::cout << " | VALORE: " <<  ((ApplicationModel*)model)->getValue() <<"\t|" <<std::endl;
	std::cout << "  -------------- " << std::endl;
	std::cout << "  ------------------------------ " << std::endl;
	std::cout << " | INSERIRE il comando scelto: ";


}

//void ApplicationView::initialize(){ controller = makeController();}
//MVC::Controller* MVC::View::makeController() { return new MVC::Controller(this); }

