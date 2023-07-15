#include<iostream>
using namespace std;
int main(){
	int row;
	cout<<"Enter how many rows you want:";
	cin>>row;
	int col;
	cout<<"\nEnter how many columns you want:";
	cin>>col;
	cout<<"\n";
	for(int i=0;i<row;i++){
		for(int i=0;i<col;i++){
			cout<<"*";
		}
		cout<<"\n";
	}
	return 0;
}
