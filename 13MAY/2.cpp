#include<iostream>

using namespace std;

int main(){
	double wallet,dailyBudge;
	int daysLeft;
	cout<<"How many $ you have in your pocket: ";
	cin>>wallet;
	cout<<"how many days left until you salary: ";
	cin>>daysLeft;
	
	dailyBudge = wallet/daysLeft;
	
	cout<<"You can spend "<<dailyBudge<<"$ per day";
	
	system("pause");
	
	return 0;
}
