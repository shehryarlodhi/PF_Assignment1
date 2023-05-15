//Muhammad Shehryar Sajid Lodhi
//20i-1771
//Section-C
//question-2(part-B)
//Assignmant-2
#include<iostream>
using namespace std;
int main(){
	//declaration
	char input;
	
	//asking user for input
	cout<<endl;
	cout<<"Enter any character : ";
	cin>>input;
	cout<<endl;
	
	//using ternary operator
	(input>=0&&input<=47)||(input>=58&&input<=64)||(input>=91&&input<=96)||(input>=123&&input<=127) ? cout<<input<<" is a special symbol."<<endl:cout<<input<<" is not a special symbol."<<endl;
	cout<<endl;
	
	return 0;
	}
