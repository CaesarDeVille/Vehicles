#ifndef VEHICULE_H
#define VEHICULE_H

#include <string>
#include <iostream>
#include <random>
#include <ctime>
#include <stdlib.h>

using namespace std;

class Vehicule
{
	private :
	int puissance = 1;
	int nbrRoue = 4;
	string nomVehicule = "Vehicule standard";

	public :
	Vehicule();
	Vehicule(int p, int n, string name);
	~Vehicule();

	int getPuissance() const;
	void setPuissance (int pui);

	int getNbrRoue() const;
	void setNbrRoue (int nbr);

	string getName() const;
	void setName (string nom);

	void showInfos() const;

	virtual void avancer() = 0;

};
#endif // VEHICULE_H