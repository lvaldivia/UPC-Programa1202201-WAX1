#include <iostream>
using namespace std;
void main() {
	int lado1, lado2, lado3;
	cout << "Ingrese los lados del triangulo " << endl;
	cin >> lado1;
	cin >> lado2;
	cin >> lado3;

	/*int equilatero = (lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3);
	bool escaleno = (lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3);
	bool isoceles = 
		((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)) && (equilatero == 0);*/

	//https://paste.ofcode.org/T57TKG7bqWSdXbNGtsBhRF
	bool equilatero = (lado1 == lado2) && (lado1 == lado3) && (lado2 == lado3);
	bool escaleno = (lado1 != lado2) && (lado1 != lado3) && (lado2 != lado3);
	bool isoceles =
		((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3)) && !equilatero;

	cout << "Equilatero " << equilatero << endl;
	cout << "Escaleno " << escaleno << endl;
	cout << "Isoceles " << isoceles << endl;
}