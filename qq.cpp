//run this
// g++ -o quick qq.cpp && ./qq
#include<iostream>
using namespace std;
int arrayFilter(int a[], int begin,int end){
    int sum=0;
    while(begin<=end){
        sum+=a[begin-1];
        begin+=1;
    }
    return sum;    
}
string theNumberCanBeMadeWithTheArray(int a[],int number){
        int odd=(sizeof(a)/sizeof(a[0]))/2 +1;
        int counter=odd;
        for(int i=1;i<=odd;i++){
            int j=odd+i;
            int sum=0;
            if(counter>=0){
                sum=arrayFilter(a,counter,j);
                counter-=1;
            }
            if(sum==number){
                cout<<sum<<endl;
                return "true";
            }
        
        }
        return "false";
    }
int main(){
    int arrayOdd[]={1,2,3,4,5,6,7,8,9};
    cout<<theNumberCanBeMadeWithTheArray(arrayOdd,15)<<endl;
    return 0;
}