#include <iostream>
using namespace std;

int main() {
	int N;
	
	cout<<"Enter the number: ";
	cin>>N;
	
	if(N%5==0 && N%7==0) {
		cout<<N<<" is divisible by both 5 and 7"<<endl;
	}else if(N%5==0){
		cout<<N<<" is divisible by only 5"<<endl;
	}else if(N%7==0) {
		cout<<N<<" is divisible by only 7"<<endl;
	}else{
		cout<<N<<" is divisible by neither 5 nor 7";
	}
	return 0;
}