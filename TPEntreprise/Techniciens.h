#pragma once
#include "Employes.cpp"
#include <xutility>
class Techniciens : public Employes
{
private :
	float salaire;
public :
	float getSalaire();
	void setSalaire(float s);

};

