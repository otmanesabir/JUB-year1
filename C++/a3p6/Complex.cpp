//
//  main.cpp
//  a3p2
//
//  Created by Otmane Sabir on 11/2/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "Complex.h"

int main(void) {
    float a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    Complex c1(a, b);
    Complex c2(c, d);
    Complex c3(0, 0);
    Complex c4(0, 0);
    Complex c5(0, 0);
    c1.conjugate();
    c1.print();
    c3 = c1.add(c2);
    c3.print();
    c4 = c2.subtrtact(c1);
    c4.print();
    c5 = c2.multiply(c1);
    c5.print();
    return 0;
}
