/*
 JTSK-320111
 a4 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(float a, float b, float c){
    height = a;
    width = b;
    depth = c;
}

// default constructor

Box::Box(){
    height = 0;
    width = 0;
    depth = 0;
}

// deconstructor does nothing

Box::~Box(){}

// copy constructor

Box::Box(const Box &cpy) {
    height = cpy.height;
    width = cpy.width;
    depth = cpy.depth;
}

// calculates the volume

double Box::calc(Box a){
    double h = a.height;
    double w = a.width;
    double d = a.depth;
    return h*w*d;
}

void Box::setHeight(double newheight){
    height = newheight;
}

void Box::setWidth(double newwidth){
    width = newwidth;
}

void Box::setDepth(double newdepth){
    depth = newdepth;
}

double Box::getHeight(){
    return height;
}

double Box::getWidth(){
    return width;
}

double Box::getDepth(){
    return depth;
}
