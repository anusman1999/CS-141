//This is a library
#include<iostream>
using namespace std;
int main()
{
	int a;		//Declaring a variable
	cout<<"Enter your number"<<endl;	//Asking the user to enter the number	
	cin>>a;
	
	if(a>0)					//Checking if the number is positive negative or zero
	{
		cout<<"The number is positive"<<endl;
	}
	if(a<0)
	{
		cout<<"The number is negative" << endl;
	}
	if(a==0) 
	{
		cout<<"The number is zero"<< endl;		//Printing out if the number is positive, negative or zero
        }
 return 0;
}

