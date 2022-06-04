#include <iostream>
using namespace std;

void main() {
	//https://paste.ofcode.org/wTBaNJHTrmLGWXUULUgRpg
	char escala;
	cout << "Ingrese la escala " << endl;
	cin >> escala;
	int cursos;
	cout << "Ingrese los cursos " << endl;
	cin >> cursos;
	const int importe_fijo = 350;
	/*if (escala == 'A') {
	}
	else if (escala == 'B') {
	}
	else if (escala == 'C') {
	}
	else if (escala == 'D') {
	}
	else {
	}*/
	int monto_variable;
	switch (escala)
	{
		case 'A':
			if (cursos > 0 && cursos <= 5) {
				monto_variable = 400;
			}
			else if (cursos > 5 && cursos <= 8) {
				monto_variable = 600;
			}
			else {
				monto_variable = 900;
			}
			break;
		case 'B':
			if (cursos >= 1 && cursos <= 3) {
				monto_variable = 350;
			}
			else if (cursos >= 4 && cursos <= 7) {
				monto_variable = 500;
			}
			else {
				monto_variable = 700;
			}
			break;
		case 'C':
			if (cursos >= 1 && cursos <= 3) {
				monto_variable = 320;
			}
			 if (cursos >= 4 && cursos <= 7) {
				monto_variable = 480;
			}
			else {
				monto_variable = 685;
			}
			break;
		case 'D':
			if (cursos >= 1 && cursos <= 4) {
				monto_variable = 310;
			}
			else if (cursos >= 5 && cursos <= 8) {
				monto_variable = 475;
			}
			else {
				monto_variable = 680;
			}
			break;
	}
	int monto_a_pagar = monto_variable + importe_fijo;

	cout << "Monto a pagar " << monto_a_pagar;

}