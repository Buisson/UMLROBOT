#include "Etat.h"
#include <cstddef>
class Figer : public Etat {
	private:
		Etat _dernierEtat;
		static Figer* _instance;
		Figer() {};
		~Figer() {};
	public:
		Etat& figer(Etat currentState);
		Etat& repartir();
		static Etat& getInstance();
		//Figer(Figer const&)               = delete;
        //void operator=(Figer const&)  = delete;
};
