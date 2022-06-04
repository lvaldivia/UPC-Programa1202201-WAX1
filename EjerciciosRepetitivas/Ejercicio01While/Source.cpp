#include <iostream>
using namespace std;

void main() {
	cout << "ingrese la cantidad de numeros " << endl;
	int numeros;
	cin >> numeros;
	int suma = 0;
	int i = 1;
	while (i <= numeros) {
		suma += i;
		i++;
	}
	cout << "La suma de los numeros es " << suma;
}