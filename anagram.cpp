#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	string str1, str2;
	
	cout<<"Enter the string1: ";
	cin>>str1;
	
	cout<<"Enter the string2: ";
	cin>>str2;
	
	if(str1.length() != str2.length()) {
		cout<<"Not Anagrams";
		return 0;
	} 
	
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());
	
	if(str1 == str2) {
		cout<<"Anagrams";
	} else {
		cout<<"Not Anagrams";
	}
	
	return 0;
}
