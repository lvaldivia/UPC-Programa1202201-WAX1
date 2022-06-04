#include <iostream>

using namespace std;

/*
//Ejemplo 1 volvemos a asignar y reservar espacio para a y b

int DameSuma(int a,int b) {
a = 4 espacios
b = 4 espaciones
	int suma = a + b;
	return suma;
}*/


/*int DameSuma(int& a, int& b) {
	int suma = a + b;
	return suma;
}*/

int DameSuma(int* a, int* b) {
	int suma = *a + *b;
	return suma;
}

void DameAlgo(int& a,int& b, int& c) {
	a = a * 5;
	b = b * 2;
	c = c * 3;
}

void main() {
	/*int a = 10;
	int b = 20;
	int suma = DameSuma(&a, &b);
	cout << "La suma de los dos numeros es :" <<  suma << endl;*/

	int a = 2;
	int b = 3;
	int c = 4;
	DameAlgo(a, b, c);

	cout << "A :" << a << endl;
	cout << "B :" << b << endl;
	cout << "C :" << c << endl;

	/*int a2 = 10;
	int b2 = 20;
	int suma2 = DameSuma(a2, b2);
	cout << "La suma de los dos numeros es :" << suma2 << endl;*/

}