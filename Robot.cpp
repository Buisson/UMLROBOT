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

void Robot::tourner(string direction){
	try{
		etat = etat.tourner();
		dir = direction;
	}
	catch(Etat::ImpossibleAction e){

	}
}


/*Fonction saisir*/
void Robot::saisir(Objet o){
	try{
		etat = etat.saisir();
		obj = o;
	} 
	catch(Etat::ImpossibleAction e){

	}
}

void Robot::poser(){
	try{
		etat = etat.poser();
		obj = NULL;//TODO faire un truc plus propre
	}
	catch(Etat::ImpossibleAction e){
		
	}
}

int Robot::peser(){
	try{
		etat = etat.peser();
	}
	catch(Etat::ImpossibleAction e){
		
	}	
	return obj.getPoids();
}


void Robot::rencontrerPlot(Plot p){
	try{
		etat = etat.rencontrerPlot();
		plot = p;
	}
	catch(Etat::ImpossibleAction e){
		
	}		
}

int Robot::evaluerPlot(){
	try{
		etat = etat.evaluerPlot();
	}
	catch(Etat::ImpossibleAction e){
		
	}
	return plot.getHauteur();
}

void Robot::figer(){
	try{
		etat = etat.figer();
	}
	catch(Etat::ImpossibleAction e){
		
	}
}

void Robot::repartir(){
	try{
		etat = etat.repartir();
	}
	catch(Etat::ImpossibleAction e){
		
	}
}


