#ifndef _TEXTEDISPLAY_H_
#define _TEXTEDISPLAY_H_
#include "Afficheur.h"
#include <cstddef>

#include <iostream>
#include <cstdlib>
using namespace std;

class TexteDisplay : public Afficheur {

public:
	void afficher(string action,string etat, int x,int y,int poids,int hauteur);
};
#endif
