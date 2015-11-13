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
		Robot(string d,Position po, Plot pl, Objet obj, Etat e);
		void avancer(int x, int y);


};
