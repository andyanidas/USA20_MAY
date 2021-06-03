#include<iostream>

using namespace std;

int main(){
	int si;
	cin>>si;
	
	for(int i = 0; i<si; i++){
		for(int j = 0; j<si; j++){
			if(i==0 || i==9 || j==0 || j==9){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	
	return 0;
}
