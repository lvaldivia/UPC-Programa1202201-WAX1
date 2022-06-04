#include <iostream>
using namespace std;
void main() {
	cout << "Ingrese un numero para sacar su cuadrado" << endl;
	int n;
	int impares = 1;
	int suma = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		suma += impares;
		//suma = suma + impares;
		impares += 2;
	}
	cout << "El cuadrado es: " << suma << endl;
}