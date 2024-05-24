#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

using namespace std;


int main(){
    Triangle T;
    Rectangle R;

    Polygon poly;

    Polygon* poly1 = &T;
    Polygon* poly2 = &T;
    Polygon* poly3 = &poly;

    poly1->setValues(4,5);
    poly2->setValues(4,5);
    poly3->setValues(4,5);

    cout << poly1->area() << '\n';
    cout << poly2->area() << '\n';
    cout << poly3->area() << '\n';

    return 0;
}