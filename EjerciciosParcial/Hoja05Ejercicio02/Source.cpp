#include <iostream>

using namespace std;

void main() {
	int numero;
	cin >> numero;
	char character;
	cin >> character;
	if (numero > 10) {
		//mostrar un mensaje de numero invalido
	}
	else {
		while (numero > 0)
		{
			for (int i = 1; i <= numero; i++)
			{
				cout << character;
			}
			cout << endl;
			numero--;
		}
	}


}