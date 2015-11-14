#include "EnChargeFacePlot.h"
#include "AVideFacePlot.h"
#include "AVide.h"
#include "EnCharge.h"
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
	return AVide::getInstance();
}


Etat& EnChargeFacePlot::tourner(){
	return EnCharge::getInstance();	
}

string EnChargeFacePlot::getName()
{
	return "EnChargeFacePlot";
}


Etat& EnChargeFacePlot::poser(){
	return AVideFacePlot::getInstance();
}
