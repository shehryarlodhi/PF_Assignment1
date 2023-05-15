//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question-6
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//declairation
	int sub_A,sub_B;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter marks of student in main subject       : ";
	cin>>sub_A;
	cout<<"Enter marks of student in subsiduary subject : ";
	cin>>sub_B;
	cout<<endl;
	
	//using if else if statement
	if(sub_A>=55&&sub_B>=45){
	cout<<"The student has passed!"<<endl;
	}
	else if((sub_A<55&&sub_A>=45)&&(sub_B>=55)){
	cout<<"The student has passed!."<<endl;
	}
	else if(sub_A>=65&&sub_B<45){
	cout<<"The student is allowed to reappear in B."<<endl;
	}
	else{
	cout<<"The student has failed! "<<endl;
	}
	cout<<endl;
	
	return 0;
	}
	
