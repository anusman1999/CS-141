//This is a library 
#include <iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"Enter the size of pattern"<<endl;	//Asking the user for the size of the pattern
	cin>>n;
	for(i=0;i<n;i++)		//pattern for each row
	{
		cout<<endl;
		for(j=0;j<n;j++)		//pattern for each column
		{
			cout<<"*";		//Printing out the pattern with '*'
		}
	}
	cout<<endl;
	
return 0;
}



