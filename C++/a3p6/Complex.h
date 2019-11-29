
//  Complex.h
//  a3p2
//
//  Created by Otmane Sabir on 11/2/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#define Complex_h
#include <iostream>

using namespace std;

class Complex {

private :
    int imag;
    int real;
public :
    // constructors and deconstructor
    ~Complex();
    Complex();
    Complex(float = 1, float = 1);
    Complex(const Complex&);
    // setter
    void setImaginary(float newimag);
    void setReal(float newreal);
    // getter
    float getImaginary();
    float getReal();
    // methods
    void print();
    Complex subtrtact(Complex);
    Complex multiply(Complex);
    Complex add(Complex);
    Complex conjugate();
};


