
#include<iostream>
#include<fstream>

using namespace std;
int main(){
	
	string line;
	string Name;
	int id;
	char in_file;
	char from_user;
	cout<<"Enter Full Name: ";
	getline(cin,Name);
	ID:
	cout<<"Enter ID: ";
	cin>>id;
	
	if(id>99999 || id<10000){
		
		cout<<"Failed try again"<<endl;
		goto ID;
		
	}
	string str_id = lexical_cast<string>(id);
	cout<<"the str is: "<<str_id<<endl;
	ifstream file_out;
	ofstream file_copy;
	file_out.open("blood donation file.txt");
	file_copy.open("copy of blood donation file.txt");
	while(file_out){
		
		getline(file_out,line);
		in_file=line[0];
		if(in_file=='I'){
			
			for(int i=5,j=0; i<5 && j<5; i++,j++){
				
				in_file=line[i];
				cout<<"line char: "<<line[i]<<" ID: "<<str_id[j]<<endl;
				from_user=str_id[j];
				if(in_file==from_user){
					
					cout<<"in the if statement";
					file_out.close();
					file_out.open("blood donation file.txt");
					while(file_out){
						
						getline(file_out,line);
						file_copy<<line<<endl;
						
					}
					file_copy.close();
					
				}
				else{
					
					
					cout<<"in the else statement";
					
					
				}
			}
			
			
			
		}
		
		
	}
	
	return 0;
}
