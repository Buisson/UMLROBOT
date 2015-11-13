#ifndef _ETAT_H_
#define _ETAT_H_
class Etat{
	public:
		class ImpossibleAction{};
		virtual Etat& avancer();
		virtual Etat& tourner();
		virtual Etat& evaluerPlot();
		virtual Etat& saisir();
		virtual Etat& poser();
		virtual Etat& peser();
		virtual Etat& rencontrerPlot();
		virtual Etat& figer();
		virtual Etat& repartir();
};
#endif
