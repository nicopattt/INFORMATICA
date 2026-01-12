#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 
		int numero_file;		// numero di file del cinema
		int posti_per_fila;		// numero di posti per fila
		

	public:
		ApplicationModel();
		void loadValue(int value);
		int getValue();

	

	
};

#endif