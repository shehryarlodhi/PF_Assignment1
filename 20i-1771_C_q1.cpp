//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Problem-1
//assignment-1
//Section C
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//declaration and initializing variables
	float u=1.234;
	float p=3.334;
	float i;
	float x,y,result;
	
	//asking user for input
	cout<<"enter value of i:";
	cin>>i;
	
	//calculation
	x = sqrt((u*pow(i,1.5)*(pow(i,2)-1)));
	y = (sqrt(p*i-2)+sqrt(p*i-1));
	result = x/y;
	
	//displaying output
	cout<<"After calculations, result is : "<<result<<endl;
   
   	return 0;
	}
	
