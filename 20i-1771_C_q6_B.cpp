//Muhammad Shehryar Sajid Lodhi
//20i-1771
//problem-6(part-b)
//Assignment-1
//Section C
#include<iostream>
using namespace std;
int main(){
	//Declaration of variables
	int first,second;
	
	//asking user to enter values for both variables
	cout<<"Enter the value of first variable  : ";
	cin>>first;
	cout<<"Enter the value of second variable : ";
	cin>>second;
	cout<<endl;
	
	//displaying values of the variables before swapping
	cout<<"Before swapping the value of first variable is  : "<<first<<endl;
	cout<<"Before swapping the value of second variable is : "<<second<<endl;
	cout<<endl;
	
	//swapping variables
	first = first*second;
	second = first/second;
	first = first/second;
	
	//displaying values of variables after swapping
	cout<<"After swapping the value of first variable is  : "<<first<<endl;
	cout<<"After swapping the value of second variable is : "<<second<<endl;
	cout<<endl;
	
	return 0;
	}
