#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	cout << rand();  			// un n�mero al azar
	cout << rand()%100; 		// un n�mero al azar entre 0 a 99
	cout << rand()%100 + 1;      // un n�mero al azar entre 1 y 100
	cout << rand() %30 + 1985;	// un n�mero al azar entre 1985 y 2014
}


