/*
 CH08-320142
 a4 p4.cpp
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

