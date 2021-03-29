#ifndef BATEAU_H
#define BATEAU_H

#include "Vehicule.h"

class Bateau : public Vehicule
{
	public : 
	Bateau(int p, string name);

	void avancer();

	protected:

	private:
};

#endif // BATEAU_H