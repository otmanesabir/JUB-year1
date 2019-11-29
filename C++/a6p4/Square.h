//
//  Square.h
//  a6p3
//
//  Created by Otmane Sabir on 11/13/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//


#include "Rectangle.h"


// square class derived from rectangle

class Square : public Rectangle {
public:
    Square(const char *n, double newside);
    ~Square();
    double calcArea() const; // method to calculate the area
    double calcPerim() const;
private:
    double side = 0;
};

