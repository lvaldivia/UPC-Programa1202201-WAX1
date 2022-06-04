#include <iostream>
using namespace std;
void main() {
	int n;
	cout << "Ingrese la cantidad de numeros a sumar " << endl;
	cin >> n;
	float pares = 1;
	float suma_sec = 0;
	float fraccion;
	for (int i = 1; i <= n; i++)
	{
		fraccion = 1 / pares;
		if (i % 2 != 0) {
			suma_sec += fraccion;
		}
		else {
			suma_sec -= fraccion;
		}
		pares *= 2;
	}
	cout << "La suma es: " << suma_sec << endl;
}