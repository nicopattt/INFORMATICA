//#include "StdAfx.h"
#include "ApplicationController.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

ApplicationController::ApplicationController(ApplicationView *v):
	Controller(v)
{
	//myModel=(ApplicationModel*)model; // per non dover fare ogni volta il cast per usare il model
}


    void ApplicationController::logic(){

            int scelta=3;

            std::cin >> scelta;//acquisisce l'input da tastiera (in futuro potrebbe farlo l'handleEvent)

            switch(scelta)
            {
			case 0: //semplicemente esegue l'istr. successiva nel main (si dovrebbero invocare i distruttori degli oggetti non più utili)
				exit(0);
				break;

                    //model->loadValue(model->getValue()+1);//incrementa
			case 1: ((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue()+1);//incrementa
				break;

			case 2: ((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue()-1);//decrementa
				break;

			default
			:((ApplicationModel*)model)->loadValue(((ApplicationModel*)model)->getValue());//non cambia nulla! Si potrebbe segnale un errore dal view
				break;
            }



    }
	//una sorta di LOOP:loadValue() di model-> notify()->update() di view
	//												   ->update() di control(questo metodo) ->loadValue() di model -> notify()...
	/*void ApplicationController::update(){
		isUptoDate=true;
	}*/

	//funzione alla quale in futuro potrebbe essere associata la tastiera
	void MVC::Controller::handleEvent(MVC::Event * e) {;//fai qualcosa
	}
