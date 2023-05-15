//Muhammad Shahryar Sajid Lodhi
//20i-1771
//problem-10
//Assignment-1
//Section-C
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	//declaration of variables
	int N_1,N_2,N_3,N_4,N_5;
	
	//Asking user to enter input
	cout<<"Enter number one   : ";
	cin>>N_1;
	
	cout<<"Enter number two   : ";
	cin>>N_2;
	
	cout<<"Enter number three : ";
	cin>>N_3;
	
	cout<<"Enter number four  : ";
	cin>>N_4;
	
	cout<<"Enter number five  : ";
	cin>>N_5;
	
	//Displaying output on the screen
	cout<<"Number01 : "<<setw(N_1)<<setfill('*')<<""<<endl;
	cout<<"Number02 : "<<setw(N_2)<<setfill('*')<<""<<endl;
	cout<<"Number03 : "<<setw(N_3)<<setfill('*')<<""<<endl;
	cout<<"Number04 : "<<setw(N_4)<<setfill('*')<<""<<endl;
	cout<<"Number05 : "<<setw(N_5)<<setfill('*')<<""<<endl;
	cout<<endl;
	
	return 0;
	}
