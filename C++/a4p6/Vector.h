/*
 CH08-320142
 a4 p6.cpp
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <iostream>
using namespace std;

#ifndef Vector_h
#define Vector_h

class Vector{
private:
    int size;
    double *ptr;
public:
    // constructors
    Vector();
    Vector(int, double*);
    Vector(const Vector&);
    ~Vector();
    // setters
    void setSize(int newsize);
    void setPtr(double *newptr);
    //getters
    int getSize() const;
    double *getPtr() const;
    // service methods
    void print();
    double norm();
    Vector sum(const Vector) const;
    Vector scalar_prd(const Vector) const;
    Vector difference(const Vector) const;
};

#endif /* Vector_h */
