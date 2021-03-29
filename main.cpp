#include <iostream>
#include "Vehicule.h"
#include "Avion.h"
#include "Bateau.h"
#include "Voiture.h"
#include <vector>

int main() {
  /*Vehicule v(10,3, "Kangoo");
  v.showInfos();  PASSAGE ABSTRACT*/
	Voiture voi1(45,"Clio");
	voi1.showInfos();
	voi1.avancer();
	cout << endl;

	Bateau b1(16, "Hors-bord");
	b1.showInfos();
	b1.avancer();
	cout << endl;

	Avion a1(100,2, "Boeing");
	a1.showInfos();
	a1.avancer();
	cout << endl << endl;

	vector<Vehicule*> garage;
	Voiture voi2(35,"Astra");
	Bateau b2(21, "Yacht");
	Avion a2(451,2, "Airbus");

	garage.push_back(&voi2);
	garage.push_back(&b2);
	garage.push_back(&a2);

	for(Vehicule* vehi : garage){
		vehi->avancer();
	}

	cout <<endl<< "FIN"<<endl;
}