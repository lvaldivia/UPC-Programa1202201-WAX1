#include <iostream>
using namespace std;

void main() {
	//https://paste.ofcode.org/tAKywhpx4b9zKXYa8fcuyS
	char tipo;
	cout << "Ingrese tu tipo Pokemon" << endl;
	cin >> tipo;
	int tiempo;
	cout << "Ingrese su tiempo de entrenamiento " << endl;
	cin >> tiempo;
	int monedas =
		((tipo == 'F') && (tiempo <= 10)) * 22 +
		((tipo == 'F') && (tiempo > 10 && tiempo < 50)) * 50 +
		((tipo == 'F') && (tiempo >= 50)) * 150 +
		((tipo == 'A') && (tiempo <= 10)) * 5 +
		((tipo == 'A') && (tiempo > 10 && tiempo < 50)) * 25 +
		((tipo == 'A') && (tiempo >= 50)) * 80 +

		((tipo == 'P') && (tiempo <= 10)) * 18 +
		((tipo == 'P') && (tiempo > 10 && tiempo < 50)) * 40 +
		((tipo == 'P') && (tiempo >= 50)) * 60 +

		((tipo == 'E') && (tiempo <= 10)) * 22 +
		((tipo == 'E') && (tiempo > 10 && tiempo < 50)) * 90 +
		((tipo == 'E') && (tiempo >= 50)) * 250 +

		((tipo == 'O') && (tiempo <= 10)) * 10 +
		((tipo == 'O') && (tiempo > 10 && tiempo < 50)) * 20 +
		((tipo == 'O') && (tiempo >= 50)) * 55
		;

	int descuento = (tipo == 'E') * (monedas * 0.2);
	int total_a_pagar = monedas - descuento;
	cout << "ingrese Tipo :" << tipo << endl;
	cout << "Ingrese Tiempo de Entrenamiento :" << tiempo << endl;
	cout << "Descuento :" << descuento << endl;
	cout << "Monedas que gastar :" << total_a_pagar << endl;

}