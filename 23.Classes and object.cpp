#include<iostream>
using namespace std;
//Create class by using class keyword and after use public or private 
//public-is used anywhere in the code;
//private-is used by creating public and used
class pavan{
    public:
    void king(){
     cout<<"I am printing.....\n";
}
};
int main(){
    pavan pavanobj;
//pavan is creating obj
    pavanobj.king();
    return 0;
}
