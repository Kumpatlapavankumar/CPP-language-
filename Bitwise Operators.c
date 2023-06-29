// CPP Program to demonstrate the Bitwise Operators
#include <iostream>
using namespace std;

int main()
{
	int a = 6, b = 4;

	// Binary AND operator
	cout << "a & b is " << (a & b) << endl;

	// Binary OR operator
	cout << "a | b is " << (a | b) << endl;

	// Binary XOR operator
	cout << "a ^ b is " << (a ^ b) << endl;

	// Left Shift operator
	cout << "a>>1 is " << (a >> 1) << endl;

	// Right Shift operator
	cout << "a<<1 is " << (a << 1) << endl;

	// One’s Complement operator
	cout << "~(a) is " << ~(a) << endl;

	return 0;
}
