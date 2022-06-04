#include <iostream>

using namespace std;



void main() {

	int edad;

	int costo;



	cout << "Ingrese su edad:";

	cin >> edad;



	if (edad <= 12)

		costo = 7;

	if (edad > 65)

		costo = 10;

	if(edad > 12 && edad <= 65)

		costo = 15;



	cout << costo;

}