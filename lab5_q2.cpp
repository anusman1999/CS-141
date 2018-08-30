//This is a library
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;		//Declaring variables
	cout<<"Enter first number" << endl;	//Asking the user for entering the first number
	cin>>a;
	cout<<"Enter second number" << endl;	//Asking the user for entering the second number 
	cin>>b;
	cout<<"Enter third number" <<endl;	//Asking the user for entering the third number
	cin>>c;
	if(b>c && b>a)						//Checking for conditions
	{
		cout<<"The greatest number is :"<< b<< endl;
	}
	if(a>b && a>c)
	{
		cout<<"The greatest number is :"<< a<< endl;
	}
	if(c>b && c>a)
	{
		cout<<"The greatest number is :"<< c<< endl;	//Printing out hte greatest number
        }
 return 0;
}

