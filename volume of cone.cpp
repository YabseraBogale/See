#include<iostream>
#include<cmath>
using namespace std;
/*
Create a function that takes the height and radius of a cone as arguments 
* and returns the volume of the cone rounded to the nearest hundredth.
Return approximate answer by rounding the answer to the nearest hundredth.
Use C++ PI property, don't fall for 3.14 ;-)
If the cone has no volume, return 0.
*/
float cone(float h,float r){
	float volume=(3.14*r*r*h)/3;
	return floor(volume*100+0.5)/100;
	}
int main(){
	
	cout<<cone(100,2);
	return 0;
	}
