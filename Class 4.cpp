#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<fstream>
using namespace std;
class Blood{
	
	string b_type;
	int b_taken;
	string Date;
	public:
	Blood(){
		
		b_type="unknown";
		b_taken=0;
		
		
	}
	
	void take_setblood(string t){
		
		b_type=t;
		time_t D =time(NULL);
		Date= ctime(&D);
		
	}
	void takesetamount(int l){
		
		b_taken = l;
		
	}
	string give_bloodtype(){ return b_type; }
	int give_amountofblood(){ return b_taken; }
	string give_Dateofdonation(){	return Date; }
	
	};
class Person{
	
	protected:
	string fullname;
	short age;
	char gender;
	float telephone;
	string h_add;
	short wieght;
	public:
	Blood person; //A person has blood
	Person(){
		
		fullname="";
		age=0;
		gender='N';
		telephone=0;
		h_add="";
		wieght=0;
		
		
	}
	void take_setname_gender_hadd(string n, char g, string h){
		
		fullname=n;
		gender=g;
		h_add=h;
		
		
	}
	
	void take_settele_weight_age(int t, short w, short a){
		
		telephone=t;
		wieght=w;
		age=a;
		
	}
	string give_name(){return fullname; }
	string give_H_add(){return h_add; }
	int give_tele(){return telephone; }
	char give_gender(){return gender; }
	short give_age(){return age; }
	short give_wieght(){return wieght; }
	
	
	};
//person is donare
class Donare : public Person{
	
	short b_id;
	string h_status;
	public:
	Donare(){
		
		b_id=0;
		h_status="";
		
		
	}
	
	short give_id(){
		
		b_id= telephone-90000000;
		
		return b_id;
		
	}
	
	string give_health(){
		
		if(age > 18 && wieght > 50){
			h_status="Vaild";
			
			return h_status; 
			
		}
		
		h_status="Invaild";
		return h_status;
		
	}
	
	
	
	
	};
	
int main(){
	
	Donare people;
	string Name;
	short Age;
	char gender;
	int telephone;
	short weight;
	string hou_add;
	string line;
	int lg;
	char log_check;
	char from_user;
	cout<<"Enter FULL Name: ";
	cin>>Name;
	lg=Name.length();
	ifstream in_file;
	in_file.open("blood donation file.txt");
	ofstream file_upd;
	file_upd.open("update file.txt");
	while(in_file){
		
		getline(in_file,line);
		log_check=line[0];
		if(log_check=='N'){
			
			for(int i=6, j=0; i<lg && j<lg; i++, j++){
				
				log_check=line[i];
				from_user=Name[j];
				if(log_check==from_user){
					
					
					
				}
				
				
				
			}
			
		}
		
		
		
	}
	
	
	

	return 0;
	
	}
