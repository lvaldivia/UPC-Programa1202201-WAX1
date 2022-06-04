#include <iostream>

using namespace std;

void main() {
	//https://paste.ofcode.org/R6jaG8FTNMMMeF3sL7Tr84
	int lado1, lado2, lado3;
	cout << "Ingrese lado 1 ";
	cin >> lado1;
	cout << "Ingrese lado 2 ";
	cin >> lado2;
	cout << "Ingrese lado 3 ";
	cin >> lado3;

	if (lado1 == lado2 && lado2 == lado3)
		cout << "Es equilatero" << endl;
	
	else {
		if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) 
			cout << "Es escaleno" << endl;
		else 
			cout << "Es isoceles" << endl;
		
	}
	/*if (lado1 == lado2 && lado2 == lado3)
		cout << "Es equilatero" << endl;
	if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3)
		cout << "Es escaleno" << endl;*/
	

	
}