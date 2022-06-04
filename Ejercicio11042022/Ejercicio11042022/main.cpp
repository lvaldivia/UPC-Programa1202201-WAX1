#include <iostream>

using namespace std;


void main() {
	//https://paste.ofcode.org/3adm3BGnQmSu3ndE2JwYTA7
	cout << "Sueldo mensual :";
	int sueldo; 
	char tipoVivienda, tarjetaCredito, tieneBendiciones;

	cin >> sueldo;
	cout << "Tipo de vivienda (P: pariente; A: alquilada; M: propia): ";
	cin >> tipoVivienda;
	cout << "Tarjeta de crédito (N: no tiene; S: si tiene): ";
	cin >> tarjetaCredito;
	cout << "Tiene carga familiar (N: no tiene; S: si tiene): ";
	cin >> tieneBendiciones;

	int puntajeObtenido =
		(sueldo < 1500) * 6 + (sueldo >= 1500 && sueldo <= 6000) * 12 + (sueldo > 6000) * 18 +

		(tipoVivienda == 'P') * 2 + (tipoVivienda == 'A') * 5 + (tipoVivienda == 'M') * 10 +

		(tarjetaCredito == 'S') * 6 + (tarjetaCredito == 'N') * 0 +

		(tieneBendiciones == 'S') * 6 + (tieneBendiciones == 'N') * 3;

	cout << "Puntaje Obtenido : " << puntajeObtenido << endl;

	bool otorgoPrestamo = puntajeObtenido > 20;

	cout << "Se le otorga el préstamo (0: No; 1: Sí): " << otorgoPrestamo;
}