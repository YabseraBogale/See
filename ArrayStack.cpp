#include<iostream>
#include<ctime>
#include<sstream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
using namespace std;
struct AWine{
	
	// ************DATA MEMBERS**************
	string wine_name;
	int WineID;
	string fileName;
	//saved Date as dd-mm-yy
	string wine_made_year;
	string sold_date;
	string sold_yes_no;
	float price;
	//it can be "RED WINE" or "WHITE WINE"
	string wine_type;
	string wine_manfauture;
	float Alcohol_percente;
	int currentYear;
	int lastedYear;
	float taxofWine;

};

int rear=100;
int number_of_wine_bottle;
int top=-1;
AWine TotalWine[100];

string NumberToString(int number){
	
	string num;
	stringstream operation;
	operation<<number;
	operation>>num;
	return num; 
	
	}

void WineFiles(AWine Wine){
	
	Wine.fileName="Wine_" + NumberToString(Wine.WineID)+ ".txt";
	string fileName="Wine_" + NumberToString(Wine.WineID)+ ".txt";
	ofstream Wine_File(fileName);
	Wine_File<<left<<setw(12)<<"Date"<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<setw(16)<<"Wine Manfature"<<
		setw(13)<<"Lasted Year"<<setw(21)<<"Alcohol Percent(%)"<<endl;
	Wine_File<<left<<setw(12)<<Wine.wine_made_year<<setw(14)<<Wine.wine_name<<
		setw(15)<<Wine.price<<setw(12)<<Wine.wine_type<<setw(6)<<Wine.sold_yes_no<<
		setw(16)<<Wine.wine_manfauture<<setw(13)<<Wine.lastedYear<<setw(21)<<Wine.Alcohol_percente
		<<endl;
	Wine_File.close();
	
	}

void SoldWineFiles(AWine Wine){
	
	Wine.fileName="SoldWine_" + NumberToString(Wine.WineID)+ ".txt";
	string fileName="SoldWine_" + NumberToString(Wine.WineID)+ ".txt";
	ofstream Wine_File(fileName);
	Wine_File<<left<<setw(12)<<"Date"<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<setw(16)<<"Wine Manfature"<<
		setw(13)<<"Lasted Year"<<setw(21)<<"Alcohol Percent(%)"<<endl;
	Wine_File<<left<<setw(12)<<Wine.wine_made_year<<setw(14)<<Wine.wine_name<<
		setw(15)<<Wine.price<<setw(12)<<Wine.wine_type<<setw(6)<<Wine.sold_yes_no<<
		setw(16)<<Wine.wine_manfauture<<setw(13)<<Wine.lastedYear<<setw(21)<<Wine.Alcohol_percente
		<<endl;
	Wine_File.close();
	
	}

int StringtoNumberforTheYearFromShelf(string String){
	
	string yearExtraction="0000";
	int j=4;
	int i=String.length();
	while(j!=-1){
		yearExtraction[j]=String[i];
		j-=1;
		i-=1;
	}
	
	stringstream operation;
	operation<<yearExtraction;
	int Number=0;
	operation>>Number;
	return Number;
	
	}

int StringtoNumber(string String){
	
	string yearExtraction="0000";
	int j=4;
	int i=String.length()-1;
	while(j!=-1){
		yearExtraction[j]=String[i];
		j-=1;
		i-=1;
	}
	
	stringstream operation;
	operation<<yearExtraction;
	int Number=0;
	operation>>Number;
	return Number;
	
	}

int CurrentYear(){

	time_t curr_time=time(NULL);
	string date_In_String=ctime(&curr_time);
	int Curr_Year=StringtoNumber(date_In_String);
	return Curr_Year;
	
	}
	
string made_Year(){
	
	string Date;
	cout<<"Date Format day-month-year"<<endl;
	cout<<"Example 12-09-1990"<<endl;
	cout<<"Enter Date: ";
	cin>>Date;
	return Date;
	
}


string Wine_Type(){
	
	string wine_type;
	cout<<"1) RED WINE"<<endl;
	cout<<"2) WHITE WINE"<<endl;
	cout<<"3) Other ";
	cin>>wine_type;
	if(wine_type=="1"){
		return "RED WINE";
	}
	else if(wine_type=="2"){
		return "WHITE WINE";
	}
	else{
		cout<<"OTHER"<<endl;
		return "Other";
	}
	
}

float Alcohol_Percent(){
	
	float percent;
	cout<<"Enter Alcohol Percent(%): ";
	cin>>percent;
	return percent;
	
	}

string WineName(){
	
	string name;
	cout<<"Enter Wine Name: ";
	cin>>name;
	return name;
	
	}

float Price(){
	
	float price;
	cout<<"Enter Price: ";
	cin>>price;
	return price;
	
	}

float TaxWine(){
	
	float tax;
	cout<<"Enter Tax Wine: ";
	cin>>tax;
	return tax;
	
	}

string madeBy(){
	
	string name;
	cout<<"Made By: ";
	cin>>name;
	return name;
	
	}

AWine WineInfo(){
	
	AWine SellingWine;
	SellingWine.WineID=number_of_wine_bottle;
	SellingWine.wine_made_year=made_Year();
	SellingWine.currentYear=CurrentYear();
	SellingWine.wine_name=WineName();
	SellingWine.price=Price();
	SellingWine.wine_type=Wine_Type();
	SellingWine.Alcohol_percente=Alcohol_Percent();
	SellingWine.wine_manfauture=madeBy();
	SellingWine.lastedYear=  CurrentYear() - StringtoNumberforTheYearFromShelf(SellingWine.wine_made_year);
	SellingWine.taxofWine=TaxWine();
	SellingWine.sold_yes_no="No";
	SellingWine.sold_date="00-00-0000";
	return SellingWine;
	
	}

void NumberOfWineBottle(){
	
	cout<<"Number Of Wine Bottle the Invetory: "<<number_of_wine_bottle<<endl;
	
	}

void AllinfoOnSingle(){
	
	cout<<left<<setw(14)<<TotalWine[top].wine_name<<
		setw(15)<<TotalWine[top].price<<setw(12)<<TotalWine[top].wine_type<<setw(6)<<TotalWine[top].sold_yes_no<<endl;
	
	}

void InsertIntoShelf(){
	
	if(top>=rear-1){
		cout<<left<<setw(14)<<"Product Name"<<
			setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
		cout<<left<<setw(14)<<" - "<<
			setw(15)<<" - "<<setw(12)<<" - "<<setw(6)<<" - "<<endl;
	}
   else {
      top++;
      TotalWine[top]=WineInfo();
      WineFiles(TotalWine[top]);
   }
   number_of_wine_bottle+=1;
	
	}

void SoldWine(){
	
	if(top<=-1){
		cout<<left<<setw(14)<<"Product Name"<<
			setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
		cout<<left<<setw(14)<<" - "<<
			setw(15)<<" - "<<setw(12)<<" - "<<setw(6)<<" - "<<endl;
	}
	else{
		AllinfoOnSingle();
		SoldWineFiles(TotalWine[top]);
		top-=1;
	}
	number_of_wine_bottle-=1;
	
	}

void SingleWine(AWine Wine){
	
	cout<<left<<setw(14)<<Wine.wine_name<<
		setw(15)<<Wine.price<<setw(12)<<Wine.wine_type<<setw(6)<<Wine.sold_yes_no<<endl;
	
	}

void topOfWineShelf(){
	
	cout<<left<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
	if(top<0){
		cout<<left<<setw(14)<<" - "<<
			setw(15)<<" - "<<setw(12)<<" - "<<setw(6)<<" - "<<endl;
	}
	else{
		
		AllinfoOnSingle();
		
	}
	
	}

void DisplayAll(){
	
	cout<<left<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
	if(top<0) {
		cout<<left<<setw(14)<<" - "<<
			setw(15)<<" - "<<setw(12)<<" - "<<setw(6)<<" - "<<endl;
	}
	else{
		for(int i=top; i>=0; i--){
			
			SingleWine(TotalWine[i]);
			
		}
	}
}

void display(){
	
	int input;
	AWine Wine;
	cout<<"Enter \"1\" to See Top of Wine"<<endl;
	cout<<"Enter \"2\" to Buy Top Wine"<<endl;
	cout<<"Enter \"3\" to Add to Inventory"<<endl;
	cout<<"Enter \"4\" to See All The Inventory"<<endl;
	cout<<"Enter \"5\" to The Size Of The Inventory ";
	cin>>input;
	system("clear");
	switch(input){
		case 1:
			system("clear");
			topOfWineShelf();
			break;
		case 2:
			system("clear");
			SoldWine();
			break;
		case 3:
			system("clear");
			InsertIntoShelf();
			break;
		case 4:
			system("clear");
			DisplayAll();
			break;
		case 5:
			system("clear");
			NumberOfWineBottle();
			break;
		}	
	}

void Start_or_Stop(){
	bool Start=true;
	string Stop;
	do{ 
		
		display();
		cout<<"\n\n\n\nEnter \"y\" to Return to main menu"<<endl;
		cout<<"Enter \"n\" to Exit  ";
		cin>>Stop;
		if(Stop=="Y" || Stop=="y"){
			system("clear");
			display();
		}
		else if(Stop=="N" || Stop=="n"){
			Start=false;
		}
			
	}while(Start);
	
	}

int main(){
	
	Start_or_Stop();
	
	return 0;
	
	}
