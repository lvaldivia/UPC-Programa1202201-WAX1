#include <iostream>

using namespace std;

void main() {
	int numero = 5;

	for (int i = 0; i < numero; i++)
	{
		for (int j = 0; j < numero; j++)
		{
			if ((j != 0 && j != numero -1 ) &&  i > 0 && i < numero - 1) {
				cout << ' ';
			}
			else {
				cout << '*';
			}
		}
		cout << endl;
	}
	

}