#include "EnCharge.h"


EnCharge* EnCharge::_instance = NULL;


Etat& EnCharge::avancer()
{
	return *this;
}
Etat& EnCharge::tourner()
{
	return *this;
}
Etat& EnCharge::peser()
{
	return *this;
}
Etat& EnCharge::rencontrerPlot()
{
	return EnChargeFacePlot::getInstance();
}

string EnCharge::getName()
{
	return "EnCharge";
}

Etat& EnCharge::getInstance()
{
	if(_instance == NULL)
		_instance = new EnCharge();
	return *_instance;
}
