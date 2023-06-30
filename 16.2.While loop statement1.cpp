#include<iostream>
using namespace std;
int main(){
    int number;
    int total=0;
    int i=0;
    while(i<5){
        cout<<"Enter any number:";
        cin>>number;
        total=total+number;
        i++;
    }
    cout<<"Total number="<<total;
return 0;
}
