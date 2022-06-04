#include <iostream>

using namespace std;

void main() {
	int numero = 5;
	int vueltas = 3;
	int total = numero * vueltas;
	int y = 0;
	int x = 0;
		for (int i = 0; i < numero; i++)
		{
			for (int j = 0; j < total; j++)
			{
				if (y == 0 && x == 0) {
					cout << '*';
				}
				else if (y == 0) {
					//cout << '*';
				}
				/*else if (x == y || x == numero - 1) {
					cout << '*';
				}
				*/
				else {
					cout << ' ';
				}
				y++;
				if (y == 4) {
					y = 0;
				}
			}
			x++;
			if (x == 4) {
				x = 0;
			}
			
				cout << endl;
		}

}