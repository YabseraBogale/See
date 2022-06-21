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
class Donare : public Person{
	
	short b_id;
	string h_status;
	public:
	Donare(){
		
		b_id=0;
		h_status="";
		
		
	}
	
	short give_id(){
		
		b_id= 99990000-telephone;
		if(b_id<0) b_id= -1 * b_id;
		
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
	char con;
	int amount;
	char b_type;
	string fullname;
	short age;
	char gender;
	int telephone;
	string h_add;
	short wieght;
	Donare *people;
	short num_people;
	ofstream file_in;
	file_in.open("blood donation file.txt");
	file_in<<"Information of Donares"<<endl;
	for(int i=1;i<27;i++) file_in<<"-";
	file_in<<endl;
	
		cout<<"Enter number of people: ";
		cin>>num_people;
		cin.ignore();
	do{
		system("clear");
		people = new Donare[num_people];
	
		for(short i=0;i<num_people;i++){
		
			cout<<"Enter Full Name: ";
			getline(cin,fullname);
			cin.ignore();
			tele:
			cout<<"Enter telephone: +251 9";
			cin>>telephone;
			if(telephone<9000000 || telephone>99999999){
				cout<<"you have entered the wrong number of digit enter again"<<endl;
				goto tele;	
			}
			cout<<"Enter your Age: ";
			cin>>age;
			cin.ignore();
			cout<<"Enter house Address: ";
			getline(cin,h_add);
			cout<<"Enter wieght: ";
			cin>>wieght;
			cout<<"Enter gender M for male or F for female: ";
			cin>>gender;
			type:
			cout<<"Enter blood type 1:A"<<endl;
			cout<<"Enter blood type 2:B"<<endl;
			cout<<"Enter blood type 3:AB"<<endl;
			cout<<"Enter blood type 4:O"<<endl;
			cout<<"Enter blood type 5:Don't know"<<endl;
			cin>>b_type;
			if(b_type=='1'){
				people[i].person.take_setblood("A");
			}
			else if(b_type=='2'){
				people[i].person.take_setblood("B");
			}
			else if(b_type=='3'){
				people[i].person.take_setblood("AB");
			}
			else if(b_type=='4'){
				people[i].person.take_setblood("O");
			}
			else if(b_type=='5'){
				people[i].person.take_setblood("Don't know");
			}
			else{
				cout<<"You have entered the wrong number"<<endl;
				goto type;
			
			}
			if(age > 18 && wieght > 50){
				cout<<"Enter amount of blood in milileter:";
				cin>>amount;
			}
			else if(age==wieght){
				cout<<"Enter amount of blood in milileter:";
				cin>>amount;
			}
			cin.ignore();
			people[i].take_setname_gender_hadd(fullname, gender, h_add);
			people[i].take_settele_weight_age(telephone, wieght, age);
			people[i].person.takesetamount(amount);
		
			for(int k=1;k<27;k++) file_in<<"-";
			file_in<<endl;
			file_in<<"Name: "<<people[i].give_name()<<endl;
			file_in<<"Gender: "<<people[i].give_gender()<<endl;
			file_in<<"Age: "<<people[i].give_age()<<endl;
			file_in<<"Telephone: "<<people[i].give_tele()<<endl;
			file_in<<"Wieght: "<<people[i].give_wieght()<<endl;
			file_in<<"Date of visit: "<<people[i].person.give_Dateofdonation();
			file_in<<"House address: "<<people[i].give_H_add()<<endl;
			file_in<<"Blood type: "<<people[i].person.give_bloodtype()<<endl;
			file_in<<"Amount of blood given in militere: "<<people[i].person.give_amountofblood()<<endl;
			file_in<<"ID: "<<people[i].give_id()<<endl;
			file_in<<"Status of health: "<<people[i].give_health()<<endl;
			for(int k=1;k<27;k++) file_in<<"-";
			file_in<<endl;
		}
		file_in.close();
		system("clear");
		string line;
		char firstchar;
		ifstream file_out;
		file_out.open("blood donation file.txt");
		while(file_out){
		
			getline(file_out,line);
			firstchar=line[0];
			if(firstchar=='N'){
			
				cout<<line<<endl;
			
			}
			else if(firstchar=='H'){
			
				cout<<line<<endl;
			}
			else if(firstchar=='B'){
			
				cout<<line<<endl;
				
			}
			else if(firstchar=='I'){
			
				cout<<line<<endl;
			
			}
	    }
		
		cout<<"press y to continue: ";
		cin>>con;

	}while(con=='y');
	
	return 0;
	
	}
