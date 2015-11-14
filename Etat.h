#ifndef _ETAT_H_
#define _ETAT_H_
#include <iostream>
using namespace std;
class Etat{
	public:
		virtual Etat& avancer();
		virtual Etat& tourner();
		virtual Etat& evaluerPlot();
		virtual Etat& saisir();
		virtual Etat& poser();
		virtual Etat& peser();
		virtual Etat& rencontrerPlot();
		virtual Etat& figer();
		virtual Etat& repartir();
		virtual ~Etat();
		virtual string getName()=0;
		class ImpossibleAction{};
};
#endif
