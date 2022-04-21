#include <iostream>

using namespace std;


void funValor(int);
 
int main(){
 int x = 4;
 
 cout << "Valor de x antes de funcion: " << x << endl;
 
 funValor(x);
 
 cout << "Valor de x despues de funcion: " << x << endl;
 		
}

void funValor(int x){
	x++;
	 cout << "Valor de x en la funcion: " << x << endl;
}


