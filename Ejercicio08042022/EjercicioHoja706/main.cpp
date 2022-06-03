#include <iostream>
using namespace std;

void main() {
	long long codigo;
	//667068090219
	//7068090219
	//68090219
	//090219
	//0219
	//19
	//cin >> codigo;
	codigo = 667068090219;
	long long nn = codigo / 10000000000;
	//int pp = (codigo  % 10000000000) / 100000000;
	long long pp = (codigo - (nn * 10000000000)) / 100000000;

	long long aa = (codigo - (nn * 10000000000) - (pp * 100000000)) / 1000000;

	long long hh = (codigo - (nn * 10000000000) - (pp * 100000000) - (aa * 1000000)) / 10000;

	long long mm = (codigo - (nn * 10000000000) 
				- (pp * 100000000) - (aa * 1000000) - (hh * 10000)) / 100;

	long long ss = (codigo - (nn * 10000000000)
		- (pp * 100000000) - (aa * 1000000) - (hh * 10000) - (mm * 100));

	int tarde = (hh >= 9 && mm > 0) * 1 + (hh < 9) * 0;

	cout << "Hora de entrada :" << hh << endl;
	cout << "Minuto de entrada :" << mm << endl;
	cout << "Segundos de entrada :" << ss << endl;
	cout << "Su nombre empieza con la letra:" << (char)nn << endl;
	cout << "Su apellido paterno inicia con la letra:" << (char)pp << endl;
	cout << "Su apellido materno inicia con la letra:" << (char)aa << endl;
	cout << "Llegó tarde (1: sí; 0: no): " << tarde << endl;
}