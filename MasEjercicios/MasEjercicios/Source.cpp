#include <iostream>
using namespace std;

void entradaNcomplejos(int& real1,int& real2,int &imagina1,int& imagina2) {
	cout << "Ingrese los datos del 1° N complejo: " << endl ;
	cout <<" Parte real: ";
	cin >> real1;
	cout << " Parte imaginaria: ";
	cin >> imagina1;

	cout << "Ingrese los datos del 2° N complejo: " << endl;
	cout << " Parte real: ";
	cin >> real2;
	cout << " Parte imaginaria: ";
	cin >> imagina2;
}

void suma(int& real1, int& real2, int& imagina1, int& imagina2) {
	int suma = real1 + real2;
	int imagina = imagina1 + imagina2;
	cout << "\nLa suma de numeros complejos es: ";
	cout << "(" << real1 << " + " << imagina1 << "i) + (" << real2 << " + " << imagina2 << "i ) = ( " << suma << " + " << imagina << "i)";
}


void resta(int& real1, int& real2, int& imagina1, int& imagina2) {
	int resta = real1 - real2;
	int imagina = imagina1 - imagina2;
	cout << "\nLa resta de numeros complejos es: ";
	cout << "(" << real1 << " - " << imagina1 << "i) + (" << real2 << " - " << imagina2 << "i ) = ( " << resta << " + " << imagina << "i)";
}

void main() {
	int* opcion = new int;
	cout << "\tMENU DE OPCIONES" << endl;
	cout << "1. Sumar 2 Numeros Complejos" << endl;
	cout << "2. Restar 2 Numeros Complejos." << endl;
	cout << "3. Salir del programa" << endl;
	cin >> *opcion;
	int real1, real2, imagina1,imagina2;
	switch (*opcion)
	{
	case 1:
		entradaNcomplejos(real1, real2, imagina1, imagina2);
		suma(real1, real2, imagina1, imagina2);
		break;
	case 2:
		entradaNcomplejos(real1, real2, imagina1, imagina2);
		resta(real1, real2, imagina1, imagina2);
		break;
	case 3:cout << "Adios";
		break;
	default:
		break;
	}
}