#include <iostream>
using namespace std;

void main() {
	int n, m;
	cout << "Ingrese la cantidad de numeros pares a sumar ";
	cin >> n;
	cout << "Ingrese la cantidad de numeros impares a sumar ";
	cin >> m;
	int pares = 2;
	int suma_pares = 0;
	int impares = 1;
	int suma_impares = 0;
	for (int i = 0; i < n; i++)
	{
		suma_pares += pares;
		pares = pares + 2;
	}

	for (int i = 0; i < m; i++)
	{
		
		suma_impares += impares;
		impares = impares + 2;
	}

	cout << "Suma de pares " << suma_pares << endl;
	cout << "Suma de impares " << suma_impares << endl;
}