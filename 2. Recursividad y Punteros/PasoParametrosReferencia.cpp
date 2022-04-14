#include <iostream>

using namespace std;

void funReferencia(int *);
 
int main(){
 int x = 4;
 
 cout << "Valor de x antes de funcion: " << x << endl;
 
 funReferencia(&x);
 
 cout << "Valor de x despues de funcion: " << x << endl;
 		
}

void funReferencia(int *x){
	(*x)++;
	 cout << "Valor de x en la funcion: " << x << endl;
}



