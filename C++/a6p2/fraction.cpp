/*
 CH08-320142
 a6 p2.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

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

int Fraction::gcd(int a, int b){
    // recursivly getting the gcd
    if (b != 0)
        return gcd(b, a%b);
    else
        return a;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

// overloaded operator to print numerator and denominator

ostream& operator<<(ostream &out, const Fraction &f)
{
    std::cout << f.num << "/" << f.den;
    return out;
}

// overloaded operator to read numerator and denominator

istream& operator>>(istream &in, Fraction &f) {;
    in >> f.num  >> f.den;
    return in;
}

// overloaded operator to multiply two fractions

Fraction Fraction::operator*(Fraction&f){
    Fraction res(this->num * f.num, this->den * f.den);
    res.reduce();
    return res;
}

// overloaded operator to divide two fractions

Fraction Fraction::operator/(Fraction &f){
    Fraction res(this->num*f.den, this->den*f.num);
    res.reduce();
    return res;
}

// overloaded addition operator

Fraction Fraction::operator+(Fraction&f){
    Fraction res((this->num*lcm(this->den, f.den)/this->den)+(f.num*lcm(this->den, f.den)/f.den), lcm(this->den, f.den));
    res.reduce();
    return res;
}

// overloaded minus operator

Fraction Fraction::operator-(Fraction &f){
       Fraction res((this->num*lcm(this->den, f.den)/this->den)-(f.num*lcm(this->den, f.den)/f.den), lcm(this->den, f.den));
    res.reduce();
    return res;
}

// overloaded assingning operator

Fraction& Fraction::operator=(Fraction&f){
    this->num = f.num;
    this->den = f.den;
    f.reduce();
    return *this;
}

// overloaded bigger operator

bool Fraction::operator>(Fraction &f){
    double x, y;
    x = (double) this->num/f.num;
    y = (double) this->den/f.den;
    return x > y;
}

// overloaded smaller operator

bool Fraction::operator<(Fraction &f){
    double x, y;
    x = this->num/f.num;
    y = this->den/f.den;
    return x < y;
}

// method that reduces the fraction

Fraction Fraction::reduce(){
    int z;
    z = gcd(this->num, this->den);
    Fraction res(this->num/z, this->den/z);
    return res;
}
