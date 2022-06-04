#include <iostream>

using namespace std;


void main() {
	//paste.ofcode.org/q8RnttNadwxfGhvnhjdJST
	//69767665787
	//20210812671
	//767665787
	//7665787
	//65787
	cout << "ingrse codigo " << endl;
	long long codigo;
	cin >> codigo;
	long long AA = codigo / 1000000000;
	long long BB = (codigo - (AA * 1000000000)) / 10000000;
	long long CC = (codigo - (AA * 1000000000) - (BB * 10000000)) / 100000;
	long long DD = (codigo - (AA * 1000000000) - (BB * 10000000) - (CC* 100000)) / 1000;
	long long EE = (codigo - (AA * 1000000000) - (BB * 10000000) - (CC * 100000) - (DD* 1000)) / 10;
	long long F = 
		(codigo - (AA * 1000000000) - (BB * 10000000) - (CC * 100000) - (DD * 1000) - (EE*10));

}