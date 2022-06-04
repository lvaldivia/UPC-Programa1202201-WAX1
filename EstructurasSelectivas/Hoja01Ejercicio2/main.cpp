#include <iostream>
using namespace std;

void main() {
	//https://paste.ofcode.org/ruXEU6wMD6tjFRaxRXp4Hp
	float dinosaurio, elefante;
	cout << "Ingresa el peso del dinosaurio " << endl;
	cin >> dinosaurio;
	cout << "Ingresa el peso del elefante " << endl;
	cin >> elefante;
	if (elefante > dinosaurio) {
		cout << "El elefante pesa mas que el dinosaurio " << endl;
	}
	else if (dinosaurio > elefante) {
		cout << "El dinosaurio pesa mas que el elefante " << endl;
	}
	else {
		cout << "Los pesos son iguales " << endl;
	}
	//FORMA CON TRES IFS
	/*if (elefante > dinosaurio) {
		cout << "El elefante pesa mas que el dinosaurio " << endl;
	}
	if (dinosaurio > elefante) {
		cout << "El dinosaurio pesa mas que el elefante " << endl;
	}
	if (dinosaurio == elefante) {
		cout << "Los pesos son iguales " << endl;
	}*/
}