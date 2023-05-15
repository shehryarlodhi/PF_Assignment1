//Muhammad Shehryara Sajid Lodhi
//20i-1771
//problem-6(part-a)
//assignment-1
//Section C
#include<iostream>
using namespace std;
int main(){
	//Declaration of variables
	int first,second;
	
	//Asking uder to enter values of both variables
	cout<<"Enter value of first variable  : ";
	cin>>first;
	cout<<"Enter value of second variable : ";
	cin>>second;
	cout<<endl;
	
	//displaying values before swapping
	cout<<"before swapping the value of first variable is  : "<<first<<endl;
	cout<<"before swapping the value of second variable is : "<<second<<endl;
	cout<<endl;
	
	//swappin values
	first = first + second;
	second = first - second;
	first = first - second;
	
	//displaying values after swapping
	cout<<"After swapping the value of first variable is   : "<<first<<endl;
	cout<<"After swapping the value of second variable is  : "<<second<<endl;
	cout<<endl;
	
	return 0;
	}
