#include "Rectangle.h"

int Rectangle::area(){
    return mWidth * mHeight;
}

Rectangle::Rectangle(int x, int y){
    mWidth = x;
    mHeight = y;
}