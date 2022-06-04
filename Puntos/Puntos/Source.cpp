#include <iostream>

using namespace std;

void main() {

	int a, b;

	cout << "ingrese su numero: " << endl;

	cin >> a;

	cin >> b;
	int* a1 = &a;
	int* b1 = &b;
	cout << "A: " << a1 << endl << "B: " << b1 << endl;
	cout << "Jugando con el puntenero: " << (5 * *a1) << endl;

}