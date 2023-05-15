//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section C
//Assignment-1
//Question5
#include<iostream>
using namespace std;
int main(){
	
	//Declaration of variables
	int total_inches,yards,feet,extra_inches,inches;
	
	//Asking user to enter number of inches
	cout<<"Enter the number of inches : ";
	cin>>total_inches;
	
	//Calculating yards from inches
	yards = total_inches/36;
	//Calculating extra inches
	extra_inches = total_inches%36;
	//Calculating feet
	feet = extra_inches/12;
	//Calculating inches 
	inches = extra_inches%12;
	
	//Displaying output
	cout<<total_inches<<" inches are equal to "<<yards<<" yards, "<<feet<<" feet and "<<inches<<" inches. "<<endl;
	
	return 0;
	}
