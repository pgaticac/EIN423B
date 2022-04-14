#include <iostream>

using namespace std;

int main(){
		int a=7;
		int *p = NULL;
		
		
		cout << "Valor: " << a << endl;
		cout << "Direccion: " << &a << endl;
	
		p = &a;
		
		cout << "Valor p:" << p <<endl;
		cout << "Contenido apuntado: " << *p << endl;
		cout << "Direccion p: " << &p << endl;
}
