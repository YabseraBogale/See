#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std; 

struct nodeType{
	int info; 
	nodeType *link;
};

nodeType *head, *p, *q, *newNode; 
int count; 
nodeType *first; 
nodeType *last; 

void buildListForward() {
	int num; 
	cout<<"Enter a list of integers ending with -999."
	<<endl; 
	cin>>num; 
	first=NULL; 
	while(num != -999) {
		newNode = new nodeType; 
		newNode -> info = num; 
		newNode-> link = NULL;
		if(first==NULL) {
			first = newNode; 
			last=newNode; 
		} else {
			last-> link = newNode; 
			last = newNode; 
		}
		cin>>num; 
		count++; 
	}
}

/*void buildListBackward() {
	int num; 
	cout<<"Enter a list of integers ending with -999."
	<<endl; 
	cin>> num; 
	first = NULL; 
	while(num != -999) {
		newNode = new nodeType; 
		newNode->info = num; 
		newNode->link = first; 
		
		first = newNode; 
		
		cin>>num; 
		count++;  
	}
}

void destroyList() {
	nodeType *temp; 
	while (first != NULL) {
		temp = first; 
		first = first -> link; 
		delete temp; 
	}
	last = NULL; 
	count = 0; 
}

void initializeList() {
	destroyList(); 
}*/

void print() {
	nodeType *current; 
	current = first;
	while (current != NULL) { 
	cout<<current->info<<" ";
	current = current-> link; 
	}
}

int length(){
	return count; 
}

int front() {
	return first->info; 
}

int back(){
	return last->info;
}

bool search (int searchItem) {
	nodeType *current;
	bool found = false; 
	current = first; 
	while (current != NULL && !found ) 
	if (current -> info == searchItem)
	found = true; 
	else 
	current = current->link; 
	
	return found;  
}

void insertFirst (int newItem) {
	newNode = new nodeType; 
	newNode->info = newItem; 
	newNode->link = first; 
	first = newNode; 
	count++;
	if(last == NULL) 
	last = newNode; 
}

void insertLast (int newItem) {
	newNode = new nodeType; 
	newNode->info = newItem; 
	newNode->link = NULL; 
	if (first == NULL) 
	{
		first = newNode; 
		last = newNode; 
		count++;
	} else {
		last->link = newNode; 
		last = newNode; 
		count++; 
	}
}

void deleteNode(int deleteItem){
	nodeType *current;
	nodeType *trailCurrent;
	bool found;
	if(first==NULL)
	cout<<"Cannot delete fom an empty list."
		<<endl;
	else{
		if(first->info == deleteItem) {
			current =first;
			first= first->link;
			count--;
			if(first == NULL)
			last=NULL;
			delete current;
		}
		else{
			found =false;
			trailCurrent=first;
			current= first->link;
			while(current !=NULL && !found){
				if(current->info !=deleteItem){
					trailCurrent = current;
					current = current->link;
				}
				else
					found = true;
			}
			if(found){
				trailCurrent->link = current->link;
				count--;
				if(last==current)
					last=trailCurrent;
				delete current;
			}
			else
				cout<<"The item to be deleted is not in "<<"the list."<<endl; 
		}
	}
	
}

bool isEmptyList() {
	return (first == NULL);
}

int main(){
	int searchItem,temp;
	
	buildListForward();
	
	cout<<"size of the list is : "<<length()<<endl<<endl;
	
	print();
	cout<<"\n\n";
	
	cout<<"eneter a number for search: ";
	cin>>searchItem;
	bool flag2 = search(searchItem);
	
	if(flag2) {
		cout<<"WOW! the element is found in the list. "<<endl;
	} else 
		cout<<"Item not found in the list. "<<endl;
		
	cout<<"enter a number to insert into the beginning of list : ";
	cin>>temp;
	insertFirst(temp);
	cout<<"size ofthe list is: "<<length()<<endl<<endl;
	print();
	cout<<"\n\n";
	
	cout<<"enter a number to insert at the end of list : ";
	cin>>temp;
	insertLast(temp);
	cout<<"size ofthe list is: "<<length()<<endl<<endl;
	print();
	cout<<"\n\n";
	
	cout<<"enter a number to delete from the list : ";
	cin>>temp;
	deleteNode(temp);
	cout<<"size ofthe list is: "<<length()<<endl<<endl;
	print();
	cout<<"\n\n";
	
	cout<<"This is the first element in the list: "<<front()<<"\n\n";
	cout<<"This is the last element in the list: "<<back()<<"\n\n";
	bool flag1 = isEmptyList();
	if(flag1) {
		cout<<"The list is empty. "<<endl;
		}
	else
		cout<<"Non Empty list. "<<endl;
	initializeList();
	cout<<"\n\n";
	cout<<"initializeList() is called. Noting to display!!! ";
	cout<<"\n\n";
	cout<<"Size of the list is: "<<length()<<endl<<endl;
	print();
	return 0;
}
