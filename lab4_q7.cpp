//This a library 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
double side,area;       //Declaring  variables

cout << "Enter the length of side of the equilateraltriangle"<<endl;   //Asking for side of triangle
cin >> side;


area=((sqrt(3))/4)*side*side;     //Calculating the area of thr triangle
 
cout<<"The area of the triangle = "<<area<< endl;      // Printing the area of the triangle
return 0;
}



