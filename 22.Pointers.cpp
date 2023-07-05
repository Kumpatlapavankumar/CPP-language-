//What is a Pointer in C?
/*A pointer is defined as a derived data type that can store the address of other C variables or a memory location. We can access and manipulate the data stored in that memory location using pointers.*/
#include<iostream>
using namespace std;
int main(){
	int king=76;
	int *pavan;
	//*-indicates pointers
	pavan=&king;
	//&-indicates address of king storred in pointer variable pavan
	cout<<*pavan<<endl;
	//It will print value stored in that variable king
	cout<<pavan<<endl;
	//It will print address of the variable king
	return 0;	
}

