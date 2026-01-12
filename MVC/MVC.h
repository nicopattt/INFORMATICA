
#ifndef MVC_H_
#define MVC_H_
#include <iostream>

namespace MVC{ //per evitare problemi di visibilità nella redifinizione di oggetti/variabili uso il namespace

/////////////////////////////////////////////////////////////////////////
//Observer
/////////////////////////////////////////////////////////////////////////
class Observer{ // usata per aggiungere al model sia il view che il controller (le quali erediteranno da questa classe)
public:
	virtual void update()=0;//funzione virtuale PURA -> questa è classe astratta -> non posso istanziarla
};
/////////////////////////////////////////////////////////////////////////
//Model
/////////////////////////////////////////////////////////////////////////
class Model{

private:
	int numberOfRegistry;
	Observer* registry[100];//massimo 100 registry (tra View e Controller)

public:
    Model():
	  numberOfRegistry(0){}

	void attach(Observer *s) { registry[numberOfRegistry++]=s; }
	//void detach(Observer *s) { ;//da implementare }

protected:
	//deve essere chiamata ogni volta che cambia qualcosa nel model!
	void notify(){
		// aggiorna tutti i View e Controller
		for(int i=0;i<numberOfRegistry;i++)
			registry[i]->update();
	}
};

/////////////////////////////////////////////////////////////////////////
//Event
/////////////////////////////////////////////////////////////////////////
class Event
{
};
/////////////////////////////////////////////////////////////////////////
//View
/////////////////////////////////////////////////////////////////////////
class Controller; // per evitare problemi!!!
class View : public Observer {

public:

	View(Model *m):
		model(m)
	{
		model->attach(this);
	}

	//virtual ~View();

	void update()
	{
		this->draw();
	}

	virtual void draw(void){} // la parte grafica, si farà overriding nella classe derivata!

	Model * getModel() { return model; }
	Controller* getController() { return controller; }

	void setController(Controller *c){controller=c;}
	//void initialize(){ controller = makeController();}
	//virtual Controller* makeController();// { return new Controller(this); }

protected:
	Model * model;
	Controller * controller;
};
/////////////////////////////////////////////////////////////////////////
//Controller
/////////////////////////////////////////////////////////////////////////

class Controller : public Observer {
public:
	Controller(View * v):
	  view(v)
	{
		model=view->getModel();
		model->attach(this);
		isUptoDate=true;
		//view->setController(this);
	}

	//virtual ~Controller() { myModel->detach(this); }
	//virtual void update(void){} //sarà effettuato l'overriding nelle classi derivate

	virtual void logic(void){}
	virtual void handleEvent(Event * e); //implementata nelle classi derivate

    void loop(){
        do{
            //std::cout <<"\nLOOP\n" ;
            if(isUptoDate){
                isUptoDate=false;
                view->update();
            }
            logic();

        }while(true);
        //NON SARà mai eseguita la fine dell'istr.
    }

protected:
	Model * model;
	View * view;
private:
    bool isUptoDate;
    void update(){
        //std::cout << "\nUPDATE\n";
		isUptoDate=true;
	}


};

} //end namespace MVC

#endif
