//
//  Car.cpp
//  practicesheet
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <stdio.h>
#include "Car.h"

Car::Car(){
    this->name = "Default_Name";
    this->model = "Default_Model";
    this->price = 0.0;
}

Car::Car(string &newname, string &newmodel, double &newprice){
    this->name = newname;
    this->model = newmodel;
    this->price = newprice;
}
Car::Car(Car &cpy){
    this->name = cpy.name;
    this->model = cpy.model;
    this->price = cpy.price;
}
Car::~Car(){
    cout << "Destructor called" << endl;
}
void Car::print(){
    cout << "Name : " << name << endl;
    cout << "Model : " << model << endl;
    cout << "Price : " << price << endl;
}

Taxi::Taxi(){
    this->available = 0;
    this->taken = 0;
    this->limit = 0;
}

Taxi::Taxi(string &newname, string &newmodel, double &newprice, int &newavailable, int &newtaken, int &newlimit):Car(newname, newmodel, newprice){
    this->available = newavailable;
    this->taken = newtaken;
    this->limit = newlimit;
}

Taxi::Taxi(Taxi &cpy){
    this->available = cpy.available;
    this->taken = cpy.taken;
    this->limit = cpy.limit;
}

Taxi::~Taxi(){
    cout << "Taxi destructor called" << endl;
}

void Taxi::taxi_print(){
    string decision;
    cout << "Do you wish to print all car data or just taxi parameters :\nEnter 'Car' or 'Taxi'" << endl;
    cin >> decision;
    if (decision == "Car"){
        this->print();
        cout << "Available seats : " << this->available << endl;
        cout << "Taken seats : " << this->taken << endl;
        cout << "Limit : " << this->limit << endl;
    } else if (decision == "Taxi") {
        cout << "Available seats : " << this->available << endl;
        cout << "Taken seats : " << this->taken << endl;
        cout << "Limit : " << this->limit << endl;
    } else {
        cout << "Wrong input" << endl;
    }
    
    
}
