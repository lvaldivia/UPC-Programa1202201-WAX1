#include <iostream>
using namespace std;

void main() {
	int numero = 523;

	//primera pasada
	//523 mod 10 = 3
	//numero = 523 / 10 = 52

	//segunda pasada
	//52 mod 10 = 2
	//numero = 52 / 10 = 5

	//tercera pasada
	//5 mod 10 = 5
	//numero = 5 / 10 = 0

	
	while (numero >= 1) {
		cout << numero % 10;
		numero /= 10;
	}
}
