#ifndef AVION_H
#define AVION_H

#include "Vehicule.h"

class Avion : public Vehicule
{
	public : 
	Avion(int p,int nbr, string name);

	void avancer();
	void showInfos();

	protected:

	private:
};

#endif // AVION_H