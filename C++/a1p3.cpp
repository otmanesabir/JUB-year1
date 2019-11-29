/*
 CH08-320142
 a1 p3.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

// defining abs function

int abs (int x) {
    // checks if x is negative
    if ( x < 0 ){
    // turns x into a positive number
        x = -x;
    }
    // returns x
    return x;
}

int main(void) {
    int x;
    // scans x
    cin >> x;
    // prints the absolute value of x
    cout << abs(x) << endl;
    return 0;
}
