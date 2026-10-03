#include<iostream>
using namespace std;
int main(){
	int width;
	int lenght;
	int area;
	
	cout<<"Enter Lenght of Plot: ";
	cin>>lenght;
	cout<<"Enter Width of Plot: ";
	cin>>width;
	area = lenght * width;
	
	cout<<"Total Area of the Plat is: "<<area;
	
	return 0;
}