#include<iostream>
using namespace std;
int number(int num){
	if(num==0){
		
		return num;
	}
	else if(num%2==0){
		num=num/2;
		cout<<num<<endl;
		number(num);
	}
	else{
		if(num==1){
			
			return num;
			
		}
		num=(num*3)+1;
		cout<<num<<endl;
		number(num);
	}
}
int main(){

	number(56);

	return 0;
	}
