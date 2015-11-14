#include "AVideFacePlot.h"
#include "EnChargeFacePlot.h"
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
	//return AVide::getInstance;
	return *this;
}


Etat& AVideFacePlot::saisir(){
	return EnChargeFacePlot::getInstance();
}
