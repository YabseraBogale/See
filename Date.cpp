#include<iostream>
#include<ctime>
using namespace std;
int main(){
	
	time_t d=time(NULL);
	string Date=ctime(&d);
	cout<<"Date is: "<<Date;
	
	return 0;
	}

