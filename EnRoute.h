#ifndef _ENROUTE_H_
#define _ENROUTE_H_
#include "Etat.h"
#include "Figer.h"
#include <cstddef>
class EnRoute : public Etat {
	protected:
		EnRoute() {};
		~EnRoute() {};
	public:
		Etat& figer();
};
#endif
