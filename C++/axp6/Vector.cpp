
//
//  Vector.cpp
//  PSR4.6
//
//  Created by Otmane Sabir on 11/29/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

Vector::Vector(){
    this->size = 0;
    this->vec = nullptr;
}

Vector::Vector(const int newsize, const double* newvec){
    this->size = newsize;
    vec = new double [this->size];
    if ( vec == nullptr){
        cout << "Memory allocaiton failed" << endl;
        exit(1);
    }
    for (int i = 0; i < this->size; i++){
        this->vec[i] = newvec[i];
    }
}

Vector::Vector(Vector&cpy){
    this->size = cpy.size;
    vec = new double [this->size];
    if ( vec == nullptr ){
        cout << "Memory allocation failed " << endl;
        exit(1);
    }
    for ( int i = 0; i < this->size; i++){
        this->vec[i] = cpy.vec[i];
    }
}

Vector::~Vector(){
    delete [] vec;
    this->size = 0;
}

void Vector::setSize(const int newsize){
    this->size = newsize;
}

void Vector::setVec(const double* newvec, const int newsize){
    this->size = newsize;
    vec = new double [size];
    for (int i = 0; i < this->size; i++){
        this->vec[i] = newvec[i];
    }
}

int Vector::getSize(){
    return size;
}

double* Vector::getVec(){
    return vec;
}

void Vector::print(){
    for (int i = 0; i < this->size; i++){
        cout << "a" << i+1 << " : " << this->vec[i] << endl;
    }
}

Vector Vector::add(Vector&a){
    Vector res;
    if ( this->size != a.size){
        cout << "Can't add vectors due to different sizes" << endl;
        exit(1);
    }
    res.size = a.size;
    res.vec = new double [res.size];
    for (int i = 0; i < this->size; i++){
        res.vec[i] = this->vec[i] + a.vec[i];
    }
    return res;
}
Vector Vector::subtract(Vector &a){
    Vector res;
    res.size = this->size;
    res.vec = new double [res.size];
    for (int i = 0; i < this->size; i++){
        res.vec[i] = this->vec[i] - a.vec[i];
    }
    return res;
}
Vector Vector::scalar(Vector&a){
    Vector res;
    if (this->size != a.size){
         cout << "Can't compute these two vector due to their different sizes" << endl;
        exit(1);
    }
    res.size = a.size;
    res.vec = new double [res.size];
    for (int i = 0; i < a.size; i++){
        res.vec[i] = a.vec[i] * this->vec[i];
    }
    return res;
}
double Vector::norm(){
    double norm = 0;
    for (int i = 0; i < this->size; i++){
        norm += pow(this->vec[i], 2);
    }
    return norm;
}

Vector& Vector::operator=(const Vector &a){
    this->size = a.size;
    this->vec = new double [this->size];
    for (int i = 0; i < this->size; i++){
        this->vec[i] = a.vec[i];
    }
    return *this;
}
