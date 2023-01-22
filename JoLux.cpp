#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int num_car;
class rent_office{
	int con;
    string renter_person;
    int work_hour;
    public:
    void setCon(string Con){
		
		con=Con;
	
	}
	
	string getCon(){
		
		return con;
	
	} 
	
	void setRenterPerson(string RenterPerson){
		
		renter_person=RenterPerson;	
	
	}
	
	string getRenterPerson(){
		
		return renter_person;
	
	}
    
    void setWorkHour(int WorkHour){
		work_hour=WorkHour;
	}
	int getWorkHour(){
		
		return work_hour;
	
	}
	
	};
class renter{
	
	string Renter_name;
    string DateOfRental;
    string id;
    public:
    rent_office location;
    
    void setRenterName(string Name){

		Renter_name=Name;

	}
	
	void setID(string ID){
		id=ID;
	}
	
	string getID(){

		return id;

	}
	
	string getRenterName(){
		
		return Renter_name;

	}
	
	void setDateOfRental(string Date){

		DateOfRental=Date;

	}
	
	string getDateOfRental(){

		return DateOfRental;

	}
	
	};

rent_office re;

class car{
	
	int type;
	string car_name[200] = {"Suzuki", "VW", "BMW", "Audi", "KIA", "Tesla", "FIAT", "FORD", "TATA"};
	string color[200] = {"Yellow", "Black", "Red", "Brown", "Blue", "Silver", "Balck", "Grey", "Red"};
	string max_speed[200] = {"80", "200", "300", "250", "320", "400", "200", "250", "280"};
    int price[100] = {1000, 2000, 4000, 6000, 7000, 2500, 4000, 6000, 800};
    string model[200] = {"800", "2020", "Q7", "R8", "Saltos", "Hybrid", "Benz", "Thar", "Nano"};
    int date[100] = {2020, 2012, 2019, 2018, 2017, 2016, 2015, 2021, 2010};
	public:
	renter car_renter;
	
	void setType(int Type){
	
		type=Type;
	
	}
	int getType(){
		
		return type;
	}
	
	int *date(){
	
		return date;
	
	}
	
	string *getModel(){
	
		return model;
	
	}
	
	int *getPrice(){
	
		return price;
	
	}
	
	string *getMax(){
	
		return max_speed;
	
	}
	
	string *getColor(){
		
		return color;
	
	}
	string *getCarName(){
	
		return car_name;
	
	}
	
	};

renter r;

car c;

void name()
{
	cout<<" ------------welcome to johnsnow car world-------------------" <<endl;
    cout << "Enter name of renter: " << endl;
    cin >> r.setRenterName();
}


int rented_cars()
{
	
 cout<<" how many cars do you want to rent : ";
 cin>>num_car;
return num_car;	
}


int Price()
{
    cout << "Price is " << c.price[c.type - 1]*num_car << endl;
    return 0;
}

void PaymentOptions(){
    string option;
    int card_num;
    cout << "Please select payment option" << endl;
    cout << "1. Credit\n2. Debit" << endl;
    cin >> option;
    if(option == "1"){
        cout << "Credit is selected" << endl;
        cout << "Enter card number" << endl;
		cin>>card_num;
		cout<<" you have paid sucessfully :"<<endl;
		cout<<" you can take the car  bringing the receipt  :"<<endl;
    }
    else if(option == "2"){
        cout << "Debit is selected" << endl;
        cout << "Enter card number" << endl; 
        	cin>>card_num;
        	 Price();
        	cout<<" you have paid sucessfully "<<endl;
        	cout<<" you can take the car by bringing the receipt  : "<<endl;
    }
    else {
        cout << "Invalid payment option" << endl;
    }


}
 

void id()
{
    cout << "Enter your ID number: " << endl;
    cin >> r.setID();
}

void AllinfoFile(string name){
	
	ofstream file(name+".txt");
	file<<"Name: "<<r.getRenterName()<<endl;
	file<<"ID: "<<r.getID()<<endl;
	file<<"Car detail: "<<c.getCarName()[c.getType()-1]<<" " << c.getColor()[c.getType() - 1] << " " << c.getModel()[c.getType() - 1] << endl;
	file << "Thank u for using john snow car rental come back another time :)\n";
	file.close();
	
	}

void checkin_out()
{
    cout << "Name: " << r.getRenterName() << endl;
    
    cout << "ID: " << r.getID() << endl;
    cout <<"Car detail: "<<c.getCarName()[c.getType()-1]<<" " << c.getColor()[c.getType() - 1] << " " << c.getModel()[c.getType() - 1] << endl;
    PaymentOptions();
    cout << "Thank u for using john snow car rental come back another time :)\n";
    AllinfoFile(r.getRenterName());
}

void display()
{
    name();
    id();
    model();
    rented_cars();
    checkin_out();
   
}

int main()
{
    display();
}
