#include <iostream>

using namespace std;


void main() {
	int numero = 5;
	int letra = 64;
	for (int filas = 1; filas <= numero; filas++)
	{
		for (int columnas = 1; columnas <= numero - filas; columnas++)
		{
			cout << " ";
		}
		for (int columnas = 1; columnas <= (2 * filas) - 1; columnas++)
		{
			cout << char(letra + columnas);
		}
		cout << endl;

	}
	for (int i = 1; i <= numero - 1; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << ' ';
		}
		int limit = (2 * numero) - (2 * i) - 1;
		for (int columnas = 1; columnas <= limit; columnas++) {
			cout << char(letra + columnas);
		}
		cout << endl;
	}
}

