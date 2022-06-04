#include <iostream>

using namespace std;

void main() {
	//https://paste.ofcode.org/59BkptbZ2CJqXqGtqihyJS
	int dia, mes;
	cout << "Ingrese su dia " << endl;
	cin >> dia;
	cout << "Ingrese su mes " << endl;
	cin >> mes;
	string signo;
	if ((dia >= 22 && mes == 12) || (dia <= 20 && mes == 1)) {
		signo = "Shura de Capricornio";
	}
	else if ((dia >= 21 && mes == 1) || (dia <= 19 && mes == 2)) {
		signo = "Degel de Acuario";
	}
	else if ((dia >= 20 && mes == 2) || (dia <= 20 && mes == 3)) {
		signo = "Albafica de Piscis";
	}
	else if ((dia >= 21 && mes == 3) || (dia <= 20 && mes == 4)) {
		signo = "Mu de Aries";
	}
	else if ((dia >= 21 && mes == 4) || (dia <= 21 && mes == 5)) {
		signo = "Aldebaran de Tauro";
	}
	else if ((dia >= 22 && mes == 5) || (dia <= 21 && mes == 6)) {
		signo = "Saga de Geminis";
	}
	else if ((dia >= 21 && mes == 6) || (dia <= 23 && mes == 7)) {
		signo = "Deathmask de Cancer";
	}
	else if ((dia >= 24 && mes == 7) || (dia <= 23 && mes == 8)) {
		signo = "Aioria de Leo";
	}
	else if ((dia >= 24 && mes == 8) || (dia <= 23 && mes == 9)) {
		signo = "Shaka de Virgo";
	}
	else if ((dia >= 24 && mes == 9) || (dia <= 23 && mes == 10)) {
		signo = "Dohko de Libra";
	}
	else if ((dia >= 24 && mes == 10) || (dia <= 22 && mes == 11)) {
		signo = "Milo de Escorpio";
	}
	else {
		signo = "Aioros de Sagitario";
	}

	cout << "Tu signo del zodiaco es " << signo << endl;
	
}