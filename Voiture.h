#ifndef VOITURE_H
#define VOITURE_H

#include "Vehicule.h"

class Voiture : public Vehicule
{
	public : 
	Voiture(int p, string name);

	void avancer();

	protected:

	private:
};

#endif // VOITURE_H