#include <iostream>
using namespace std;
int Numeros(int& x, int& y) {
	if (x < y) {
		for (int i = x + 1; i < y; i++) {
			cout << i << " ";
		}
		cout << endl;
	}
	else if (x > y) {
		for (int i = y + 1; i < x; i++) {
			cout << i << " ";
		}
		cout << endl;
	}
	else {
		cout << "no hay numeros en medio" << endl;
	}
	return 0;
}
void main() {
	cout << "ingrese 2 numeros" << endl;
	int x, y;
	cin >> x >> y;
	Numeros(x, y);
}