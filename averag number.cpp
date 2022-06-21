#include<iostream>
using namespace std;
class Average{
	
	float n1;
	float n2;
	float n3;
	float ave;
	public:
	Average(){
		
		n1=0.0;
		n2=0.0;
		n3=0.0;
		
	}
	
	void take_number(float l1, float l2, float l3){
		
		n1=l1;
		n2=l2;
		n3=l3;
		
	}
	
	float give_average(){
		
		ave=(n1+n2+n3)/3;
		
		return ave;
	}
	
	};
float aver_ofnumber(float A, float B, float C){
	
	Average number;
	number.take_number(A,B,C);
	float ave;
	ave=number.give_average();
	
	
	return ave;
	}

int main(){
	
	float A,B,C;
	cout<<"ENTER THREE NUMBERS: ";
	cin>>A>>B>>C;
	cout<<"is the result "<<aver_ofnumber(A, B, C);
	
	
	
	
	
	
	
	
	
	
	return 0;
	}
