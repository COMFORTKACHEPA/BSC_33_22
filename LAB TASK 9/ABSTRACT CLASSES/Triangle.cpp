#include "Triangle.h"

int Triangle::area(){
    return mWidth*mHeight/2;
}
Triangle::Triangle(int x, int y){
    mWidth = x;
    mHeight = y;
}