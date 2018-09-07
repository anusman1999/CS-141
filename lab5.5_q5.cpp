//This is a library
#include<iostream>
using namespace std;
int main()
{

	int n;
	cout<<"Enter number of rows : "<<endl;		//Asking the user for entering the number of rows
	cin>>n;
    int i, j, k;
    for(i=n;i>=1;i--)
    {
        for(j=n;j>i;j--)               //printing spaces for all other points except triangle points
        {
            cout<<" ";
        }
        for(k=1;k<(i*2);k++)
        {
            cout<<"*";                //printing stars for the triangle points
        }
    cout<<endl;
    }


    return 0;
}
