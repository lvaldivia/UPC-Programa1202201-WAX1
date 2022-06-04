#include <iostream>
#include <math.h>
using namespace std;

void main() {
	cout << "1.- Área de un Triangulo " << endl;
	cout << "2.- Área de un Rectángulo " << endl;
	cout << "3.- Área de un Circulo " << endl;
	cout << "4.- Área de un Cuadrado " << endl;
	cout << "5.- Salir " << endl;
	cout << "¿Qué opción desea?" << endl;
	int opcion;
	cin >> opcion;
	float area;
	switch (opcion)
	{
	case 1:
		int base, altura;
		cout << "Ingresa la base " << endl;
		cin >> base;
		cout << "Ingresa la altura " << endl;
		cin >> altura;
		area = (base * altura) / 2;
		cout << "El area del triangulo es " << area << endl;
		break;
	case 2:
		int baseR, alturaR;
		cout << "Ingresa la base " << endl;
		cin >> baseR;
		cout << "Ingresa la altura " << endl;
		cin >> alturaR;
		area = (baseR * alturaR);
		cout << "El area del rectangulo es " << area << endl;
		break;
	case 3:
		int radio;
		cout << "Ingresa tu radio " << endl;
		cin >> radio;
		area = (3.14) * pow(radio, 2);
		cout << "El area del circulo es " << area << endl;
		break;
	case 4:
		int lado;
		cout << "Ingresa tu lado " << endl;
		cin >> lado;
		area = lado * lado;
		cout << "El area del cuadrado es " << area << endl;
		break;
	case 5:
		break;
	default:
		cout << "No has seleccionado una opcion valida, para el otro year sera" << endl;
		break;
	}


}