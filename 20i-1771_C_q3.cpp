//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section C
//assignment-1
//Question-3

#include<iostream>
using namespace std;
int main(){
	
	//Declaring variable
	char character;
	
	//Asking user to enter a character
	cout<<"Enter any character : ";
	cin>>character;
	
	//updating value of character according to ascii table and if we 
	//adding three to character it will update to its third next number
	character = character+3;
	
	//Displaying result on the command prompt
	cout<<"The third next Character of given character is : "<<character<<endl;
	
	return 0;
	}
