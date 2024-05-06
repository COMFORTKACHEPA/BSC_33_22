#include "Box.h"
// #include <iostream>
// using namespace std;

//main function


int main(){
    Box Box1;
    Box Box2;
    Box Box3;

    double volume = 0.0;

    //box one specification
    Box1.setLength(6.0);
    Box1.setBreadth(7.0);
    Box1.setHeight(5.0);


    //box 2 specification
    Box2.setLength(12.0);
    Box2.setBreadth(13.0);
    Box2.setHeight(10.0);

    //volume of box 1
    volume = Box1.getVolume();
    cout << "volume of box 1: " << volume <<endl;

    //volume of box 2
    volume = Box2.getVolume();
    cout << "volume of box 2: "<< volume << endl;

    //adding two objects
    Box3 = Box1 + Box2;

    //volume of box 3
    volume = Box3.getVolume();
    cout << "volume of box 3: " << volume << endl;

    return 0;

}