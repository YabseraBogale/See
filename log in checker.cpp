#include<iostream>
#include<fstream>
using namespace std;
int main(){
	
	string line;
	string Name;
	int lg ; 
	int gl;
	char in_file;
	char from_user;
	string id;
	cout<<"Name: ";
	cin>>Name;
	lg=Name.length();
	cout<<"Enter id: ";
	gl=id.length();
	ifstream file_out;
	ofstream file_copy;
	file_out.open("blood donation file.txt");
	file_copy.open("copy of blood donation file.txt");
	while(file_out){
		
		getline(file_out,line);
		in_file=line[0];
		if(in_file=='N'){
			
			for(int i=6,j=0;i<lg && j<lg;i++,j++){
				
				in_file=line[i];
				from_user=Name[j];
				if(from_user==in_file){
					
					file_out.close();
					file_out.open("blood donation file.txt");
					while(file_out){
						
						getline(file_out,line);
						file_copy<<line<<endl;
						
					}
					file_copy.close();
					
					
				}	
				else{
				
					file_out.open("blood donation file.txt");
					file_copy.open("copy of blood donation file.txt");
					while(file_out){
						
						getline(file_out,line);
						file_copy<<line<<endl;
						
					}
					file_copy.close();
					
					
					
					
				}
			}
	
		}
		
	}
	
	return 0;
}
