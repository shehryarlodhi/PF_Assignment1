//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-5(part B)
//Assignment-2
#include<iostream>
using namespace std;
int main(){
	//declairation
	char colour_1,colour_2;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter first primary colour (r for red, b for blue and y for yellow)  : ";
	cin>>colour_1;
	cout<<"Enter second primary colour (r for red, b for blue and y for yellow) : ";
	cin>>colour_2;
	cout<<endl;
	
	//using nested switch
	switch((((colour_1=='r')||(colour_1=='R'))&&((colour_2=='b')||(colour_2=='B'))) || (((colour_2=='r')||(colour_2=='R'))&&((colour_1=='b')||(colour_1=='B')))){
		
		case 1 :
		cout<<"The secondary colour formed is : Purple"<<endl;
		break;
		case 0 :
			switch((((colour_1=='y')||(colour_1=='Y'))&&((colour_2=='b')||(colour_2=='B'))) || (((colour_2=='y')||(colour_2=='Y'))&&((colour_1=='b')||(colour_1=='B')))){
			case 1 :
			cout<<"The secondary colour formed is : Green"<<endl;
			break;
			case 0 :
				switch((((colour_1=='r')||(colour_1=='R'))&&((colour_2=='y')||(colour_2=='Y'))) || (((colour_2=='r')||(colour_2=='R'))&&((colour_1=='y')||(colour_1=='Y')))){
				case 1 :
				cout<<"The secondary colour formed is : Orange"<<endl;
				break;
				case 0 :
					switch(((colour_1=='r')||(colour_1=='R'))&&((colour_2=='r')||(colour_2=='R'))){
					case 1 :
					cout<<"The  colour formed is : Red"<<endl;
					break;
					case 0 :
						switch(((colour_1=='b')||(colour_1=='B'))&&((colour_2=='b')||(colour_2=='B'))){
						case 1 :
						cout<<"The  colour formed is : Blue"<<endl;	
						break;
						case 0 :
							switch(((colour_1=='y')||(colour_1=='Y'))&&((colour_2=='y')||(colour_2=='Y'))){
							case 1 :
							cout<<"The  colour formed is : Yellow"<<endl;
							break;
							case 0 :
							cout<<"Error..! Invalid input."<<endl;
						}}}}}}
						cout<<endl;
			
			return 0;
			}
				
				
				
				
			
			
			
			
				
				
	
		
