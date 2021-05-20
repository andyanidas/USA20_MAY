#include<iostream>

using namespace std;

int main(){
	int energy;
	double total=0;
	cin>>energy;
	
	if(energy>250){
		total = total + (energy-250)*1.5;
		energy = 250;
	}
	
	if(energy>150){
		total = total + (energy-150)*1.2;
		energy = 150;
	}
	
	if(energy>50){
		total = total + (energy-50)*0.75;
		energy = 50;
	}
	
	total = total + energy*0.5;
	
	total = total*1.2;
	cout<<"Total Bill : "<<total;
	
	return 0;
}

