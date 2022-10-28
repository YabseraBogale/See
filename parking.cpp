#include<iostream>
#include<ctime>
using namespace std;
class Park{
	int StartTime;
	string CarModel;
	int FinalTime;	
	public:
	void take_car_in(string car_in_model,int time){
		CarModel=car_in_model;
		StartTime=time;
	}
	void take_car_out(string car_in_model,int time){
		CarModel=car_in_model;
		FinalTime=time-StartTime;
	}
	int car_out_time(){
		return FinalTime; 	
	}
	string car_out_model(){
		return CarModel;
	}
	
	};
int cars(Park wab){
	string carName;
	int stime;
	int sptime;
	cout<<"Carmodel input: "<<endl;
	cin>>carName;
	cout<<"Starting time: "<<endl;
	cin>>stime;
	cout<<"Enter  out time: "<<endl;
	cin>>sptime;
	wab.take_car_in(carName,stime);
	wab.take_car_out(carName,sptime);
	cout<<wab.car_out_model();
	return wab.car_out_time();
	}
int main(){
	
	return 0;
}
