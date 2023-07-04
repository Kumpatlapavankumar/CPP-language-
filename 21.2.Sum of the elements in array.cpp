#include<iostream>
using namespace std;
int main(){
   int apples[5];
   int sum=0;
   for(int i=0;i<5;i++){
       cout<<"Enter element "<<i<<":";
       cin>>apples[i];
   }
   for(int i=0;i<5;i++){
       cout<<"Element "<<i<<" is:"<<apples[i]<<endl;
       sum=sum+apples[i];
   }
   cout<<"sum of the elements is:"<<sum;
    return 0;
}
