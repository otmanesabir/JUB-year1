/*
 CH08-320142
 a3 p5.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include "Shapes.h"
#include <math.h>

using namespace std;

// Constructors

Shape::Shape(const string& n) : name(n) {}
Shape::Shape(){
    name = "";
}
Shape::Shape(const Shape &cpy){
    name = cpy.name;
}

// Shape Setters

void Shape::setName(string& newname){
    name = newname;
}

// Shape getters

string Shape::getName(){
    return name;
}

// Service method

void Shape::printName() const {
    cout << name << endl;
}


// Constructors

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}
CenteredShape::CenteredShape():Shape(""){
    x = 0;
    y = 0;
}
CenteredShape::CenteredShape(const CenteredShape&cpy){
    x = cpy.x;
    y = cpy.y;
}

// Setters

void CenteredShape::setX(double newx){
    x = newx;
}
void CenteredShape::setY(double newy){
    y = newy;
}

// Getters

double CenteredShape::getX(){
    return x;
}
double CenteredShape::getY(){
    return y;
}

// Service Method

void CenteredShape::move(double x, double y) {
    x = 0;
    y = 0;
}


// Constructors

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl)
: CenteredShape(n,nx,ny) {
    EdgesNumber = nl;
}
RegularPolygon::RegularPolygon():CenteredShape("", 0, 0){
    EdgesNumber = 0;
}
RegularPolygon::RegularPolygon(const RegularPolygon&cpy){
    EdgesNumber = cpy.EdgesNumber;
}

// Setters

void RegularPolygon::setEdgesNumber(double newEdgesNumber){
    EdgesNumber = newEdgesNumber;
}

// Getters

double RegularPolygon::getEdgesNumber(){
    return EdgesNumber;
}


// constructors

Circle::Circle(const string& n, double nx, double ny, double r) : CenteredShape(n,nx,ny){
    Radius = r;
}
Circle::Circle():CenteredShape(0, 0, 0){
    Radius = 0;
}
Circle::Circle(const Circle&cpy){
    Radius = cpy.Radius;
}

// Setters

void Circle::setRadius(double newradius){
    Radius = newradius;
}

// Getters

double Circle::getRadius(){
    return Radius;
}

// Service Methods

double Circle::area(){
    Area = Radius*Radius*M_PI;
    cout << name << "'s area is : " << Area << endl;
    return Area;
}
double Circle::perimeter(){
    Perimeter = 2*Radius*M_PI;
    cout << name << "'s perimeter is : " << Perimeter << endl;
    return Perimeter;
}


// Constructors

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight)
: RegularPolygon(n, nx, ny, nwidth){
    width = nwidth;
    height = nheight;
}
Rectangle::Rectangle():RegularPolygon("", 0, 0, 0){
    width = 0;
    height = 0;
}
Rectangle::Rectangle(const Rectangle&cpy){
    width = cpy.width;
    height = cpy.height;
}

// Setters

void Rectangle::setWidth(double newwidth){
    width = newwidth;
}
void Rectangle::setHeight(double newheight){
    height = newheight;
}

// Getters

double Rectangle::getHeight(){
    return height;
}
double Rectangle::getWidth(){
    return width;
}

// Service Methods

double Rectangle::area(){
    Area = width*height;
    cout << name << "'s area is : " << Area << endl;
    return Area;
}
double Rectangle::perimeter(){
    Perimeter = 2*(width + height);
    cout << name << "'s perimeter is : " << Perimeter << endl;
    return Perimeter;
}


// Constructors

Square::Square():Rectangle("", 0, 0, 0, 0){
    side = 0;
}
Square::Square(const Square&cpy){
    side = cpy.side;
}
Square::Square(const string& n, double nx, double ny, double nside) : Rectangle(n, nx, ny, nside, nside){
    side = nside;
}

// Setters

void Square::setSide(double newside){
    side = newside;
}

// Getters

double Square::getSide(){
    return side;
}

// Service Methods

double Square::perimeter(){
    Perimeter = 4*side;
    cout << name << "'s perimeter is : " << Perimeter << endl;
    return Perimeter;
}
double Square::area(){
    Area = side*side;
    cout << name << "'s area is : " << Area << endl;
    return Area;
}
