// to run this 
// g++ -o quick quick.cpp && ./quick 
#include<iostream>
using namespace std;
class ArraySum{
    int even=0;
    int odd=0;
    bool isEven;
    bool isOdd;
    public:
    void setEvenOrOdd(int a[]){
        if((sizeof(a)/sizeof(a[0]))%2==0){
            even=(sizeof(a)/sizeof(a[0]))/2;
            isEven=true;
            isOdd=false;
        }
        else{
            odd=(sizeof(a)/sizeof(a[0]))/2 +1;
            isEven=false;
            isOdd=true;
        }
    }
    int givingEven(){
        return even;
    }
    int givingOdd(){
        return odd;
    }
    bool IsEven(){
        return isEven;
    }
    bool IsOdd(){
        return isOdd;
    }
    int checkWithEven(int a[], int begin,int end){
        int sum=0;
        while(begin<=end){
            sum+=a[begin-1];
            begin+=1;
        }
        return sum;    
    }
    string theNumberCanBeMadeWithTheArray(int a[],int number){
        int counter=even;
        for(int i=1;i<=even;i++){
            cout<<"Counter: "<<counter<<endl;
            int j=even+i;
            int sum=0;
            if(counter>=0){
                sum=checkWithEven(a,counter,j);
                counter-=1;
            }
            if(sum==number){
                return "true";
            }
        
        }
        return "false";
    }

};
int main(){
    int arrayEven[]={0,0,0,5,0,10,0,0};
    int arrayOdd[]={1,2,3,4,5,6,7,8,9};
    //int even = (sizeof(arrayEven)/sizeof(arrayEven[0]))/2;
    //int odd = (sizeof(arrayOdd)/sizeof(arrayOdd[0]))/2 +1;
    ArraySum test;
    test.setEvenOrOdd(arrayEven);
    cout<<"the test result is "<<test.theNumberCanBeMadeWithTheArray(arrayEven,15)<<endl;
    
    
    return 0;
}