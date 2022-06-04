#include <iostream>
#include <math.h>
using namespace std;
float denominador(int x, int a) {
	int NF = 1;
	for (int i = 0; i < a; i++) {
		NF *= (a - i);
	}
	float denominador = pow(x, NF);
	return denominador;
}
void main() {
	cout << "Ingrese 2 numeros \"n\" y \"x\"" << endl;
	int n, x;
	cin >> n >> x;
	double operacion = 0;
	if (n < 0) {
		cout << "numero invalido" << endl;
	}
	else {
		for (int i = 1; i <= n; i++) {
			if (i % 2 != 0) {
				operacion += i / denominador(x, i);
			}
			else {
				operacion -= i / denominador(x, i);
			}
		}
		cout << "operacion " << operacion;
	}
}