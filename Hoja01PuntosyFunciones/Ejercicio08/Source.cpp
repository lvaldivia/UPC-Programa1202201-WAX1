#include <iostream>
using namespace std;

bool FechaEsValida(int dia, int mes, int annio) {
	if (annio < 1000) {
		cout << "Ingrese un año valido " << endl;
		return false;
	}
	if (mes >= 1 && mes <= 12) {
		
		switch (mes)
		{
		case 1:
			if (dia >= 1 && dia <= 31) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de enero solo tiene 31 dias";
				return false;
			}
			break;
		case 2:
			if (annio % 4 == 0 && annio % 100 != 0 || annio % 400 == 0) {
				if (dia >= 1 && dia <= 29) {
					cout << "La fecha es correcta ";
					return true;
				}
				else {
					cout << "La fecha no es correcta (el " << annio << " no es bisiesto)";
					return false;
				}
			}
			else {
				if (dia >= 1 && annio <= 28) {
					cout << "La fecha es correcta ";
					return true;
				}
				else {
					cout << "La fecha no es correcta (el " << annio << " no es bisiesto)";
					return false;
				}
			}
			break;
		case 3:
			if (dia >= 1 && dia <= 31) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de marzo solo tiene 31 dias";
				return false;
			}
			break;
		case 4:
			if (dia >= 1 && dia <= 30) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de abril solo tiene 30 dias";
				return false;
			}
			break;
		case 5:
			if (dia >= 1 && dia <= 31) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de mayo solo tiene 31 dias";
				return false;
			}
			break;
		case 6:
			if (dia >= 1 && dia <= 30) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de junio solo tiene 30 dias";
				return false;
			}
			break;
		case 7:
			if (dia >= 1 && dia <= 31) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de julio solo tiene 31 dias";
				return false;
			}
			break;
		case 8:
			if (dia >= 1 && dia <= 31) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de agost solo tiene 31 dias";
				return false;
			}
			break;
		case 9:
			if (dia >= 1 && dia <= 30) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de setiembre solo tiene 30 dias";
				return false;
			}
			break;
		case 10:
			if (dia >= 1 && dia <= 31) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de octubre solo tiene 31 dias";
				return false;
			}
			break;
		case 11:
			if (dia >= 1 && dia <= 30) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de noviembre solo tiene 30 dias";
				return false;
			}
			break;
		case 12:
			if (dia >= 1 && dia <= 31) {
				cout << "La fecha es correcta ";
				return true;
			}
			else {
				cout << "El mes de diciembre solo tiene 31 dias";
				return false;
			}
			break;
		}
	}
	else {
		cout << "Ingrese un mes valido " << endl;
		return false;
	}
}
//https://paste.ofcode.org/6KtKSXRNf9eb2vfvwVkDnF
void main() {
	int dd, mm, aa;

	cout << "Ingrese Fecha";
	cin >> dd;
	cin >> mm;
	cin >> aa;
	FechaEsValida(dd, mm, aa);


}