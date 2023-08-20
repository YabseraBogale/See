#include<iostream>
using namespace std;
int main(){
	
	int* pointer=(int*) malloc(0);
	if(pointer==NULL){
		cout<<"Pointer is null"<<endl;
	}
	else{
		cout<<"Pointer value is "<<*pointer<<endl;
	}
	return 0;
}
