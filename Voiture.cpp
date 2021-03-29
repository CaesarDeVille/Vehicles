#include "Voiture.h"

Voiture::Voiture(int p,  string name) : Vehicule(p,4,name){
	cout << "C'est une voiture." << endl;
}

void Voiture::avancer(){
	int distance = getPuissance() * getNbrRoue();
	cout << getName() << " avance de " << distance << "km." << endl;
}