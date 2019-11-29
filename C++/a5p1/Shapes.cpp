/*
 CH08-320142
 Otmane Sabir
 o.sabir@jacobs-university.de
 */
#include <iostream>
#include <cmath>
#include <math.h>
#include "Shapes.h"

using namespace std;

Shape::Shape(){}

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape(const Shape &s){
    this->name = s.name;
}

void Shape::printName() const {
    cout << name << endl;
}

CenteredShape::CenteredShape(){}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
}

CenteredShape::CenteredShape(const CenteredShape &cs) : Shape(cs){
    this->x = cs.x;
    this->y = cs.y;
}

RegularPolygon::RegularPolygon(){}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
CenteredShape(n,nx,ny)
{
    EdgesNumber = nl;
}

RegularPolygon::RegularPolygon(const RegularPolygon &rp) : CenteredShape(rp){
    this->EdgesNumber = rp.EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) :
CenteredShape(n,nx,ny)
{
    Radius = r;
}

Hexagon::Hexagon(){
    cout << "Calling default constructor" << endl;
}

Hexagon::Hexagon(const Hexagon &cpy) : RegularPolygon(cpy){
    cout << "Calling copy constructor" << endl;
    this->color = cpy.color;
    this->side = cpy.side;
}

Hexagon::Hexagon(const double &side, const string &color){
    cout << "Calling parametric constructor" << endl;
    this->side = side;
    this->color = color;
}

Hexagon::~Hexagon(){
    cout << "Hexagon has been deleted" << endl;
}

double Hexagon::perimeter(){
    return 6.0*this->side;
}

double Hexagon::area(){
    return (3*sqrt(3)*pow(this->side, 2))/2.0;
}

string Hexagon::getColor(){
    return this->color;
}

double Hexagon::getSide(){
    return this->side;
}

void Hexagon::setSide(const double &side){
    this->side = side;
}

void Hexagon::setColor(const string &color){
    this->color = color;
}
