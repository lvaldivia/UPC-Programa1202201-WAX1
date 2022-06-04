#include <iostream>
#include <vector>
#include <time.h>
using namespace std;

int DevolverAleatorio() {
	int* limiteInferior = new int;
	int* limiteSuperior = new int;
	*limiteInferior = 0;
	*limiteSuperior = 100;
	return *limiteInferior + (rand() % (*limiteSuperior +1 - 1));
}

void GeneraryMostrarDatos(int* alumnos,vector<int>& Vpuntajes) {
	for (int i = 0; i < *alumnos; i++)
	{
		int resultado = DevolverAleatorio();
		Vpuntajes.push_back(resultado);
		//cout << "nota del alumno " << (i +1) << " " << resultado << endl;
	}
}

vector<int> Lista_DebajodelPromedio(int* alumnos,vector<int>& Vpuntajes) {
	int suma = 0;
	for (int i = 0; i < Vpuntajes.size(); i++)
	{
		suma += Vpuntajes[i];
	}
	float  promedio = suma / *alumnos;
	vector<int> notas;
	for (int i = 0; i < Vpuntajes.size(); i++)
	{
		if (Vpuntajes[i] < promedio) {
			notas.push_back(Vpuntajes[i]);
			cout << "nota del alumno que no cumplen con el promedio " << Vpuntajes[i] << endl;
		}
	}
	return notas;
}

int Cantidad_menores(vector<int>& Vpuntajes) {
	return Vpuntajes.size();
}

void main() {
	srand(time(NULL));
	int* alumnos = new int;
	*alumnos = 40;
	vector<int> Vpuntajes;
	GeneraryMostrarDatos(alumnos, Vpuntajes);
	vector<int> NotasBajas = Lista_DebajodelPromedio(alumnos,Vpuntajes);
	cout << "Cantidad menores " << Cantidad_menores(NotasBajas) << endl;
	//delete alumnos;
}