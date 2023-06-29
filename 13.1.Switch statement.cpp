// C Program to illustrate the use of switch statement
#include <iostream>
using namespace std;

// driver code
int main()
{
	// variable to be used in switch statement
	int var = 2;

	// declaring switch cases
	switch (var) {
	case 1:
		cout << "Case 1 is executed";
		break;
	case 2:
		cout << "Case 2 is executed";
		break;
	default:
		cout << "Default Case is executed";
		break;
	}

	return 0;
}
