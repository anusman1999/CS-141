//This a library 
#include <iostream>
using namespace std;
int main()
{
double cm;       //Declaring  variables
double m;
double km;
cout << "Enter the length in cm"<<endl; //Asking for length in cm
cin >> cm;
 m=cm/100;
 km=cm/100000;          // Converting into m and km
cout<<" The length in metre is : "<< m << endl;
cout<<" The length in kilometre is : "<< km << endl;   // Printing the lengths in m and km

return 0;
}



