// MVCapplication.cpp : file di progetto principale.

//#include "stdafx.h"
#include <iostream>

#include "MVC.h"

#include "ApplicationModel.h"
#include "ApplicationView.h"
#include "ApplicationController.h"


int main(void)
{
	ApplicationModel* m=new ApplicationModel();
	ApplicationView* v=new ApplicationView(m);
	ApplicationController* c=new ApplicationController(v);

	v->setController(c);//importante per associare il Controller al View

    c->loop();//MAIN LOOP DELL'APP

    return 0;//non sarà mai eseguito
}
