#include <iostream>
using namespace std;

int main() {
	float height, fullinches;
	int feet, inches;
	
	 cout<<"Enter height in centimeters: ";
	 cin>>height;
	 
	 if ( height<0) {
	 cout<<"Invalid height";
	 return 0; }
	 else {
		 fullinches = height/2.54; //1 inches = 2.54centemeters//
		 feet = fullinches/12; //1 feet = 12inches//
		 inches = fullinches - (feet*12);
		 
		 cout<<feet<<" feet "<<inches<<" inches";
	 } 
	 return 0;
}