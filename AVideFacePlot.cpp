#include "AVideFacePlot.h"
#include "EnChargeFacePlot.h"
#include "AVide.h"
AVideFacePlot* AVideFacePlot::_instance = NULL;

Etat& AVideFacePlot::getInstance(){
	if(_instance == NULL)
		_instance = new AVideFacePlot();
	return *_instance;
}

Etat& AVideFacePlot::evaluerPlot(){

	return *this;
}

Etat& AVideFacePlot::tourner(){
	return AVide::getInstance();
}

string AVideFacePlot::getName(){
	return "AVideFacePlot";
}

Etat& AVideFacePlot::saisir(){
	return EnChargeFacePlot::getInstance();
}
