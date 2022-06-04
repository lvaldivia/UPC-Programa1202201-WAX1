#include <iostream>
#include <string>

using namespace std;

float AreaCirculo(float* radio) {
	float area = 3.1415 * (*radio * *radio);
	return area;
}

void main() {

	float radio;

	cout << "ingrese radio: " << endl;

	cin >> radio;

	float* ptrRadio = &radio;

	cout << "area: " << AreaCirculo(ptrRadio) << endl;

}