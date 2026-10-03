#include<iostream>
using namespace std;
int main(){
	float weight, height, BMI;
	
	cout<<"Enter Weight: ";
	cin>>weight;
	cout<<"Enter Height: ";
	cin>>height;
	
	BMI = weight / (height * height);
	
	cout<<"Your BMI: "<<BMI;
	
	return 0;
}