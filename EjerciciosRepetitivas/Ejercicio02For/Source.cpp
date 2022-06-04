#include <iostream>
using namespace std;

void main() {
	cout << "ingrese la cantidad de numeros " << endl;
	int numeros;
	cin >> numeros;
	int suma = 0;
	
	for (int i = 1; i <= numeros; i++)
	{
		if (i % 2 != 0) {
			suma += i;
		}
	}
	cout << "La suma de los numeros es " << suma;

}