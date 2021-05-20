#include<iostream>

using namespace std;

int main(){
	int day;
	cout<<"enter weekday (1-7) : ";
	cin>>day;
	
	switch(day){
		case 1:
			cout<<"MD";
			break;
		case 2:
			cout<<"TD";
			break;
		case 3:
			cout<<"WD";
		default: 
			cout<<"inviled input!";
			break;
	}
	
	/*
	1. user input one char
	2. check if it is alphabet or not
	3. if it is alphabet check if it is egshig or not
	4. hervee egshig bish bol giiguulegch gej hevle
	if(19 == 15)
	
	char ch;
	switch(ch){
		case 'a':
			cout<<"egshig";
			break;
		case 2:
			cout<<"TD";
			break;
		case 3:
			cout<<"WD";
		default: 
			cout<<"inviled input!";
			break;
	}
	*/
	return 0;
}

