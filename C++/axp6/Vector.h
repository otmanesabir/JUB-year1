//
//  Vector.h
//  PSR4.6
//
//  Created by Otmane Sabir on 11/29/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#ifndef Vector_h
#define Vector_h

class Vector {
private:
    int size;
    double *vec;
public:
    Vector();
    Vector(const int, const double*);
    Vector(Vector&);
    ~Vector();
    // Setters
    void setSize(const int);
    void setVec(const double*, const int);
    // Getters
    int getSize();
    double* getVec();
    // Service methods
    void print();
    Vector add(Vector&);
    Vector subtract(Vector&);
    Vector scalar(Vector&);
    Vector& operator=(const Vector&);
    double norm();
};

#endif /* Vector_h */
