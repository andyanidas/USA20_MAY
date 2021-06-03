#include<iostream>

using namespace std;

int main() {
	int num, sum = 0;
	
	cout << "Input any num: ";
	
	
	
	
	for (cin >> num;num!= 0;num /= 10)
	{
		sum += num%10;
									
		//cout << "sum: " << sum << "num " << num << endl;	
	}
	
	cout << "Sum of digits: " << sum << endl;
		
	
	
	return 0;
}
