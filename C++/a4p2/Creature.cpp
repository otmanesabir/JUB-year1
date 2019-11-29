/*
 CH08-320142
 a4 p4.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
#include "Creature.h"

using namespace std;

// constructor definition
Creature::Creature(): distance(10) {
    cout << "Creature constructor" << endl;
}

Wizard::Wizard() : distFactor(3) {
    cout << "Wizard constructor" << endl;
}
Dog::Dog() : bark_num(50), dog_name("Flash") {
    cout << "Dog constructor" << endl;
}
Human::Human():distance(110000),
               time(92),
               v_stimulus(0.25),
               a_stimulus(0.17),
               t_stimilus(0.15)
{
    cout << "Human constructor" << endl;
}

// method definition 
void Creature::run() const {
    cout << "running " << distance << " meters!\n";
}

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

void Human::walk() const {
    cout << "The average human walks " << distance << " miles in his lifetime." << endl;
}

void Human::toilet() const {
    cout << "The avergae human spends " << time << " days in the toilet." << endl;
}

void Human::reaction() const {
    cout << "The humans average visual stimulus is " << v_stimulus << " seconds." << endl;
    cout << "The humans average audio stimulus is " << a_stimulus << " seconds." << endl;
    cout << "The humans average touch stimulus is " << t_stimilus << " seconds." << endl;
}

void Dog::name() const {
    cout << "My dog is called " << dog_name << endl;
}

void Dog::bark() const {
    cout << "He barked " << bark_num << " times today" << endl;
}


