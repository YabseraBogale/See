#include<iostream>
#include<ctime>
using namespace std;
int main(){
	
	time_t D=time(NULL);
	string Date=ctime(&D);
	string Day;
	for(int i=0;i<3;i++){
		
		Day+=Date[i];
		
		
	}
	
	cout<<"Day: "<<Day<<endl;
	
	return 0;
	}
