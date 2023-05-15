//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section C
//Assignment-1
//Question-4

#include<iostream>
using namespace std;
int main(){
	//Declaring Variables
	int days,months,years,total_days,extra_days;
	
	cout<<"Enter the number of days : ";
	cin>>total_days;
	cout<<endl;
	
	//Calculating number of years by dividing by 365
	years=total_days/365;
	//now finding months for this we first find remaining days 
	extra_days=total_days%365;
	//Now for months we will divide extra days by 30
	months=extra_days/30;
	//Now finding remainder of extra days after dividing by 30
	days=extra_days%30;
	
	//displaying output
	cout<<"years are  : "<<years<<endl;
	cout<<"months are : "<<months<<endl;
	cout<<"days are   : "<<days<<endl;
	cout<<endl;
	cout<<total_days<<" days are equal to "<<years<<" years, "<<months<<" months"<<" and "<<days<<" days "<<endl;
	cout<<endl;
	
	return 0;
	}
