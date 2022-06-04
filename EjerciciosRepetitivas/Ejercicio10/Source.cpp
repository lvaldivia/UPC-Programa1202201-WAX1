#include <iostream>
using namespace std;

void main() {
	int intentos = 12;
	//int aleatorio = 25;
	srand((unsigned)time(NULL));
	int aleatorio = 0 + (rand() % 100);
	cout << aleatorio << endl;
	int intentos_usuarios = 0;
	int numero_usuario;
	
	//for (int i = 1;i<=intentos;i++)
	for (int i = 1;i++;)
	{
		cout << "Intento " << i -1 << "Ingrese N: ";
		cin >> numero_usuario;
		intentos_usuarios++; //intentos_usuarios = intentos_usuarios + 1;
		////intentos_usuarios += 1;
		if (numero_usuario > aleatorio) {
			cout << "El numero es menor" << endl;
		}
		else if (numero_usuario < aleatorio) {
			cout << "El numero es mayor" << endl;
		}
		else {
			if (intentos_usuarios >= 1 && intentos_usuarios <= 3) {
				cout << "Fue pura suerte ! !" << endl;
			}
			else if (intentos_usuarios >= 4 && intentos_usuarios <= 6) {
				cout << "Eres bueno !" << endl;
			}
			else if (intentos_usuarios == 7) {
				cout << "No está mal" << endl;
			}
			else if (intentos_usuarios == 8) {
				cout << "Se puede mejorar" << endl;
			}
			else {
				cout << "Que mal estas !!!!" << endl;
			}
			break;
		}
		intentos--;
		if (intentos == 0) {
			break;
		}
	}
}