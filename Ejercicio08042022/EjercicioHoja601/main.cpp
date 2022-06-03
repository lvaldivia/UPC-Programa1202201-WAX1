#include <iostream>
using namespace std;

void main() {
	long long litros;

	cout << "Indique el consumo de litros de la vivienda: " << "\n"; cin >> litros;



	double pago = ((litros <= 50) * 20) + ((litros > 50 && litros <= 200) * (((litros - 50) * 2) + 20)) + ((litros >= 201) * (((litros - 200) * 3.5) + (150 * 2) + 20));

	double pago = 20 + (litros < 50)


	cout << "El pago final seria: " << pago << "\n";
}