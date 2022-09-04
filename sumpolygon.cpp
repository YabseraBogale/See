#include<iostream>
using namespace std;
int sumPolygon(int n) {
	if(n<=2){
		cout<<"N should be greater than 2"<<endl;
		return 0;
	}
	return (n-2)*180;
}
int main(){
	
	cout<<sumPolygon(2);
	
	return 0;
	}
