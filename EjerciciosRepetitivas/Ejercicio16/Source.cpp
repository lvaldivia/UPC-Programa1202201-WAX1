#include <iostream>
using namespace std;

void main() {
	int limite;
	cout << "Ingrese la cantidad de numeros " << endl;
	cin >> limite;

	//0,1,1,2,3,5,8,13,21
	int numero = 1;
	int anterior = 0;
	int valor_temporal;
	int i = 0;
	for (i= 0; i < limite; i++)
	{
		cout << numero;
		if (i < limite - 1) {
			cout << " , ";
		}
		valor_temporal = numero;
		numero += anterior;
		anterior = valor_temporal;
	}
}
