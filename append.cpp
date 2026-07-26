#include <iostream>
#include <string>
using namespace std;

int main() {
	string text1, text2;
	cout<<"Enter the text1: ";
	cin>>text1;
	cout<<"Enter the text2: ";
	cin>>text2;
	
	text1.append(" ");
	text1.append(text2);
	
	cout<<"Final string: "<<text1;
	return 0;
}
