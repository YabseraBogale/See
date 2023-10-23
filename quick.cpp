#include<iostream>
using namespace std;
int main(){
    int arrayEven[]={1,2,3,4};
    int arrayOdd[]={1,2,3,4,5};
    cout<<"Possible Arrays "<<sizeof(arrayEven)/sizeof(arrayEven[0])<<endl;
    return 0;
}