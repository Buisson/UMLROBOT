#include <iostream>
#include <cstdlib>
using namespace std;
#include "Robot.h"

int main(){
	cout << "##DEBUT TEST ROBOT UML##" << endl;
	//Here the main function for test.
	Objet o = Objet(5);
	cout << o.getPoids() <<endl;
	Position p = Position(4,3);
	cout << p.getx() << endl;
	return 0;
}//
