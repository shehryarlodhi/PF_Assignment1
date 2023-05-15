//Muhammad Shahryar Sajid Lodhi
//20i-1771
//Section-C
//question1
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//declaration
	int N_1,N_2,N_3;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter first number  :";
	cin>>N_1;
	cout<<"Enter second number :";
	cin>>N_2;
	cout<<"Enter third number  :";
	cin>>N_3;
	cout<<endl;
	
	//using ternary operators
	(N_1>N_2&&N_1>N_3)?cout<<N_1<<" is the largest number."<<endl:(N_2>N_1&&N_2>N_3)?cout<<N_2<<" is the largest number."<<endl:cout<<N_3<<" is the largest number."<<endl;
	cout<<endl;
	
	return 0;
	}
