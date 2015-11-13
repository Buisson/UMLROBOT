#include "Robot.h"

/*
Robot::Robot(string d,Position po, Plot pl, Objet objet, Etat e){
	dir=d;
	pos=po;
	plot=pl;
	obj=objet;
	etat=e;
}*/


void Robot::avancer(int x, int y){
	try{
        etat = etat.avancer();
        pos.setx(x);
        pos.sety(y);
    }
    catch(Etat::ImpossibleAction e){

    }
}
