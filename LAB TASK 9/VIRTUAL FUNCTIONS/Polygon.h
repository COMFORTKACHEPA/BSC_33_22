#pragma once


class Polygon {
    protected:
    int mWidth, mHeight;

    public:
    void setValues(int width, int height);

    virtual int area();
};