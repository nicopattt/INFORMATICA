
#ifndef APPLICATIONMODEL_H_
#define APPLICATIONMODEL_H_

#include "MVC.h"

class ApplicationModel : public MVC::Model { 
	int mValue;
public:
	ApplicationModel();
	void loadValue(int value);
	int getValue();

	
};

#endif

