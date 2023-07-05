#include<iostream>
using namespace std;
void printarray(int thearray[],int sizeofarray);
int main(){
    int apples[4]={12,23,45,24};
    int oranges[8]={54,65,67,78,12,23,45,24};
    //printarray(apples,4);
    printarray(oranges,8);
    return 0;
}
void printarray(int thearray[],int sizeofarray){
    for(int x;x<sizeofarray;x++){
        cout<<thearray[x]<<endl;
    }
}
