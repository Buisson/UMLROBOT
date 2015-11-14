#ifndef _ENCHARGEFACEPLOT_H_
#define _ENCHARGEFACEPLOT_H_
//#include "Etat.h"
#include "EnRoute.h"
#include <cstddef>
class EnChargeFacePlot : public EnRoute {
	private:
		static EnChargeFacePlot* _instance;
	public:
		static Etat& getInstance();
		Etat& peser();
		Etat& evaluerPlot();
		Etat& tourner();
		Etat& poser();
		string getName();
};
#endif
