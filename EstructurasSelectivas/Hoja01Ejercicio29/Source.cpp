#include <iostream>
#include <string>
using namespace std;

void main() {
	//https://paste.ofcode.org/Ycf7aQX26K9EfbwFiTDKqj
	char modelo;
	cout << "ingrese su modelo " << endl;
	cin >> modelo;
	int digito;
	cout << "ingrese su ultimo digito de placa " << endl;
	cin >> digito;

	float mantenimiento;
	cout << "ingrese su costo de mantenimiento " << endl;
	cin >> mantenimiento;
	string mes;
	switch (modelo)
	{
		case 'A':
			if (digito >= 0 && digito <= 5) {
				if (mantenimiento <= 500) {
					mes = "Enero";
				}
				else {
					mes = "Febrero";
				}
			}
			else if (digito >= 6 && digito <= 8) {
				if (mantenimiento <= 700) {
					mes = "Junio";
				}
				else {
					mes = "Julio";
				}
			}
			else {
				if (mantenimiento <= 1000) {
					mes = "Octubre";
				}
				else {
					mes = "Noviembre";
				}
			}
		break;
		case 'B':
			if (digito >= 1 && digito <= 3) {
				if (mantenimiento <= 500) {

				}
				else {

				}
			}
			else if (digito >= 4 && digito <= 8) {
				if (mantenimiento <= 700) {

				}
				else {

				}
			}
			else {
				if (mantenimiento <= 1000) {

				}
				else {

				}
			}
		break;
	}

	cout << "Tu mes de mantenimiento es " << mes << endl;
}