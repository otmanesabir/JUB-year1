//
//  main.cpp
//  Complex
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "Complex.h"


Complex::Complex(){
    this->real = 0;
    this->imag = 0;
}
Complex::Complex(float newreal, float newimag){
    this->real = newreal;
    this->imag = newimag;
}
double Complex::magnitude(){
    return sqrt(pow(this->real, 2)+pow(this->imag, 2));
}
ostream& operator<<(ostream& out, const Complex &z){
    if (z.imag) {
        cout << noshowpos << z.real << showpos << z.imag << "i" << endl;
    }else{
        cout << noshowpos << z.real << endl;
    }
    return out;
}
istream& operator>>(istream &in, Complex &z){
    cin >> z.real;
    cin >> z.imag;
    return in;
}
void Complex::print() {
    if (imag)
        cout << noshowpos << real << showpos << imag << "i" << endl;
    else
        cout << noshowpos << real << endl;
}

bool Complex::operator<(Complex&z){
    return this->magnitude() < z.magnitude();
}
bool Complex::operator>(Complex&z){
    return this->magnitude() > z.magnitude();
}
