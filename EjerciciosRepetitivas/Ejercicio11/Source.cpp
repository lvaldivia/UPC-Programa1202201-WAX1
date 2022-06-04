#include <iostream>
using namespace std;
void main() {
	int n;
	cout << "Ingrese la cantidad de numeros a sumar " << endl;
	cin >> n;
	float pares = 2;
	float suma_sec = 0;
	float fraccion;
	for (float i = 1; i < n; i++)
	{
		fraccion = 1 / pares;
		suma_sec += fraccion;
		pares *= 2;
	}
	cout << "La suma es: " << 1 + suma_sec << endl;
}