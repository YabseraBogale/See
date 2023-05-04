#include<iostream>
using namespace std;

void Prime(int number){
    
    for(int i=2;i<number;i++){
        
        bool yes_no=true;
        for(int j=2;j<i;j++){
            if(i%j==0){
                yes_no=false;
            }
        }
        if(yes_no==true){
            cout<<"Number is prime: "<<i<<endl;
        }
    }

}

int main(){
    int number;
    cout<<"The brute force method"<<endl;
    cout<<"Enter Number range: ";
    cin>>number;
    Prime(number);  
    return 0;
}