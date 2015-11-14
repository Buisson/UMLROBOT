#ifndef _AFFICHEUR_H_
#define _AFFICHEUR_H_
#include <cstddef>
#include <iostream>
#using namespace std;

class Afficheur {

public:
	virtual void afficher(string etat, int x,int y,int poids,int hauteur)=0;
};
#endif