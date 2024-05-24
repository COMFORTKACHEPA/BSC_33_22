#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main(){
    // dynamically creating objects 
    Polygon* poly1 = new Rectangle(4,5);

    Polygon* poly2 = new Triangle(4,5);

    // print ares
    poly1->PrintArea();
    poly2->PrintArea();

    // /deleting pointers
    delete poly1;
    delete poly2;

    return 0;
}