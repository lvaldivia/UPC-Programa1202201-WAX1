#include <iostream>
using namespace std;

void main() {
	cout << "ingrese la cantidad de numeros " << endl;
	int numeros;
	cin >> numeros;
	int suma = 0;
	int i = 1;
	do
	{
		if (i % 2 != 0) {
			suma += i;
		}
		i++;
	} while (i <= numeros);
	cout << "La suma de los numeros es " << suma;
	//con while
	/*while (i <= numeros) {
		if (i % 2 != 0) {
			suma += i;
		}
		i++;
	}*/
}