#include<iostream>
using namespace std;
int main(){
	string word="facebook";
	int lg=word.length();
	for(int i=0,j=lg-1;i<lg && j>0;i++,j--){
		
		string neword=word;
		if(word[i]!=word[j]){
			
			neword[i]=word[j];
			neword[j]=word[i];
			cout<<"The new word is "<<neword<<endl;
			
		}
		
		
	}
	



    } 
