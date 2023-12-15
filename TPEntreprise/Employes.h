#pragma once
#include <iostream>
using namespace std;
class Employes
{
private:
	string nom;
	string prenom;
	int age;

public:
	float calculSalaire();
	void affiche();
	string getNom();
	string getPrenom();
	void setNom(string n);
	void setPrenom(string p);

};

