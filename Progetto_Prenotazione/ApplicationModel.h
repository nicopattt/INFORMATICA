
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 
		int mValue;
		int posti_liberi;

	public:
		ApplicationModel();
		void loadValue(int value);
		int getValue();
		int getPostiLiberi();
		void prenota(int x, int y);
		bool cinema[10][10];

};

#endif