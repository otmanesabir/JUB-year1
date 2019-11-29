//
//  main.cpp
//  PSR4.6
//
//  Created by Otmane Sabir on 11/29/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include <cmath>
#include "Vector.h"

using namespace std;

int main() {
    int size = 5;
    double comp[] = {1, 2, 1, 9, 6};
    double comp2[] = {3, 5, 2, 5, 9};
    Vector b;
    Vector a;
    a.setSize(size);
    a.setVec(comp, size);
    b.setSize(size);
    b.setVec(comp2, size);
    Vector c;
    c.setSize(size);
    c.setVec(a.subtract(b).getVec(), size);
    Vector d(size, a.add(b).getVec());
    cout << "ADDITION" << endl;
    d.print();
    cout << "SUBTRACTION" << endl;
    c.print();
    cout << "SCALAR" << endl;
    d = a.scalar(b);
    d.print();
    Vector x;
    x = a.add(b);
    cout << "ADDITION CHECK" << endl;
    x.print();
    cout << "NORM\n" << a.norm() << endl;
    return 0;
}
