#include <iostream>;
using namespace std;


//la 23
int parteEntera(float num) {
	return int(num);
}

//la 24
float parteFlotante(float num) {
	return num - parteEntera(num);
}

void main() {
	
	float num = 255987.95;
	cout << "La parte entera es " << parteEntera(num) << endl;
	cout << "La parte flotante es " << parteFlotante(num);


}