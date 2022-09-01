#include<iostream>
/*
 * Given a string, reverse all the words which have odd length. 
 * The even length words are not changed.
 * */
using namespace std;
string oddstring(string s){
	if(s.length()%2==0){
		return s;
	}
	string oddstr="";
	for(int i=s.length();i>=0;i--){
		oddstr+=s[i];
	}
	
	return oddstr;
	}
int main(){
	cout<<oddstring("five")<<endl;
	cout<<oddstring("fie")<<endl;
		return 0;
	}
