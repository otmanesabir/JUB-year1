//
//  3DObject.h
//  3DObj
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>


#ifndef _DObject_h
#define _DObject_h

class Object3D{
private:
    std::string name;
public:
    // Constructors & destructor
    Object3D();
    Object3D(std::string&);
    Object3D(Object3D&);
    ~Object3D();
    // Setters
    void setName(std::string &newname);
    // Getters
    std::string getName();
    // Service methods
    void print();
    virtual double volume();
};

class Sphere : public Object3D {
private:
    double radius;
public:
    // Constructors & destructor
    Sphere();
    Sphere(std::string& ,double&);
    Sphere(Sphere&);
    ~Sphere();
    // Setter
    void setRadius(double &newradius);
    // Getter
    double getRadius();
    // Service method
    double volume();
    
};

class Cylinder : public Sphere {
private:
    double radius;
    double height;
public:
    // Constructors & destructor
    Cylinder();
    Cylinder(std::string&, double&, double&);
    Cylinder(Cylinder&);
    ~Cylinder();
    // Setters
    void setRadius(double &newradius);
    void setHeight(double &newheight);
    // Getters
    double getRadius();
    double getHeight();
    // Service
    double volume();
};

class RectPrism : public Object3D {
private:
    double width;
    double height;
    double length;
public:
    // Constructors & destructor
    RectPrism();
    RectPrism(std::string&, double&, double&, double&);
    RectPrism(RectPrism&);
    ~RectPrism();
    // Setters
    void setWidth(double &newwidth);
    void setHeight(double &newheight);
    void setLength(double &newlength);
    // Gettrs
    double getWidth();
    double getHeight();
    double getLenght();
    //Service
    double volume();
};

class Cube : public RectPrism {
private:
    double side;
public:
    // Constructors & destructor
    Cube();
    Cube(std::string&, double&);
    Cube(Cube&);
    ~Cube();
    // Setter
    void setSide(double &newside);
    // Getter
    double getSide();
    // Service
    double volume();
    
};

#endif /* _DObject_h */
