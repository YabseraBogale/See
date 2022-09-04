#include<iostream>
using namespace std;
int main(){
	int a[5]={1,3,4,5,2};
	int b[5];
	int num=0;
	for(int i=0;i<5;i++){
		num=a[i];
		for(int j=0;j<5;j++){
			if(a[j]>num){
				b[i]=num;
				cout<<"b "<<b[i]<<" a "<<a[j]<<endl;
			}
		}
		b[i]=num;
	}
	for(int i=0;i<5;i++){
		cout<<b[i]<<endl;
	}	
	return 0;
	}
