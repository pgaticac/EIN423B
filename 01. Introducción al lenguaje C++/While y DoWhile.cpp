#include <iostream>

using namespace std;

int main(){
	
	int cont=11;
	
	cout << "\nCon While" <<endl;
	while(cont < 10){
		cout << "Hola Mundo!" <<endl;
		cont++;
	}
	
	
	cout << "\nCon Do-While" <<endl;
	cont = 11;
	do{
		cout << "Hola Mundo!" <<endl;
		cont++;	
	}while(cont < 10);
	
}
