#include <iostream>
using namespace std;

void main() {
	cout << "Ingrese su consumo " << endl;
	int consumo;
	cin >> consumo;
	//sacamos si el consumo supero los 200 (opcion 3)
	int opcion3 = (consumo > 200) * (consumo - 200);
	int monto = 20 +
		//primeros 50 gratis
		(consumo <= 50) * 0 +
		//comparamos el consumo pero en la condicion del 200 le quitamos los 50 de arriba
		(consumo > 50 && consumo - 50 <= 200) * 
		//al consumo le quitamos los primeros 50 y si es que tuviera de la opcion3
		(consumo - 50 - opcion3) * 2 +
	//es mayor a 200, sacamos el restante de litros y lo multiplicamos por 3.5
		(consumo > 200) * (opcion3 * 3.5);

	cout << "El monto a pagar es " << monto << endl;

}