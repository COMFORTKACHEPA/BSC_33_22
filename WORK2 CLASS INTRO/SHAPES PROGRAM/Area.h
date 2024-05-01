#include "Circle.h"
#include "Square.h"
#include "Triangle.h"

#pragma once


class Area
{

public:
// square method part 
        shapes::Square squares;
static double calculateSquareArea( shapes::Square squares){
     return squares.getSide()*squares.getSide();
}


// triangle method part
        shapes::Triangle triangles;
static double calculateTriangleArea(shapes::Triangle triangles){
     return triangles.getBase()*triangles.getHeight()*0.5;
}

// circle method part

        shapes::Circle circles;
static double calculateCircleArea(shapes::Circle circles){
    return circles.getRadius()*circles.getRadius()*3.1415926;
}

};
