

#ifndef APPLICATIONVIEW_H_
#define APPLICATIONVIEW_H_

#include "MVC.h"
#include "ApplicationModel.h"

class ApplicationView : public MVC::View { 

public:
	ApplicationView(ApplicationModel *m);

	void draw(); 


	///virtual void initialize();
	//void initialize(){ mController = makeController();}
	// MVC::Controller* makeController();// { return new Controller(this); }
	//virtual Controller *makeController() { return new ApplicationController(this); }
};

#endif