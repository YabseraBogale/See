#include<iostream>
using namespace std;
string doswp(string str,char c1, char c2){
	string newstr="";
	int lg=str.length();
	for(int i=0;i<lg;i++){
		if(str[i]==c1){
			newstr+=c2;
		}
		else if(str[i]==c2){
			newstr+=c1;
		}
		else{
			newstr+=str[i];
		}
	}
	return newstr;
	}
int main(){
	cout<<doswp("aabb",'a','b');
	return 0;
	}
