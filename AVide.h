#ifndef _AVIDE_H_
#define _AVIDE_H_
#include "EnRoute.h"
#include "AVideFacePlot.h"
#include <cstddef>
class AVide : public EnRoute {
	private:
		static AVide* _instance;
		AVide() {};
		~AVide() {};
	public:
		Etat& avancer();
		Etat& tourner();
		Etat& rencontrerPlot();
		string getName();
		static Etat& getInstance();
		//Figer(Figer const&)               = delete;
        //void operator=(Figer const&)  = delete;
};
#endif