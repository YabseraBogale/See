#include<iostream>
#include<ctime>
#include<sstream>
using namespace std;
int main(){
	
	time_t D=time(NULL);
	string Date=ctime(&D);
	string Year="";
	int j=Date.length();
	int i=j-5;
	while(j>i){
		
		Year+=Date[i];
		i++;
		
	}
	stringstream ss;
	int Y;
	ss<<Year;
	ss>>Y;
	cout<<"year is "<<Year;
	if(Y%100==0){
		cout<<"Century is "<<Y/100;
	}
	else{
		cout<<"Century is "<<(Y/100)+1;
		
	}
	return 0;
	}
