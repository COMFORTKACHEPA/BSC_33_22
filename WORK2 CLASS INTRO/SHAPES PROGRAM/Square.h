#pragma once



namespace shapes{

class Square
{
private:
    double side; 
public:

    // constructor
    Square();
    Square(double newSide);

    ~Square(){} // destructor

    double getSide() const;
    void setSide(double newSide);

};
};

