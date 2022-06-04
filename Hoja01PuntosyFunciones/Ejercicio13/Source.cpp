#include <iostream>
using namespace std;

void intercambiar(int x,int y) {
	int antesX = x;
	int antesY = y;
	y = antesX;
	x = antesY;
	cout << "Los nuevos valores son x " << x << " , y " << y << endl;
}

void main() {
	int x, y;
	cout << "Ingresa los valores " << endl;
	cin >> x;
	cin >> y;
	intercambiar(x, y);
}