#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 
		int posti_liberi;
		bool cinema[10][10];
	public:
		ApplicationModel();
		int getPostiLiberi();
		void prenota(int x, int y);
		void disdici(int x, int y);
		bool getPosto(int x, int y);
		void myNotify();
};
#endif