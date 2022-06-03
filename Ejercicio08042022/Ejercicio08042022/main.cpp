#include <iostream>
using namespace std;

void main() {
	//https://paste.ofcode.org/4wKRGVD9dHjuTYHAcq5E3
	cout << "Ingrese el mes " << endl;
	int mes;
	cin >> mes;

	int dias = ((mes == 2) * 28)
		+ ((mes == 4 || mes == 6 || mes == 9 || mes == 11) * 30)
		+ ((mes == 1 || mes == 5 || mes == 3 
			|| mes == 7 || mes == 8 || mes == 12 || mes == 10) * 31);

	cout << "El mes " << mes << " tiene " << dias << " dias " << endl;
	
}