#ifndef _ENCHARGE_H_
#define _ENCHARGE_H_
#include "EnRoute.h"
#include "EnChargeFacePlot.h"
#include <cstddef>
class EnCharge : public EnRoute {
	private:
		static EnCharge* _instance;
		EnCharge() {};
		~EnCharge() {};
	public:
		Etat& avancer();
		Etat& tourner();
		Etat& peser();
		Etat& rencontrerPlot();
		string getName();
		static Etat& getInstance();
		//Figer(Figer const&)               = delete;
        //void operator=(Figer const&)  = delete;
};
#endif