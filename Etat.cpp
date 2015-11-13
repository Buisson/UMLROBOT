#include "Etat.h"//

Etat& Etat::avancer(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::tourner(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::evaluerPlot(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::saisir(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::poser(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::peser(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::rencontrerPlot(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::figer(){
	throw Etat::ImpossibleAction();
}
Etat& Etat::repartir(){
	throw Etat::ImpossibleAction();
}
Etat::~Etat(){}
