#pragma once


namespace shapes{
class Circle
{
private:
    double radius;
public:
    //construct
    Circle();
    Circle(double newRadius);

    ~Circle(){}//destructor

    // accessro methods
    double getRadius()const;
    void setRadius(double newRadius);
};
};
