#include <iostream>

using namespace std;

int main(){
	int dia;
	
	cout << "Ingresa un numero de 1 a 7: ";
	cin >> dia;
	
	switch(dia){
		case 1: 
			cout << "Es lunes";
			break;
		case 2:
			cout << "Es martes";
			break;
		case 3:
			cout << "Es miercoles";
			break;
		case 4:
			cout << "Es jueves";
			break;
		case 5:
			cout << "Es viernes";
			break;
		case 6:
		case 7:
			cout << "Es fin de semana";
			break;
		default:
			cout << "Error";
			break;
			
	}	
}
