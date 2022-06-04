#include <iostream>
using namespace std;

int potencia(int base, int exponente) {
	int resultado = 1;
	for (int i = 1; i <= exponente; i++)
	{
		resultado *= base;
	}
	return resultado;
}

int factorial(int numero) {
	int resultado = 1;
	for (int i = 1; i <= numero; i++)
	{
		resultado = resultado * i;
	}
	return resultado;
}

float exponencial(int k, int a) {
	float resultado = 1;
	for (int i = 1; i <= k; i++)
	{
		resultado += (potencia(a, i) / factorial(i));
	}
	return resultado;
}

void dibuja(int numero) {
	for (int filas = 1; filas <= numero; filas++)
	{
		for (int columnas = 1; columnas <= numero - filas; columnas++)
		{
			cout << " ";
		}
		for (int columnas = 1; columnas <= (2 * filas) - 1; columnas++)
		{
			cout << columnas;
		}
		cout << endl;
	}
	for (int filas = 1; filas <= numero - 1; filas++)
	{
		for (int columnas = 1; columnas <= filas; columnas++)
		{
			cout << ' ';
		}
		int limit = (2 * numero) - (2 * filas) - 1;
		for (int columnas = 1; columnas <= limit; columnas++) {
			cout << columnas;
		}
		cout << endl;
	}
}

void main() {
	cout << "               MENU PRINCIPAL                " << endl;
	cout << "1) Determinar el factorial de un numero " << endl;
	cout << "2) Calcular el valor de E a la A " << endl;
	cout << "3)Imprime el rombo " << endl;
	cout << "4) Fin " << endl;

	int *opcion = new int;
	if (opcion == NULL) {
		cout << "No se puede asignar la memoria, intente en unos momentos....." << endl;
	}
	else {
		cin >> *opcion;
		if (*opcion == 1) {
			int* numero = new int;
			if (numero == NULL) {
				cout << "No se puede asignar la memoria para la operacion....." << endl;
			}
			else {
				cout << "Ingrese un numero " << endl;
				cin >> *numero;
				cout << "EL resultado del factorial es : " << factorial(*numero) << endl;
			}
		}
		else if (*opcion == 2) {
			int* k= new int;
			int* a = new int;
			if (k == NULL || a == NULL) {
				cout << "No se puede asignar la memoria para la operacion....." << endl;
			}
			else {
				cout << "Ingrese k: " << endl;
				cin >> *k;
				cout << "Ingrese a: " << endl;
				cin >> *a;
				cout << "EL resultado del exponencial es : " << exponencial(*k,*a) << endl;
			}
		}
		else if (*opcion == 3) {
			int* N = new int;
			if (N == NULL) {
				cout << "No se puede asignar la memoria para la operacion....." << endl;
			}
			else {
				cout << "Ingrese N: " << endl;
				cin >> *N;
				dibuja(*N);
			}
		}
		else {
		
		}
	}
	

}
