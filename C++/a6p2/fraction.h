
// simple class for fractions

#ifndef FRACTION_H_
#define FRACTION_H_

using namespace std;

class Fraction {
    
private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator
    
            // calculates the gcd of a and b
    int lcm(int a, int b);
    int gcd(int a, int b);
    
public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1); // constructor taking values for fractions and
    // integers. Denominator by default is 
    // prints it to the screen
    friend ostream& operator<<(std::ostream &out, const Fraction &f);
    // receiving input
    friend istream& operator>>(std::istream& in, Fraction &f);
    Fraction operator*(Fraction &f); // multiplies two fractions
    Fraction operator/(Fraction &f); // divides two fractions
    Fraction operator+(Fraction &f); // addition of two fractions
    Fraction operator-(Fraction &f); // difference of two fractions
    Fraction& operator=(Fraction &f); // assigning two fractions
    bool operator>(Fraction &f);
    bool operator<(Fraction &f);
    // service method for reducing
    Fraction reduce();
};


#endif /* FRACTION_H_ */
