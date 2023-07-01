#include<iostream>
using namespace std;
int main(){
    int people=0;
    int age;
    int totalAge=0;
    int avg;
    do{
        cout<<"\nEnter age of someone or 0 to quit:";
        cin>>age;
        totalAge+=age;
        if(age!=0){
            people++;
        }
    }while(age!=0);
    avg=totalAge/people;
    cout<<"\nTotal pepole:"<<people<<endl;
    cout<<"\nAverage Age:"<<avg<<endl;
    return 0;
}
