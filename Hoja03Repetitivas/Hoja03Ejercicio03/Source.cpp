#include <iostream>
using namespace std;

int factorial(int A) {
	int nF = 1;
	for (int i = 0; i < A; i++) {
		nF *= (A - i);
	}
	return nF;
}


void main() {
	cout << "ingrese un numero para sacar su fatorial" << endl;
	int n;
	cin >> n;
	int suma = 0;
	for (int i = 1; i <= n; i++)
	{
		suma += factorial(i);
	}
	cout << "la suma es " << suma << endl;
}





