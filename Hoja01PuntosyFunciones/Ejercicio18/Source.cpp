#include <iostream>
using namespace std;

void invertir(int numero) {
	int original = numero;
	int digito = 0;
	int numeroInvertido = 0;
	//1221
	//primea vez
	//digito 1
	//numero 122
	//invertido = 1 + (0*10) = 1

	//segunda vez
	//digito 2
	//numero 12
	//invertido = 2 + (1*10) = 12
	//tercera vez
	//digito 2
	//numero 1
	//invertido = 2 + (12*10) = 122

	//cuarta vez
	//digito 1
	//numero = 0 
	//invertido = 1 * (122*10) = 1221
	while (numero >= 1) {
		digito = numero % 10;
		numeroInvertido = digito + numeroInvertido * 10;
		numero /= 10; // numero = numero / 10;
	}
	if (original == numeroInvertido) {
		cout << "Capicua";
	}
	else {
		cout << "NO capicua";
	}
}

void main() {
	int numero = 1221;
	invertir(numero);
}