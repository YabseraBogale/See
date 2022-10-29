#include<iostream>
using namespace std;
class test1{
	int x;
	public:
 		void set(int X){
    	x=X;
 		}
 	int get(){
    	return x;
 		}

};
struct test2{
	int x;
	void set(int X){
    	x=X;
    }
	
};
class root{
	int x;
	public:
		void set(int X){
			x=X;
		}
		int get(){
			return x;
		}
};
class child:public root{
	int y;
	public:
		root r;
		void set(int Y){
			y=Y;
		}
		int get(){
			return y;
		}
};
class Demo{
	int x;
	int y;
	public:
	Demo(){
		cout<<"Used Default constructor"<<endl;	
	}
	Demo(int X, int Y){
		x=X;
		y=Y;
	}
	void set(int X,int Y){
		x=X;
		y=Y;
	}
	int getx(){
		return x;
	}
	int gety(){
		return y;
	}
	~Demo(){
		cout<<"Demo Destruct"<<endl;
	}
	
};
int main(){
	test1 t1;
	t1.set(15);
	test2 t2;
	t2.x=20;
	cout<<"Test1 with class "<<t1.get()<<endl;
	cout<<"Test with structure t2.x "<<t2.x<<endl;
	child c1;
	c1.set(20);
	cout<<"Child y "<<c1.get()<<endl;
	c1.r.set(15);
	cout<<"Child x "<<c1.r.get()<<endl;
	Demo one;
	one.set(15,25);
	cout<<"Demo one X "<<one.getx()<<" Y "<<one.gety()<<endl;
	Demo two;
	two.set(45,55);
	cout<<"Demo two X "<<two.getx()<<" Y "<<two.gety()<<endl;

	return 0;
}
