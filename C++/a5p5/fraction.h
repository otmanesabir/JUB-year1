
//
//  Header.h
//  a5p5
//
//  Created by Otmane Sabir on 11/12/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;

class Fraction {
    
private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator
    
    int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);
    
public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1); // constructor taking values for fractions and
    // integers. Denominator by default is 1
    void operator<<(Fraction &f);   // prints it to the screen using overloaded
    void operator>>(Fraction &f); // reads numerator and denominator values
    Fraction operator*(Fraction &f); // multiplies two fractions
    Fraction operator/(Fraction &f); // divides two fractions
};


#endif /* FRACTION_H_ */
