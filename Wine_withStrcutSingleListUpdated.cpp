#include<iostream>
using namespace std;
struct WineSLSTRUCT{
	
	int Date;
	string wine_name;
	//index 0 dd index 1 mm index 2 yy
	int wine_made_year[3];
	float price;
	int number_of_wine_bottle;
	int sold_day[3];
	//it can be "RED WINE" or "WHITE WINE"
	string wine_type;
	string wine_manfauture;
	int sales_frequency;
	WineSLSTRUCT *link;
	
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
string no_wine(){
	
	if(top==NULL){
		return "NO WINE IN STACK";
	}
	else{
		return "THERE IS WINE IN STACK";
	}
	
	}
	
int DateOfSales(){
	
	int Date;
	cout<<"Wine Sales Date: ";
	cin>>Date;
	return Date;
	
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
	cin>>MADEBY;
	return MADEBY;
	}

string WineType(){
	int wineType;
	cout<<"Enter Wine Type"<<endl;
	cout<<"1) RED WINE"<<endl;
	cout<<"2) WHITE WINE  ";
	cin>>wineType;
	if(wineType==1){
		return "RED WINE";
	}
	return "WHITE WINE";
	
	}
	

int numberOfWineBottleInStack(){
	int number=0;
	//operation 
	return number;
	}

	
void makeStackWine(WineSLSTRUCT *Wine){
	
	string check=no_wine();
	
	Wine->Date=made_year();
	
	Wine->wine_type=WineType();
	
	Wine->wine_manfauture=MadeBy();
	
	Wine->price=PRICE();
	
	Wine->wine_made_year[0]=made_date();
	
	Wine->wine_made_year[1]=made_month();
	
	Wine->wine_made_year[2]=made_year();
	
	Wine->sold_day[0]=DateOfSales();
	
	Wine->sold_day[1]=MonthOfSales();
	
	Wine->sold_day[2]=YearofSales();
	
	
	if(check=="NO WINE IN STACK"){
		
	}
	
	
	}

void display(){


	}

void new_Wine(){
	
	}
	




void ALLsoldwine(){
	
	}
	
void buildStack(){
	
	}
	
void EmptyStack(){
	
	
	}

void topOfStack(){

	
	}

void whichColorWineIsSoldMore(){
	
	
	}

int main(){

	return 0;
}
