#include <iostream>
using namespace std;

int main() {
	string name, index;
	float pm, dsm, cnm, total, p;
	/*pm = programming marks, dsm = database system marks, cnm = computer network marks
	p = percentage*/
	
	cout<<"Enter index number: ";
	cin>>index;
	
	cout<<"Enter name: ";
	cin.ignore();
	getline(cin , name);
	
	cout<<"Enter programming marks: ";
	cin>>pm;
	
	cout<<"Enter database system marks: ";
	cin>>dsm;
	
	cout<<"Enter computer network mark: ";
	cin>>cnm;
	
	if (((pm<0)||(pm>100))||((dsm<0)||(dsm>100))||((cnm<0)||(cnm>100))) {
		cout<<"Invalid number: ";
		return 0;
	}
	
	total = pm + dsm + cnm;
	cout<<total<<" is total"<<endl;
	 
	p = (total/300)*100;
	cout<<p<<"% is percentage"<<endl;
	
	if (p<=100 && p>=70) {
		cout<<"First Division";
	}
	else if (p<70 && p>=60) {
		cout<<"Second Division";
	}
	else if (p<60 && p>=50) {
		cout<<"Third Division";
	}
	else {
		cout<<"Fail";
	}
	return 0;
}