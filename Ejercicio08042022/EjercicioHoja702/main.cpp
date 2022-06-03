#include <iostream>
using namespace std;

void main() {
	cout << "Ingrese el valor " << endl;
	int numero;
	//abcdef a afbecd
	//463527
	cin >> numero;
	int primer_valor = numero / 100000;
	int segundo_valor = (numero - (primer_valor * 100000)) / 10000;
	int tercer_valor = (numero - (primer_valor * 100000) - (segundo_valor * 10000)) / 1000;
	int cuarto_valor = (numero - (primer_valor * 100000) 
			- (segundo_valor * 10000) - (tercer_valor * 1000)) / 100;
	int quinto_valor = (numero - (primer_valor * 100000) 
		- (segundo_valor * 10000) - (tercer_valor * 1000) - (cuarto_valor * 100)) / 10;
	int sexto_valor = (numero - (primer_valor * 100000)
		- (segundo_valor * 10000) - (tercer_valor * 1000) - (cuarto_valor * 100)
		-(quinto_valor*10)
		);

	cout << primer_valor << sexto_valor << segundo_valor << quinto_valor << tercer_valor << cuarto_valor;


}