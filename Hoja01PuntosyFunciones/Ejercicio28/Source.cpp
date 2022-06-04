#include <iostream>;
using namespace std;

int obtenerDigito(int numero, int P) {
	int digito = -1;
	int temporal = numero;
	int divisor = 1;
	while (temporal / 10 > 0) {
		temporal = temporal / 10;
		divisor = divisor * 10;
	}
	int i = 0;
	while (divisor > 0)
	{
		i++;
		if (i == P) {
			digito = numero / divisor;
		}
		//cout << numero / divisor << endl;
		numero = numero % divisor;
		divisor = divisor / 10;
	}
	//3501 / 1000
	//501 / 100
	return digito;
}

void main() {
	int numero = 3501;
	cout << obtenerDigito(numero,15);
}