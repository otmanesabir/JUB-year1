/*
 CH08-320142
 a6 p2.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include "fraction.h"

using namespace std;

int main(){
    Fraction a, b;
    cin >> a;
    cin >> b;
    bool res;
    res = a > b;
    if ( res == 1 ){
        cout << a.reduce() << endl;
    } else if ( res == 0){
        cout << b.reduce() << endl;
    }
    Fraction diff = a - b;
    Fraction sum = a + b;
    cout << diff << endl;
    cout << sum << endl;
    return 0;
}
