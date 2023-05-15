//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-5(part-A)
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//declaration
	char colour_1,colour_2;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter first primary colour (r for red,y for yellow and b for blue) : ";
	cin>>colour_1; 
	cout<<"Enter second primary colour (r for red,y for yellow and b for blue): ";
	cin>>colour_2;
	cout<<endl;
	
	//using if else if statement
	if((((colour_1=='r')||(colour_1=='R'))&&((colour_2=='b')||(colour_2=='B'))) || (((colour_2=='r')||(colour_2=='R'))&&((colour_1=='b')||(colour_1=='B')))){
	cout<<"The secondary colour formed is : Purple"<<endl;
	cout<<endl;
	}
	else if((((colour_1=='r')||(colour_1=='R'))&&((colour_2=='y')||(colour_2=='Y'))) || (((colour_2=='r')||(colour_2=='R'))&&((colour_1=='y')||(colour_1=='Y')))){
	cout<<"The secondary colour formed is : Orange"<<endl;
	cout<<endl;
	}
	else if((((colour_1=='y')||(colour_1=='Y'))&&((colour_2=='b')||(colour_2=='B'))) || (((colour_2=='y')||(colour_2=='Y'))&&((colour_1=='b')||(colour_1=='B')))){
	cout<<"The secondary colour formed is : Green"<<endl;
	cout<<endl;
	}
	else if(((colour_1=='r')||(colour_1=='R'))&&((colour_2=='r')||(colour_2=='R'))){
	cout<<"The  colour formed is : Red"<<endl;
	cout<<endl;
	}
	else if(((colour_1=='b')||(colour_1=='B'))&&((colour_2=='b')||(colour_2=='B'))){
	cout<<"The  colour formed is : Blue"<<endl;
	cout<<endl;
	}
	else if(((colour_1=='y')||(colour_1=='Y'))&&((colour_2=='y')||(colour_2=='Y'))){
	cout<<"The  colour formed is : Yellow"<<endl;
	cout<<endl;
	}
	else{
	cout<<"Error..! Invalid input."<<endl;
	}
	cout<<endl;
	
	return 0;
	}
	
	
	
	
	
