#include<iostream>
using namespace std;
int main(){
	int tableNumber;
	float totalBill;
	char paymentMethod;
	
	cout<<"Enter Table Number: ";
	cin>>tableNumber;
	cout<<"Enter Total Bill: Rs.";
	cin>>totalBill;
	cout<<"Your Payment Method (Enter C for Cash & K for Card): ";
	cin>>paymentMethod;
	
	cout<<endl;
	cout<<"ORDER SLIP"<<endl;
	cout<<"TABLE NUMBER: "<<tableNumber<<endl;
	cout<<"TOTAL BILL: RS."<<totalBill<<endl;
	cout<<"PAYMENT METHOD: "<<paymentMethod;
	
	return 0;
}