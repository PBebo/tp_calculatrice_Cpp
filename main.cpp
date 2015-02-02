#include <iostream>
#include <stdint.h>
#include "./addition.cpp"
#include "./soustraction.cpp"
#include "./multiplication.cpp"
#include "./division.cpp"
#include "./modulo.cpp"

using namespace std;

int main()
{
	// Affichage titre Calculatrice C++ :
	cout << "---\nCalculatrice C++\n---\n\n";
	int16_t a=321, b=23; 

	int32_t c=321, d=23;

	float e=2324, f=25;

	double g=67863, h=432;
	
	cout << "Valeur pour calcul : " << endl;
	cout << "Valeur de  a : " << a << endl;
	cout << "Valeur de  b : " << b << endl;
	cout << "Valeur de  c : " << c << endl;
	cout << "Valeur de  d : " << d << endl;
	cout << "Valeur de  e : " << e << endl;
	cout << "Valeur de  f : " << f << endl;
	cout << "Valeur de  g : " << g << endl;
	cout << "Valeur de  h : " << h << endl << endl;


	cout <<	"Addition : " << ajouter(a,b) << endl;
	cout << "Soustraction : " << soustraction(a,b) << endl;
	cout << "Multiplication : " << multiplication(a,b) << endl;
	cout << "Division : " <<division(a,b) << endl;
	cout << "Modulo : " << modulo(a,b) << endl;

	return 0;
}


