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
    Rectangle r;
   

    //setting the rectangle dimensions using the class functions

    r.setLength( height);
    r.setWidth( width );

    //area calculation function call
    double area =r.calculateArea();

//    outputing the rectangle area

    cout << "Area of the rectangle is: " <<  area << endl;


    cout<<"calculating area for rectangle 2: \n\n ";
    cout << "enter the rectangle widht: ";
    cin >>  width;
    cout << "\nenter the rectangle length: ";
    cin >> height;

    Rectangle r1 = Rectangle(width, height);

    double area2 = r1.calculateArea();
    cout << "Area of  rectangle 2 is: " << area2<< endl;

    return 0;

}
