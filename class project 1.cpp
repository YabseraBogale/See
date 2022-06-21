#include<iostream>
#include<iomanip>
#include<ctime>
#include<fstream>
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
class Person: Blood {
	
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
	
	string take_andgivestatus(short w, short a){
		
		if(w>=50 && a>=18) return "Vaild";
		
		
		
		
		return "Invaild";
		
		
	}
	
	
	
	
	};
//is a
class Donare : Person{
	
	
	int blood_bankid;
	string health;
	public:
	Donare(){
		
		blood_bankid=0;
		health="";
		
		
	}
	
	Person *people;
	
	
	void take_andsetpeople(short num_people){
		
		people = new Person[num_people];
		
		
	}
	int givibloodid(){
		
		return blood_bankid;
		
	}
	string givihealthstatus(){
		
		
		return health;
		
	}
	
	};
	

int main(){





	return 0;
}
