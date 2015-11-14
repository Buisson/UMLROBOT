#ifndef _FIGER_H_
#define _FIGER_H_
#include "Etat.h"
#include <cstddef>
class Figer : public Etat {
	private:
		Etat* _dernierEtat = this;
		static Figer* _instance;
		Figer() {};
		~Figer() {};
	public:
		void setDernierEtat(Etat& dernierEtat);
		Etat& repartir();
		string getName();
		static Etat& getInstance();
		//Figer(Figer const&)               = delete;
        //void operator=(Figer const&)  = delete;
};
#endif