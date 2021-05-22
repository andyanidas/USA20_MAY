#include<iostream>

using namespace std;

int main(){
	int num,rev=0,one=0,two=0,three=0,four=0;
	cin>>num; //123456
	
	for(;num>0;num/=10){
		switch(num%10){
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 4:
				four++;
				break;
		}
	}
	cout<<"Frequency of 1 = "<<one<<endl;
	cout<<"Frequency of 2 = "<<two<<endl;
	cout<<"Frequency of 3 = "<<three<<endl;
	cout<<"Frequency of 4 = "<<four<<endl;
	return 0;
}
