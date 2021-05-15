#include<iostream>

using namespace std;

int main(){
	char ch;
	cin>>ch;
	
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		cout<<"It is a alphabet";
	}
	/*
	if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
		if(vowel){
			cout<<"Vowel";
		}else{
			cout<<"constant";
		}
	}else{
		cout<<"YOu have entered non alphabetic character":
	}
	*/
	
	
	return 0;
}
