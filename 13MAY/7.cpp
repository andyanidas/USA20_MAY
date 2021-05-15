#include<iostream>

using namespace std;

int main(){
	int x,y,z;
	cout<<"Enter 3 number: ";
	cin>>x>>y>>z;
	
	bool check;
	check = x>y;
	
	if(check){
		if(x>z){
			cout<<x<<" is largest";
		}else{
			cout<<z<<" is largest";
		}
	}else{
		if(y>z){
			cout<<y<<" is largest";
		}else{
			cout<<z<<" is largest";
		}
	}
	
	return 0;
}
