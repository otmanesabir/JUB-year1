#include <iostream>
#include "Square.h"

// Square constructor

Square::Square(const char *n, double side) : Rectangle(n, side, side){
    this->side = side;
}

// destructor

Square::~Square() {
    
}

// method to calculate the area

double Square::calcArea() const {
    std::cout << "calcArea in Square...\n";
    return Rectangle::calcArea();
}

// method to calculate perim

double Square::calcPerim() const {
    std::cout << "perimeter in Square...\n";
    return Rectangle::calcPerim();
}
