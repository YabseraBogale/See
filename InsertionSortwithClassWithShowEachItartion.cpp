#include<iostream>
#include<iomanip>
using namespace std;
class InsertionSort{
	int k,temp;
	public:
	void insertionmethod(int arr[],int n){
			for(int i=1;i<n;i++){
				for(int j=0;j<i;j++){
					if(arr[i]<arr[j]){
					
					temp=arr[j];
					arr[j]=arr[i];
					for(k=i;k>j;k--){
						arr[k]=arr[k-1];
					}
					arr[k+1]=temp;
				}
				cout<<"\nIteation at "<<i<<endl;
				for(int j=0;j<n;j++){
					cout<<setw(5)<<arr[j]<<" ";
				}
				cout<<endl;
			}
		}
		cout<<"\nAfter Sorting"<<endl;
		for(int i=0;i<n;i++){
			cout<<setw(5)<<arr[i];
		}
	}
	};
int main(){
	int *arr,no;
	cout<<"Enter the size of element: ";
	cin>>no;
	arr=new int[no];
	cout<<"Enter The element"<<endl;
	for(int i=0;i<no;i++){
		cout<<"Enter Number: ";
		cin>>arr[i];
	}
	InsertionSort Test;
	Test.insertionmethod(arr,no);
	return 0;
	}

