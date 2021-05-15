#include<iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	
	if(num%5==0 && num%11==0){
		cout<<"Divisible by both of 11 and 5";
	}
	
	if(num%5==0 || num%11==0){
		cout<<"num is divisible by at least one of its";
	}
	
	
	return 0;
}
