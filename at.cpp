#include <iostream>
#include <string>
using namespace std;

int main() {
	string text;
	cout<<"Enter the text: ";
	cin>>text;
	cout<<"String: "<<text<<endl;
	cout<<"First character: "<<text.at(0)<<endl;
	cout<<"Last character: "<<text.at(4)<<endl;
	return 0;
}
