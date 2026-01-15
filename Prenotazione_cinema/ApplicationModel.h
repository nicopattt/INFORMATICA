#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 
		bool posti[15][15];


	public:
		ApplicationModel();
		void setPrenotazione(int x, int y);
		bool isLibero(int x, int y);
};

#endif