#include<iostream>
using namespace std;
class apple{
  public:
  	//constructor is used to simplfied the code 
  	apple(string z){
  		setname(z);
	  }
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
	//Just we create obj and pass the parameter 
    apple appleobj("pavan");
    //at the end return (print);
    cout<<"My name is : "<<appleobj.getname();
    return 0;
}
