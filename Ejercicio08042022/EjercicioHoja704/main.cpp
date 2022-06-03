#include <iostream>
using namespace std;

int primero, segundo, tercero, cuarto, suma;
void esImpar() {
	suma = (primero % 2 > 0) * primero
		+ (segundo % 2 > 0) * segundo
		+ (tercero % 2 > 0) * tercero
		+ (cuarto % 2 > 0) * cuarto;
}

void main() {
	cout << "Ingres el numero " << endl;
	int numero;
	cin >> numero;
	primero = numero / 1000;
	segundo = (numero - (primero * 1000)) / 100;

	tercero = (numero - (primero * 1000) - (segundo * 100)) / 10;
	cuarto = (numero - (primero * 1000) - (segundo * 100) - (tercero * 10));
	esImpar();
	cout << "La suma da " << suma << endl;
}




