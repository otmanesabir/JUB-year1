/*
 JTSK-320111
 a3 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <iostream>
// including our city header
#include "City.h"

using namespace std;

// city name setter

void City::setName(string &newname){
    name = newname;
}

// city population setter

void City::setPopulation(int newppl){
    population = newppl;
}

// city area setter

void City::setArea(double newarea){
    area = newarea;
}

// City mayor setter

void City::setMayor(string &newmayor){
    mayor = newmayor;
}

// prints city info

void City::print(){
    cout << "City  : " << name << "." << endl;
    cout << "Population : " << population << endl;
    cout << "Mayor : " << mayor << endl;
    cout << "Area : " << area << " km²." << endl;
    cout << endl;
}

// City name getter

string City::getName(){
    return name;
}

// City mayor getter

string City::getMayor(){
    return mayor;
}
// City population getter

int City::getPopulation(){
    return population;
}

// City area getter

double City::getArea(){
    return area;
}

