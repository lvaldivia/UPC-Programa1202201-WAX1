#include <iostream>
using namespace std;

void main() {
	cout << "ingrese un numero para sacar su fatorial" << endl;
	int n;
	cin >> n;
	int nF = 1;
	for (int i = 0; i < n; i++) {
		nF *= (n - i);
	}
	cout << "n!= " << nF << endl;
}