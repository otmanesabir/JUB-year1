//
//  Complex.h
//  Complex
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>

using namespace std;

class Complex {
private:
    float real;  // real part
    float imag;  // imaginary part
public:
    Complex();
    Complex(float, float = 0);
    double magnitude();
    friend ostream& operator<<(ostream& out, const Complex &z);
    friend istream& operator>>(istream& in, Complex &z);
    bool operator>(Complex&);
    bool operator<(Complex&);
    void print();
};

#ifndef Complex_h
#define Complex_h


#endif /* Complex_h */
