/*
 JTSK-320111
 a4 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <iostream>
using namespace std;

#ifndef Box_h
#define Box_h

class Box{
    private :
    double height;
    double width;
    double depth;
    public :
    Box();
    Box(float, float, float);
    Box(const Box&);
    ~Box();
    // setter
    void setHeight(double newheight);
    void setWidth(double newwidth);
    void setDepth(double newdepth);
    // getter
    double getHeight();
    double getWidth();
    double getDepth();
    // service
    double calc(Box);
    void print();
};

#endif /* Box_h */
