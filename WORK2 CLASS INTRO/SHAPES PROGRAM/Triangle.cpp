#include "Triangle.h"


// inilialzing of triangle sides using defualt constructor

    shapes::Triangle::Triangle(){
        base = 1;
        height = 1;
    }

    // overloaded constructor   for side 
    shapes::Triangle::Triangle(double newBase, double newHeight){
        if(newBase > 0 && newHeight > 0){
        base = newBase;
        height = newHeight;
        }
    }


    // setter methods
    void shapes::Triangle::setHeight(double newHeight){
        if(newHeight > 0)
        height = newHeight;
    }
    void shapes::Triangle::setBase(double newBase){
        if(newBase > 0)
        base = newBase;
    }

    // getter methods
    double shapes::Triangle::getHeight() const {
        return height;
    }

    double shapes::Triangle::getBase() const {
        return base;
    }