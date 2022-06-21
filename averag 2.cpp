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

Average aver_ofnumber(float A, float B, float C){
	
	Average number; 
	 return number;
	}

int main(){
	
	float A,B,C;
	cout<<"ENTER THREE NUMBERS: ";
	cin>>A>>B>>C;

	
	aver_ofnumber(A, B, C).take_number(A, B, C);
	cout<<aver_ofnumber(A, B, C).give_average();
	
	
	
	
	
	
	
	return 0;
	}
