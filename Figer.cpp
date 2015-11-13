#include "Figer.h"

Etat& Figer::figer(Etat dernierEtat)
{
	_dernierEtat = dernierEtat;
	return _instance;
}
Etat& Figer::repartir()
{
	return _dernierEtat;
}