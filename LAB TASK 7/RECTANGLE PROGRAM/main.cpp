#include <iostream>
#include "Rectangle.h"

using namespace std;

int main(){
    // local variables

    double width ;
    double height ;

    // collecting rectangle dimensions

    cout << "enter the rectangle widht: ";
    cin >>  width;
    cout << "\nenter the rectangle length: ";
    cin >> height;


    //class object creation
    Rectangle r1;
   

    //setting the rectangle dimensions using the class functions

    r1.setLength( height);
    r1.setWidth( width );

    //area calculation function call
    double area =r1.calculateArea();

//    outputing the rectangle area

    cout << "Area of the rectangle is: " <<  area <<" m^2"<< endl;


    cout<<"calculating area for rectangle 2: \n\n ";
    cout << "enter the rectangle width: ";
    cin >>  width;
    cout << "\nenter the rectangle length: ";
    cin >> height;

    Rectangle r2 = Rectangle(width, height);

    double area2 = r2.calculateArea();
    cout << "Area of  rectangle 2 is: " << area2<<" m^2"<< endl;

    return 0;

}
