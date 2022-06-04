#include <iostream>

#include <Windows.h>

#include <string>

using namespace std;
float area, perimetro;
void AreaYperimetro() {
	float radio;
	cout << "ingrese radio GAA: " << endl;
	cin >> radio;
	area = 3.1415 * (radio * radio);
	perimetro = 2 * (3.1415) * radio;
	
}

void main() {
	
	AreaYperimetro();
	cout << "area: " << area << endl << "perimetro: " << perimetro << endl;

}