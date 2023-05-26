/*
    doesn't work why ? don't know 

*/

#include<iostream>
#include<stack>
using namespace std;
class Book{

    float price;
    string name;
    string authorFirstName;
    string authorLastName;
    string bookId;
    public:
    
    void setPrice(float price){
        price=price;
    }

    void setName(string name){
        name=name;
    }

    void setAuthorFirstName(string authorFirstName){
        authorFirstName=authorFirstName;
    }

    void setAuthorLastName(string authorLastName){
        authorLastName=authorLastName;
    }

    void setBookId(string bookId){
        bookId=bookId;
    }

    float getPrice(){   return price; }
    string getName(){   return name; }
    string getAuthorFirstName(){    return authorFirstName; }
    string getAuthorLastName(){     return authorLastName; }
    string getBookId(){     return bookId; }

};
int main(){

    stack<Book> book;
    Book b;
    b.setName("Life");
    b.setPrice(12.0);
    b.setAuthorFirstName("Yabsera");
    b.setAuthorLastName("Bogale");
    b.setBookId("33Li");
    book.push(b);
    string name;
    string authorFirstName;
    string authorLastName;
    string bookId;
    float price;

    
    for(int i=0;i<3;i++){
        Book b;
        cout<<"Enter Price: ";
        cin>>price;
        cout<<"Enter Name: ";
        cin>>name;
        cout<<"Enter Author First Name: ";
        cin>>authorFirstName;
        cout<<"Enter Author Last Name: ";
        cin>>authorLastName;
        cout<<"Enter Book Id: ";
        cin>>bookId;
        b.setPrice(price);
        b.setAuthorFirstName(authorFirstName);
        b.setAuthorLastName(authorLastName);
        b.setBookId(bookId);
        book.push(b);
        
    }
    

    while (book.empty()!=true){
        Book b=book.top();
        cout<<b.getName()<<" "<<b.getAuthorFirstName()<<" "<<b.getAuthorLastName()<<" "<<b.getPrice()<<" "<<b.getBookId()<<endl;
        book.pop();
    }

   return 0;
}