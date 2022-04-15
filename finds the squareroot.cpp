#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
	
	int num,num1,num2;
	int sq;
	char state='F';
	cout<<"enter the number X: ";
	cin>>num1;
	cout<<"\nenter the number Y: ";
	cin>>num2;
	cout<<"this gives the squreroot of X + Y if there is"<<endl;
	num=num1+num2;
	for(int i=2;i<num;i++){
		
		
		if(num==1){
			
			cout<<"the squareroot is 1";
			state = 'T';
		}
		else if(num==0){
			
			cout<<"the squareroot is 0";
			state = 'T';
		}
		else if(num==(sq*sq)) 
		{
			cout<<"the squareroot of "<<num<<" is "<<sq<<endl;
			state = 'T';
		}
		sq=num/i;
	}
	
	if(state=='T'){
		
		cout<<"the process is complete"<<endl;
		
		
	}
	else{
		
		cout<<"the number "<<num<<" have no squareroot"<<endl;
			
		
	}



	return 0;
}
