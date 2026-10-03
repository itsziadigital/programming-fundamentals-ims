#include<iostream>
using namespace std;
int main(){
	float unitsConsumed;
	float ratePerUnit;
	float Bill;
	
	cout<<"Enter Units Consumed: ";
	cin>>unitsConsumed;
	cout<<"Enter Rate per Unit: ";
	cin>>ratePerUnit;
	
	Bill = unitsConsumed * ratePerUnit;
	
	cout<<"Your Total Bill is: Rs."<<Bill;
	
	return 0;
}