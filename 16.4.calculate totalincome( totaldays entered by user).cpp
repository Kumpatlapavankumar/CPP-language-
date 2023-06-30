#include<iostream>
using namespace std;
int main(){
    int days;
    int income;
    int totalIncome=0;
    int i=0;
    int avg;
    cout<<"Enter how many days you want:";
    cin>>days;
    while(i<days){
        cout<<"Enter your income for day"<<i+1<<":";
        cin>>income;
        totalIncome=totalIncome+income;
        i++;
    }
    avg=totalIncome/days;
    cout<<"your TotalIncome:"<<totalIncome<<endl;
    cout<<"Average Income:"<<avg<<endl;
    cout<<"Total days:"<<days<<endl;
    return 0;
}
