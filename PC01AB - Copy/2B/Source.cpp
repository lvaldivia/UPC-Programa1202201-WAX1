#include <iostream>

using namespace std;


void main() {
	//ejercicio1 paste.ofcode.org/ahrzXVdYsGhXdfbFzhnhfk
	long long codigo;

	cout << "ingrese su codigo: " << endl;

	cin >> codigo;

	long long UUU = codigo / 10000000000000;

	long long F = (codigo - (UUU * 10000000000000)) / 1000000000000;

	long long PP = (codigo - (UUU * 10000000000000) - (F * 1000000000000)) / 10000000000;

	long long PP1 = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000)) / 100000000;

	long long DD = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000) - (PP1 * 100000000)) / 1000000;

	long long MM = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000) - (PP1 * 100000000) - (DD * 1000000)) / 10000;

	long long AAAA = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000) - (PP1 * 100000000) - (DD * 1000000) - (MM * 10000));

	int fragil = (F == 0) * 0 + (F > 0) * 1;
	int vencido = (2022 > AAAA && 4 > MM);

	cout << "Numero unico: " << UUU << endl;

	cout << "Fragil (0:Si ,1:No) " << fragil << endl;

	cout << "Pais de procedencia: " << (char)PP << (char)PP1 << endl;

	cout << "Dia, mes y año de vencimiento: " << DD << "-" << MM << "-" << AAAA << endl;

	cout << "Esta vencido (0:No,1:Si) " << vencido << endl;

}