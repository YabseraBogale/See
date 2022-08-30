#include<iostream>
#include<cmath>
using namespace std;
class tostring{
	int numint;
	float numfl;
	public:
	void getint(int num){
		numint=num;
	}
	void getfl(float num){
		
		numfl=num;
	}
	string givestring(){
		string numstr;
		
		
		return numstr;
		
	}
	
	
	};
int main(){
	int num=1;
	for(int i=0;i<23;i++){
		num*=10;
		cout<<23%num<<endl;
	}
	return 0;
}
