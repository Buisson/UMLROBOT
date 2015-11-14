#include <iostream>
#include <cstdlib>
using namespace std;
#include "Robot.h"
#include "Figer.h"
#include "AVideFacePlot.h"

int main(){
	cout << "##DEBUT TEST ROBOT UML##" << endl;
	//Here the main function for test.
	Position p = Position(0,0);
	cout << p.getx() << endl;
	Etat& f = AVideFacePlot::getInstance();
	//string d,Position po, Plot pl, Objet objet, Etat e
	Robot r = Robot("north",p,NULL,NULL,f);
	cout << "evalPlot:" << endl;
	r.evaluerPlot();//ne plante pas
	cout << "fin eval plot" << endl;
	cout << "repartir : " << endl;
	r.repartir();//plante normalement
	return 0;
}//
