#include<iostream>
using namespace std;
int calPower(int n1, int n2);
void change();
int main (){
	
	change();
	
return 0;
}
int calPower(int n1, int n2){
	int result=1;
	if(n1==0)
		return 1;
	for(int i=1; i<=n2; i++)
		result=result*n1;
	return result;
}
void change(){
	
	char igo;
	
	do
	{
		int dec=0;

		int done;
		
		int val=0;
		
		
		
		string he;
		
		cout<<"enter the hexadecmial: ";
		cin>>he;
		
		done=he.size();
		
		
		
		for(int i=done-1,j=0;i>=0; i--, j++){
			
			
			
			
			switch(he[i]){
				
				
				case 'A':
				case 'a':
					dec=calPower(16,j);
					
					dec=10*dec;
					
					
					break;
				
				
				case 'B':
				case 'b':
					dec=calPower(16,j);
					
					dec=dec*11;
					
					break;
				
				case 'C':
				case 'c':
					
					dec=calPower(16,j);
					
					dec=12*dec;
					break;
			
					
				case 'D':
				case 'd':
					
					dec=calPower(16,j);
					
					dec=13*dec;
					
					
					break;
				
					
				case 'E':
				case 'e':
				
					dec=calPower(16,j);
					
					dec=14*dec;
					break;
					
			
					
				case 'F':
				case 'f':
				
					dec=calPower(16,j);
					
					dec=15*dec;
				
					break;
					
				case '0':
				
					dec=calPower(16,j);
					
					dec=0*dec;
					break;
				
					
				case '1':
				
					dec=calPower(16,j);
					
					dec=1*dec;
					break;
					
					
				case'2':
					
					dec=calPower(16,j);
				
					dec=2*dec;
					break;
					
				
					
				case '3':
					
					dec=calPower(16,j);
					
					dec=3*dec;
							
					break;
				
					
				case '4':
				
					dec=calPower(16,j);
					
					dec=4*dec;
					
					break;
				case '5':
				
					dec=calPower(16,j);
				
					dec=5*dec;
					
					break;
				case '6':
				
					dec=calPower(16,j);
				
					dec=6*dec;
				
					break;
				case '7':
				
					dec=calPower(16,j);
				
					dec=7*dec;
					
					break;
					
				
					
				case '8':
				
					dec=calPower(16,j);
					
					dec=8*dec;
					break;
					
					
				case '9':
				
					dec=calPower(16,j);
					
					dec=9*dec;
					
					
					
					break;
				default:
					cout<<"Invalid entry"<<endl;
				
				}
			
			
			val+=dec;
			
			
			
			
			}
		
		
			cout<<"the hexa decmial value is: "<<val<<endl;
		
			cout<<"Enter y to contniue otherwise: ";
		
			cin>>igo;
		
	
	
	}while(igo =='y');
		
	
}
