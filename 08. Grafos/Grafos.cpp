#include <iostream>

using namespace std;
//TDA GRAFO DIRIGIDO (Con arcos)


//Estructuras
struct Nodo{
	int dato;
	Nodo *next;
};

struct ListaAdyacencia{
	Nodo *head;
};

struct Grafo{
	int size; //Cantidad de nodos que tiene el grafo
	ListaAdyacencia *enlaces;
};

Grafo* nuevoGrafo(int size){
	Grafo* grafo = new Grafo;
	grafo->size = size;
	grafo->enlaces = new ListaAdyacencia[size];
	
	for(int i=0; i<size; i++){
		grafo->enlaces[i].head = NULL;
	}
	
	return grafo;
	
}

Nodo* nuevoNodo(int dato){
	Nodo *nodo = new Nodo;
	nodo->dato = dato;
	nodo->next = NULL;
	
	return nodo;
}


void agregarArco(Grafo *grafo, int cola, int cabeza){
	Nodo *nodo = nuevoNodo(cabeza);
	
	nodo->next = grafo->enlaces[cola].head;
	grafo->enlaces[cola].head = nodo;
	
	//En en caso de GnD, se debe agregar la arista inversa (cabeza-cola)
}

void imprimirGrafo(Grafo* grafo){
	for(int i=1; i<grafo->size; i++){
		Nodo *headAux = grafo->enlaces[i].head;
		
		cout << "Lista de Adyacencia de " << i << ":";
		
		while(headAux != NULL){
			cout << headAux->dato << " -> ";
			headAux = headAux->next;
		}
		cout << "NULL" << endl;
	}
}

int main(){
	Grafo *miGrafo = nuevoGrafo(6);
	
	agregarArco(miGrafo,0,1);
	agregarArco(miGrafo,1,2);
	agregarArco(miGrafo,1,5);
	agregarArco(miGrafo,2,3);
	agregarArco(miGrafo,2,4);
	agregarArco(miGrafo,2,5);
	agregarArco(miGrafo,3,4);
	agregarArco(miGrafo,4,5);
	agregarArco(miGrafo,5,5);
	
	imprimirGrafo(miGrafo);
	
	
	
}
