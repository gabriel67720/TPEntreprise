#include "Entreprises.h"



void Entreprises::setNom(string n)
{
	nom = n;
}

string Entreprises::getNom()
{
	return nom;
}

void Entreprises::setVendeurs(Vendeurs v)
{
	vendeurs[cptvendeur] = v;
	cptvendeur = cptvendeur + 1;
}

string Entreprises::afficheVendeurs()
{
	for (int cpt=0; cpt =< cptvendeur; cpt++ )
	{
		cout << 
	}
}

