#include <iostream>
using namespace std;

int main()
{
	// Declaration des variables entiers
	int addition, soustraction, multiplication, division, modulo, entier1, entier2;
	char operateur;
	
	// Demande a l utilisateur, affichage
	do{
		cout << "---\nCalculatrice C++ par Pierrick Bobet\n---\nChoisir votre opérateur (+, -, x, /, %) : ";
		cin >> operateur;
		cout << operateur;
	} while (operateur != '+' && operateur != '-' && operateur != 'x' && operateur != '/' && operateur != '%');

	cout << "---\nSaisir le premier entier de votre calcul : ";
	cin >> entier1;

	cout << "\nSaisir le deuxieme entier de votre calcul : ";
	cin >> entier2;

	// Calcul avec l operateur
		// ADDITION	
		if (operateur == '+'){
		entier1 = entier1 + entier2;
		}
		
		// SOUSTRACTION
		else if (operateur == '-'){
			if (entier1 > entier2){
				entier1 = entier1 - entier2;
			}
			else {
				entier1 = entier2 - entier1;
			}
		}
		// MULTIPLICATION
		else if (operateur == 'x'){
		}



return 0;



}
