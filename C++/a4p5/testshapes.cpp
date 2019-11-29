/*
 CH08-320142
 a4 p5.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include "Shapes.h"

using namespace std;

int main(void) {
    // created circle instance
    Circle c("First Circle", 4, 8, 3);
    // method call to computes and print area and perimeter
    c.area();
    c.perimeter();
    // created rectangle instance
    Rectangle r("First recatangle", 3, 5, 7, 9);
    // method call to computes and print area and perimeter
    r.area();
    r.perimeter();
    // created square instance
    Square sq("First square", 4, 8, 4);
    // method call to compute and print area and perimeter
    sq.area();
    sq.perimeter();
    return 0;
}
