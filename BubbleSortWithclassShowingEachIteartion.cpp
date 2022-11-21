#include<iostream>
#include<iomanip>
using namespace std;
class BubbleSort{
	int *arr;
	public:
	void take_and_sort(int k[],int n){
		arr= new int[n];
		for(int i=0;i<n;i++){
			arr[i]=k[i];
		}
		cout<<endl;
		cout<<"Before Sorting"<<endl;
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-i-1;j++){
				if(arr[j]>arr[j+1]){
					int temp=arr[j+1];
					arr[j+1]=arr[j];
					arr[j]=temp;
				}
			}
			int iteration=i+1;
			cout<<"\nIteation at: "<<iteration<<endl;
			for(int j=0;j<n;j++){
				cout<<setw(5)<<arr[j]<<" ";
			}
			cout<<endl;
		}
		cout<<"After Sorting"<<endl;
		for(int i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
	}
	};
int main(){
	BubbleSort Test;
	int no;
	cout<<"Enter Size: ";
	cin>>no;
	int *arr=new int[no];
	for(int i=0;i<no;i++){
		cout<<"Enter Number: ";
		cin>>arr[i];
	}
	Test.take_and_sort(arr,no);
	
	return 0;
	}
