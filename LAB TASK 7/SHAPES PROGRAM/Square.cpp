#include "Square.h"


    //intialization of square side with default constructor
    shapes::Square::Square(){
        side = 1;
    }

    //intialization of square side with overloaded constructor
   shapes::Square:: Square(double newSide){
        if(newSide>=0)
        side=newSide;
   }


    //getter function for square side
    double  shapes::Square::getSide() const{
        return side;
    }

    //setter function for square side
    void shapes::Square::setSide(double newSide){
         if(newSide>=0)
        side=newSide;
    }

