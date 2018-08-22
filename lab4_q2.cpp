//This a library 
#include <iostream>
using namespace std;
int main()
{
double celsius;       //Declaring  variables
double fahrenheit;

cout << "Enter the temperature in celsius"<<endl;   //Asking for temperature in celsius
cin >> celsius;
fahrenheit= ((celsius*9)/5)+32;          // Converting into fahrenheit
cout<<" The temperatue in fahrenheit is : "<< fahrenheit << endl;      // Printing the temperatue is fahrenheit

return 0;
}



