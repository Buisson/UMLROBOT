#include <iostream>
#include <cstdlib>
using namespace std;
#include "Robot.h"
#include "Figer.h"
#include "AVideFacePlot.h"

int main(){
	cout << "##DEBUT TEST ROBOT UML##" << endl;
	//Here the main function for test.
	Objet o = Objet(5);
	cout << o.getPoids() <<endl;
	Position p = Position(4,3);
	cout << p.getx() << endl;//
	Plot pl = Plot(12);//
	Etat& f = AVideFacePlot::getInstance();
	//string d,Position po, Plot pl, Objet objet, Etat e
	Robot r = Robot("north",p,pl,o,f);
	cout << "evalPlot:" << endl;
	r.evaluerPlot();//ne plante pas
	cout << "fin eval plot" << endl;
	cout << "repartir : " << endl;
	r.repartir();//plante normalement
	return 0;
}//
