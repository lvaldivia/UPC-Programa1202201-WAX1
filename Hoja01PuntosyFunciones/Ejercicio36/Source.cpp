#include <iostream>
using namespace std;

void Incrementar(float& a, float b) {
	a += b;
}

void main() {
	cout << "Ingrese el valor a modificar." << endl;
	float sonic; 
	cin >> sonic;
	cout << "Ingrese el valor para sumar." << endl;
	float tails; 
	cin >> tails;
	Incrementar(sonic, tails);
	cout << sonic;
}