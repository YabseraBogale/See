#include<iostream>
#include<fstream>
#include<ctime>
#include<iomanip>
using namespace std;
class Blood{
	
	protected:
	string blood_type;
	string Date;
	short blood_inmiliter;
	public:
	Blood(){
		
		blood_type="";
		Date="";
		blood_inmiliter=0;
	
		
	}
	void take_andsetblood(string B,time_t D, short bm){
		
		
		
		blood_type=B;
		
		D=time(NULL);
		
		Date = ctime(&D);
		
		blood_inmiliter=bm;
	
	}
	
	};
//has a
class Person: public Blood {
	
	protected:
	string Fullname;
	string city;
	int tele_phone;
	string Haddress;
	char gender;
	short weight;
	short age;
	public:
	Person(){
		Fullname="";
		city="";
		tele_phone=0;
		Haddress="";
		gender = '0';
		weight=0;
		age=0;
		
		
	}
	void take_andsetinfostring(string fname, string c, string Ha, char g){
		
		Fullname=fname;
		city=c;
		Haddress=Ha;
		gender=g;
		
	}
	void take_andsetinfoint(int tele, short w, short a){
		
		if(tele>900000000 && tele <999999999){
			
			tele_phone=tele;
			
		}
		else{
			
			cout<<"Enter the correct number of digits.";
			
		}
		
		weight=w;
		age=a;
		
		
	}
	
	
	};
class Donare : public Person{
	
	
	int blood_bankid;
	string health;
	public:
	Donare(){
		
		blood_bankid=0;
		health="";
		
		
	}
	
	
	void take_andgivestatus(short w, short a){
		
		if(w>=50 && a>=18) health= "Vaild";
		health = "Invaild";
		blood_bankid=tele_phone-999900000;
	}
	int givibloodid(){
		
		
		return blood_bankid;
	}
	string givihealthstatus(){
		
		return health;
		
	}
	
	
	};
	
Donare take_andsetpeople(short num_people, Person *people){

	people = new Person[num_people];
}	
	
int main(){
	
	






	return 0;
}
