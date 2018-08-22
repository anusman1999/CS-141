//This a library 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double p,t,r,ci,n,amount;       //Declaring  variables

cout << "Enter the principal"<<endl;   //Asking for sum
cin >> p;
cout << "Enter the rate percent"<<endl;        //Asking for the rate of interest
cin >> r;
cout << "Enter the time period in years"<<endl;  //Asking for the time period
cin >> t;
cout << "Enter the number of compoundings per year"<<endl; //Asking for the number of compoundings
cin >> n;
 
amount=p*pow((1+(r/n)),(n*t));     //Calculating the amount
ci = amount-p;                     //Calculating the ci
 
cout<<"The compound interest= "<<ci<< endl;      // Printing the compound interest
return 0;
}



