#include <iostream>
using namespace std;
int DibujaCuadro(int& n, char& a, int& x, int& y) {
	cout << "ingrese caracter" << endl;
	cin >> a;
	cout << "ingrese el tamano del cuadrado" << endl;;
	cin >> n;
	cout << "ingrese coordenadas (x, y)" << endl;
	cin >> x >> y;

	return 0;
}
void main() {
	int n = 0;
	char a;
	int x = 0;
	int y = 0;
	DibujaCuadro(n, a, x, y);
	for (int filas = 1; filas < n + y; filas++) {
		for (int columnas = 1; columnas < n + x; columnas++) {
			if (filas >= y) {
				if (columnas >= x) {
					cout << a;
				}
				else {
					cout << " ";
				}
			}
			else {
				cout << " ";
			}

		}
		cout << endl;
	}
}