#include<iostream>
#include<ctime>
#include<sstream>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#include<iomanip>
using namespace std;
struct DllWine{
	
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
	DllWine *next;
	DllWine *prev;
};
int number_of_wine_bottle=0;
DllWine *top=NULL,*start=NULL;

string NumberToString(int number){
	
	string num;
	stringstream operation;
	operation<<number;
	operation>>num;
	return num; 
	
	}
void WineFiles(DllWine *Wine){
	
	Wine->fileName="Wine_" + NumberToString(Wine->WineID)+ ".txt";
	string fileName="Wine_" + NumberToString(Wine->WineID)+ ".txt";
	ofstream Wine_File(fileName);
	Wine_File<<left<<setw(12)<<"Date"<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<setw(16)<<"Wine Manfature"<<
		setw(13)<<"Lasted Year"<<setw(21)<<"Alcohol Percent(%)"<<endl;
	Wine_File<<left<<setw(12)<<Wine->wine_made_year<<setw(14)<<Wine->wine_name<<
		setw(15)<<Wine->price<<setw(12)<<Wine->wine_type<<setw(6)<<Wine->sold_yes_no<<
		setw(16)<<Wine->wine_manfauture<<setw(13)<<Wine->lastedYear<<setw(21)<<Wine->Alcohol_percente
		<<endl;
	Wine_File.close();
	
	}

void SoldWineFiles(DllWine *Wine){
	
	Wine->fileName="SoldWine_" + NumberToString(Wine->WineID)+ ".txt";
	string fileName="SoldWine_" + NumberToString(Wine->WineID)+ ".txt";
	ofstream Wine_File(fileName);
	Wine_File<<left<<setw(12)<<"Date"<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<setw(16)<<"Wine Manfature"<<
		setw(13)<<"Lasted Year"<<setw(21)<<"Alcohol Percent(%)"<<endl;
	Wine_File<<left<<setw(12)<<Wine->wine_made_year<<setw(14)<<Wine->wine_name<<
		setw(15)<<Wine->price<<setw(12)<<Wine->wine_type<<setw(6)<<Wine->sold_yes_no<<
		setw(16)<<Wine->wine_manfauture<<setw(13)<<Wine->lastedYear<<setw(21)<<Wine->Alcohol_percente
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

DllWine *WineInfo(){
	
	DllWine *SellingWine=new DllWine;
	SellingWine->WineID=number_of_wine_bottle;
	SellingWine->wine_made_year=made_Year();
	SellingWine->currentYear=CurrentYear();
	SellingWine->wine_name=WineName();
	SellingWine->price=Price();
	SellingWine->wine_type=Wine_Type();
	SellingWine->Alcohol_percente=Alcohol_Percent();
	SellingWine->wine_manfauture=madeBy();
	SellingWine->lastedYear=  CurrentYear() - StringtoNumberforTheYearFromShelf(SellingWine->wine_made_year);
	SellingWine->taxofWine=TaxWine();
	SellingWine->sold_yes_no="No";
	SellingWine->sold_date="00-00-0000";
	SellingWine->next=NULL;
	SellingWine->prev=NULL;
	return SellingWine;
	
	}
	
void NumberOfWineBottle(){
	
	cout<<"Number Of Wine Bottle the Invetory: "<<number_of_wine_bottle<<endl;
	
	}

bool no_wine(){
	if (start == NULL){
		return true;
    }
    return false;
}

void InsertIntoWineShelf(DllWine *Wine)
{
    Wine=WineInfo();
    if (no_wine()) {
        Wine->prev = NULL;
        Wine->next = NULL;
 
        // As it is first node
        // if stack is empty
        start = Wine;
        top = Wine;
    }
    else {
        top->next = Wine;
        Wine->next = NULL;
        Wine->prev = top;
        top = Wine;
    }
    number_of_wine_bottle+=1;
    WineFiles(Wine);
}

void topOfWineShelf(DllWine *Wine){
	Wine=top;
	cout<<left<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
	if(!(no_wine())){
		cout<<left<<setw(14)<<Wine->wine_name<<
			setw(15)<<Wine->price<<setw(12)<<Wine->wine_type<<setw(6)<<Wine->sold_yes_no<<endl;
	}
	else{
			cout<<left<<setw(14)<<" - "<<
				setw(15)<<" - "<<setw(12)<<" - "<<setw(6)<<" - "<<endl;
		}
	}

void AllinfoOnSingle(DllWine *Wine){
	
	
	cout<<left<<setw(14)<<Wine->wine_name<<
		setw(15)<<Wine->price<<setw(12)<<Wine->wine_type<<setw(6)<<Wine->sold_yes_no<<endl;
		
	}	

void SoldWine(DllWine *Wine)
{
   
    Wine= top;
    if (no_wine()){
		cout<<left<<setw(14)<<"Product Name"<<
		setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
		cout<<left<<setw(14)<<" - "<<
		setw(15)<<" - "<<setw(12)<<" - "<<setw(6)<<" - "<<endl;
	}
    else if (top == start) {
		cout<<left<<setw(14)<<"Product Name"<<
			setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
        top = NULL;
        start = NULL;
        Wine->sold_yes_no="Yes";
        SoldWineFiles(Wine);
        AllinfoOnSingle(Wine);
        delete Wine;
    }
    else {
		cout<<left<<setw(14)<<"Product Name"<<
			setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
        top->prev->next = NULL;
        top = Wine->prev;
        Wine->sold_yes_no="Yes";
        SoldWineFiles(Wine);
        AllinfoOnSingle(Wine);
        delete Wine;
    }
    number_of_wine_bottle-=1;
}

void displayAll(DllWine *Wine){
	

	if(no_wine()){
		cout<<left<<setw(14)<<"Product Name"<<
			setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
		cout<<left<<setw(14)<<" - "<<
		setw(15)<<" - "<<setw(12)<<" - "<<setw(6)<<" - "<<endl;
	}
	else{
		Wine=start;
		cout<<left<<setw(14)<<"Product Name"<<
			setw(15)<<"Selling Price"<<setw(12)<<"Wine Color"<<setw(6)<<"Sold"<<endl;
		while(Wine!=NULL){
			AllinfoOnSingle(Wine);
			Wine=Wine->next;
			
		}
	}
	}

void Display(){
	int input;
	DllWine *Wine=new DllWine;
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
			topOfWineShelf(Wine);
			break;
		case 2:
			system("clear");
			SoldWine(Wine);
			break;
		case 3:
			system("clear");
			InsertIntoWineShelf(Wine);
			break;
		case 4:
			system("clear");
			displayAll(Wine);
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
		
		Display();
		cout<<"\n\n\n\nEnter \"y\" to Return to main menu"<<endl;
		cout<<"Enter \"n\" to Exit  ";
		cin>>Stop;
		if(Stop=="Y" || Stop=="y"){
			system("clear");
			Display();
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
