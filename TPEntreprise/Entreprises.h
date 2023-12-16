#pragma once
#include"Employes.h";
#include"Commerciaux.h";
#include"Interimaires.h";
#include"Representants.h";
#include"Techniciens.h";
#include"Vendeurs.h";
#include <iostream>
using namespace std;

class Entreprises
{
private:
	string nom;
	Vendeurs vendeurs[5];
	Representants representants[2];
	Techniciens techniciens[3];
	Interimaires interimaires[5];
	int cptvendeur= 0, cptrepresentant= 0, cpttech= 0, cptinterim = 0;
public:

	void increCptvendeur();
	void setNom(string n);
	string getNom();

	void setVendeurs(Vendeurs v);
	string getVendeurs();
	

	void setTechnicien(Techniciens t);
	string getTechnicien();

	void setInterimaire(Interimaires i);
	string getInterimaire();

	void setRepresentant(Representants r);
	string getRepresentant();

};

