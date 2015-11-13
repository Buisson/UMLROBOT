#include "Figer.h"


Figer* Figer::_instance = NULL;


Etat& Figer::getInstance() 
{
	if(_instance == NULL)
		_instance = new Figer();
	return *_instance;
}

Etat& Figer::figer(Etat dernierEtat)
{
	_dernierEtat = dernierEtat;
	return *_instance;
}
Etat& Figer::repartir()
{
	return _dernierEtat;
}