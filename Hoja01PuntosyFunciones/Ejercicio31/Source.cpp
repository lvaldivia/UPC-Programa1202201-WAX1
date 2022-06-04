#include<iostream>
using namespace std;

float calcularComision(int& N) {

	double ventaTotal, comisionMensual = 0, comision = 0, contadorEmpleadosComision = 0;
	const int resto = 50000;
	//https://paste.ofcode.org/YxqWvtT2xSbjSWPSkay7Bx
	for (int i = 1; i <= N; i++)
	{
		//do {
			cout << "\nIngrese las ventas totales del empleado " << i << ": ";
			cin >> ventaTotal;
		//} while (ventaTotal < 0);

		if (ventaTotal < 50000) {
			comision = ventaTotal * 0.01;
			cout << "Su comision es: " << comision << endl;
		}
		else if (ventaTotal >= 50000 && ventaTotal <= 150000) {
			comision = (50000 * 0.01) + ((ventaTotal - resto) * 0.02);
			cout << "Su comision es: " << comision << endl;
		}
		else if (ventaTotal > 150000) {			// Se puede poner else, lo hice para acordarme 
			comision = (50000 * 0.01) + (100000 * 0.02) + ((ventaTotal - 150000) * 0.03);
			cout << "Su comision es: " << comision << endl;
		}

		comision >= 2000 ? contadorEmpleadosComision++ : 0;

		comisionMensual += comision;
	}

	cout << endl;
	cout << "\nLa comision mensual de " << N << " empleados es: " << comisionMensual << endl;
	cout << "\nNumero de empleados que recibieron una comision de por los menos 2000 dolares: " << contadorEmpleadosComision << endl;

	return 0;
}

void main() {

	int N;

	//do {
		cout << "Ingrese el numero de empleados: ";
		cin >> N;
	//} while (N <= 0);

	calcularComision(N);

}