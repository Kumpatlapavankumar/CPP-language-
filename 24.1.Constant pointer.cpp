#include <iostream>  
using namespace std;  
int main ()  
{  
// declaration of the integer variables  
int x = 10, y = 20;  
  
// use const keyword to make constant pointer  
int* const ptr = &x; //  const integer ptr variable point address to the variable x  
  
// ptr = &y; // now ptr cannot changed their address  
*ptr = 15; // ptr can only change the value  
cout << " The value of x: " << x << endl;  
cout << " The value of ptr: " << *ptr << endl;  
return 0;  
}   
