#include<iostream>

using namespace std;

int main(){
	int num,Pow,result=1;
	
	cout<<"Enter number: ";
	cin>>num;//5
	cout<<"Enter power: ";
	cin>>Pow;//4
	//625
	
	for(;Pow>0;Pow--){//pow = 4 3 2 1 0
		result = result*num; //5*5=25
	}
	cout<<"Result: "<<result;
	
	return 0;
}
