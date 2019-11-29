/*
 CH08-320142
 a4 p4.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <stdio.h>
#include "Creature.h"
using namespace std;
int main() {
    string input;
    cin >> input;
    while ( input != "quit" ){
        if ( input == "wizard" ) {
        Wizard *c1 = new Wizard;
        c1->run();
            c1->hover();
        delete c1;
        } else if ( input == "object1" ){
            Human *c2 = new Human;
            c2->walk();
            c2->toilet();
            c2->reaction();
            delete c2;
        } else if ( input == "object2" ){
            Dog *c3 = new Dog;
            c3->name();
            c3->bark();
            delete c3;
        }
        cin >> input;
    }
    return 0;
}
