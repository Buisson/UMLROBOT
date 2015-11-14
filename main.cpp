#include <iostream>
#include <cstdlib>
using namespace std;
#include "Robot.h"
#include "AVide.h"
#include "TexteDisplay.h"

int main(){
	TexteDisplay txtAff = TexteDisplay();
	cout << "##DEBUT SIMULATION ROBOT##" << endl;
	//Here the main function for test.
	Position p = Position(0,0);
	Etat& f = AVide::getInstance();
	Robot r = Robot("S",p,NULL,NULL,&f);
	r.attacher(&txtAff);
	r.dettacher(&txtAff);
	r.attacher(&txtAff);
	r.avancer(2,4);
	r.tourner("E");
	Plot p1 = Plot(10);
	r.rencontrerPlot(p1);
	cout << "retour de la fonction : " << r.evaluerPlot() <<endl;
	Objet o1 = Objet(50);	
	r.saisir(o1);
	cout << "retour de la fonction : " << r.peser() <<endl;
	r.tourner("W");
	r.avancer(2,3);
	cout << "retour de la fonction : " << r.peser() <<endl;
	Plot p2 = Plot(3);
	r.rencontrerPlot(p2);
	r.figer();
	r.repartir();
	cout << "retour de la fonction : " << r.evaluerPlot() <<endl;
	r.poser();
	r.tourner("N");
	cout << "##FIN SIMULATION ROBOT##" << endl;
	return 0;
}//
