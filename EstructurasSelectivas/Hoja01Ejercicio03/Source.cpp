#include <iostream>
using namespace std;

void main() {
	//https://paste.ofcode.org/5ArR5b3b75zmJPUGZvPMMY
	float nota;
	cout << "ingresar nota(1 al 20): " << endl;
	cin >> nota;
	if (nota >= 0 && nota < 12.5) {
		cout << " estas desaprobado " << endl;
	}
	else if (nota >= 12.5 && nota <= 20) {
		cout << "estas aprobado" << endl;
	}
	else {
		cout << "dato no valido" << endl;
	}
}