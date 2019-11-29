/*
 CH08-320142
 a5 p1.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */
#include <iostream>
#include "Shapes.h"

using namespace std;

int main(){
    Hexagon blue(9.0, "blue");
    Hexagon green(15.0, "yellow");
    Hexagon copy(green);
    cout << "First hexagon" << endl;
    cout << "Perimeter: " << blue.perimeter() << endl;
    cout << "Area: " << blue.area() << endl;
    cout << "Second hexagon" << endl;
    cout << "Perimeter: " << green.perimeter() << endl;
    cout <<"Area: " << green.area() << endl;
    cout << "Third hexagon" << endl;
    cout << "Perimeter: " << copy.perimeter() << endl;
    cout << "Area: " << copy.area() << endl;
    return 0;
}
