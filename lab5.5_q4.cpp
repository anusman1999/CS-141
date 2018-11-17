#include<iostream>
using namespace std;
int main()
{

	int i,j,m,n;
	cout<<"Enter number of rows : "<<endl;		//Asking the user for entering the number of rows
	cin>>m;
	for(i=1; i<=m; i++)
	{
		for(j=1; j<=m; j++)
		{
			if(i==1)		//Printing stars in column 1
			cout<<"*";
			else             //for others
			{
				if((j==m)||(i==j))	//Printing stars in row 1 and diagonal
				cout<<"*";
				else		//For others print spaces
				cout<<" ";
			}
		}           
		cout<<endl;
	}
    return 0;
}
