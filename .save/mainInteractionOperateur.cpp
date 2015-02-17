#include <iostream>
using namespace std;

int main()
{
	// Declaration des variables entiers
	int addition, soustraction, multiplication, division, modulo, entier1, entier2, moduloCalcul;
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
		entier1 = entier1 * entier2;
		}
		
		// DIVISION
		else if (operateur == '/'){
			while (entier1 == 0){
        		        cout << "---\n!!! Division impossible par 0 !!!" << endl;
				cout << "---\nSaisir le premier entier de votre calcul : ";
		                cin >> entier1;
                	}

			while (entier2 == 0){
				cout << "---\n!!! Division impossible par 0 !!!" << endl;
				cout << "---\nSaisir le deuxieme entier de votre calcul : ";
				cin >> entier2;
			}
	
		        if (entier1 != 0){
		                entier1 = entier1 / entier2;
		        }
		}

		// MODULO
		else if (operateur == '%'){
			entier1 = entier1%entier2;
			//entier1 = moduloCalcul;
		}
	// Affichage du résultat
		cout << "\n\n---\n***\nLe résultat de l'opération est : " << entier1 << "\n***" << endl;

return 0;



}
