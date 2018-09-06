//This is a library 
#include <iostream>
using namespace std;
int main()
{
	int i,j,m;
	cout<<"Enter number of rows : "<<endl;	//Asking the user for entering the number of rows
	cin>>m;
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=m; j++)
		{
			if((i==1)||(i==m))	//Printing stars in row 1 and  m
			cout<<"*";
			else			//for others
			{
				if((j==1)||(j==m))   //Printing stars in column 1 and m
				cout<<"*";
				else
				{
					if((i==j)||(i+j==m+1))  //Printing stars for both the diagonals using conditions
					cout<<"*";
					else       //Printing spaces for rest
					cout<<" ";
				}
			}	
			
		}				
		cout<<endl;			
	}
	
return 0;
}



