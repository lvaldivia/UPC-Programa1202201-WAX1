#include <iostream>
using namespace std;

bool esCuadratica(int a, int b, int c, int x) {
	int resultado = (a * (x * x)) + (b * x) + c;
	return resultado == 0;
}

int esCuadraticavalor(int a, int b, int c, int x) {
	int resultado = (a * (x * x)) + (b * x) + c;
	return resultado;
}

void main() {
	int a = 1, b = -1 , c = -12;
	int x = 100;
	for (int i = 1; i <= x; i++)
	{
		cout << "Evaluando con x " << i << " " << esCuadraticavalor(a, b, c, i) << endl;
	}
}