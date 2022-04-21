#include <iostream>

using namespace std;

int main(){
		int a = 0;
		int *pt1 = &a;
		int **pt2 = &pt1;
		
		cout << "A:" << a << endl;
		cout << "&A:"  << &a << endl;
		
		cout << "\nPT1: " << pt1 << endl;
		cout << "&PT1: " << &pt1 << endl;
		cout << "*PT1: " << *pt1 << endl;
		
		cout << "\nPT2: " << pt2 << endl;
		cout << "&PT2: " << &pt2 << endl;
		cout << "*PT2: " << *pt2 << endl;
		cout << "**PT2: " << **pt2 << endl;
		
	
}
