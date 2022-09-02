#include<iostream>
#include<sstream>
/*
 * Create a function that determines whether a number is Oddish or Evenish.
 * A number is Oddish if the sum of all of its digits is odd, and a number is Evenish if the sum of all of its digits is even. 
 * If a number is Oddish, return "Oddish". Otherwise, return "Evenish".
 * For example, oddishOrEvenish(121) should return "Evenish", since 1 + 2 + 1 = 4.
 * oddishOrEvenish(41) should return "Oddish", since 4 + 1 = 5.
 * 
 * */
using namespace std;
string oddeven(int num){
	string strnum;
	int newnum;
	stringstream s;
	s<<num;
	s>>strnum;
	int lg=strnum.length();
	for(int i=0;i<lg;i++){
		stringstream n;
		int num1;
		n<<strnum[i];
		n>>num1;
		newnum+=num1;
	}
	if(newnum%2!=0){
		return "odd";
	}
	return "even";	
	}
int main(){
	cout<<oddeven(21);
	return 0;
	}
