//
//  testcomplex.cpp
//  Complex
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "Complex.h"

int main(){
    float a = 4;
    float b = 2;
    float c = 20;
    float d = 2;
    Complex c1(a, b);
    Complex c2(c, d);
    cout << (c1 < c2) << endl;
}
