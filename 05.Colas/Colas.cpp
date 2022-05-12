#include <iostream>
#define MAX 5
using namespace std;


struct Cola{
	int head, tail;
	int cant;
	int elementos[MAX];
};

void iniciarCola(Cola &c){
	c.head = 0;
	c.tail = 0;
	c.cant = 0;
}

bool completa(Cola c){
	//return c.cant == MAX;
	if(c.cant == MAX){
		return true;
	}else{
		return false;
	}
}

bool vacia(Cola c){
	return c.cant == 0;
}

void verCola(Cola c){
	cout << "\nCOLA:  |";
	int i = c.head;
	int cont =0;
	while(cont < c.cant){
	
	cout  << c.elementos[i] << "|";
		if(i < MAX-1){
				i++;
			}else{
				i=0;
		}
	cont++;
	}
}

void verArreglo(Cola &c){
	cout << "\nARREGLO:  |";
	for(int i=0; i<MAX; i++){
		cout  << c.elementos[i] << "|";
	}
}

void encolar(Cola &c, int num){
	if(completa(c)){
		cout << "\nLa cola esta llena";
	}else{
		cout << "\nEncolando numero " << num <<"...";
		c.elementos[c.tail] = num;
		c.cant++;
		if(c.tail < MAX-1){
			c.tail++;
		}else{
			c.tail=0;
		}
		
	}
}

int desencolar(Cola &c){
	if(vacia(c)){
		cout << "\nLa cola está vacía";
	}else{
		int num = c.elementos[c.head];
		cout << "\nDesencolando numero " << num <<"...";
		c.cant--;
		if(c.head < MAX-1){
			c.head++;
		}else{
			c.head=0;
		}
		return num;
		
	}
}

int main(){
	Cola cola;
	iniciarCola(cola);
	encolar(cola,1);
	encolar(cola,2);
	encolar(cola,3);
	verCola(cola);
	encolar(cola,4);
	verCola(cola);
	encolar(cola,5);
	verCola(cola);
	encolar(cola,6);
	verCola(cola);
	desencolar(cola);
	verCola(cola);
	encolar(cola,6);
	verCola(cola);
	encolar(cola,7);
	
	verArreglo(cola);
	
}
