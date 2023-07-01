#include<iostream>
using namespace std;
int main(){
    int i=1;
    int howmany;
    cout<<"How many times do you want to run this code:";
    cin>>howmany;
    cout<<"\n\n";
    while(i<=10){
        cout<<i<<"--Welcome to my kumpatlapavankumar GITHUB account\n\n";
        if(i==howmany){
            break;
        }
        i++;
    }
    return 0;
}
