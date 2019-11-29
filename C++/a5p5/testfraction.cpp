//
//  testfractions.cpp
//  a5p5
//
//  Created by Otmane Sabir on 11/12/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "fraction.h"

using namespace std;

int main(void){
    Fraction a, b, cout, cin, result;
    cin >> a;
    cin >> b;
    result = a*b;
    cout << result;
    result = a/b;
    cout << result;
    return 0;
}
