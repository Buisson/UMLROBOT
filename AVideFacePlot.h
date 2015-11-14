#ifndef _AVIDEFACEPLOT_H_
#define _AVIDEFACEPLOT_H_
//#include "Etat.h"
#include "EnRoute.h"
#include <cstddef>
class AVideFacePlot : public EnRoute {
	private:
		static AVideFacePlot* _instance;
	public:
		static Etat& getInstance();
		Etat& evaluerPlot();
		Etat& tourner();
		Etat& saisir();
};
#endif
