#include<iostream>
using namespace std;
int main(){
   int apples[5];
   for(int i=0;i<5;i++){
       cout<<"Enter element "<<i<<":";
       cin>>apples[i];
   }
   for(int i=0;i<5;i++){
       cout<<"Element "<<i<<" is:"<<apples[i]<<endl;
   }
    return 0;
}
