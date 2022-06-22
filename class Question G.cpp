// in file no out put takes only input
#include<iostream>
#include<fstream>
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
class price{
	
	
	float p1;
	float p2;
	float p3;
	float ava;
	public:
	NameBook Book; 
	price(){
		
		p1=0;
		p2=0;
		p3=0;
		ava=0.0;
		
	}
	void takeprice(float n1, float n2, float n3){
		
		p1=n1;
		p2=n2;
		p3=n3;
		ava= (p1+p2+p3)/3;
	}
	float givep1(){ return p1; }
	float givep2(){ return p2; }
	float givep3(){ return p3; }
	float giveavaerage(){ return ava; }
	};


int main(){
	
	price of_book;
	ofstream file_in;
	file_in.open("class with file.txt");
	string name;
	string id;
	float n1,n2,n3;
	cout<<"Enter Name: ";
	cin>>name;
	cout<<"Enter book ID: ";
	cin>>id;
	cout<<"Enter price 1: ";
	cin>>n1;
	cout<<"Enter price 2: ";
	cin>>n2;
	cout<<"Enter price 3: ";
	cin>>n3;
	of_book.Book.input(name,id);
	of_book.takeprice(n1,n2,n3);
	// in file
	file_in<<"Name: "<<of_book.Book.give_Name()<<endl;
	file_in<<"ID: "<<of_book.Book.give_ID()<<endl;
	file_in<<"price 1: "<<of_book.givep1()<<endl;
	file_in<<"price 2: "<<of_book.givep2()<<endl;
	file_in<<"price 3: "<<of_book.givep2()<<endl;
	file_in<<"Average: "<<of_book.giveavaerage()<<endl;
	file_in.close();
	//reading from file
	ifstream file_out;
	string line;
	file_out.open("class with file.txt");
	while(file_out){
		
		getline(file_out,line);
		cout<<line<<endl;
		
	}
	file_out.close();
	return 0;
	}
	
