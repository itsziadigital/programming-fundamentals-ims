#include<iostream>
using namespace std;
int main(){
	int obtainedMarks, totalMarks;
	float percentage;
	
	cout<<"Enter Obtained Marks: ";
	cin>>obtainedMarks;
	cout<<"Enter Total Marks: ";
	cin>>totalMarks;
	
	
	// Learned Casting with Internet, Without casting the percentage return 0
	percentage = ((float)obtainedMarks / totalMarks) * 100;
	
	cout<<"Your Percentage: "<<percentage;
		
	return 0;	
}