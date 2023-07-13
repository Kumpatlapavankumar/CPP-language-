class ABC  
{  
// define the access specifier  
public:  
  
// declare int variables  
int A;  
// declare member function as constant using const keyword  
void fun () const  
{  
 A = 0; // it shows compile time error  
}  
};  
  
int main ()  
{  
    ABC obj;  
    obj.fun();  
    return 0;  
} 
