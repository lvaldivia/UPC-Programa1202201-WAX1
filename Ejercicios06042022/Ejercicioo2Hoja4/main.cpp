#include <iostream>
using namespace std;

void main() {
	cout << "Ingrese el sexo del usuario " << endl;
	char sexo;
	cin >> sexo;
	int edad;
	cout << "Ingrese la edad del usuario " << endl;
	cin >> edad;
	//paste.ofcode.org/34j4sYRXUxNu7AE7pTLKKZf
	int monto_a_pagar =
		((sexo == 'M' && edad < 25) * 1000) +
		((sexo == 'M' && edad >= 25) * 700) +
		((sexo == 'F' && edad < 21) * 800) +
		(sexo == 'F' && (edad >= 21) * 500);

	cout << "El monto a pagar " << monto_a_pagar<<endl;
}