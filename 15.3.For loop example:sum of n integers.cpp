#include<iostream>
using namespace std;
int main() {
  
    int n;
    cout<<"enter n value";
    cin>>n;
    int Sum=0;
    for(int i=1; i<=n;i++) {
        Sum=i+Sum;
    }
    cout<<"Sum of n integers: "<<Sum;
    return 0;
}
