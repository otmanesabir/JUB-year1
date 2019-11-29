//
//  main.cpp
//  a5p2
//
//  Created by Otmane Sabir on 11/9/18.
//  Copyright © 2018 Otmane Sabir. All rights reserved.
//

#include <iostream>
#include "TournamentMember.h"

using namespace std;
// assigns a value to the static string
string TournamentMember::location = "default_location";

// default constructor

TournamentMember::TournamentMember(){
    this->firstName = "default_first_name";
    this->lastName = "default_last_name";
    this->date = "0000-00-00";
    this->height = 0.0;
    this->weight = 0.0;
    cout << "using default constructor" << endl;
}

// parametric constructor

TournamentMember::TournamentMember(char const *a, char const *b, char const *c, string &d, double &w, double &h){
    this->firstName = a;
    this->lastName = b;
    this->date = c;
    this->location = d;
    this->weight = w;
    this->height = h;
    cout << "using parametric constructor" << endl;
}

// copy constructor

TournamentMember::TournamentMember(TournamentMember&cpy){
    this->firstName = cpy.firstName;
    this->lastName = cpy.lastName;
    this->date = cpy.date;
    this->location = cpy.location;
    this->weight = cpy.weight;
    this->height = cpy.height;
    cout << "using copy constructor" << endl;
}

// destructor

TournamentMember::~TournamentMember(){
    cout << "Destructor called" << endl;
}

// setters

inline void TournamentMember::setfirstName(char const *newfirstName){
    firstName = newfirstName;
}
inline void TournamentMember::setlastName(char const *newlastName){
    lastName = newlastName;
}
inline void TournamentMember::setdate(char const *newdate){
    date = newdate;
}
inline void TournamentMember::setlocation(string &newlocation){
    location = newlocation;
}
inline void TournamentMember::setHeight(double &newheight){
    height = newheight;
}
inline void TournamentMember::setWeight(double &newweight){
    weight = newweight;
}

// getters

inline char const* TournamentMember::getfirstName(){
    return firstName;
}
inline char const* TournamentMember::getlastName(){
    return lastName;
}
inline char const* TournamentMember::getdate(){
    return date;
}
inline string TournamentMember::getlocation(){
    return location;
}
inline double TournamentMember::getHeight(){
    return height;
}
inline double TournamentMember::getWeight(){
    return weight;
}

// service methods

void TournamentMember::print() {
    cout << "First name : " << firstName << endl;
    cout << "Last name : " << lastName << endl;
    cout << "Date : " << date << endl;
    cout << "Location : " << location << endl;
    cout << "Height : " << height << endl;
    cout << "Weight : " << weight << endl << endl;
} // this method prints all data

void TournamentMember::locationChange(string&newlocation){
    location = newlocation;
} // this method changes the location
