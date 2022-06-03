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

	cout << "Ingrese el código del producto: " << "\n"; cin >> codigo;

	int dia = codigo / 10000000000;

	int mes = (codigo - (dia * 10000000000)) / 100000000;

	int año = (codigo - (dia * 10000000000) - (mes * 100000000)) / 10000;

	char letra = (codigo - (dia * 10000000000) 
					- (mes * 100000000) - (año * 10000)) / 100;

	int pp = ((codigo - (dia * 10000000000) - (mes * 100000000) 
					- (año * 10000) - (letra * 100)));

	int fin = (pp > 0) * 0 + (pp == 0) * 1;

	cout << "El día de vencimiento es: " << dia << "\n";

	cout << "El mes de vencimiento es: " << mes << "\n";

	cout << "El año de nacimiento es: " << año << "\n";

	cout << "El tipo de producto es: " << letra << "\n";

	cout << "Producto perecible(0:No; 1:Sí): " << fin << "\n";
}