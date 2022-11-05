#include<iostream>
using namespace std;
int *func(int s){
	int *a= new int[s];
	
	return a;
	}
int main(){
	int *a=func(5);
	for(int i=0;i<5;i++){
		cout<<a[i]<<endl;
	}
	
	return 0;
	}
