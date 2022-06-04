#include <iostream>

using namespace std;

void main() {
	int numero;
	cin >> numero;
	if (numero > 10) {
		//mostrar un mensaje de numero invalido
	}
	else {
		for (int filas = 1; filas <= numero; filas++)
		{
			for (int columnas = 1; columnas <= numero; columnas++)
			{
				if (columnas == filas) {
					cout << '*';
				}
				else if (columnas == 1) {
					cout << '*';
				}
				else if (filas == numero) {
					cout << '*';
				}
				else {
					cout << ' ';
				}
			}
			cout << endl;

		}
	}


}