//This a library 
#include <iostream>
using namespace std;
int main()
{
double subject_1,subject_2,subject_3,subject_4,subject_5,total,avg,percentage;       //Declaring  variables

cout << "Enter the marks in first subject out of 100"<<endl;   //Asking for marks in five subjects
cin >> subject_1;
cout << "Enter the marks in second subject out of 100"<<endl;
cin >> subject_2;
cout << "Enter the marks in third subject out of 100"<<endl;
cin >> subject_3;
cout << "Enter the marks in fourth subject out of 100"<<endl;
cin >> subject_4;
cout << "Enter the marks in fifth subject out of 100"<<endl;
cin >> subject_5;

   
total= subject_1 + subject_2 + subject_3 + subject_4 + subject_5;   //Calculating the total marks
avg = total/5;                              //Calculating the average marks
percentage =  (total/500)*100;              //Calculating the percentage
 
cout<<"The total marks = "<<total<< endl;  
cout<<"The average marks = "<<avg<<endl;
cout<<"The marks percentage = "<<percentage<<endl;     // Printing the total marks,average and percentage
return 0;
}



