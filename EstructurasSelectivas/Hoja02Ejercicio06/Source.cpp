#include <iostream>
using namespace std;

void main() {
	cout << "ingrese el tipo de consumo (1:comercial o 2:domestico)" << endl;
	int tipo, KWH, opcion1, opcion2, opcion3;
	cin >> tipo;
	float precio;
	cout << "ingrese la cantidad de KWH utilizado" << endl;
	cin >> KWH;
	switch (tipo)
	{
	case 1:
		precio = KWH * 1.58;
		cout << "El monto a pagar es " << precio << endl;
		break;
	case 2:
		if (KWH <= 100)
			precio = KWH * 0.35;
		else if (KWH > 100 && KWH <= 500)
			precio = (100 * 0.35) + ((KWH - 100) * 1.05);
		else
			precio = (100 * 0.35) + ((KWH - 100) * 1.05) + ((KWH - 500) * 1.36);
		cout << "El monto a pagar es " << precio << endl;
		break;
	default:
		cout << "ingrese un tipo valido" << endl;
		break;
	}
}