#include <iostream>

using namespace std;

void main() {
	//https://paste.ofcode.org/39v9uJb2nYG5jsYziFJRyy3
	cout << "Ingrese su numero ";
	int numero;
	cin >> numero;
	if (numero > 0)
		cout << "El numero es positivo" << endl;
	else {
		if(numero < 0)
			cout << "El numero es negativo" << endl;
		else
			cout << "El numero es neutro" << endl;
	}
}