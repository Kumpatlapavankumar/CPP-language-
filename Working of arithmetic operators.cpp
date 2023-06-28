#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter a value:";
    cin>>a;
    cout<<"\nEnter b value:";
    cin>>b;
    c = a+b;
    printf("a+b = %d \n",c);
    c = a-b;
    printf("a-b = %d \n",c);
    c = a*b;
    printf("a*b = %d \n",c);
    c = a/b;
    printf("a/b = %d \n",c);
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    return 0;
}
