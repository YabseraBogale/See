#include<iostream>
using namespace std;
struct NameBook{
	
	string Name;
	string book_Id;
	
	};
struct price{
	
	NameBook Book; 
	float p1;
	float p2;
	float p3;
	float ava;
	
	};	

price input(price b){
	
	cout<<"Enter the name of book: ";
	cin>>b.Book.Name;
	cout<<"Enter Book Id: ";
	cin>>b.Book.book_Id;
	cout<<"Enter preice 1: ";
	cin>>b.p1;
	cout<<"Enter preice 2: ";
	cin>>b.p2;
	cout<<"Enter preice 3: ";
	cin>>b.p3;
	
	return b;
	
	}
void display(price &b){
	for(int i=0;i<32;i++) cout<<"=";
	cout<<endl;
	cout<<"Name: "<<b.Book.Name<<endl;
	cout<<"ID: "<<b.Book.book_Id<<endl;
	cout<<"Price 1: "<<b.p1<<endl;
	cout<<"Price 2: "<<b.p2<<endl;
	cout<<"Price 3: "<<b.p3<<endl;
	cout<<"Average price: "<<b.ava<<endl;
	}
float average(price b){
	
	
	b.ava=(b.p1+b.p2+b.p3)/3;
	
	return b.ava;
	
	}
int main(){
	
	price in_book;
	price of_book;
	input(in_book);
	of_book=in_book;
	average(of_book);
	display(of_book);
	
	
	return 0;
	}
	
