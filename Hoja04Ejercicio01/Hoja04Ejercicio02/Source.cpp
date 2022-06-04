#include <iostream>
using namespace std;

void main() {
	float total_recaudado = 0;
	int cantidad_gratis = 0;
	string tipo_pizza = "";
	int entrega_delivery = 0;
	int entrega_mostrador = 0;
	float tiempo_entrega_delivery = 0;
	float tiempo_entrega_mostrador = 0;
	float entrega_promedio_delivery = 0;
	float entrega_promedio_mostrador = 0;

	int grande = 0;
	int familiar = 0;
	int superfamiliar = 0;

	int codigo, pizza, tiempo;
	char tipo;
	bool isGratis = false;
	while (true) {
		isGratis = false;
		cout << "Ingrese el codigo ";
		cin >> codigo;
		if (codigo == 0) {
			break;
		}
		cout << "Tipo de pizza (1: grande; 2: familiar; 3: súper familiar): ";
		cin >> pizza;

		if (pizza == 0 ||  pizza > 3) {
			break;
		}
		
		cout << "Tipo de pedido (D: delivery; M: mostrador): ";
		cin >> tipo;
		cout << "Tiempo de entrega: ";
		cin >> tiempo;

		if (tipo == 'M' ) {
			if (tiempo > 20) {
				cantidad_gratis++;
				isGratis = true;
				cout << "Importe a pagar: GRATIS " << endl;
			}
			else {
				entrega_mostrador++;
				tiempo_entrega_mostrador += tiempo;
			}
		}
		else if (tipo == 'D') {
			if (tiempo > 30) {
				isGratis = true;
				cantidad_gratis++;
				cout << "Importe a pagar: GRATIS " << endl;
			}
			else {
				entrega_delivery++;
				tiempo_entrega_delivery += tiempo;
			}
		}
		if (pizza == 1) {
			grande++;
			if (!isGratis) {
				cout << "Importe a pagar: 50 " << endl;
				total_recaudado += 50;
			}
			
		}
		if (pizza == 2) {
			familiar++;
			if (!isGratis) {
				cout << "Importe a pagar: 60 " << endl;
				total_recaudado += 60;
			}
		}
		if (pizza == 3) {
			superfamiliar++;
			if (!isGratis) {
				cout << "Importe a pagar: 68 " << endl;
				total_recaudado += 68;
			}
		}
	}
	if (entrega_delivery > 0) {
		entrega_promedio_delivery = tiempo_entrega_delivery / entrega_delivery;
	}
	/*entrega_promedio_delivery = entrega_delivery > 0
				? tiempo_entrega_delivery / entrega_delivery : 0;*/

	if (entrega_mostrador > 0) {
		entrega_promedio_mostrador = tiempo_entrega_mostrador / entrega_mostrador;
	}

	/*entrega_promedio_mostrador = entrega_mostrador > 0
		? tiempo_entrega_mostrador / entrega_mostrador : 0;*/
	
	cout << "Importe total el último mes: " << total_recaudado << endl;
	cout << "Cantidad de pedidos entregados gratis " << cantidad_gratis << endl;
	if (grande > familiar && grande > superfamiliar) {
		tipo_pizza = "grande";
	}
	else if (familiar > grande && familiar > superfamiliar) {
		tipo_pizza = "familiar";
	}
	else {
		tipo_pizza = "superfamiliar";
	}
	cout << "La pizza con mayor demanda: " << tipo_pizza << endl;
	cout << "Tiempo de entrega promedio por cada tipo" << endl;
	cout << "Delivery " << entrega_promedio_delivery << endl;
	cout << "Mostrador " << entrega_promedio_mostrador << endl;
}