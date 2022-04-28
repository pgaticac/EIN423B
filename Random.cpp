#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	cout << rand();  			// un número al azar
	cout << rand()%100; 		// un número al azar entre 0 a 99
	cout << rand()%100 + 1;      // un número al azar entre 1 y 100
	cout << rand() %30 + 1985;	// un número al azar entre 1985 y 2014
}


