#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector<long> number;
	long x=1;
	long y=1;
	for(int i=0;i<100;i++){
		y=x+y;
		x=y-x;
		number.push_back(y);
	}
	for(int i=0;i<100;i++){
		
		if(number[i]<0){
			cout<<"Long Data type works up to "<<number[i-1]<<" at index "<<i<<" for this algorthim"<<endl;
			break;
		}
	}
	
	return 0;
}
