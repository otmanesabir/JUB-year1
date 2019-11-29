//
//  testcomplex.cpp
//  a3p2
//
//  Created by Otmane Sabir on 11/2/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "Complex.h"

void Complex::setImaginary(float newimag){
    imag =  newimag;
}

void Complex::setReal(float newreal){
    real = newreal;
}

float Complex::getImaginary(){
    return imag;
}

float Complex::getReal(){
    return real;
}

Complex::Complex(){
    imag = 0;
    real = 0;
}

Complex::~Complex(){}

Complex::Complex(const Complex &cpy){
    imag = cpy.imag;
    real = cpy.real;
}

Complex::Complex(float newreal, float newimag){
    imag = newimag;
    real = newreal;
}

Complex Complex::add(Complex a) {
    float real_2 = this->real + a.real;
    float imag_2 = this->imag + a.imag;
    return  Complex(real_2, imag_2);
}

Complex Complex::subtrtact(Complex a) {
    float real_2 = this->real - a.real;
    float imag_2 = this->imag - a.imag;
    return  Complex(real_2, imag_2);
}

Complex Complex::multiply(Complex a) {
    float real_2 = (this->real*a.real)-(this->imag*a.imag);
    float imag_2 = (this->imag*a.real)+(this->real*a.imag);
    return  Complex(real_2, imag_2);
}

Complex Complex::conjugate() {
    imag = -imag;
    float imag_2 = this->imag;
    return Complex(real, imag_2);
}

void Complex::print(){
    if ( imag == 0 ){
        cout << real << endl;
    } else if ( real == 0 ){
        cout << imag << "i" << endl;
    } else if ( imag > 0 ){
        if ( imag == 1 ){
            cout << real << "+i" << endl;
        } else {
        cout << real << "+" << imag << "i" << endl;
        }
    } else if ( imag < 0 ) {
        if ( imag == -1 ){
            cout << real << "-i" << endl;
        } else {
            cout << real << imag << "i" << endl;
        }
    }
}
