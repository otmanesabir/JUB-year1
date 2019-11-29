/*
 CH08-320142
 a3 p2.cpp
 Otmane Sabir
 o.sabir@jacobs-university.de
 */

#include <string>

using namespace std;
// class definition
class Critter
{
private:
    // Data members-
    string name;
    int hunger;
    int boredom;
    double height;
    
public:
    // constructors
    Critter();
    Critter(string);
    Critter(string, int , int, double = 10);
    // setter methods
    void setName(string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double  newheight);
    // getter method
    string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    // service method
    void print();
};
