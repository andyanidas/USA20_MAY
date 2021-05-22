#include<iostream>

using namespace std;

int main(){
	int num,count=0;
	;//123456
	
	for(cin>>num;num>0;num=num/10){
		count++;
	}
	cout<<"# of digit: "<<count;
	
	
	return 0;
}
