#include <iostream>
using namespace std;

void main() {
	int n;
	cin >> n;
	if (n > 10) {

	}
	else {
		int total = n * 2 - 1;
		for (int filas = 1; filas <= total; filas++)
		{
			for (int columnas = 1; columnas <= total; columnas++)
			{
				if (filas == 1 || filas == total) {
					if (columnas <= n) {
						cout << columnas;
					}
					else {
						cout << total - columnas + 1;
					}
				}
				else if (columnas == 1 || columnas == total) {
					if (filas <= n) {
						cout << filas;
					}
					else {
						cout << total - filas + 1;
					}
				}
				else {
					cout << ' ';
				}
			}
			cout << endl;
		}
	}

}