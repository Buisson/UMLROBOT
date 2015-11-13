#include <iostream>
#include <cstdlib>
using namespace std;
#include "Robot.h"
#include "Figer.h"


int main(){
	cout << "##DEBUT TEST ROBOT UML##" << endl;
	//Here the main function for test.
	Objet o = Objet(5);
	cout << o.getPoids() <<endl;
	Position p = Position(4,3);
	cout << p.getx() << endl;
	Plot pl = Plot(12);
	Etat f = Figer::getInstance();
	//string d,Position po, Plot pl, Objet objet, Etat e
	Robot r = Robot("north",p,pl,o,f);
	return 0;
}//
