/*
 JTSK-320111
 a3 p1.c
 Otmane Sabir o.sabir@jacobs-university.de
 */

#include <string>
using namespace std;
// defining our city class
class City
{
private:
    // this data is private
    int population;
    double area;
    string name;
    string mayor;
public:
    // setter methods
    void setName(string &newname);
    void setMayor(string &newmayor);
    void setPopulation(int newppl);
    void setArea(double newarea);
    // getter method
    string getName();
    int getPopulation();
    double getArea();
    string getMayor();
    // print method
    void print();
};
