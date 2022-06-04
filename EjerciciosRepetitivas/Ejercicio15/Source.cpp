#include <iostream>
using namespace std;

void main() {
	cout << "Ingrese un numero entero positivo" << endl;
	int n;
	int suma = 0;
	cin >> n;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			suma += i;
		}
	}
	if (suma == n) {
		cout << "Es un numero perfecto" << endl;
	}
	else {
		cout << "No es un numero perfecto" << endl;
	}
}
