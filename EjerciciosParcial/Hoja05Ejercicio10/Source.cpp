#include <iostream>

using namespace std;

void main() {

	int numero = 6;
	int total = numero*2  -1;

	for (int filas = 1; filas <= numero; filas++)
	{
		for (int columnas = 1; columnas <= total; columnas++)
		{
			int limite = filas + 1;
			int limite_final = total - filas;
			
			if (columnas < limite) {
				cout << numero - columnas +1;
			}
			else if (columnas >= 1 && columnas <= limite_final) {
				cout << ' ';
			}
			else {
				cout << columnas - numero  + 1;
			}
			
		}
		cout << endl;

	}

	for (int filas = 1; filas <= numero - 1; filas++)
	{
		for (int columnas = 1; columnas <= total; columnas++)
		{
			int limite = numero   - filas + 1;
			int limite_final = total - numero + filas;

			if (columnas < limite) {
				cout << numero - columnas + 1;
			}
			else if (columnas >= 1 && columnas <= limite_final) {
				cout << ' ';
			}
			else {
				cout << columnas - numero + 1;
			}

		}
		cout << endl;

	}
}