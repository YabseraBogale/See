#include<iostream>
using namespace std;
int main(){
		
	int x;
	int y;
	cout<<"Enter the first element: ";
	cin>>x;
	cout<<"Enter the secound element: ";
	cin>>y;
	int size;
	cout<<"Enter the size: ";
	cin>>size;
	for(int i=0;i<size;i++){
		
		
		x=x+y;
		y=x-y;
		cout<<"the value of x is "<<x<<endl;
		//cout<<"the value of y is "<<y<<endl;
	}

	return 0;
	}
