#include <iostream>
using namespace std;
void main() {
	cout << "Ingrese el numero de alumnos" << endl;
	int n;
	cin >> n;
	int ef, ep, tf;
	float promedio = 0;
	for (int i = 1; i <= n; i++)
	{
		cout << "Ingrese el EF del Alumno " << i << ":";
		cin >> ef;
		cout << "Ingrese el EP del Alumno " << i << ":";
		cin >> ep;
		cout << "Ingrese el tf del Alumno " << i << ":";
		cin >> tf;
		promedio = (0.55 * ef) + (0.3 * ep) + (0.15 * tf);
		cout << "Su promedio final del Alumno " << promedio << endl;
	}
	
}