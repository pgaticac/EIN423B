#include <iostream>
#include <string>

#define CAPACIDAD 10

using namespace std;


struct empleado{
	int id;
	string nombre;
	string apellido;
	int edad;
};

struct nodo{
	empleado emp;	
	nodo *next;
};


void inicializa_tabla(nodo*[]);
int funcion_hash(int);
void agregar_hash(nodo*[], empleado);
void agregar_lista(nodo**, empleado);
void imprimir_hash(nodo*[]);
void imprimir_lista(nodo*);


int main(){
 nodo* tabla_hash[CAPACIDAD];
 
 inicializa_tabla(tabla_hash);
 
 empleado e;
 
 cout << "ID: "; cin >> e.id;
 cout << "Nombre: ";cin >> e.nombre;
 cout << "Apellido:";cin >> e.apellido;
 cout << "Edad:";cin >> e.edad;
 
 empleado e2;
 
 cout << "ID: "; cin >> e2.id;
 cout << "Nombre: ";cin >> e2.nombre;
 cout << "Apellido:";cin >> e2.apellido;
 cout << "Edad:";cin >> e2.edad;
 
 
agregar_hash(tabla_hash, e);
agregar_hash(tabla_hash, e2);
 
 imprimir_hash(tabla_hash);
	
	
	
}


void inicializa_tabla(nodo* tabla_hash[]){
	for(int i=0; i<CAPACIDAD; i++){
		tabla_hash[i] = NULL;
	}
}

int funcion_hash(int id){
	return id%CAPACIDAD;
}


void agregar_hash(nodo* tabla_hash[], empleado nuevo){
	int pos = funcion_hash(nuevo.id);
	agregar_lista(&tabla_hash[pos],nuevo);	
}

void agregar_lista(nodo** head, empleado nuevo){
	nodo *nuevo_nodo;
	nuevo_nodo = new nodo;
	
	nuevo_nodo->emp = nuevo;
	nuevo_nodo->next=*head;
	
	*head = nuevo_nodo;
	
}

void imprimir_hash(nodo* tabla_hash[]){
	for(int i=0; i<CAPACIDAD; i++){
		cout << "\nTH[" << i << "] ->";
		imprimir_lista(tabla_hash[i]);
	}
}

void imprimir_lista(nodo *head){
	while(head != NULL){
		cout << head->emp.nombre << " " << head->emp.edad << " ->";
		head = head->next;
	}
	cout << "NULL";
	
}

