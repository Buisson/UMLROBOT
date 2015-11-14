#include "Figer.h"


Figer* Figer::_instance = NULL;

Etat& Figer::getInstance() 
{
	if(_instance == NULL)
		_instance = new Figer();
	return *_instance;
}


Etat& Figer::repartir()
{
	return *_dernierEtat;
}

void Figer::setDernierEtat(Etat& dernierEtat)
{
	this->_dernierEtat = &dernierEtat;
}