// need to include the standard string libary to use string ?
#include <string>
using namespace std;
class book{
    float price;
    string name;
    public:
    void getName(string name){
        this->name=name;
    }
    void getPrice(float price){
        this->price=price;
    }
    string giveName(){
        return this->name;
    }
    float givePirce(){
        return this->price;
    }

};