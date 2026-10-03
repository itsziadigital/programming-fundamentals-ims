#include<iostream>
using namespace std;
int main(){
	float principal;
	float rate;
	float time;
	float si;
	
	cout<<"SIMPLE INTEREST ON LOAN"<<endl;
	cout<<"Enter principal: ";
	cin>>principal;
	cout<<"Enter Rate: ";
	cin>>rate;
	cout<<"Enter Time: ";
	cin>>time;
	
	si = principal * time * rate;
	
	cout<<"Your SI on Loan is: Rs."<<si;
	
	return 0;
}