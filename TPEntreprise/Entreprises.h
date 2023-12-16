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
public:
	void setNom(string n);
	string getNom();

	void setVendeurs(Vendeurs v);
	string getVendeurs();
	void compteurVendeur();

	void setTechnicien(Techniciens t);
	string getTechnicien();
	void compteurTechnicien();

	void setInterimaire(Interimaires i);
	string getInterimaire();
	void compteurInterimaire();

	void setRepresentant(Representants r);
	string getRepresentant();
	void compteurRepresentant();
};

