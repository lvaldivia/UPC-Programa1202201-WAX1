#include <iostream>

using namespace std;

void main() {

	//120820206712
	//120000000000
	//820206712
	//20206712
	//6712
	//12

	long long codigo;

	cout << "Ingrese el c�digo del producto: " << "\n"; cin >> codigo;

	int dia = codigo / 10000000000;

	int mes = (codigo - (dia * 10000000000)) / 100000000;

	int a�o = (codigo - (dia * 10000000000) - (mes * 100000000)) / 10000;

	char letra = (codigo - (dia * 10000000000) 
					- (mes * 100000000) - (a�o * 10000)) / 100;

	int pp = ((codigo - (dia * 10000000000) - (mes * 100000000) 
					- (a�o * 10000) - (letra * 100)));

	int fin = (pp > 0) * 0 + (pp == 0) * 1;

	cout << "El d�a de vencimiento es: " << dia << "\n";

	cout << "El mes de vencimiento es: " << mes << "\n";

	cout << "El a�o de nacimiento es: " << a�o << "\n";

	cout << "El tipo de producto es: " << letra << "\n";

	cout << "Producto perecible(0:No; 1:S�): " << fin << "\n";
}