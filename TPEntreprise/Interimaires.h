#pragma once
#include"Techniciens.h"
class Interimaires: public Techniciens
{
private :
	float tauxHorraires;
	float heuresTravailles;
public: 

	void setTauxHorraires(float t);
	void setHeuresTravailles(float h);
	float getTauxHorraires();
	float getHeuresTravailles();


};

