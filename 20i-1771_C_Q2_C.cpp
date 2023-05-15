//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-2(part-B)
//Assignmant-2
#include<iostream>
using namespace std;
int main(){
	//declaration
	int year;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter any year : ";
	cin>>year;
	cout<<endl;
	
	//using conditional operators 
	((year%4==0)&&(year%100!=0)) || (year%400==0) ? cout<<year<<" is a leap year."<<endl : cout<<year<<" is not a leap year."<<endl;
	
	cout<<endl;
	
	return 0;
	}
