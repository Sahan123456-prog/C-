#include <iostream>
using namespace std;

double areaOfCircle(double r) {
	return 3.14159*r*r;
}


int main () {
	double r;
	cout<<"Enter r: ";
	cin>>r;
	cout<<"Area: "<< areaOfCircle(r);
	return 0;
}
