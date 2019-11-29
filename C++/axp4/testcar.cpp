//
//  testcar.cpp
//  practicesheet
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include "Car.h"
#include <iostream>

int main(){
    string name = "Porsche";
    string model = "911";
    double price = 20000;
    int a = 2;
    int b = 3;
    int c = 6;
    Taxi d(name, model, price, a, b, c);
    d.taxi_print();
}
