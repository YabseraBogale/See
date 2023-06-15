#include<iostream>
#include<stack>
using namespace std;
struct book{
    string name;
    float price;
};


int main(){
    stack<book> books;
    for(int i=0;i<2;i++){
        string name;
        cout<<"Enter name: ";
        cin>>name;
        float price;
        cout<<"Enter price: ";
        cin>>price;
        book b={name,price};
        books.push(b);
    }
    for(int i=0;i<2;i++){
        cout<<"Top of the shelf: "<<books.top().name<<" "<<books.top().price<<endl;
        books.pop();
    }
    return 0;
}