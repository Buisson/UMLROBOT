#include "Etat.h"

class Figer : public Etat {
	private:
		Etat _dernierEtat;
		static Figer _instance;

	public:
		Etat& figer(Etat currentState);
		Etat& repartir();
		static Etat& getInstance() {return _instance;}
};
