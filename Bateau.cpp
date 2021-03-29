#include "Bateau.h"

Bateau::Bateau(int p,  string name) : Vehicule(p,0,name){
	cout << "Je suis une bateau." << endl;
}

void Bateau::avancer(){
	float distanceEnNoeud = getPuissance() * 1.8;
	cout << getName() << " avance de " << distanceEnNoeud << "noeuds." << endl;
}