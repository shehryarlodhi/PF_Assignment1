//Muhammad Shehryar Sajid Lodhi
//20i1771
//Section-C
//Assignment-1
//Question-2

#include<iostream>
using namespace std;
int main(){
	
	//Declaring variables
	int hourly_wage,hours_worked,tax_percentage,actual_pay,total_tax; 
	int net_pay;
	
	//Asking user to enter hourly wage
	cout<<"Enter hourly wage : ";
	cin>>hourly_wage;
	
	//Asking user to enter number of hours worked
	cout<<"Enter the number of hours worked : ";
	cin>>hours_worked;
	
	//Asking user to enter percentage of tax on salary
	cout<<"Enter the percentage of with holding tax : ";
	cin>>tax_percentage;
	
	//Calculating total wage without tax
	actual_pay = (hourly_wage)*(hours_worked);
	//Calculating total tax on the wage
	total_tax = actual_pay*(tax_percentage)/100;
	//Calculating net pay after deduction of tax
	net_pay = (actual_pay)-(total_tax);
	
	cout<<"Net pay is : "<<net_pay<<endl;
	
	return 0;
	}
	
	
	
