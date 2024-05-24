#include <iostream>
#include "Rectangle.h"
#include "Triangle.h"


using namespace std;

int main(){
    Rectangle r;
    Triangle t;

    Polygon* RECTANGLE = &r;
    Polygon* TRIANGLE = &t;

    RECTANGLE->setValues(4,5);

    TRIANGLE->setValues(4,5);

    cout << r.area() << endl;
    cout << t.area() << endl;
    
    return 0;
}