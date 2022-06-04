#include <iostream>
using namespace std;

void main() {
	int mes, year;
	cout << "ingresa tu mes " << endl;
	cin >> mes;
	cout << "ingresa tu a"<< (char)164 <<"o " << endl;
	cin >> year;

	//bool esBisiesto = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
	bool esBisiesto;
	if (year % 4 == 0 && year % 100 != 0) {
		esBisiesto = true;
	}
	else {
		esBisiesto = false;
	}
	int dias;
	switch (mes)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		dias = 31;
		break;
	case 2:
		/*if (esBisiesto) {
			dias = 29;
		}
		else {
			dias = 28;
		}*/
		dias = esBisiesto ? 29 : 28;
		//dias = (esBisiesto * 29) + (!esBisiesto * 28);
		break;
	default:
		dias = 30;
		break;

	}
	cout << "Cantidad de dias " << dias;
}