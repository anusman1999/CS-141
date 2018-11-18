#include <iostream>

using namespace std;

class Rectangle {
   public:
      double length;   // Length of a rectangle
      double breadth;  // Breadth of a rectangle
                //Member function declaration
      double area(void);
      double perimeter(void);
};

//Member function definition
double Rectangle::area(void){
    return length*breadth;
}

double Rectangle::perimeter(void){
    return 2*(length + breadth);

}

//Main function for the program
int main(){
    double l,b;
    Rectangle rect1;           //Declaring rectangles of rectangle class
    Rectangle rect2;
    double ar1=0.0;               //Initializing all the variables
    double peri1=0.0;
    double ar2=0.0;
    double peri2=0.0;
    cout<<"Enter the length of Rectangle 1"<<endl;    //Asking for parameters of both the rectangles
    cin>>rect1.length;
    cout<<"Enter the breadth of rectangle 1"<<endl;
    cin>>rect1.breadth;
    cout<<"Enter the length of Rectangle 2"<<endl;
    cin>>rect2.length;
    cout<<"Enter the breadth of rectangle 2"<<endl;
    cin>>rect2.breadth;
    ar1=rect1.area();       //Defining the area and perimeter for rectangle1
    peri1=rect1.perimeter();
    ar2=rect2.area();       //Defining the area and perimeter for rectangle2
    peri2=rect2.perimeter();
    if (ar1>ar2)                //Defining conditions for comparing the area and perimeter
        cout<<"Area of rectangle 1 is bigger which is equal to : "<<ar1<<endl;
    if (ar2>ar1)
        cout<<"Area of rectangle 2 is bigger which is equal to : "<<ar2<<endl;
    if (peri1>peri2)
        cout<<"Perimeter of rectangle 1 is bigger which is equal to :  "<<peri1<<endl;
    if (peri2>peri1)
        cout<<"Perimeter of rectangle 2 is bigger which is equal to : "<<peri2<<endl;
    if(ar1==ar2)
        cout<<"Area of rectangle 1 is equal to area of rectangle 2 which is : "<<ar2<<endl;
    if(peri1==peri2)
        cout<<"Perimeter of rectangle 1 is equal to perimeter of rectangle 2 which is : "<<peri2<<endl;
    return 0;
}


