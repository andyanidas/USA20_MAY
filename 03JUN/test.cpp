#include<iostream>

using namespace std;

int main(){
	int result =1,base,exp;
	cin>>base>>exp;
	
	for(int i = 0; i<exp; i++){
		result = result*base;
	}
	cout<<result;
	
	return 0;
}
