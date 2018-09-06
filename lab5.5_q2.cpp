//This is a library 
#include <iostream>
using namespace std;
int main()
{
	int i,j,m;
	cout<<"Enter number of rows : "<<endl;		//Asking the user for entering the number of rows
	cin>>m;
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=m; j++)
		{
			if((i==1)||(i==m))		//Printing stars in row 1 and  m
			cout<<"*";		//for others
			else
			{
				if((j==1)||(j==m))	//Printing stars in column 1 and m
				cout<<"*";
				else		//For others print spaces
				cout<<" "; 
			}
		}				//Defining conditions for the pattern and printing the pattern
		cout<<endl;			
	}
	
return 0;
}



