
#include <iostream>

using namespace std;

//Nombre: Alex Sandro Huillca Yalico;



int comprobar(int ancho, int altura, int espaciado);

void realizarimagen(int ancho, int altura, int espaciado);



void main() {

	int ancho, altura, espaciado;



	cout << "Ancho del gráfico: ";

	cin >> ancho;

	cout << "Altura del gráfico: ";

	cin >> altura;

	cout << "Espaciado: ";

	cin >> espaciado;

	int comprobacion = 0;

	comprobacion = comprobar(ancho, altura, espaciado);



	if (comprobacion == 1) {

		realizarimagen(ancho, altura, espaciado);

	}

}



int comprobar(int ancho, int altura, int espaciado) {

	int comprobacion;



	if (ancho < 51 && ancho>0) {

		if (altura < 17 && altura>0) {

			if (espaciado < altura && espaciado > 0) {

				comprobacion = 1;

			}

			else comprobacion = 0;

		}

		else comprobacion = 0;

	}

	else comprobacion = 0;



	return comprobacion;

}



void realizarimagen(int ancho, int altura, int espaciado) {

	int i = 1;

	int j = 1;

	int jespaciado = 1;

	while (i <= altura) {

		j = 1;

		jespaciado = 1;

		while (j <= ancho) {

			if (i == 1 || i == altura) {

				if (j >= 10 && j < 20) {

					cout << j - 10;

				}

				else {

					if (j >= 20) {

						cout << j - 20;

					}

					else {

						cout << j;

					}

				}

			}

			else if (j == jespaciado) {

				if (j >= 10) {

					cout << j - 10;

				}

				else {

					if (j >= 20) {

						cout << j - 20;

					}

					else {

						cout << j;

					}

				}



				jespaciado += espaciado;

			}

			else {

				cout << ' ';

			}



			j++;

		}

		i++;

		cout << endl;

	}

}