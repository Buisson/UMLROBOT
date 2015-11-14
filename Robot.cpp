#include <vector>
#include "Robot.h"
#include <iostream>
#include <cstdlib>
using namespace std;


void Robot::avancer(int x, int y){
	try{
        etat = &(etat->avancer());
        pos.setx(x);
        pos.sety(y);
    }
    catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
    }
	notify("avancer("+to_string(x)+","+to_string(y)+")");
}

void Robot::tourner(string direction){
	try{
		etat = &(etat->tourner());
		dir = direction;
		plot = new Plot(0);
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
	notify("tourner("+direction+")");
}


/*Fonction saisir*/
void Robot::saisir(Objet& o){
	try{
		etat = &(etat->saisir());
		obj = &o;
	} 
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
	notify("saisir()");
}

void Robot::poser(){
	try{
		etat = &(etat->poser());
		obj = NULL;
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
	notify("poser()");
}

int Robot::peser(){
	try{
		etat = &(etat->peser());
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}	
	notify("peser()");
	return obj->getPoids();
}


void Robot::rencontrerPlot(Plot& p){
	try{
		etat = &(etat->rencontrerPlot());
		plot = &p;
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}		
	notify("rencontrerPlot()");
}

int Robot::evaluerPlot(){
	try{
		etat = &(etat->evaluerPlot());
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
	notify("evaluerPlot()");
	return plot->getHauteur();
}

void Robot::figer(){
	try{
		etat = &(etat->figer());
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
	notify("figer()");
}

void Robot::repartir(){
	try{
		etat = &(etat->repartir());
	}
	catch(Etat::ImpossibleAction e){
		cout <<"ERREUR ACTION IMPOSSIBLE"<< endl;
	}
	notify("repartir()");
}

void Robot::attacher(Afficheur& afficheur){
	afficheurs.push_back(afficheur);
}

void Robot::notify(string action){	
	int hauteurPlot;
	int poidsObjet;
	if(plot==NULL){
		hauteurPlot=0;
	}
	else{
		hauteurPlot=plot->getHauteur();
	}
	if(obj==NULL){
		poidsObjet=0;
	}
	else{
		poidsObjet=obj->getPoids();
	}
	for(auto aff : afficheurs){
		aff.get().afficher(action,etat->getName(),pos.getx(),pos.gety(),poidsObjet,hauteurPlot);
	}
}

