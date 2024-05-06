#include "Rectangle.h"


// initialize variables with default values
Rectangle::Rectangle(){
    length = 0;
    width = 0;
}



//overloaded constructor
 Rectangle::Rectangle(double newWidth , double newLength){
        width = newWidth;
        length = newLength;
 }
/// @brief 
/// @param newWidth 
void Rectangle::  setWidth(double newWidth){
    if(newWidth > 0)
    width = newWidth;

}

void Rectangle::setLength(double newLength){
    if(newLength > 0)
    length = newLength;
}


//getting function for Rectangle dimensions
double Rectangle::getLength()const { 
    return length;
 }


 double Rectangle::getWidth()const {
    return width;
 }

 // AREA CALCULATING FUNCTION

double Rectangle::calculateArea(){
    
    return width * length;
    
}