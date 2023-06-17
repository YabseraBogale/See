#include<iostream>
#include "book.h"
using namespace std;

int main(){

    book b;
    cout<<"Enter book Name: ";
    string name;
    cin>>name;
    b.getName(name);
    cout<<"Enter book price: ";
    float price;
    cin>>price;
    b.getPrice(price);
    cout<<"Boook Name "<<b.giveName()<<" price "<<b.givePirce()<<endl;

    return 0;
}