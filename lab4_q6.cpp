//This a library 
#include <iostream>
using namespace std;
int main()
{
double base, height,area;       //Declaring  variables

cout << "Enter the length of base of triangle"<<endl;   //Asking for base of triangle
cin >> base;
cout<< "Enter the perpendicular height of triangle"<<endl;    //Asking for the height of the triangle
cin >> height;

area=(base*height)/2;     //Calculating the third angle
 
cout<<"The area of the triangle = "<<area<< endl;      // Printing the area of the triangle
return 0;
}



