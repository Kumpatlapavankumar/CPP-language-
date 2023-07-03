//Global variables is used anywhere or any function in the code;
#include<iostream>
using namespace std;
int pavan();
int x=100;
int main(){
    int x=90;
    cout<<"X is "<<x<<endl;
    pavan();
    return 0;
}
int pavan(){
    cout<<"X is "<<x;
}
