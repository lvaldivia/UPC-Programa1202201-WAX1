#include <iostream>
using namespace std;

void main() {
	int i, j, n;
	int index = 0;
	int direction = 1;
	cin >> n;
	if (n > 10) {

	}
	else {
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n - i; j++)
				cout << " ";
			for (j = 1; j <= 2 * i - 1; j++)
			{
				cout << j;
			}
			cout << endl;

		}
		int espacios = 1;
		int numero = 1;
		for (i = 1; i <= n - 1; i++){
			for (j = 1; j <= espacios; j++)
				cout << " ";
			espacios++;
			numero = 1;
			for (j = 2 * n - (2*i) -1 ; j > 0; j--)
			{
				cout << numero;
				numero++;
			}
			cout << endl;
		}

	}

}