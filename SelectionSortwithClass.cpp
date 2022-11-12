#include<iostream>
#include<iomanip>
using namespace std;
class SelectionSort{
	int n,temp;
	int *arr;
	public:
	void take_arrsizeandarr(int N,int k[]){
		n=N;
		arr=new int[n];
		for(int i=0;i<n;i++){
			arr[i]=k[i];
		}
		cout<<"Before Sorting"<<endl;
		for(int i=0;i<n;i++){
			cout<<setw(5)<<arr[i];
		}
	}
	int *Give_after_sort(){
		for(int i=0;i<n-1;i++){
			for(int k=i+1;k<n;k++){
				if(arr[i]>arr[k]){
					temp=arr[k];
					arr[k]=arr[i];
					arr[i]=temp;
				}
			}
		}
		cout<<"\nAfter With Selection Sort"<<endl;
		for(int i=0;i<n;i++){
			cout<<setw(5)<<arr[i];
		}
		return arr;
	}

	};
int main(){
	SelectionSort Test;
	int n;
	int *arr;
	cout<<"Enter size of array: ";
	cin>>n;
	arr=new int[n];
	cout<<"Enter Numbers in The list"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter Number:";
		cin>>arr[i];
	}
	
	Test.take_arrsizeandarr(n,arr);
	Test.Give_after_sort();
	
	return 0;
	}

