#include <iostream>

using namespace std;

void main() {
	int numero = 7;
	char character = '*';
	while (numero > 0) {
		for (int i = 0; i < numero; i++)
		{
			cout << character;
		}
		cout << endl;
		numero--;
	}

}