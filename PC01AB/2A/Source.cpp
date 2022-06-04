#include <iostream>

using namespace std;


void main() {
	//https://paste.ofcode.org/iWDGisMqWzq9wUzpauLbhf
	long long codigo;
	cin >> codigo;
	//20210812671
	//0812671
	//12671
	//671
	long long year = codigo / 10000000;
	long long mes = (codigo - (year * 10000000)) / 100000;
	long long dias = (codigo - (year * 10000000)- (mes * 100000)) / 1000;
	long long tt = (codigo - (year * 10000000) - (mes * 100000) - (dias * 1000)) / 10;
	int perecible = (codigo - (year * 10000000) - (mes * 100000) - (dias * 1000) - (tt * 10));
	int vencido = (2022 > year) * 83 + (2022 < year) * 78;

	cout << "Día de vencimiento: " << dias << endl;
	cout << "Mes de vencimiento: " << mes << endl;
	cout << "Año de vencimiento : " << year << endl;
	cout << "El tipo de producto es :" << char(tt) << endl;
	cout << "Producto perecible(0: No; 1; Sí) : "<< perecible << endl;
	cout << "Producto vencido(S : sí; N: no) : " << char(vencido) << endl;


}