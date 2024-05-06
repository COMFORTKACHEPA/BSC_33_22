#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include "Area.h"


#include <iostream>
using namespace std;


//function declaration
void square();
void triangle();
void circle();


    // main function
int main(){

   
    
    while (true){

         int number;
     
    cout<<"choose the number indicating your optional operation"<<endl;
    cout<<"1 : Calculate the area of a square\n2 : Calculate the area of triangle\n3 : Calculate the area of a circle\n4 : Quit \noption: ";
    cin>>number;
    
        switch (number){
        case 1: square(); //square function call
            break; 
        case 2: triangle(); //triangle function call
            break; 
        case 3: circle(); //circle function call
            break; 
        case 4:exit(1); // exit

          break;
        }
    
    }
}



// function definition for square

void square(){
    shapes::Square squares; // square object

    int side; //variable

    // variables entry from user
    cout<<"enter square side : ";
    cin >> side;

    //assigning values to member variables
    squares.setSide(side);

    //calculating area using member function
    double area =  Area::calculateSquareArea(squares);

    // printing the area
    cout<<"square area : "<<area<<" m^2\n"<<endl;

}

void triangle(){
    
    //triangle object
    shapes::Triangle triangles;

    //variable variables
    int base;
    int height;

    // asking user inputs for triangle sides
    cout<<"enter triangle base : ";
    cin>>base;
    cout<<"enter triangle height : ";
    cin >> height;

    //assign triangle sides to member variables
    triangles.setBase(base);
    triangles.setHeight(height);

    //calculate triangle area using member function

   double area = Area::calculateTriangleArea(triangles );

    // printing triangle area
    cout << "triangles area: " << area <<" m^2\n"<< endl;

}

void circle(){
    // circle object 
     shapes::Circle circles;

    int radius; //variable for radius

    //variable entry from user
    cout << "enter circle radius: ";
    cin >> radius;

    //assigning value to member variables
    circles.setRadius(radius);

    // calculating area using member function
   double area = Area::calculateCircleArea(circles);

    // printing area
   cout << "circle area: " << area <<" m^2\n"<<endl;

}
