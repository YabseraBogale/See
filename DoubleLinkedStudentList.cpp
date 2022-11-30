#include<iostream>
using namespace std;
/*
 * BUGGY code it has so many Error
 * 
 */
class StudentDll{
	int Age;
	StudentDll *prev,*next;
	public:
	StudentDll *head,*last;
	void make(int age,StudentDll *Student=new StudentDll){
		head=NULL;
		Student->prev=head;
		Student->Age=age;
		last->prev=Student;
		Student->next=last;
		last->next=NULL;
	}
	void display(StudentDll *Student=new StudentDll){
		
		if(last!=NULL){
			cout<<" "<<Student->next;
			Student->next=Student;
		}
	}
	
	};
int main(){
	int age;
	StudentDll Test;
	cout<<"Enter Age to Exit Enter \"-1\""<<endl;
	while(age!=-1){
		cout<<"\nEnter Age: ";
		cin>>age;
		Test.make(age);
	}
	Test.display();
	return 0;
	}
