/*
 CH08-320142
 a4 p3.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <iostream>
using namespace std;

// creature class
class Creature {
public:
    Creature();
    void run() const;
protected:
    int distance;
};
// Wizard derived class
class Wizard : public Creature {
public:
    Wizard();
    void hover() const;
private:
    int distFactor;
};
// Human derived class
class Human : public Creature {
public:
    Human();
    void walk() const;
    void toilet() const;
    void reaction() const;
private:
    int distance;
    int time;
    double v_stimulus;
    double a_stimulus;
    double t_stimilus;
};
// Dog derived class
class Dog : public Creature {
public:
    Dog();
    void bark() const;
    void name() const;
private:
    int bark_num;
    string dog_name;
};
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
