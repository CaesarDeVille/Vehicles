#include "Vehicule.h"

Vehicule::Vehicule() {
	puissance = 1;
	nbrRoue = 4;
	nomVehicule = "Vehicule standard";
}

Vehicule::Vehicule(int p, int n, string name){
	puissance = p;
	nbrRoue = n;
	nomVehicule = name;

}

Vehicule::~Vehicule(){
	cout << nomVehicule << " a la casse" << endl;
}

int Vehicule::getPuissance() const
{
	return puissance;
}

void Vehicule::setPuissance(int pui)
{
	puissance = pui;
}

int Vehicule::getNbrRoue() const
{
	return nbrRoue;
}

void Vehicule::setNbrRoue(int nbr){
	nbrRoue = nbr;
}

string Vehicule::getName() const
{
	return nomVehicule;
}

void Vehicule::setName(string nom){
	nomVehicule = nom;
}

void Vehicule::showInfos() const
{
	cout << "Le vehicule s'appelle " << nomVehicule << "." << endl;
	cout << "Le vehicule a " << puissance << "chevaux." << endl;
	cout << "Le vehicule a " << nbrRoue << "roues." << endl;
}

