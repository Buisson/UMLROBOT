#include "EnChargeFacePlot.h"
#include "AVideFacePlot.h"
EnChargeFacePlot* EnChargeFacePlot::_instance = NULL;

Etat& EnChargeFacePlot::getInstance(){
	if(_instance == NULL)
		_instance = new EnChargeFacePlot();
	return *_instance;
}

Etat& EnChargeFacePlot::peser(){
	return *this;
}

Etat& EnChargeFacePlot::evaluerPlot(){
	//return AVide::getInstance;
	return *this;
}


Etat& EnChargeFacePlot::tourner(){
	//return EnCharge::getInstance;
	return *this;
}

string EnChargeFacePlot::getName()
{
	return "EnChargeFacePlot";
}


Etat& EnChargeFacePlot::poser(){
	return AVideFacePlot::getInstance();
}
