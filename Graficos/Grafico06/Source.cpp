#include <iostream>

using namespace std;

void main() {
	int numero = 6;


	for (int i = 0; i < numero; i++)
	{
		for (int j = 0; j < numero; j++)
		{
			if (i == 0 && j == 0) {
				cout << '*';
			}
			else if (j == 0) {
				cout << '*';
			}
			else if (j == i || i == numero - 1) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		if (i != numero - 1) {
			cout << endl;
		}
		
	}

	for (int i = 0; i < numero; i++)
	{
		for (int j = 0; j < numero; j++)
		{
			if (i > 0 && i == j) {
				cout << '*';
			}
			else if (i > 0 && j == numero - 1) {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}


}