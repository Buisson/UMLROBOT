#include "TexteDisplay.h"

void TexteDisplay::afficher(string action,string etat, int x,int y,int poids,int hauteur)
{
	cout << endl;
	cout << "###" << action << "####" << endl; 	
	cout << "etat : " << etat << endl;
 	cout << "position x,y : " << x << "," << y << endl;
 	if(poids) 
 		cout << "poids : " << poids << endl;
 	if(hauteur)
 		cout << "hauteur : " << hauteur << endl;

}
