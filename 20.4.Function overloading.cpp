#include<iostream>
using namespace std;
void printthis(int x){
    cout<<"I am printing an INTEGER:"<<x<<endl;
}
int main(){
    int a=20;
    printthis(a);
}
//output-I am printing an INTEGER:20
#include<iostream>
using namespace std;
void printthis(int x){
    cout<<"I am printing an INTEGER:"<<x<<endl;
}
int main(){
    int a=20;
    float b=23.500;
    printthis(b);
}
//output-I am printing an INTEGER:23
#include<iostream>
using namespace std;
void printthis(int x){
    cout<<"I am printing an INTEGER:"<<x<<endl;
}
void printthis(float x){
    cout<<"I am printing an FLOAT:"<<x<<endl;
}
int main(){
    int a=20;
    float b=23.595;
    printthis(b);
}
//output-I am printing an FLOAT:23.595
/*why second function it prints:Because you use float point it see the two function 1st function is returns integer 2nd function returns float thats why it prints second function */
#include<iostream>
using namespace std;
void printthis(int x){
    cout<<"I am printing an INTEGER:"<<x<<endl;
}
void printthis(float x){
    cout<<"I am printing an FLOAT:"<<x<<endl;
}
int main(){
    float a=20.6354;
    float b=23.595;
    printthis(b);
    printthis(a);
}
//output-I am printing an FLOAT:23.595
//I am printing an FLOAT:20.6354
//It means just it calls two times 
