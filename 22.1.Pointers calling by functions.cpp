#include<iostream>
using namespace std;
void passingbyvalue(int x);
void passingbyref(int *x);
int main(){
    int apples=78;
    int oranges=78;
    passingbyvalue(apples);
    passingbyref(&oranges);
    cout<<"apples is now:"<<apples<<endl;
   //passing by variable is not change 
    cout<<"oranges is now:"<<oranges;
   //passing by pointer is changed
    return 0;
}
void passingbyvalue(int x){
    x=80;
}
void passingbyref(int *x){
    *x=89;
}
