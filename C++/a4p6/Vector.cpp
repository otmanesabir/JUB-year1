/*
 CH08-320142
 a4 p6.cpp
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

// constructor

Vector::Vector(){
    size = 0;
    ptr =  nullptr;
}
Vector::Vector(int newsize, double *newptr){
    size = newsize;
    ptr = newptr;
}
Vector::Vector(const Vector&cpy){
    size = cpy.size;
    ptr = cpy.ptr;
}

// destructor

Vector::~Vector(){}

// setters

void Vector::setSize(int newsize){
    size = newsize;
}
void Vector::setPtr(double *newptr){
    ptr = newptr;
}

// getters

int Vector::getSize() const{
    return size;
}
double* Vector::getPtr() const{
    return ptr;
}

// service methods

void Vector::print(){
    for ( int i = 0; i < size; i++){
        cout << ptr[i] << endl;
    }
}

// calculates the sum

Vector Vector::sum(const Vector a)const{
    double *ptr_f;
    ptr_f = new double[size];
    for ( int i = 0; i < size; i++){
         ptr_f[i] = this->ptr[i] + a.ptr[i];
    }
    return Vector(size, ptr_f);
}

// calculates the scalar product

Vector Vector::scalar_prd(const Vector a) const {
    double *ptr_f;
    ptr_f = new double[size];
    for (int i = 0; i < size; i++){
        ptr_f[i] = this->ptr[i]*a.ptr[i];
    }
    return Vector(size, ptr_f);
}

// calculates the difference

Vector Vector::difference(const Vector a) const{
    double *ptr_f;
    ptr_f = new double[size];
    for ( int i = 0; i < size; i++){
        ptr_f[i] = a.ptr[i] - this->ptr[i];
    }
    return Vector(size, ptr_f);
}

// calculates the norm

double Vector::norm(){
    double norm = 0;
    for ( int i = 0; i < size; i++){
        norm += ptr[i]*ptr[i];
        norm = sqrt(norm);
    }
    return norm;
}
