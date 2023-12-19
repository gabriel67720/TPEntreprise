#pragma once
#include"Commerciaux.h"
class Representants : public Commerciaux
{
private :
	float fraisDeplacements;
public:
	void setFraisDeplacements(float f);
	float getFraisDeplacements();

};

