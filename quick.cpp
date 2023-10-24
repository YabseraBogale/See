// to run this 
// g++ -o quick quick.cpp && ./quick 
#include<iostream>
using namespace std;
int main(){
    int arrayEven[]={1,2,3,4,5,6,7,8};
    int arrayOdd[]={1,2,3,4,5,6,7};
    int even = (sizeof(arrayEven)/sizeof(arrayEven[0]))/2;
    int odd = (sizeof(arrayOdd)/sizeof(arrayOdd[0]))/2 +1;
    int counter=even;
    for(int i=1;i<=even;i++){
        int j=i*2;
       
        i+=1;
    }
    
    
    return 0;
}