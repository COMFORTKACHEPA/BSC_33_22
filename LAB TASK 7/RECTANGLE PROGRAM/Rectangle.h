//include one header file condition
#pragma once


//our rectangel class
class Rectangle {

    private:
        double width;
        double length;

    public:
        // constructors
        Rectangle(); 
        Rectangle(double newWidth, double newLength);

        ~Rectangle() {}// destructor

        // setter methods
        void setWidth(double newWidth);
        void setLength(double newLength);

        //getter methods
        double getWidth() const;
        double getLength() const;

        //area calculation methods
        double calculateArea();
};

