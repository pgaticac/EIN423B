#include <iostream>

using namespace std;

//Declaraci�n de funciones
void saludar(int);
int sumar(int, int);

int main(){
	int res;
	
	saludar(5); //Llamada a funci�n	void (procedimiento)
	
	res = sumar(1,2); //Llamada a funcion que retorna valor
	//cout << "La suma es " << res << endl;
	
	cout << "La suma es " << sumar(1,2) << endl;
}

//Implementaci�n de funciones
void saludar(int x){
	for(int i = 0; i<x; i++){
		cout << "Hola Mundo" << endl;
	}
}

int sumar(int n1, int n2){
	int res = n1 + n2;
	return res;
}
