#include<iostream>
using namespace std;
class appleclass{
    public:
    void cool(){
     cout<<"I want to eat apples\n";
}
};
class orangeclass{
    public:
    void cool(){
     cout<<"I want to eat oranges\n";
}
};
int main(){
    appleclass appleobj;
    appleobj.cool();
    orangeclass orangeobj;
    orangeobj.cool();
    return 0;
}
