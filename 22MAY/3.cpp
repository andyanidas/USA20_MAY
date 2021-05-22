#include<iostream>

using namespace std;

int main(){
	int num,sum=0;
	cin>>num;//723456
	/*
	x = num%10 -> last digit
	y = num/10 -> delete last digit
	*/
	
	for(;num>0;num = num/10){
		sum += num%10;
	}
	cout<<"sum of digit : "<<sum;
	return 0;
}
