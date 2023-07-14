#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter n value";
    cin>>n;
    int Sum=0;
    for(int i=2; i<=n;i=i+2) {
        Sum=i+Sum;
    }
    cout<<"Sum of n even integers:"<<Sum;
    return 0;
}
