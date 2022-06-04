#include <iostream>
using namespace std;

void main() {
	//paste.ofcode.org/Vi49KKvyRcQK2iKKMbJqCj
	//UUUFPPPPDDMMAAAA
	cout << "ingrese el codigo: " << endl;
	//1120677212012020
	//0677212012020
	//677212012020
	//7212012020
	//12012020
	//012020
	//2020
	long long codigo;

	cin >> codigo;

	long long UUU = codigo / 10000000000000;

	long long F = (codigo - (UUU * 10000000000000)) / 1000000000000;

	long long PP = (codigo - (UUU * 10000000000000) - (F * 1000000000000)) / 10000000000;

	long long PP1 = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000)) / 100000000;

	long long DD = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000) - (PP1 * 100000000)) / 1000000;

	long long MM = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000) - (PP1 * 100000000) - (DD * 1000000)) / 10000;

	long long AAAA = (codigo - (UUU * 10000000000000) - (F * 1000000000000) - (PP * 10000000000) - (PP1 * 100000000) - (DD * 1000000) - (MM * 10000));

	int fragil = (F == 0) * 0 + (F > 0) * 1;


	cout << "numero unico: " << UUU << endl;

	cout << "fragil (0:si 1:no) " << fragil << endl;

	cout << "pais de procedencia: " << (char)PP << (char)PP1 << endl;

	cout << "Dia, mes y año de vencimiento: " << DD << "-" << MM << "-" << AAAA << endl;

	int vencido = (2022 > AAAA && 4 > MM);
	cout << "Esta vencido : " << vencido << endl;


}