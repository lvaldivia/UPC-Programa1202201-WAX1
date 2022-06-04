#include <iostream>
using namespace std;

void main() {
	cout << "Ingrese cantidad de neumaticos" << endl;
	int neumaticos, monto_a_pagar;
	cin >> neumaticos;
	//145 < 3
	//3 y 5 138
	//los demas 135
	//https://paste.ofcode.org/BxaESgDfAhSLRxx6TCLtzZ
	monto_a_pagar = ((neumaticos < 3) * 145)
		+ ((neumaticos >= 3 && neumaticos <= 5) * 138)
		+ ((neumaticos > 5) * 135);
	cout << "Costo por llanta " << monto_a_pagar << endl;
	cout << "Monto total " << monto_a_pagar * neumaticos << endl;
	
	
}