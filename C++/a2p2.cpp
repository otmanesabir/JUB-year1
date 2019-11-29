/*
 CH08-320142
 a2 p1.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// swaps two integers by reference
void swapping(int &a, int &b) { // real Call-by-Reference
    int swp = a;
    a=b;
    b = swp;
}
// swaps two floats by reference
void swapping(float &a, float &b) { // real Call-by-Reference
    float swp = a;
    a=b;
    b = swp;
}
// swaps two chars by reference
void swapping(const char *&a, const char *&b) { // real Call-by-Reference
    const char *swp;
    swp = a;
    a=b;
    b = swp;
}

int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    // swaps two integers
    swapping(a, b);
    // swaps two floats
    swapping(x, y);
    // swaps two characters
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
