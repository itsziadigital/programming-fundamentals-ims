#include<iostream>
using namespace std;
int main(){
	int BaseFare = 50;
	float RatePerKm, Distance, Fare;
	
	cout<<"Enter Distance: ";
	cin>>Distance;
	cout<<"Enter Rate Per KM: ";
	cin>>RatePerKm;
	
	Fare = BaseFare + (Distance * RatePerKm);
	
	cout<<"YOUR FARE IS: RS."<<Fare;
	
	return 0;
}