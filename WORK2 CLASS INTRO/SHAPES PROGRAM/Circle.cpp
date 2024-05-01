#include "Circle.h"

    // initialization of circle radius using default constructor
    shapes::Circle::Circle(){
        radius = 1;
    }

    // overloaded constructor for assigning radius 
   shapes::Circle:: Circle(double newRadius){
        if(newRadius > 0)
        radius = newRadius;
   }

    // getter method for radius
    double shapes::Circle:: getRadius() const{
        return radius;
    }

    // setter method for radius

    void shapes::Circle::setRadius(double newRadius){
        radius = newRadius;
    }