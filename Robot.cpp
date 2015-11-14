#include "Robot.h"
#include <iostream>
#include <cstdlib>
using namespace std;


void Robot::avancer(int x, int y){
	try{
        etat = etat.avancer();
        pos.setx(x);
        pos.sety(y);
    }
    catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
    }
}

void Robot::tourner(string direction){
	try{
		etat = etat.tourner();
		dir = direction;
		plot = new Plot(0);
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
}


/*Fonction saisir*/
void Robot::saisir(Objet o){
	try{
		etat = etat.saisir();
		obj = &o;
	} 
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
}

void Robot::poser(){
	try{
		etat = etat.poser();
		obj = NULL;//TODO faire un truc plus propre
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
}

int Robot::peser(){
	try{
		etat = etat.peser();
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}	
	return obj->getPoids();
}


void Robot::rencontrerPlot(Plot p){
	try{
		etat = etat.rencontrerPlot();
		plot = &p;
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}		
}

int Robot::evaluerPlot(){
	try{
		etat = etat.evaluerPlot();
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
	return plot->getHauteur();
}

void Robot::figer(){
	try{
		etat = etat.figer();
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
}

void Robot::repartir(){
	try{
		etat = etat.repartir();
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
}


