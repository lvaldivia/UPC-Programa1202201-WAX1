#include <iostream>
#include <math.h>
#include <string>
using namespace std;
void main() {
	string a;
	int dato;
	int i;
	int Números_Leídos = 0;
	int Número_Mayor = -INFINITY;
	int Número_Menor = INFINITY;
	int Números_Positivos = 0;
	int números_Negativos = 0;
	float promedio = 0;

	while (true) {
		a = "ingrese numero: ";
		cout << a << endl;
		cin >> dato;
		if (dato == 0) {
			break;
		}
		Números_Leídos = Números_Leídos + 1; //numero se suma más 1 cada que se repite el codigo para hallar cuantos numeros se leyó

		if (Número_Mayor < dato) {
			Número_Mayor = dato; //dato reemplaza numero mayor y se repite if para hallar el siguiente dato mayor
		}
		if (Número_Menor > dato) {
			Número_Menor = dato; //dato reemplaza numero menor y se repite if para hallar el siguiente dato menor
		}
		if (dato > 0) {
			Números_Positivos = Números_Positivos + 1; //almacenar dato y contar cuantos hay.
		}
		if (dato < 0) {
			números_Negativos = números_Negativos + 1; //almacenar dato y contar cuantos hay.
		}
		promedio = promedio + dato;
	}

	/*for (i = 1; i++;) {
		a = "ingrese numero: ";
		cout << a << endl;
		cin >> dato;
		if (dato == 0) {
			break;
		}
		Números_Leídos = Números_Leídos + 1; //numero se suma más 1 cada que se repite el codigo para hallar cuantos numeros se leyó

		if (Número_Mayor < dato) {
			Número_Mayor = dato; //dato reemplaza numero mayor y se repite if para hallar el siguiente dato mayor
		}
		if (Número_Menor > dato) {
			Número_Menor = dato; //dato reemplaza numero menor y se repite if para hallar el siguiente dato menor
		}
		if (dato > 0) {
			Números_Positivos = Números_Positivos + 1; //almacenar dato y contar cuantos hay.
		}
		if (dato < 0) {
			números_Negativos = números_Negativos + 1; //almacenar dato y contar cuantos hay.
		}
		promedio = promedio + dato;
	}*/
	cout << "numero leidos: " << Números_Leídos << endl;
	cout << "numero mayor: " << Número_Mayor << endl;
	cout << "numero menor: " << Número_Menor << endl;
	cout << "numeros positivos: " << Números_Positivos << endl;
	cout << "numeros negativos: " << números_Negativos << endl;
	cout << "promedio: " << promedio / Números_Leídos << endl;

}