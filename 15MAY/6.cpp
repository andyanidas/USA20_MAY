#include<iostream>

using namespace std;

int main(){
	int money;
	cin>>money; // 369
	//1,2,5,10,20,50,100
	
	if(money>=100){
		cout<<"100 x "<<money/100<<endl;
		money = money - money/100*100;
	}
	
	if(money>=50){
		cout<<"50 x "<<money/50<<endl;
		money = money - money/50*50;
	}
	
	
	return 0;
}
