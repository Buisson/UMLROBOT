#include "EnRoute.h"


Etat& EnRoute::figer()
{
	Figer& f =static_cast<Figer&>(Figer::getInstance());
	f.setDernierEtat(*this);
	return f;//
}