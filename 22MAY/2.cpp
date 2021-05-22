#include<iostream>

using namespace std;

int main(){
	int num,fDigit,lDigit;
	cin>>num;//723456
	lDigit = num%10;
	
	for(;num>10;num=num/10){
	}
	
	fDigit = num;
	cout<<"first digit: "<<fDigit<<endl;
	cout<<"last digit: "<<lDigit;
	
	return 0;
}
