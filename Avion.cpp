#include "Avion.h"

Avion::Avion(int p, int nbr, string name) : Vehicule(p,nbr,name){
	cout << "C'est un avion." << endl;
}

void Avion::avancer(){
	int distance = getPuissance() * 100;
	cout << getName() << " avance de " << distance << "km dans les airs." << endl;
}

void Avion::showInfos(){
	cout << "Le vehicule s'appelle " << getName() << "." << endl;
	cout << "Le vehicule a " << getPuissance() << "chevaux." << endl;
	cout << "Le vehicule a " << getNbrRoue() << "ailes." << endl;
}