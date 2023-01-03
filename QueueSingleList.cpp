#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	};
Node *front=NULL;
Node *rear=NULL;
bool isEmpty(){
	if(front==NULL && rear==NULL){
		return true; 
	}
	return false;
	}
	
void enqueue(int Data){
	Node *ptr=new Node;
	ptr->next=NULL;
	ptr->data=Data;
	if(front==NULL){
		front=ptr;
		rear=ptr;
	}
	else{
		rear->next=ptr;
		rear=ptr;
	}
	}
	
void dequeue(){
	if(isEmpty()){
		cout<<"Queue is Empty"<<endl;
	}
	else{
		if(front==rear){
			delete front;
			front=NULL;
			rear=NULL;
		}
		else{
			Node *ptr=front;
			front=front->next;
			delete ptr;
		}
	}
	}
	
void peek(){
	if(isEmpty()){
		cout<<"Queue Empty"<<endl;
	}
	else{
		cout<<front->data<<endl;
	}
	}
	
void display(){
	if(isEmpty()){
		cout<<"Queue Empty"<<endl;
	}
	else{
		Node *ptr=front;
		while(ptr!=NULL){
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
}
int main(){
	
	return 0;
	}
