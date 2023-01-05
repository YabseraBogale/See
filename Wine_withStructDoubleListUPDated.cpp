#include<iostream>
#include<ctime>
#include<sstream>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct WineSLSTRUCT{
	string wine_name;
	//index 0 dd index 1 mm index 2 yy
	int wine_made_year[3];
	float price;
	int number_of_wine_bottle;
	int sold_day[3];
	//it can be "RED WINE" or "WHITE WINE"
	string wine_type;
	string wine_manfauture;
	string Wine_goneBad;
	float Al_percente;
	int currentYear;
	int lastedYear;
	WineSLSTRUCT *next;
	WineSLSTRUCT *prev;
	};
	
WineSLSTRUCT *top=NULL;

int made_date(){
	
	int date;
	cout<<"Wine is made in Date ";
	cin>>date;
	return date;
	
	}

int made_month(){
	
	int month;
	cout<<"Wine is made in month ";
	cin>>month;
	return month;
	
	}

int made_year(){
	
	int year;
	cout<<"Wine is made in year ";
	cin>>year;
	return year;
	
	}
void no_wine(){
	
}
	

int DateOfSales(){
	
	int Date;
	cout<<"Wine Sales Date: ";
	cin>>Date;
	return Date;
	
	}
	
string Wine_Name(){
	
	string wine_name;
	cout<<"Enter Wine Name: ";
	getline(cin,wine_name);
	return wine_name;
	
	}
	
int MonthOfSales(){
	
	int months;
	cout<<"Wine Sales Months: ";
	cin>>months;
	return months;
	
	}
int YearofSales(){
	
	int Year;
	cout<<"Wine Sales Year: ";
	cin>>Year;
	return Year;
	
	}
float PRICE(){
	float price;
	cout<<"Enter Wine Price: ";
	cin>>price;
	return price;
	}	

string MadeBy(){
	string MADEBY;
	cout<<"Enter The Name Of Wine Producer: ";
	getline(cin,MADEBY);
	return MADEBY;
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
	
float Al_Perctange(){
	
	float al_perctange;
	cout<<"Wine Alchole Pertange(%) ";
	cin>>al_perctange;
	return al_perctange;
	}

string WineType(){
	
	int wineType;
	cout<<"Enter Wine Type"<<endl;
	cout<<"1) RED WINE"<<endl;
	cout<<"2) WHITE WINE  ";
	cin>>wineType;
	cin.ignore();
	if(wineType==1){
		return "RED WINE";
	}
	return "WHITE WINE";
	
	}	

int numberOfWineBottleInStack(){
	
	int number=0;
	//operation From Stack
	return number;
	
	}

WineSLSTRUCT *makeNodeWine(){
	
	WineSLSTRUCT *Wine=new WineSLSTRUCT;	
	
	Wine->wine_type=WineType();
	Wine->wine_manfauture=MadeBy();
	Wine->price=PRICE();
	Wine->wine_made_year[0]=made_date();
	Wine->wine_made_year[1]=made_month();
	Wine->wine_made_year[2]=made_year();
	Wine->sold_day[0]=DateOfSales();
	Wine->sold_day[1]=MonthOfSales();
	Wine->sold_day[2]=YearofSales();
	Wine->Al_percente=Al_Perctange();
	Wine->currentYear=CurrentYear();
	Wine->lastedYear=Wine->currentYear- Wine->wine_made_year[2];
	if(Wine->wine_manfauture=="WHITE WINE" && Wine->lastedYear<2){
		Wine->Wine_goneBad="Still Good";
	}
	else if(Wine->wine_manfauture=="WHITE WINE" && Wine->lastedYear==2){
		Wine->Wine_goneBad="Sell it Quickly";
	}
	else if(Wine->wine_manfauture=="WHITE WINE" && Wine->lastedYear>2){
		Wine->Wine_goneBad="Has Become Bad Wine";
	}
	else if(Wine->wine_manfauture=="RED WINE" && Wine->lastedYear<3){
		Wine->Wine_goneBad="Still Good";
	}
	else if(Wine->wine_manfauture=="RED WINE" && Wine->lastedYear==3){
		Wine->Wine_goneBad="Sell it Quickly";
	}
	else if(Wine->wine_manfauture=="RED WINE" && Wine->lastedYear>3){
		Wine->Wine_goneBad="Has Become Bad Wine";
	}
	return Wine;
	
	}	
	
	

int main(){
	return 0;
	}
