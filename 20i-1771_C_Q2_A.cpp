//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-2(part A)
//assignment-2
#include<iostream>
using namespace std;
int main(){
	//declaration
	char alphabet;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter any alphabet : ";
	cin>>alphabet;
	cout<<endl;
	
	//using ternary operators
	(alphabet>=97&&alphabet<=122)?cout<<alphabet<<" is a lower case alphabet.":cout<<alphabet<<" is not a lower case alphabet."<<endl;
	cout<<endl;
	cout<<endl;
	return 0;
	}
