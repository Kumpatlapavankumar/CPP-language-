//Default parameters is used to avoid errors inside the parametes

#include<iostream>
using namespace std;
int pavan(int l=1,int b=1,int h=1);
int main(){
    cout<<pavan(20,30,40)<<endl;
    return 0;
}
int pavan(int l,int b,int h){
    return l*b*h;
}
