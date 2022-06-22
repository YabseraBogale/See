#include<iostream>
using namespace std;
class student
{
    int rno;
    int fee;
    public:
   // student()                     //  Explicit Default constructor
    //{
       
    //}   
    
    student()                     //  Explicit Default constructor
    {
      cout<<"from constructor"<<endl; 
    }  
    //void display(int n, int d)
    /*{
      // rno=n;
       //fee=d;
    / }*/
    ~student()                     
    {
       cout<<"from deconsructor"<<endl; 
       
    }  
};
 
int main()
{
    student s;
	student k;
    return 0;
}
