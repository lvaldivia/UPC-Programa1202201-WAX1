#include <iostream>
using namespace std;

void main() {
	char raza;
	long long transformacion;
	long long  poder;
	int verificador;
	cout << "Ingrese su raza " << endl;
	cin >> raza;

	cout << "Ingrese su transformacion: " << endl;
	cin >> transformacion;
	//https://paste.ofcode.org/5DJhN6LT8XvzMpdpAY5xJe
	cout << "Ingrese su verificador: " << endl;
	cin >> verificador;

	poder = ((raza == 'S' && transformacion == 1) * 5000) +
		((raza == 'S' && transformacion == '2') * 13000) +
		((raza == 'S' && transformacion == 3) * 28000) +
		((raza == 'N' && transformacion == 1) * 450) +
		((raza == 'N' && transformacion == 2) * 10000) +
		((raza == 'N' && transformacion == 3) * 20000) +
		((raza == 'H' && transformacion == 1) * 250) +
		((raza == 'H' && transformacion == 2) * 2000) +
		((raza == 'H' && transformacion == 3) * 10000);

	double bono_poder = ((verificador == 0) * (poder + poder * 0.5)) + ((verificador % 2 == 0) * (poder + poder * 0.20)) + ((verificador % 2 != 0) * (poder + poder * 0.40));
	cout << "Su total de poder es " << bono_poder << endl;
}