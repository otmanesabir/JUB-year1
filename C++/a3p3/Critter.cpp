/*
 CH08-320142
 a3 p2.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include "Critter.h"

using namespace std;

// constructor with no parameters
Critter::Critter(){
    // sets corresponding values
    name = "default_critter";
    height = 5;
    hunger = 0;
    boredom = 0;
    // prints that the first constructor was called
    cout << endl;
    cout << "using first constructor" << endl << endl;
}

// constructor with only a string parameter
Critter::Critter(string newname){
    name = newname;
    height = 5;
    hunger = 0;
    boredom = 0;
    // prints that the second constructor is being called
    cout << endl;
    cout << "using second constructor" << endl << endl;
}

// constructor with all parameters
Critter::Critter(string newname, int newboredom, int newhunger, double newheight) {
    // takes all values from the constructor call
    name = newname;
    boredom = newboredom;
    hunger = newhunger;
    height = newheight;
    // prints that the third constructor is being used
    cout << endl;
    cout << "using third constructor" << endl << endl;
}

// name setter
void Critter::setName(string& newname) {
    name = newname;
}

// hunger setter
void Critter::setHunger(int newhunger) {
    hunger = newhunger;
}

// height setter
void Critter::setHeight(double newheight){
    height = newheight;
}

// boredom setter
void Critter::setBoredom(int newboredom){
    boredom = newboredom;
}

// print service method
void Critter::print() {
    // prints all data members value's
    cout << "Name : " << name << endl;
    cout << "Height : " << height << endl;
    cout << "Boredom : " << boredom << endl;
    // prints conversion of the height
    cout << "Hunger : " << cvrt_int(hunger) << endl;
}

// hunger getter
int Critter::getHunger() {
    return hunger;
}

// hunger getter
int Critter::getBoredom(){
    return boredom;
}

// hunger getter
double Critter::getHeight(){
    return height;
}

// string getter
string Critter::getName(){
    return name;
}

double Critter::cvrt_double(double newhunger){
    // assigns new hunger to hunger
    hunger = newhunger/10.0;
    // assigns the division value to conversion
    // returns conversion
    return hunger;
}

int Critter::cvrt_int(int newhunger){
    hunger = (int) newhunger;
    return hunger;
}

