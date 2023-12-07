// C++ program to swap two
// numbers without using 3rd
// variable
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main()
{
	int a = 2, b = 3;

	cout << "Before swapping a = " << a << " , b = " << b
		<< endl;
        //we can use another temp variable also to do swap
	// applying algorithm
	b = a + b;
	a = b - a;
	b = b - a;

	cout << "After swapping a = " << a << " , b = " << b
		<< endl;
	return 0;
}
