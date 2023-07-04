//Arrays-GROUP OF ELEMENTS
#include<iostream>
using namespace std;
int main(){
   int apples[5]={20,34,67,83,98};
  //int apples[5]={0,1,2,3,4}
   cout<<apples[1];
    return 0;
}
//output-34
//why it prints 34
//INDEXS- starts from 0-N;
//How to change the element
#include<iostream>
using namespace std;
int main(){
   int apples[5]={20,34,67,83,98};
   cout<<apples[1]<<endl;
   apples[1]=80;
   cout<<apples[1];
    return 0;
}
//How to print all the elements
#include<iostream>
using namespace std;
int main(){
   int apples[5]={20,34,67,83,98};
   for(int i=0;i<5;i++){
       cout<<apples[i]<<endl;
   }
    return 0;
}
