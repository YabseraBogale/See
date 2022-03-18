#include<iostream>
using namespace std;

struct product{
	
	char productId[10];
	string productname;
	float price1;
	float price2;
	float price3;
	float avgprice;
	string remark;
	
	};

int main(){
	
	product book[3];
	char cont;
	do{
		for(int i=0;i<3;i++){
			
			cout<<"Enter the product Id: ";
			cin.getline(book[i].productId,11,'\n');
			cout<<"Enter the product name: ";
			getline(cin,book[i].productname,'\n');
			cout<<"Enter the price1: ";
			cin>>book[i].price1;
			cout<<"Enter the price2: ";
			cin>>book[i].price2;
			cout<<"Enter the price3: ";
			cin>>book[i].price3;
			cin.ignore();	
		}
		
		cout<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
		cout<<"productID|productname|price1|price2|price3|averageprice|remark|"<<endl;
		cout<<"----------------------------------------------------------------"<<endl;
		
		for(int j=0;j<3;j++){
			
			book[j].avgprice=(book[j].price1+book[j].price2+book[j].price3)/3;
			if(book[j].avgprice>book[j].price1){
				
				book[j].remark="inflated";
				cout<<book[j].productId<<"|"<<book[j].productname<<"|"<<book[j].price1<<"|"<<book[j].price2<<"|"<<book[j].price3<<"|"<<book[j].avgprice<<"|"<<book[j].remark<<"|"<<endl;
				cout<<"----------------------------------------------------------------"<<endl;
				
				
			}
			else if(book[j].avgprice<book[j].price2){
			
				book[j].remark="deflated";
				cout<<book[j].productId<<"|"<<book[j].productname<<"|"<<book[j].price1<<"|"<<book[j].price2<<"|"<<book[j].price3<<"|"<<book[j].avgprice<<"|"<<book[j].remark<<"|"<<endl;
				cout<<"----------------------------------------------------------------"<<endl;
				
			}
			else {
				
				book[j].remark="normal";
				cout<<book[j].productId<<"|"<<book[j].productname<<"|"<<book[j].price1<<"|"<<book[j].price2<<"|"<<book[j].price3<<"|"<<book[j].avgprice<<"|"<<book[j].remark<<"|"<<endl;
				cout<<"----------------------------------------------------------------"<<endl;
				
				
				
			}
			
		}
		
		cout<<"enter y to contniue other character to exit: ";
		cin>>cont;
		cout<<"--------------------"<<endl;
		

    }while(cont=='y'||cont=='Y');




	return 0;
}
