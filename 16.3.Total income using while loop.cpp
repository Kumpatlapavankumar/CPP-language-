#include<iostream>
using namespace std;
int main(){
    int days;
    int income;
    int totalIncome=0;
    int avg;
    cout<<"Enter first day amount=";
    cin>>income;
    totalIncome=totalIncome+income;
    while(income!=-1){
        cout<<"Enter next day amount or -1 to quit:";
        cin>>income;
        totalIncome=totalIncome+income;
        days++;
    }
      totalIncome++;
      avg=totalIncome/days;
      cout<<"Your totalIncome="<<totalIncome<<endl;
      cout<<"Your avgIncome:"<<avg<<endl;
      cout<<"Total days:"<<days<<endl;
      return 0;
}
