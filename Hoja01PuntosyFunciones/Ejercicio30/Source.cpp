#include <iostream>
#include <Windows.h>
#include <string>
#include <cmath> 
using namespace std;
float Longitud(float x1, float y1, float x2, float y2) {

	float longitudVertices = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

	return longitudVertices;
}
bool Estriangulo(float lado1, float lado2, float lado3) {
	/*/return (lado1 < lado2 + lado3
					&& lado1 > lado2 - lado3 
					&& lado2 < lado1 + lado3 
					&& lado2 > lado1 - lado3 
					&& lado3 < lado1 + lado2 
					&& lado3 > lado1 - lado2);*/
	if (lado1 < lado2 + lado3 && lado1 > lado2 - lado3 && lado2 < lado1 + lado3 && lado2 > lado1 - lado3 && lado3 < lado1 + lado2 && lado3 > lado1 - lado2) {
		return true;
	}
	else
	{
		return false;
	}
}
float semiP(float lado1, float lado2, float lado3) {
	float semiperimetro = (lado1 + lado2 + lado3) / 2;
	return semiperimetro;
}
float Area(float semiP, float lado1, float lado2, float lado3) {
	float area = sqrt(semiP * (semiP - lado1) * (semiP - lado2) * (semiP - lado3));
	return area;
}

void main() {
	float x1, x2, y1, y2, z1, z2;
	cout << "ingrese cords primero vertice: " << endl;
	cin >> x1;
	cin >> x2;
	cout << "ingrese cords segundo vertice: " << endl;
	cin >> y1;
	cin >> y2;
	cout << "ingrese cords tercer vertice: " << endl;
	cin >> z1;
	cin >> z2;
	float lado1 = Longitud(x1, x2, y1, y2);
	float lado2 = Longitud(x1, x2, z1, z2);
	float lado3 = Longitud(y1, y2, z1, z2);

	int esTriangulo = Estriangulo(lado1, lado2, lado3);
	if (esTriangulo == 1) {
		cout << "Es un triangulo" << endl;
	}
	else
	{
		cout << "no" << endl;
	}

	float SemiP = semiP(lado1, lado2, lado3);
	cout << "el semiperimetro: " << SemiP << endl;
	float area = Area(SemiP, lado1, lado2, lado3);
	cout << "area: " << area << endl;

}