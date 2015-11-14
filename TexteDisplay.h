#ifndef _AFFICHEUR_H_
#define _AFFICHEUR_H_
#include "Afficheur.h"
#include <cstddef>

class TexteDisplay : public Afficheur {

public:
	void afficher(string etat, int x,int y,int poids,int hauteur);
};
#endif