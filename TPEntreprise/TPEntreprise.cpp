// TPEntreprise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include "Entreprises.h"
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
	Entreprises entreprise;
	Vendeurs vendeur1, vendeur2, vendeur3;
	char menu;
	
	string nomv1 = "Paul";
	int av1	=20;
	string nomv2 = "Pierre";
	int av2 =25;
	string nomv3 = "Jacques";
	int av3 =22;
	

	vendeur1.setNom(nomv1);
	vendeur1.setAge(av1);
	vendeur2.setNom(nomv2);
	vendeur2.setAge(av2);
	vendeur3.setNom(nomv3);
	vendeur3.setAge(av3);

	entreprise.setVendeurs(vendeur1);
	entreprise.setVendeurs(vendeur2);
	entreprise.setVendeurs(vendeur3);














	/*do
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
}*/

