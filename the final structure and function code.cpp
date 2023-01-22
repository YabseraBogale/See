#include <iostream>
#include <conio.h>
#include<string>
using namespace std;
int num_car;
struct rent_office
{
    int con;
    string renter_person;
    int work_hour;
};

rent_office re;

struct renter
{
    string Renter_name;
    string DateOfRental;
    string id;
    rent_office location;
};

renter r;
struct car
{
    int type;
    
    string car_name[200] = {"Suzuki", "VW", "BMW", "Audi", "KIA", "Tesla", "FIAT", "FORD", "TATA"};

    string model[200] = {"800", "2020", "Q7", "R8", "Saltos", "Hybrid", "Benz", "Thar", "Nano"};

    string color[200] = {"Yellow", "Black", "Red", "Brown", "Blue", "Silver", "Balck", "Grey", "Red"};

    string max_speed[200] = {"80", "200", "300", "250", "320", "400", "200", "250", "280"};

    int price[100] = {1000, 2000, 4000, 6000, 7000, 2500, 4000, 6000, 800};

    int date[100] = {2020, 2012, 2019, 2018, 2017, 2016, 2015, 2021, 2010};
    renter car_renter;
};
car c;

void name()
{
	cout<<" ------------welcome to johnsnow car world-------------------" <<endl;
    cout << "Enter name of renter: " << endl;
    cin >> r.Renter_name;
}

void model()
{
    cout << "Number\tname\tcolor\tmodel\tspeed\tdate\tprice\n"
         << endl;
    for (int i = 0; i < 9; i++)
    {
        cout << i + 1 << ": \t" << c.car_name[i] << "\t" << c.color[i] << "\t" << c.model[i] << "\t" << c.max_speed[i] << "\t" << c.date[i] << "\t" << c.price[i];
        cout << endl;
    }
    cout << "Enter the car number u want: \n";
    cin >> c.type;
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
    cin >> r.id;
}

void checkin_out()
{
    cout << "Name: " << r.Renter_name << endl;
    cout << "ID: " << r.id << endl;
    cout << "Car detail: " << c.car_name[c.type - 1] << " " << c.color[c.type - 1] << " " << c.model[c.type - 1] << endl;
    PaymentOptions();
    cout << "Thank u for using john snow car rental come back another time :)\n";
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