#include<iostream>
#include<iomanip>
using namespace std;
struct donation{
	
	string FullName;
	short age;
	char gender;
	int tel_phone;
	short woreda;
	string house_address;
	int bloodbank_ID;
	string Date;
	string Blood_type;
	short wieght_inkilogram;
	short blood_takeninml;
	string donare;	
	};
short border=34;
donation *at_hosptial(donation *person);
donation *at_bloodbank(donation *person);
void display(donation person);
void input(	donation *person);
int main(){
	
	
	char to_contniue;
	donation *people;
	donation dis_people;
	int num_of_people;
	people = NULL;
	
	do{
	
		input(people);
		cout<<"\nEnter number of people: ";
		cin>>num_of_people;
		
		for(int i=0; i<num_of_people;i++){
			
			dis_people=people[i];
			display(dis_people);
			cout<<endl;
		}
		cout<<"\n To continue press y or to exit other character: ";
		cin>>to_contniue;
		
	}while(to_contniue=='y' || to_contniue=='Y');
	
	return 0;
	}
void input(donation *person){
	
	char in_person;
	
	top:
	cout<<"If donation at hospitial input H or at Blood Bank enter B: ";
	cin>>in_person;
	cout<<endl;
	cin.ignore();
	
	if(in_person=='H' || in_person=='h'){
		cout<<"You have entered Hospital"<<endl;
		at_hosptial(person);	
		
	}
	
	else if(in_person=='B' || in_person=='b'){
		
		cout<<"You have entered Blood bank"<<endl;
		at_bloodbank(person);
			

	}
	
	else{
		
		cout<<"ENTER THE CORRECT CHARACTER"<<endl;
		goto top;	
	}
	}
donation *at_hosptial(donation *person){
	
	short age;
	short wieght;
	person = NULL;
	
	short num_people;
	
	cout<<"number of people: ";
	cin>>num_people;
	cin.ignore();
	person = new donation[num_people];
	for(short i=0;i<num_people;i++){
		
		cout<<"\nEnter the person full name: ";
		getline(cin,person[i].FullName);
		cout<<"Enter age: ";
		cin>>person[i].age;
		age=person[i].age;
		cout<<"Enter Gender M for male F female: ";
		cin>>person[i].gender;
		cout<<"Enter telephone: ";
		cin>>person[i].tel_phone;
		person[i].bloodbank_ID= person[i].tel_phone-900000000;
		cout<<"Enter Woerda: ";
		cin>>person[i].woreda;
		cout<<"Enter house address: ";
		cin>>person[i].house_address;
		cout<<"Enter Datein the form DD/MM/YY: ";
		cin>>person[i].Date;
		cout<<"Enter  wieght: ";
		cin>>person[i].wieght_inkilogram;
		wieght=person[i].wieght_inkilogram;
		if(age > 18 && wieght > 50 ){
			
			cout<<"blood type 'A' 'B' 'AB' or 'O':";
			cin>>person[i].Blood_type;
			cin.ignore();
			cout<<"taken blood for donation in milileter:";
			cin>>person[i].blood_takeninml;
			cout<<"\nNext donation in 8 weeks"<<endl;
			person[i].donare = "Yes";
			cin.ignore();
			
		}
		else{
			
			cout<<"This person doesn't meet criteria"<<endl;
			person[i].donare = "NO";
			cin.ignore();	
		}	
	}
	return person;
	}	
donation *at_bloodbank(donation *person){
	
	short age;
	short wieght;
	person = NULL;
	
	short num_people;
	
	cout<<"number of people: ";
	cin>>num_people;
	cin.ignore();
	person = new donation[num_people];
	
	for(short i=0;i<num_people;i++){
		
		cout<<"\nEnter the person full name: ";
		getline(cin,person[i].FullName);
		cout<<"Enter age: ";
		cin>>person[i].age;
		age=person[i].age;
		cout<<"Enter Gender M for male F female: ";
		
		cin>>person[i].gender;
		
		cout<<"Enter telephone: ";
		cin>>person[i].tel_phone;
		person[i].bloodbank_ID= person[i].tel_phone-900000000;
		cout<<"Enter Woerda: ";
		cin>>person[i].woreda;
		cout<<"Enter house address: ";
		cin>>person[i].house_address;
		cout<<"Enter Datein the form DD/MM/YY: ";
		cin>>person[i].Date;
		cout<<"Enter  wieght: ";
		cin>>person[i].wieght_inkilogram;
		wieght=person[i].wieght_inkilogram;
		if(age > 18 && wieght > 50 ){
			
			cout<<"blood type 'A' 'B' 'AB' or 'O': ";
			cin>>person[i].Blood_type;
			cout<<"taken blood for donation in milileter: ";
			cin>>person[i].blood_takeninml;
			cin.ignore();
			cout<<"Next donation in 8 weeks"<<endl;
			person[i].donare = "Yes";
			cin.ignore();
			
		}
		else{
			
			cout<<"This person doesn't meet criteria"<<endl;
			person[i].donare = "NO";
			cin.ignore();
		}
				
	}	
	return person;
	
	}
void display(donation person){
	
	short flength;
	
	flength = person.FullName.length();
	if(border<flength) border+=flength;
	for(short i=1;i<border;i++) cout<<"-";
	cout<<""<<endl;
	cout<<left<<"| "<<setw(flength)<<"FULL NAME"<<" | "<<setw(5)<<"AGE"
		<<" | "<<setw(6)<<"B.type"<<" | "<<setw(8)<<"B.ID"<<" | "<<setw(6)
		<<"Donare"<<" |";
	for(short i=1;i<border;i++) cout<<"-";
	
	cout<<left<<"| "<<setw(flength)<<person.FullName<<" | "<<setw(5)<<person.age
		<<" | "<<setw(6)<<person.Blood_type<<" | "<<setw(8)<<person.bloodbank_ID<<" | "<<setw(6)
		<<person.donare<<" |";
	for(short i=1;i<border;i++) cout<<"-";	

	}

