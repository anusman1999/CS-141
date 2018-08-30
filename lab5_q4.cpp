//This is a library
#include<iostream>
using namespace std;
int main()
{
	int a;		//Declaring a vraiable
	cout<<"Enter your number"<<endl;	//Asking the user to enter a number
	cin>>a;
	
	if(a%5==0 && a%11==0)			//Checking if the number is divisible by 11 and 5
	{
		cout<<"The number is divisible by both 5 and 11"<<endl;
	}
	else
	{
		cout<<"The number is not divisible by 5 and 11"<< endl;
        }							//Printing out if the number is divisible by 11 and 5
 return 0;
}

