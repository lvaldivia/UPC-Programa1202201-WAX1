#include <iostream>

using namespace std;



int arbol(int valor) {

	for (int i = 1; i <= valor; i++)

	{

		for (int j = 1; j <= valor; j++)

		{

			if (i >= j)

			{

				cout << j;

			}

			else

			{

				cout << " ";

			}

		}

		cout << endl;

	}

	return (0);

}



void main() {

	int num;

	cout << "Ingrese un numero: " << endl;

	cin >> num;



	arbol(num);

}