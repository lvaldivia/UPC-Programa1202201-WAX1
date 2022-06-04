#include <iostream>
#include <string>

using namespace std;

void main() {
	//https://paste.ofcode.org/34EpafMtNCwvunf4uj3mWUP
	//https://paste.ofcode.org/Fu9kZfSWvnEDVJMgKXzzqF
	//https://paste.ofcode.org/EZ8VDK2KSaW5peWXgwXjgR
	int dia;
	cout << "Ingresa tu dia de nacimiento " << endl;
	cin >> dia;
	int mes;
	cout << "Ingresa tu mes de nacimiento " << endl;
	cin >> mes;
	int year;
	cout << "Ingresa tu año de nacimiento " << endl;
	cin >> year;
	string color;
	switch (mes)
	{
	case 1:
	case 2:
	case 3:
		if (year % 2 == 0) {
			if (dia % 2 == 0) {
				color = "Rojo";
			}
			else {
				color = "Celeste";
			}
		}
		else {
			if (dia % 2 == 0) {
				color = "Morado";
			}
			else {
				color = "Negro";
			}
		}
		break;
	case 4:
	case 5:
	case 6:
		if (year % 2 == 0) {
			if (dia % 2 == 0) {
				color = "Naranja";
			}
			else {
				color = "Verde";
			}
		}
		else {
			if (dia % 2 == 0) {
				color = "Turquesa";
			}
			else {
				color = "Gris";
			}
		}
		break;
	case 7:
	case 8:
	case 9:
		if (year % 2 == 0) {
			if (dia % 2 == 0) {
				color = "Marron";
			}
			else {
				color = "Fucsia";
			}
		}
		else {
			if (dia % 2 == 0) {
				color = "Azul";
			}
			else {
				color = "Amarillo";
			}
		}
		break;
	//if(mes == 10 || mes == 11 || mes == 12)

		//if(mes == 10){}
		//if(mes == 11){}
		//if(mes == 12){}
	case 10:
	case 11:
	case 12:
		if (year % 2 == 0) {
			if (dia % 2 == 0) {
				color = "Violeta";
			}
			else {
				color = "Rosado";
			}
		}
		else {
			if (dia % 2 == 0) {
				color = "Olivo";
			}
			else {
				color = "Blanco";
			}
		}
		break;
	}
	cout << "Tu color es :" << color << " GAAAA " << endl;
}