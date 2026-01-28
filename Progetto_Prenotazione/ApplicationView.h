#ifndef APPLICATIONVIEW_H_
#define APPLICATIONVIEW_H_

#include "MVC.h"
#include "ApplicationModel.h"

class ApplicationView : public MVC::View { 

public:
	ApplicationView(ApplicationModel *m);

	void draw();
	void piantinaPrenotazione();
	void inserisciFila();
	void inserisciNumero();
	void invio();

};
#endif