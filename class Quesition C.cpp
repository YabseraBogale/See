#include<iostream>
using namespace std;
class NameBook{
	
	string Name;
	string book_Id;
	public:
	void input(string N, string I){
		
		Name=N;
		book_Id=I;
	}
	string give_Name(){ return Name; }
	string give_ID(){ return book_Id; }
	
	};
struct price{
	
	NameBook Book; 
	float p1;
	float p2;
	float p3;
	float ava;
	
	};
void input(price &b){
	string Name;
	string book_id;
	cout<<"Enter Name: ";
	cin>>Name;
	cout<<"Enter ID: ";
	cin>>book_id;
	b.Book.input(Name,book_id);
	cout<<"Enter price 1: ";
	cin>>b.p1;
	cout<<"Enter price 2: ";
	cin>>b.p2;
	cout<<"Enter price 3: ";
	cin>>b.p3;
	
	
}
float average(price &b){
	
	
	b.ava=(b.p1+b.p2+b.p3)/3;
	
	return b.ava;
	
	}
void display(price b){
	
	cout<<"Name: "<<b.Book.give_Name()<<endl;
	cout<<"ID: "<<b.Book.give_ID()<<endl;
	cout<<"p1: "<<b.p1<<endl;
	cout<<"p2: "<<b.p2<<endl;
	cout<<"p3: "<<b.p3<<endl;
	cout<<"Average: "<<b.ava<<endl;
	
	
	
	}
int main(){
	price x;
	input(x);
	average(x);
	display(x);
	
	
	return 0;
	}
	
