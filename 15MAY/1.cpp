#include<iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	
	if(num%5==0){
		if(num%11==0){
			cout<<"divisibile by 5 and 11";
		}else{
			cout<<"only divisible by 5";
		}
	}else{
		if(num%11==0){
			cout<<"Only divisible by 11";
		}else{
			cout<<"not divisible by 11 nor 5";
		}
	}
	
	
	
	return 0;
}
