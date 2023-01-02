#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ifstream file_open;
	file_open.open("Wine.xlsx");
	string line;
	while(file_open){
		getline(file_open,line);
		cout<<line<<endl;
	}
	
	
	
	return 0;
	}
