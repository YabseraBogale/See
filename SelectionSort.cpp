#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int n,*arr;
	int i,k,temp;
	cout<<"Input the number of elements in list:";
	cin>>n;
	arr=new int [n];
	for(i=0;i<n;i++){
		cout<<"Enter a number: ";
		cin>>arr[i];
	}
	cout<<"List Before sorting:"<<endl;
	for (i=0;i<n;i++){
		cout<<setw(5)<<arr[i];
	}
	cout<<"\nAfter Sorting:"<<endl;
	for(i=0;i<n-1;i++){
		for(k=i+1;k<n;k++){
			if(arr[i]>arr[k]){
				temp=arr[k];
				arr[k]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<setw(5)<<arr[i];
	}
	return 0;
	}
