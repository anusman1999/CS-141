//This a library 
#include <iostream>
using namespace std;
int main()
{
double celsius;       //Declaring  variables
double fahrenheit;

cout << "Enter the temperature in fahrenheit"<<endl;   //Asking for temperature in fahrenheit
cin >> fahrenheit;
celsius=((fahrenheit-32)*5)/9;          // Converting into celsius
cout<<" The temperatue in celsius is : "<< celsius << endl;      // Printing the temperatue is celsius

return 0;
}



