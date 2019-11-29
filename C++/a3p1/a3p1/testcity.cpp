/*
 JTSK-320111
 a3 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */


// including header file
#include "City.h"
#include <iostream>
using namespace std;

int main() {
    // Created three instances
    City Bremen, Paris, London;
    string str, str2;
    str = "Bremen";
    str2 = "Carsten Sieling";
    // sets name, population, mayor and area for first instance
    Bremen.setName(str);
    Bremen.setPopulation(557464);
    Bremen.setArea(326.7);
    Bremen.setMayor(str2);
    // prints the result for first instance
    Bremen.print();
    // sets name, population, mayor and area for second instance
    str = "Paris";
    str2 = "Canne Hidalgo";
    Paris.setName(str);
    Paris.setPopulation(2200000);
    Paris.setArea(105.4);
    Paris.setMayor(str2);
    // prints the result for first instance
    Paris.print();
    str = "London";
    str2 = "Sadiq Khan";
    // sets name, population, mayor and area for third instance
    London.setName(str);
    London.setPopulation(8136000);
    London.setArea(1572);
    London.setMayor(str2);
    // prints the result for first instance
    London.print();
    return 0;
}
