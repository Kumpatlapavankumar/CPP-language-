#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value:";
	cin>>n;
	int i=1;
	while(i<=n){
		int space=n-i;
		while(space){
			cout<<" ";
			space=space-1;
		}
		int j=1;
		while(j<=i){
			cout<<"*";
			j=j+1;
		}
		int k=1;
		while(k<=i-1){
			cout<<"*";
			k=k+1;
		};
		cout<<endl;
		i=i+1;
	}
	return 0;
}
