#include <iostream>
using namespace std;

bool esPrimo(int& numero) {
	if (numero == 0 || numero == 1) {
		return false;
	}
	bool primo = true;
	//5
	for (int i = 2; i < numero; i++)
	{
		if (numero % i == 0) {
			primo = false;
		}
	}
	return primo;
}

void main() {
	int numero = 13;
	cout << esPrimo(numero) << endl;
}