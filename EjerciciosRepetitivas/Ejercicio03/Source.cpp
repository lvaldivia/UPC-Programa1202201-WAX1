#include <iostream>
using namespace std;

void main() {
	cout << "ingrese la cantidad de numeros " << endl;
	int numeros;
	cin >> numeros;
	
	cout << "Los multiplos son : ";
	for (int i = 0; i < numeros; i++)
	{
		if (i > 0 && i % 3 == 0) {
			cout << i << " ";
		}
	}
}