#include<iostream>
#include<iomanip>
using namespace std;
class nodeType{
	int info;
	int count;
	nodeType *link;
	nodeType *first;
	nodeType *last;
	nodeType *newNode;
	public:
	void builtForword(int num){
		first=NULL;
		while(num!=-999){
			newNode=new nodeType;
			newNode->info=num;
			newNode->link=NULL;
			if(first==NULL){
				first=newNode;
				last=newNode;
			}
			else{
				last->link=newNode;
				last=newNode;
			}
			cout<<"Enter num: ";
			cin>>num;
			++count;
		}
	}
	void buildBackwordList(int num){
		first=NULL;
		while(num!=-999){
			newNode=new nodeType;
			newNode->info=num;
			newNode->link=first;
			first=newNode;
			cout<<"Enter num: ";
			cin>>num;
			++count;
		}
	}
	void print(){
		nodeType *current;
		current=first;
		while(current!=NULL){
			cout<<"   "<<current->info<<" ";
			current=current->link;
		}
	}
	int give_count(){
		return count;
	}
	int give_HeadOftheList(){
		return first->info;
	}
	void giveEndOfTheList(){
		 cout<<last->link;
	}
	bool Search(int item){
		nodeType *current;
		bool found=false;
		current=first;
		while(current!=NULL && !found){
			if(current->info==item){
				found=true;
			}
			else{
				current=current->link;
			}
		}
		return found;
	}
	};
int main(){

	nodeType Test2;
	cout<<"\nEnter for list2 -999 to exit"<<endl;
	int num2;
	cout<<"Enter num: ";
	cin>>num2;
	Test2.buildBackwordList(num2);
	cout<<"\n Built Backword"<<endl;
	Test2.print();
	cout<<"\n First in the List: "<<Test2.give_HeadOftheList()<<endl;
	Test2.giveEndOfTheList();
	cout<<"\n Counting in the List: "<<Test2.give_count()<<endl;
	
	
	
	return 0;
	}
