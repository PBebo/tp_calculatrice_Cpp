#include <iostream>
#include <stdint.h>
#include "./addition.cpp"
#include "./soustraction.cpp"
#include "./multiplication.cpp"
#include "./division.cpp"
#include "./modulo.cpp"

//using namespace std;

int main()
{
	int32_t operandeA, operandeB;
	// Recuperation des deux operandes
	cout << "---\nSaisir le premier operande de votre calcul : ";
	cin >> operandeA;
	cout << "\nSaisir le deuxieme operande de votre calcul : ";
	cin >> operandeB;

	return 0;
}


