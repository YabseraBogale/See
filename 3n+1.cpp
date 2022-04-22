#include<iostream>
using namespace std;



int main(){

	int A;
	
	cout<<"Enter N and N must be int positive: ";
	cin>>A;
	cout<<endl;
	cout<<A<<endl;
	do{
		
		
		
		
		if(A%2==0){
		
			A=A/2;
			cout<<A<<endl;
			
		
		}
		
		else if(A==1){
		
			goto here;
			
		}
		
		else{
			
			A= (A*3) + 1;
			cout<<A<<endl;
			
		}

		

	}while(A!=1);
	
	here:
	
	cout<<A;


return 0;
}
