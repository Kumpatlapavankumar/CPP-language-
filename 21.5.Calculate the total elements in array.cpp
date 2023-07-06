//sometimes we don't know how many elements in the array to know the element
#include<iostream>
using namespace std;
int main(){
    int apples[]={1,3,5,7,2,31,4,257,75,345,653,2435,674,1143,57,67,35,74,46,24,132,25,34534,64,6,464,24,2435,465,785,687,243,557,2545,253,2556,256,25,566};
         cout<<"Total elements:"<<sizeof(apples)/sizeof(apples[0]);
    return 0;
}
//second code

#include<iostream>
using namespace std;
int main(){
    int apples[]={1,3,5,7,2,31,4,257,75,345,653,2435,674,1143,57,67,35,74,46,24,132,25,34534,64,6,464,24,2435,465,785,687,243,557,2545,253,2556,256,25,566};
         int elements=sizeof(apples)/sizeof(apples[0]);
         for (int i=0;i<elements;i++){
             cout<<"Element "<<i<<"is :"<<apples[i]<<endl;
         }
        return 0;
}
