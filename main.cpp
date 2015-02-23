/// \file	main.cpp
/// \author	Pierrick.B
/// \version 3.0
/// \date février 2015
/// \details Calculatrice affichant le résultat des valeurs définit au préalable dans le programme
/// \details Ceci est le coeur du programme. Le programme est découpé en 5 autres fichiers qui seront appelés ici afin de l'optimiser. Il y a un fichier par opérande +, -, x, ÷ et modulo.

// Définition des bibliothèques iostream et stdint.h
#include <iostream>
#include <stdint.h>

// Permet de relier les fichiers découpés
#include "./fichiersDecoupes/addition.cpp"
#include "./fichiersDecoupes/soustraction.cpp"
#include "./fichiersDecoupes/multiplication.cpp"
#include "./fichiersDecoupes/division.cpp"
#include "./fichiersDecoupes/modulo.cpp"

using namespace std;

// Documentation Calculatrice Cpp

/// \mainpage Documentation Calculatrice Cpp
/// \section intro_sec Introduction
/// Documentation d'un programme écrit en C++ qui doit permettre de réaliser les calculs de type +, -, x, ÷, modulo. Utilisant les types de variables int32, int64, float et double.

int main()
{
        // Affichage du titre Calculatrice C++ :
        cout << "---\nCalculatrice C++\n---\n\n";

	// Définition des variables qui seront calculés
        int16_t a=321, b=23;

        int32_t c=321, d=23;

        float e=2324, f=25;

        double g=67863, h=432;
	
	// Affichage des variables définit ci-dessus pour faciliter la compréhension à l'utilisateur
	cout << "Valeur pour calcul : " << endl;
	cout << "Valeur de  a : " << a << endl;
	cout << "Valeur de  b : " << b << endl;
	cout << "Valeur de  c : " << c << endl;
	cout << "Valeur de  d : " << d << endl;
	cout << "Valeur de  e : " << e << endl;
	cout << "Valeur de  f : " << f << endl;
	cout << "Valeur de  g : " << g << endl;
	cout << "Valeur de  h : " << h << endl << endl;

	// Affichage du résultat sous tous les types de variables (int32, int64, float, double)
		// Avec également les 5 opérandes
	cout <<	"Addition : " << ajouter(a,b) << endl;
	cout << "Soustraction : " << soustraction(a,b) << endl;
	cout << "Multiplication : " << multiplication(a,b) << endl;
	cout << "Division : " << division(a,b) << endl;
	cout << "Modulo : " << modulo(a,b) << endl;

	return 0;
}
