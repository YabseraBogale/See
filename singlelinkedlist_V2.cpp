#include<iostream>
using namespace std;
struct SLL{
	int data;
	SLL *link;
	};
SLL *head=NULL,*last=NULL;
SLL *temp=new SLL;
void back(int Data){
	temp->data=Data;
	if(head==NULL){
		head=temp;
		temp->link=last;
	}
	else{
		head->link=temp;
		temp->link=last;
	}
	}
void display(){
	if(head==NULL){
		cout<<head->link;
	}
	else{
		//cout<<"	"<<temp->link;
		//temp=temp->link;
	}
	}
int main(){
	cout<<"Enter Number And \"-1\" to exit";
	int num;
	while(num!=-1){
		cout<<"\nEnter number: ";
		cin>>num;
		back(num);
	}
	display();
	return 0;
	}
