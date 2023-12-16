#pragma once
#include <iostream>
using namespace std;
class Employes
{
protected:
	string nom;
	string prenom;
	int age;

public:
	float calculSalaire();
	void affiche();
	string getNom();
	string getPrenom();
	int getAge();
	void setNom(string n);
	void setPrenom(string p);
	void setAge(int a);
};

