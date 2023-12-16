// TPEntreprise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include"Employes.h";
#include"Commerciaux.h";
#include"Interimaires.h";
#include"Representants.h";
#include"Techniciens.h";
#include"Vendeurs.h";
#include <iostream>
using namespace std;


int main()
{
	Vendeurs vendeur1, vendeur2, vendeur3, vendeur4, vendeur5;
	char menu;

	do
	{
		cout << "Que voulez-vous faire ?" << endl;
		cout << " 1 : Nommer / Renommer l'entreprise " << endl;
		cout << " 2 : Assigner des employes " << endl;
		cout << " 3 : Calculer les salaires" << endl;
		cout << " 4 : Voir les informations de l'entreprise" << endl;
		cout << " q : Quitter" << endl;
		cin >> menu;
		switch (menu)
		{
		case '1':
			
			break;
		case '2':
			
			break;
		case '3':
			
			break;
		case '4':

			break;
		case 'q':
			break;
		default:
			break;
		}
	} while (menu != 'q');
}

