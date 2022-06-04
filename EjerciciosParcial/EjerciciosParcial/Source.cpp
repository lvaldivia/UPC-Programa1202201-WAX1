#include <iostream>

using namespace std;

void main() {
	int numero;
	int vueltas = 1;
	cin >> numero;
	if (numero > 10) {
		//mostrar un mensaje de numero invalido
	}
	else {
		while(numero >= vueltas)
		{
			for (int i = 1; i <= vueltas; i++)
			{
				cout << i;
			}
			cout << endl;
			vueltas++;
		}
	}


}