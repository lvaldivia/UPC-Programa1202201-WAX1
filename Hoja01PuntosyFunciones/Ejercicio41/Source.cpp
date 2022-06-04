#include <iostream>
#include <windows.h>
using namespace std;
//funciona al 100% solo hasta el numero 32 (agranda la pantalla para q se vea bien)
void Tabla(int& n) {
	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	int i = 0;
	int mult = 0;
	for (int fila = 1; fila <= n + 1; fila++) {
		for (int columna = 1; columna <= n + 1; columna++) {
			SetConsoleTextAttribute(hConsole, 15);
			if (fila == 1) {
				if (i == 0) {
					cout << " ";
				}
				else {
					SetConsoleTextAttribute(hConsole, 1);
					cout << i;
				}
				if (i >= 0 && i < 10) {
					cout << "    ";
				}
				else {
					cout << "   ";
				}
			}
			else if (columna == 1) {
				if (columna == 1 && fila != 1) {
					if (fila >= 11) {
						SetConsoleTextAttribute(hConsole, 1);
						cout << i;
						cout << "   ";
					}
					else {
						SetConsoleTextAttribute(hConsole, 1);
						cout << i;
						cout << "    ";
					}
				}
			}
			else {
				mult = (columna - 1) * (fila - 1);
				cout << mult;
				if (mult >= 10 && mult < 100) {
					cout << "   ";
				}
				else if (mult >= 100) {
					cout << "  ";
				}
				else {
					cout << "    ";
				}
			}
			i++;
			if (i == n + 1) {
				i = 1;
			}
		}
		if (fila == 1) {
			cout << endl;
		}
		cout << endl;
	}
}
void main() {
	int n;
	cout << "ingrese n" << endl;
	cin >> n;
	Tabla(n);
}