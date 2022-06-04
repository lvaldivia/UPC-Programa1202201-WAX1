#include <iostream>
using namespace std;

void main() {
	int alumnos, peso;
	cout << "Ingrese el numero de alumnos: " << endl;
	cin >> alumnos;
	int alumn_menos_40kg = 0;
	int alumn_entre_40_50kg = 0;
	int alumn_masmenos_50_60kg = 0;
	int alumn_mas_60kg = 0;

	if (alumnos > 0 && alumnos <= 50) {
		for (int i = 1; i <= alumnos; i++)
		{
			cout << "Peso alumno " << i << " :" << endl;
			cin >> peso;

			if (peso < 40) {
				alumn_menos_40kg += 1;
				//alumn_menos_40kg++;
			}
			else if (peso >= 40 && peso <= 50) {
				alumn_entre_40_50kg += 1;
			}
			else if (peso > 50 && peso < 60) {
				alumn_masmenos_50_60kg += 1;
			}
			else if (peso >= 60) {
				alumn_mas_60kg += 1;
			}
		}
		cout << "Alumnos de menos de 40 kg " << alumn_menos_40kg << endl;
		//completar cout
	}

}