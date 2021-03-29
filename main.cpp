#include <iostream>
#include "Vehicule.h"
#include "Avion.h"
#include "Bateau.h"
#include "Voiture.h"
#include <vector>

int main() {
  /*Vehicule v(10,3, "Kangoo");
  v.showInfos();  PASSAGE ABSTRACT*/
	Voiture voi1(40,"Cadillac");
	voi1.showInfos();
	voi1.avancer();
	cout << endl;

	Avion a1(200,2, "Jet");
	a1.showInfos();
	a1.avancer();
	cout << endl << endl;

	Bateau b1(16, "Hors-bord");
	b1.showInfos();
	b1.avancer();
	cout << endl;

	vector<Vehicule*> garage;
	Voiture voi2(45,"Mustang");
  Avion a2(350,2, "Hydra");
	Bateau b2(25, "Voilier");


	garage.push_back(&voi2);
	garage.push_back(&b2);
	garage.push_back(&a2);

	for(Vehicule* vehi : garage){
		vehi->avancer();
	}

	cout <<endl<< "FIN"<<endl;
}