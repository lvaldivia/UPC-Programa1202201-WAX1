#include <iostream>;
using namespace std;

//la 25
bool esPerfecto(int num) {
	int suma = 0;
	for (int i = 1; i < num; i++)
	{
		if (num % i == 0) {
			suma += i;
		}
	}
	/*if (suma == num) {
		return true;
	}
	else {
		return false;
	}*/
	return suma == num;
}

//la 26
void main() {
	int cantidadNumeros = 4;
	int numero = 1;
	while (cantidadNumeros > 0) {
		if (esPerfecto(numero)) {
			cantidadNumeros--;
			cout << numero << " , ";
		}
		numero++;
	}


	/*while (true) {
		if (esPerfecto(numero)) {
			cantidadNumeros--;
			cout << numero << " , ";
		}
		if (cantidadNumeros == 0) {
			break;
		}
		numero++;
	}*/
}