#include <iostream>

using namespace std;

struct nodo{
	int dato;
	nodo *next;
};

void agregar(nodo **, int);
void listar(nodo *);
nodo* buscar(nodo *, int);


int main(){
	nodo *lista = NULL;
	agregar(&lista,10);
	agregar(&lista,20);
	agregar(&lista,30);
	listar(lista);
	agregar(&lista,40);
	listar(lista);
	agregar(&lista,50);
	listar(lista);
	
	nodo *buscado = buscar(lista,5);
	
	if(buscado==NULL) {
		cout << "\nNo existe";
	}else{
		cout << "\nSi existe";
	}
}

nodo* buscar(nodo *head, int dato){
	nodo* buscado = NULL;
	
	for(buscado = head; buscado != NULL; buscado = buscado->next){
		if(buscado->dato == dato){
			return buscado;
		}
	}
	return NULL;
}


void listar(nodo *head){
	cout << "\nLista: ";
	while(head != NULL){
		cout << head->dato << "->";
		head = head->next;
	}
	cout << "NULL";
}

void agregar(nodo **head, int dato){
	//Crear nodo
	nodo *nuevo = new nodo;
	nuevo->next = NULL;
	nuevo->dato = dato;
	
	//Agregar a la lista
		nuevo->next = *head;
		*head = nuevo;
}
