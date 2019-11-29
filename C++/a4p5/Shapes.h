/*
 CH08-320142
 a3 p5.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {            // base class
protected:
    std::string name;   // every shape will have a name
public:
    // constructors
    Shape(const std::string&);  // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape&); // copy constructor
    // setters
    void setName(std::string& newname);
    // getters
    std::string getName();
    // service method
    void printName() const;      // prints the name
};

class CenteredShape : public Shape {  // inherits from Shape
private:
    double x,y;  // the center of the shape
public:
    // constructors
    CenteredShape(const std::string&, double, double);  // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape&);
    // setters
    void setX(double newx);
    void setY(double newy);
    // getters
    double getX();
    double getY();
    // service methods
    void move(double, double);    // moves the shape, i.e. it modifies it center
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
private:
    int EdgesNumber;
public:
    // constructors
    RegularPolygon(const std::string&, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon&);
    // setters
    void setEdgesNumber(double newEdgesNumber);
    // getters
    double getEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
private:
    double Radius;
    double Area;
    double Perimeter;
public:
    // constructors
    Circle(const std::string&, double, double, double);
    Circle();
    Circle(const Circle&);
    // setters
    void setRadius(double newRadius);
    // getters
    double getRadius();
    // service methods
    double perimeter();
    double area();
};

class Rectangle : public RegularPolygon {
private:
    double width;
    double height;
    double Area;
    double Perimeter;
public:
    // constructors
    Rectangle(const std::string&, double, double, double, double);
    Rectangle();
    Rectangle(const Rectangle&);
    // setters
    void setWidth(double newwidth);
    void setHeight(double newheight);
    // getters
    double getWidth();
    double getHeight();
    // service methods
    double perimeter();
    double area();
};

class Square : public Rectangle {
private:
    double side;
    double Perimeter;
    double Area;
public:
    // constructors
    Square(const std::string&, double, double, double);
    Square();
    Square(const Square&);
    // setters
    void setSide(double newside);
    // getters
    double getSide();
    // service methods
    double perimeter();
    double area();
};

#endif
