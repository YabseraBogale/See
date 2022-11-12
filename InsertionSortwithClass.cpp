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
					cout<<"arr[i="<<i<<"] = "<<arr[i]<<" arr[j="<<j<<"] = "<<arr[j]<<endl;
					temp=arr[j];
					arr[j]=arr[i];
					for(k=i;k>j;k--){
						arr[k]=arr[k-1];
						cout<<"arr[i="<<i<<"] = "<<arr[i]<<" arr[j="<<j<<"] = "<<arr[j]<<" arr[k="<<k<<"]= "<<arr[k]<<endl;
					}
					arr[k+1]=temp;
				}
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

