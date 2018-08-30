//This is a library
#include<iostream>
using namespace std;
int main()
{
	int a;		//DEclaring a variable
	cout<<"Enter your number"<<endl;		//Asking the user to enter a number
	cin>>a;
	
	if(a%2==0)				//Checking if the number is even or odd
	{
		cout<<"The number is even"<<endl;
	}
	else if(a%2==1)
	{
		cout<<"The number is odd" << endl;		//Printing out if the number is even or odd
	}
 return 0;
}

