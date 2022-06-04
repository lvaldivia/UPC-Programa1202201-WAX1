#include <iostream>
using namespace std;

void main() {

	cout << "Ingrese un numero " << endl;
	int numero;
	cin >> numero;
	if (numero > 0 && numero <= 9) {
		for (int i = 1; i <= 10; i++)
		{
			cout << numero << " x " << i << " = " << (numero * i) << endl;
		}
	}
}