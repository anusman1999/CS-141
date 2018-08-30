//This is a library
#include<iostream>
using namespace std;
int main()
{
	int a,b;		//Declaring variables
	cout<<"Enter first number" << endl;	//Asking the user for the first number
	cin>>a;
	cout<<"Enter second number" << endl;	//Asking the user for the second number
	cin>>b;
	if(a>b)					//Checking for the greatest number
	{
	cout<<"The greatest number is :"<< a<< endl;
	}
	else
	{
	cout<<"The greatest number is :"<< b<< endl;	//Printing out the greatest number
	}
 return 0;
}

