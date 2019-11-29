//
//  main.cpp
//  a5p5
//
//  Created by Otmane Sabir on 11/12/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "fraction.h"

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);
    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;
    
    // Implement GCD of two numbers;
    
    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
    
}

// overloaded operator to print numerator and denominator

void Fraction::operator<<(Fraction&f){
    cout << f.num << "/" << f.den << endl;
}

// overloaded operator to read numerator and denominator

void Fraction::operator>>(Fraction &f){
    cin >> f.num;
    cin >> f.den;
}

// overloaded operator to multiply two fractions

Fraction Fraction::operator*(Fraction&f){
    Fraction res(this->num*f.num, this->den*f.den);
    return res;
}

// overloaded operator to divide two fractions

Fraction Fraction::operator/(Fraction &f){
    Fraction res(this->num*f.den, this->den*f.num);
    return res;
}

