/*/Escribir un programa que a través de dos funciones permita convertir de soles a dólares y de  \\\\  /
dólares a soles.*/
#include<iostream>
using namespace std;
//variables globales
float soles, dolares, precio;

//definicion de funciones
float dolaresasoles(float& dolares, float& precio) {
	float cambio;
	cambio = dolares * precio;
	return cambio;
}

float solesadolares(float& soles, float& precio) {
	float cambio;
	cambio = soles * precio;
	return cambio;
}

int main() {
	int opcion = 0;
	
	do
	{
		cout << "\tMENU DE OPCIONES" << endl;
		cout << "1.DOLARES A SOLES" << endl;
		cout << "2.SOLES A DOLARES" << endl;
		//te paso esto
		cin >> opcion;

		switch (opcion)
		{
		case 1:
			cout << "Ingrese el precio del sol: "; cin >> precio;
			cout << "Ingrese la cantidad de dolares: "; cin >> dolares;
			cout << "El monto es: " << dolaresasoles(dolares, precio) << endl;
			//poner break en los cases
			break;
		case 2:
			cout << "Ingrese el precio del dolar: "; cin >> precio;
			cout << "Ingrese la cantidad de soles: "; cin >> dolares;
			cout << "El monto es: " << solesadolares(dolares, precio) << endl;
			//poner break en los cases
			break;
		default:
			break;
		}
		system("cls");
	} while (opcion <= 4);
}