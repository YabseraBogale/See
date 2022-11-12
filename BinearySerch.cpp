#include<iostream>
#include<iomanip>
using namespace std;
class BinarySearch{
	int f;
	int poss;
	public:
	void Give_binarySort(int up,int low,int no,int k[]){
		for(int i=(low+up)/2;low<=up;i=(low+up)/2){
			if(k[i]==no){
				f=1;
				poss=i;
				break;
			}
			else if(k[i]>no){
				up=i-1;
			}
			else{
				low=i+1;
			}
		}
		if(f==1){
			cout<<"\nThe searching element is found at "<<poss;
		}
		else{
			cout<<"\nThe searching element is not found";
		}
	}
	
	};
int main(){
	
	int *arr;
	int n;
	int no;
	cout<<"Enter the size of the array: ";
	cin>>n;
	arr=new int[n];
	int up=sizeof(arr)/sizeof(arr[0]);
	int low=0;
	cout<<"Enter the Sorted Array"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter number: ";
		cin>>arr[i];
	}
	
	cout<<"Enter number to search: ";
	cin>>no;
	BinarySearch Test;
	Test.Give_binarySort(up,low,no,arr);
	
	return 0;
	}


