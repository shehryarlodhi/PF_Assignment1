//Muhammad Shehryar Sajid Lodhi
//20i-1771
//problem-7
//assignment-1
//Section C
#include<iostream>
using namespace std;
int main(){
	//declaration of variables
	int amount,remaining_amount,note_500,note_100,note_50,note_20,note_10,note_5,note_1;
	
	//Asking user to enter amount
	cout<<"Enter amount in rupees within the range of 100 to 100000 : ";
	cin>>amount;
	
	//calculating notes of Rs.500
	note_500 = amount/500;
	//calculating above remaining amount less than 500
	remaining_amount = amount%500;
	//calculating notes of Rs.100
	note_100 = remaining_amount/100;
	//calculating above remaining amount less than 100
	remaining_amount = remaining_amount%100;
	//calculating notes of Rs.50
	note_50 = remaining_amount/50;
	//calculating above remaining amount less than 50
	remaining_amount = remaining_amount%50;
	//calculating notes of Rs.20
	note_20 = remaining_amount/20;
	//calculating above remaining amount less than 20
	remaining_amount = remaining_amount%20;
	//calculating notes of Rs.10
	note_10 = remaining_amount/10;
	//calculating above remaining amount less than 10
	remaining_amount = remaining_amount%10;
	//calculating notes of Rs.5
	note_5 = remaining_amount/5;
	//calculating above remaining amount less than 5
	remaining_amount = remaining_amount%5;
	//calculating notes of Rs.1
	note_1 = remaining_amount;
	
	//displaying output
	cout<<"Currency Notes    :     "<<"Number"<<endl;
	cout<<"  500             :     "<<note_500<<endl;
	cout<<"  100             :     "<<note_100<<endl;
	cout<<"  50              :     "<<note_50<<endl;
	cout<<"  20              :     "<<note_20<<endl;
	cout<<"  10              :     "<<note_10<<endl;
	cout<<"  5               :     "<<note_5<<endl;
	cout<<"  1               :     "<<note_1<<endl;
	
	return 0;
	}
	
	
	
	
	
	
