#include <iostream>

using namespace std;

int factIte(int);
int factRec(int);



int main(){
	int fi = factIte(5);
	int fr = factRec(5);
	
	cout << "5! Iterativo: " << fi << endl;
	cout << "5! Recursivo: " << fr << endl;
}

int factRec(int n){
	if (n==1) return 1;
	else return n * factRec(n-1);
}



int factIte(int n){
	int f=1;
	for(int i=1; i<=n; i++){
		f = f * i;
	}
	return f;
}

