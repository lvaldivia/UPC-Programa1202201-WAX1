#include <iostream>

using namespace std;

bool EsBisiesto(int year) {

	/*if (year % 4 == 0 && year % 100 != 0 or year % 400 == 0) {
		return 	true;
	}
	//else {
		//return false;
	//}
	return false;*/

	return year % 4 == 0 && year % 100 != 0 or year % 400 == 0;
}

void main() {
	if (EsBisiesto(1501)) {
		cout << "Es bisiesto ";
	}
	else {
		cout << "No es bisiesto";
	}
	cout << endl;
	cout << (EsBisiesto(1501) ? " Es bisiesto " : "No es bisiesto ") << endl;
}