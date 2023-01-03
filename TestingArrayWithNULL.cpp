#include<iostream>
using namespace std;
int main(){
	
	int a[5]={1,2,3,4,5};
	cout<<"Before Null"<<endl;
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	cout<<"\nAfter Null";
	for(int i=0;i<5;i++){
		a[4]=NULL;
	}
	cout<<endl;	
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
	return 0;
	}
