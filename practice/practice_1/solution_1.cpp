#include<iostream>
using namespace std;
int main(){
	int money;
	char code;
	bool vip;
	int cost = 1000;
	
	cout<<"How much money you have? ";
	cin>>money;
	cout<<"Enter promo code: ";
	cin>>code;
	cout<<"Are You VIP Member? Type 1 for Yes and 0 for No: ";
	cin>>vip;
	
	if(money<0){
		cout<<"Invalid Money";
	}
	else{
		if(vip==true || code=='G')cost -= 200;
			if(money>=cost){
			
		cout<<"Game Purchased"<<endl;
		cout<<"Your Remaining Balance: Rs."<<money-cost;
	}
	else{
		cout<<"You Need Rs."<<cost-money<<" to purchase game";
	}
	}
	
	return 0;
}