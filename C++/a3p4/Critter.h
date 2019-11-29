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
    double hunger;
    int boredom;
    double height;
    // variable to store conversion
    double conversion;
    double thirst;
    // private method to convert to double
    double cvrt_double(double newhunger);
    // private method to convert to integer
    int cvrt_int(int newhunger);
public:
    // constructors
    Critter();
    Critter(string);
    Critter(string, int , int, double = 10);
    Critter(string, int, int, double, double);
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
