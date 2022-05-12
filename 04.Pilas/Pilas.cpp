#include <iostream>

using namespace std;


struct nodo{
	int dato;
	nodo *next;
};

struct Pila{
	nodo *head;
	nodo *tope;
};

void crearPila(Pila *pila){
	pila->head = NULL;
	pila->tope = NULL;
}

void push(Pila *pila, int dato){
	
	nodo *nuevo = new nodo;
	nuevo->dato = dato;
	nuevo->next = NULL;
	
	
	if(pila->head == NULL){  //Pila vacía
		pila->head = nuevo;
		pila->tope = nuevo;
	}else{ 					//Pila con datos previos				
		pila->tope->next = nuevo;
		pila->tope = nuevo;
	}
}

void verPila(Pila pila){
	cout << "\nPILA: ";
	nodo *head = pila.head;
	
	while(head != NULL){
		cout << head->dato << " " ;
		head = head->next;
	}
}

int top(Pila pila){
	if(pila.tope == NULL){  //Pila vacía
		cout << "La pila está vacía";
		return -1;
	}else{
		return pila.tope->dato;
	}
}

int pop(Pila *pila){
	nodo *anterior = pila->head;
	while(anterior->next != pila->tope){
		anterior = anterior->next;
	}
	pila->tope = anterior;
	anterior = anterior->next;
	
	pila->tope->next = NULL;
	return anterior->dato;
}

int main(){
	Pila miPila;
	crearPila(&miPila);	
	push(&miPila,1);
	push(&miPila,2);
	push(&miPila,3);
	verPila(miPila);
	push(&miPila,4);
	verPila(miPila);
	
	int dato = top(miPila);
	cout << "\ntop: " << dato << endl;
	verPila(miPila);
	
	dato = pop(&miPila);
	cout << "\npop: " << dato << endl;
	verPila(miPila);
	
}

