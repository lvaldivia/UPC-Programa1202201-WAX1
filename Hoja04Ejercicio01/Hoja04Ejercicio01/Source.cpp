#include <iostream>
using namespace std;

int factorial(int valor) {
	int resultado = 1;
	for (int i = 1; i <= valor; i++)
	{
		resultado *= i;
	}
	return resultado;
}

float potencia(float base,int exponente) {
	float resultado = 1;
	if (exponente == 0) {
		return 1;
	}
	for (int i = 1; i <= exponente; i++) {
		resultado *= base;
	}
	return resultado;
}

void main() {
	int k;
	float a;
	cout << "Ingrese k: ";
	cin >> k;
	cout << "Ingrese a: ";
	cin >> a;
	float suma = 0;
	if (k <= 20) {
		for (int i = 0; i <= k; i++)
		{
			suma += potencia(a,i) / factorial(i);
		}
		cout << "El resultado de e será :" << suma << endl;
	}

}