//This a library 
#include <iostream>
using namespace std;
int main()
{
double p,t,r,si;       //Declaring  variables

cout << "Enter the principal"<<endl;   //Asking for sum
cin >> p;
cout << "Enter the rate percent"<<endl;        //Asking for the rate of interest
cin >> r;
cout << "Enter the time period in years"<<endl;  //Asking for the time period
cin >> t;

si = (p*r*t)/100;     //Calculating the simple interest
 
cout<<"The simple interest= "<<si<< endl;      // Printing the simple interest
return 0;
}



