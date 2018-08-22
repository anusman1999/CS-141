//This a library 
#include <iostream>
using namespace std;
int main()
{
int ndays,years,weeks,days;       //Declaring  variables

cout << "Enter the number of days"<<endl;   //Asking for number of days to be converted into years, weeks and days
cin >> ndays;
years=ndays/365;           //Calculating the number of years
weeks=(ndays%365)/7;       //Calculating the number of weeks
days=(ndays%365)%7;        //Calculating the number of days 
cout<< years <<"years"<<endl;
cout<<weeks<< "weeks"<<endl ;
cout<<days <<"days"<<endl ;      // Printing the days in years,weeks and days

return 0;
}



