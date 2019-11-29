//
//  Car.h
//  practicesheet
//
//  Created by Otmane Sabir on 12/11/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
using namespace std;

#ifndef Car_h
#define Car_h

class Car {
private:
    string name;
    string model;
    double price;
public:
    // Conctructors and destructor
    Car();
    Car(string&, string&, double&);
    Car(Car&);
    ~Car();
    // Setters
    void setName(string &newname);
    void setModel(string &newmodel);
    void setPrice(double &newprice);
    // Getters
    string getName();
    string getModel();
    double getPrice();
    // Service method
    void print();
};

class Taxi : public Car {
private:
    int available;
    int taken;
    int limit;
public:
    // Constructors and destructor
    Taxi();
    Taxi(string&, string&, double&, int&, int&, int&);
    Taxi(Taxi&);
    ~Taxi();
    // Setters
    void setAvailable(int &newavailable);
    void setTaken(int &newtaken);
    void setLimit(int &newlimit);
    // Getters
    int getAvailable();
    int getTaken();
    int getLimit();
    // Service method
    void taxi_print();
};

//// CAR ////
// Inline Setters

inline void Car::setName(string &newname){
    this->name = newname;
}
inline void Car::setModel(string &newmodel){
    this->model = newmodel;
}
inline void Car::setPrice(double &newprice){
    this->price = newprice;
}

// Inline Getters

inline string Car::getName(){
    return name;
}
inline string Car::getModel(){
    return model;
}
inline double Car::getPrice(){
    return price;
}

//// TAXI ////
// Inline Setters

inline void Taxi::setAvailable(int &newavailable){
    this->available = newavailable;
}
inline void Taxi::setTaken(int &newtaken){
    this->taken = newtaken;
}
inline void Taxi::setLimit(int &newlimit){
    this->limit = newlimit;
}

// Inline Getters

inline int Taxi::getAvailable(){
    return available;
}
inline int Taxi::getTaken(){
    return taken;
}
inline int Taxi::getLimit(){
    return limit;
}

#endif /* Car_h */
