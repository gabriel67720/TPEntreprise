#include "Employes.h"

float Employes::calculSalaire()
{
	return 0.0f;
}

void Employes::affiche()
{
	cout << "Nom: " << getNom << endl;
	cout << "Prenom: " << getNom << endl;

}

string Employes::getNom()
{
	return nom;
}

string Employes::getPrenom()
{
	return prenom;
}

int Employes::getAge()
{
	return age ;
}

void Employes::setNom(string n)
{
	nom = n;
}

void Employes::setPrenom(string p)
{
	prenom = p;
}

void Employes::setAge(int a)
{
	age = a;
}
