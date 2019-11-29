/*
 CH08-320142
 a3 p2.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(void)
{
    
    // sets first instance with no parameters
    Critter c1;
    // prints all values of the instance
    c1.print();
    // sets second instance with only the name parameter
    Critter c2("Otmane");
    // prints all values to the second instance
    c2.print();
    /* sets third instance with all parameters
    exept the height so that it takes the default
    value set in the class definition*/
    Critter c3("Otmane", 8, 7);
    // prints all values of the third instance
    c3.print();
    // sets 4th instance with specific values
    Critter c4("Otmane", 8, 9, 5);
    // prints all the values
    c4.print();
    Critter c5("Otmane", 8, 8, 5, 9.3);
    c5.print();
    return 0;
}
