//private keyword is using good pratice and important also
#include<iostream>
using namespace std;
class apple{
  public:
   void setname(string x){
       name=x;
   }
   string getname(){
       return name;
   }
  private:
    string name;
};
int main(){
    apple appleobj;
    appleobj.setname("pavan");
    cout<<"My name is : "<<appleobj.getname();
    return 0;
}
