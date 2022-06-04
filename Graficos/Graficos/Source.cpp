#include <iostream>
using namespace std;

void main() {
	int numero;
	cin >> numero;

	int inicio = 1;

	while (numero >= inicio) {
		for (int i = 0; i < inicio; i++)
		{
			cout << (i + 1);
		}
		cout << endl;
		inicio++;
	}

}