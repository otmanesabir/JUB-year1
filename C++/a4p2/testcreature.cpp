/*
 CH08-320142
 a4 p2.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include "Creature.h"
using namespace std;
int main() {
    // creating a creature instance
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();
    // creating a wizard instance
    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();
    // creating a human instance
    cout << "\nCreating a human.\n";
    Human h;
    h.walk();
    h.toilet();
    h.reaction();
    // create a dog instance
    cout << "\nCreating a dog.\n";
    Dog d;
    d.name();
    d.bark();
    return 0;
}
