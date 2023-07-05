#include<iostream>
using namespace std;
int main(){
    int apples[3][5]={{2,43,54,67,23},{44,55,66,77,88},{11,22,33,21,32}};
    for(int r=0;r<3;r++){
        for(int c=0;c<5;c++){
            cout<<apples[r][c]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
