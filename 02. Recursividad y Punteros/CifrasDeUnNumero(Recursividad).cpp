#include <iostream>

using namespace std;

void digitos(int);


int main(){
	digitos(708);	
}

void digitos(int numero){
	int d;
	
	if(numero / 10 == 0){  //El numero tiene sólo una cifra
		cout << " " << numero;
	}else{
		d = numero % 10;
		digitos(numero/10);
		cout << " " << d;
	}
}
