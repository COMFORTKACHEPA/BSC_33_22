#pragma once


namespace shapes{


class Triangle
{
private:
    double base;
    double height;
    
public:

    //constructor
    Triangle();
    Triangle(double newBase, double newHeight);

    ~Triangle(){}//destructor

   //getters
    double getHeight() const;
    double getBase() const;

    //setters
    void setHeight(double newHeight); 
    void setBase(double newBase);
};


};