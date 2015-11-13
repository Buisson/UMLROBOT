using namespace std;
#include <string>
#include "Etat.h"
#include "Position.h"
#include "Plot.h"
#include "Objet.h"

class Robot{
	private:
		string dir; //la direction N,E,W,S
		Position pos;
		Plot plot;
		Objet obj;
		Etat etat;
	public:
		Robot(string d,Position po, Plot pl, Objet objet, Etat e) : dir(d),pos(po),plot(pl),obj(objet),etat(e) {}
		void avancer(int x, int y);
		void tourner(string direction);
		void saisir(Objet o);
		void poser();
		int peser();
		void rencontrerPlot(Plot p);
		int evaluerPlot();
		void figer();
		void repartir();

};
