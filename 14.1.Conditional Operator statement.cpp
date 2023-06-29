// C++ Program to illustrate the use of conditional operator
#include <iostream>
using namespace std;

// driver code
int main()
{

	int var;
	int flag = 0;

	// using conditional operator to assign the value to var
	// according to the value of flag
	var = flag == 0 ? 25 : -25;
	cout << "Value of var when flag is 0: " << var << endl;

	// changing the value of flag
	flag = 1;
	// again assigning the value to var using same statement
	var = flag == 0 ? 25 : -25;
	cout << "Value of var when flag is NOT 0: " << var;

	return 0;
}
