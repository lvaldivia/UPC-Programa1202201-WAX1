#include <iostream>
using namespace std;

int factorial(int A) {
	int nF = 1;
	for (int i = 0; i < A; i++) {
		nF *= (A - i);
	}
	return nF;
}

int combinatorio(int N, int K) {
	int resultado = factorial(N) / (factorial(K) * factorial(N - K));
	return resultado;
}

void main() {
	int numero = 5;
	float resultado = 0;

	for (int N = 1; N <= numero; N++)
	{
		resultado += combinatorio(N * 2 + 1, N) / factorial(N);
	}
	cout << resultado;
	
}