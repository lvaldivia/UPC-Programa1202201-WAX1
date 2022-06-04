#include <iostream>
using namespace std;

void intercambiar(int& A,int& B) {
	if (A > B) {
		cout << "Error" << endl;
	}
	else if (A < B) {
		int AInicial = A;
		A = B;
		B = AInicial;
		cout << "Valor de A luego de intercambio : " << A << endl;
		cout << "Valor de B luego de intercambio : " << B << endl;
	}
	else {
		cout << "Valor de A luego de intercambio : " << A << endl;
		cout << "Valor de B luego de intercambio : " << B << endl;

	}
}

void main() {

	int B;

	int A;

	cout << "Ingrese el valor de A" << endl;

	cin >> A;

	cout << "Ingrese el valor de B" << endl;

	cin >> B;

	intercambiar(A, B);
}
