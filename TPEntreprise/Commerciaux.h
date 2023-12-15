#pragma once
#include "Employes.cpp"
#include <xutility>
class Commerciaux : public Employes
{
private :
	float salaireDeBase;
	float primes;
public: 
	void setPrimes(float p);
	void setSalaireDeBase(float s);
	float getPrimes();
	float getSalaireDeBase();

};

