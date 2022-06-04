#include <iostream>
using namespace std;

int factorial(int numero) {
	int factorial = 1;
	for (int i = 1; i <= numero; i++)
	{
		factorial = factorial * i;
	}
	return factorial;
}

int factorial2(int A) {
	int nF = 1;
	for (int i = 0; i < A; i++) {

		nF *= (A - i);

	}
	return nF;

}

//https://paste.ofcode.org/7hWYuw3UhabV6HjkgGfNBx
void main() {
	int N = 5;
	int K = 3;
	int resultado = factorial2(N) / (factorial2(K) * factorial2(N - K));
	cout << "Combinatorio " << resultado;
}