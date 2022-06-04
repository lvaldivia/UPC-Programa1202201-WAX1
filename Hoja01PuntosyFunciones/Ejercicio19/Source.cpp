#include <iostream>
using namespace std;

void esDivisible(int numero1, int numero2) {

	/*if (numero1 % numero2 == 0) {
		cout << "son divisibles " << endl;
	}
	else {
		cout << "no son divisibles " << endl;
	}*/

	cout << (numero1 % numero2 == 0 ? "Son divisibles" : "No son divisibles")<< endl;

	cout << "Los divisores del numero son: ";
	for (int i = 1; i <= numero1; i++)
	{
		if (numero1 % i == 0) {
			cout << i << " ";
		}
	}
	cout << endl;
}

void main() {
	int numero1 = 5;
	int numero2 = 6;
	esDivisible(5, 6);
}