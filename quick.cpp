// to run this 
// g++ -o quick quick.cpp && ./quick 
#include<iostream>
using namespace std;
int main(){
    int arrayEven[]={1,2,3,4,5,6};
    int arrayOdd[]={1,2,3,4,5,6,7};
    int even = (sizeof(arrayEven)/sizeof(arrayEven[0]))/2;
    int odd = (sizeof(arrayOdd)/sizeof(arrayOdd[0]))/2 +1;
    int i=1;
    while(i<=even){
        int j=i*2;
        int mover=even+i;
        while(j>0){
            j-=1;
            cout<<"Array of Even length "<<arrayEven[mover]<<" ";
            mover-=1;
        }
        cout<endl;
        i+=1;
    }
    
    return 0;
}