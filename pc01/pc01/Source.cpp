















#include <iostream>
using namespace std;
void main() {
	cout << "Ingrese e tipo de pokemon que tiene (F: fuego, A: agua, P: planta, E: electrico, O: otros)" << endl;
	char tipo;
	cin >> tipo;
	cout << "Ingrese los meses de entrenamiento que tiene su pokemon" << endl;
	double meses, precio;
	cin >> meses;
	precio = ((tipo == 'F' && meses <= 10) * 22) + ((tipo == 'F' && meses > 10 && meses < 50) * 50) + ((tipo == 'F' && meses >= 50) * 150) +
		((tipo == 'A' && meses <= 10) * 5) + ((tipo == 'A' && meses > 10 && meses < 50) * 25) + ((tipo == 'A' && meses >= 50) * 80) +
		((tipo == 'P' && meses <= 10) * 18) + ((tipo == 'P' && meses > 10 && meses < 50) * 40) + ((tipo == 'P' && meses >= 50) * 60) +
		((tipo == 'E' && meses <= 10) * (22 - (22 * 0.20))) + ((tipo == 'E' && meses > 10 && meses < 50) * (90 - (90 * 0.2))) + ((tipo == 'E' && meses >= 50) * (250 - (250 * 0.2))) +
		((tipo == 'O' && meses <= 10) * 10) + ((tipo == 'O' && meses > 10 && meses < 50) * 20) + ((tipo == 'O' && meses >= 50) * 55);
	cout << "Monedas que gastar: " << precio << " pokedolares" << endl;
}