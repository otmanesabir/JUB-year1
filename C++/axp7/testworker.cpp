//
//  main.cpp
//  Worker
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "Worker.h"

int main() {
    int a = 234;
    int b = 321;
    string name1 =  "John McEnroe";
    string name2 = "Jack Nicholson";
    worker c(a, name1);
    worker d(b, name2);
    cout << c << d;
    return 0;
}
