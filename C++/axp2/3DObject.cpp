//
//  3DObject.cpp
//  3DObj
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "3DObject.h"

using namespace std;

//                          --3D OBJECT--

// Constructors & destructor

Object3D::Object3D(){
    this->name = "Default_name";
}
Object3D::Object3D(string &newname){
    this->name = newname;
}
Object3D::Object3D(Object3D&cpy){
    this->name = cpy.name;
}
Object3D::~Object3D(){
    cout << "destructor called" << endl;
}

// Setter
void Object3D::setName(string &newname){
    this->name = newname;
}
// Getter
string Object3D::getName(){
    return name;
}
// Service methods
void Object3D::print(){
    cout << "Object name : " << name << endl;
}

//                            --SPHERE--

// Constructors & destructor

Sphere::Sphere(){
    this->radius = 0;
}
Sphere::Sphere(string &newname, double &newradius):Object3D(newname){
    this->radius = newradius;
}
Sphere::Sphere(Sphere&cpy){
    this->radius = cpy.radius;
}
Sphere::~Sphere(){
    cout << "destructor called" << endl;
}

// Setter

void Sphere::setRadius(double &newradius){
    this->radius = newradius;
}
double Sphere::getRadius(){
    return radius;
}
double Sphere::volume(){
    return (4/3)*M_PI*pow(radius, 3);
}

//                              --CYLINDER--

// Constructors & destructor

Cylinder::Cylinder(){
    this->radius = 0;
    this->height = 0;
}
Cylinder::Cylinder(string &newname, double &newradius, double &newheight):Sphere(newname, newradius){
    this->radius = newradius;
    this->height = newheight;
}
Cylinder::Cylinder(Cylinder &cpy){
    this->radius = cpy.radius;
    this->height = cpy.height;
}
Cylinder::~Cylinder(){
    cout << "Destructor called" << endl;
}

// Setters

void Cylinder::setRadius(double &newradius){
    this->radius = newradius;
}
void Cylinder::setHeight(double &newheight){
    this->height = newheight;
}

// Getters

double Cylinder::getRadius(){
    return radius;
}
double Cylinder::getHeight(){
    return height;
}

// Service

double Cylinder::volume(){
    return M_PI*pow(radius, 2)*height;
}

//                              --RECTPRISM--

// Constructors & destructor

RectPrism::RectPrism(){
    this->width = 0;
    this->height = 0;
    this->length = 0;
}
RectPrism::RectPrism(string &newname, double &newwidth, double &newheight, double &newlength):Object3D(newname){
    this->height = newheight;
    this->width = newwidth;
    this->length = newlength;
}
RectPrism::RectPrism(RectPrism &cpy){
    this->width = cpy.width;
    this->height = cpy.height;
    this->length = cpy.length;
}
RectPrism::~RectPrism(){
    cout << "Destructor called" << endl;
}

// Setters

void RectPrism::setHeight(double &newheight){
    this->height = newheight;
}
void RectPrism::setWidth(double &newwidth){
    this->width = newwidth;
}
void RectPrism::setLength(double &newlength){
    this->length = newlength;
}

// Getters

double RectPrism::getHeight(){
    return height;
}
double RectPrism::getWidth(){
    return width;
}
double RectPrism::getLenght(){
    return length;
}

// Service

double RectPrism::volume(){
    return height*length*width;
}

//                              --CUBE--

// Constructors & destructor

Cube::Cube(){
    this->side = 0;
}
Cube::Cube(string &newname, double &newside):RectPrism(newname, newside, newside, newside){
    this->side = newside;
}
Cube::Cube(Cube &cpy){
    this->side = cpy.side;
}
Cube::~Cube(){
    cout << "Calling destructor" << endl;
}

// Setter

void Cube::setSide(double &newside){
    this->side = newside;
}

// Getter

double Cube::getSide(){
    return side;
}

// Service

double Cube::volume(){
    return pow(side, 3);
}
