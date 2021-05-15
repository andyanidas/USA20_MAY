#include<iostream>

using namespace std;

int main(){
	bool raining,snowy,goOut;
	
	//------------------LOGICAL AND---------------------
	raining = true;
	goOut = true;
	
	if(raining && goOut){
		cout<<"Take umberalla";
	}
	//------------------LOGICAL OR---------------------
	raining = false;
	snowy = false;
	
	if(raining || snowy){
		cout<<"Take umberalla";
	}
	
	
	
	return 0;
}
