#include "AVide.h"

AVide* AVide::_instance = NULL;

Etat& AVide::avancer()
{
	return *this;
}
Etat& AVide::tourner()
{
	return *this;
}
Etat& AVide::rencontrerPlot()
{
	return AVideFacePlot::getInstance();
}
string AVide::getName()
{
	return "Avide";
}
Etat& AVide::getInstance()
{
	if(_instance == NULL)
		_instance = new AVide();
	return *_instance;
}