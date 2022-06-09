#include <iostream>
using namespace std;

struct nodo{
	int dato;
	struct nodo *izq;
	struct nodo *der;
};

void insertar(nodo *&n, int dato){
	if(n==NULL){
		n = new nodo;
		n->dato = dato;
		n->izq = NULL;
		n->der = NULL;
	}else{
		if(dato < n->dato) insertar(n->izq,dato);
		if(dato > n->dato) insertar(n->der,dato);
	}
}

void inorden(nodo *n){
	if(n!= NULL){
		if(n->izq != NULL) inorden(n->izq);
		cout << n->dato << " ";
		if(n->der != NULL) inorden(n->der);
	}
}

bool buscar(nodo *n, int dato){
	if(n==NULL) return false;
	if(n->dato == dato) return true;
	if(dato < n->dato) buscar(n->izq,dato);
	if(dato > n->dato) buscar(n->der,dato);
}

int eliminarMin(nodo *&n){
	int temp;
	if(n->izq == NULL){
		temp = n->dato;
		n=n->der;
		return temp;
	}else{
		n->dato = eliminarMin(n->der);
	}
}


int eliminar(nodo *&n, int dato){
	if(n!=NULL){
		if(dato < n->dato) eliminar(n->izq, dato);
		else if(dato > n->dato) eliminar(n->der, dato);
		else if(n->izq == NULL && n->der==NULL) n=NULL;
		else if(n->izq==NULL) n = n->der;
		else if(n->der==NULL) n = n->izq;
		else
			n->dato = eliminarMin(n->der);	
		
	}
}


int main(){
	
	nodo *arbol;
	
	//INICIALIZAR ARBOL
	arbol = NULL;
	
	//INSERTAR ELEMENTOS
	insertar(arbol,3);
	insertar(arbol,1);
	insertar(arbol,5);
	insertar(arbol,2);
	
	//RECORRIDO INORDER DEL ARBOL
	cout << endl;
	inorden(arbol);
	
	insertar(arbol,4);
	
	//RECORRIDO INORDER DEL ARBOL
	cout << endl;
	inorden(arbol);
	
	insertar(arbol,7);
	
	//RECORRIDO INORDER DEL ARBOL
	cout << endl;
	inorden(arbol);
	
	
	cout << "\nBuscando numero 8: ";
	
	if(buscar(arbol,8)){
		cout << " existe"<< endl;
	}else{
		cout << " no existe" << endl;
	}
	
	//ELIMINAR NODOS
	eliminar(arbol,7);
	
	//RECORRIDO INORDER DEL ARBOL
	cout << endl;
	inorden(arbol);
}
